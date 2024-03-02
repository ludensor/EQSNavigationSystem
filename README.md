# EQSNavigationSystem

EQSNavigationSystem은 UnrealEngine에서 제공되는 기능인 EQS를 이용한 3차원 내비게이션 시스템 모듈입니다.
플러그인 형태로 제작되어 소스코드를 다운로드하고 플러그인을 활성화하면 바로 사용할 수 있습니다.

## 데모

다음은 EQSNavigationSystem을 사용하여 길 찾기를 수행하는 예시입니다. 예시 레벨은 마켓 플레이스에서 구매한 환경 레벨에서 테스트 되었습니다.

<img src="https://github.com/ludensor/EQSNavigationSystem/assets/76856672/1ccd34ba-6203-4256-94eb-b5fc11236c07.gif" width="400" height="400"/>
<img src="https://github.com/ludensor/EQSNavigationSystem/assets/76856672/6bd92a9e-764c-429f-bc06-32c0dc9b95b8.gif" width="400" height="400"/>

## 동작 원리

### Sample Codes

AI가 목표지점으로 도달하기 위한 과정 중 일부 소스코드입니다. 첫 번째 코드는 길 찾기 수행 없이 목적지로 바로 이동 가능한지 판별합니다.
두 번째 코드는 목적지로 바로 이동이 불가능하면 EQS 쿼리를 요청하여 다음 이동 위치 좌표를 얻어낸 후 이동합니다.

```cpp
void UEQSNavBTTask_MoveTo::UpdateDestination(UBehaviorTreeComponent& OwnerComp, FEQSNavBTMoveToTaskMemory& NodeMemory)
{
    ...
    if (AActor* MovingAgent = NodeMemory.MovementComponent->GetOwner())
    {
        ...
        if (MovingAgent->Implements<UEQSNavAgentInterface>())
        {
            // AI의 캡슐 사이즈를 가져옵니다.
            IEQSNavAgentInterface* NavAgentInterface = Cast<IEQSNavAgentInterface>(MovingAgent);
            NavAgentInterface->GetNavAgentProperties(AgentRadius, AgentHalfHeight);
        }
        ...
	// AI 위치에서 Target으로 SweepTest를 진행하여 보이는지 검출합니다.
	NodeMemory.bVisibleDestination = !GetWorld()->SweepTestByChannel(
		AgentLocation, GoalLocation, FQuat::Identity, ECC_Visibility, TraceShape, TraceParams);
    }
}
```
```cpp
// Target이 보이는가?
if (MyMemory->bVisibleDestination)
{
    MyMemory->EnvQueryStatus = EEQSNavEnvQueryStatus::Wait;
    if (HasReachedDestination(*MyMemory))
    {
        FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
    }
    else
    {
        // Target 방향으로 이동한다.
        MyMemory->CurrentDestination = GetGoalLocation();
        FollowPath(OwnerComp, *MyMemory);
    }
}
else
{
    // Target의 위치를 찾을 수 없으므로 EQS 쿼리를 요청한다.
    if (MyMemory->EnvQueryStatus == EEQSNavEnvQueryStatus::Wait)
    {
        RequestQuery(OwnerComp, *MyMemory);
    }
    // EQS 쿼리 요청이 끝나면 쿼리를 통해 탐색된 위치로 이동합니다.
    else if (MyMemory->EnvQueryStatus == EEQSNavEnvQueryStatus::QueryFinished)
    {
        if (HasReachedEQSItemLocation(*MyMemory))
        {
            MyMemory->EnvQueryStatus = EEQSNavEnvQueryStatus::Wait;
        }
        else
        {
            FollowPath(OwnerComp, *MyMemory);
        }
    }
}
```

<img src="https://github.com/ludensor/EQSNavigationSystem/assets/76856672/91de494f-6db0-432d-a257-b9eec57884d1.png" width="400" height="400"/>
<img src="https://github.com/ludensor/EQSNavigationSystem/assets/76856672/a8fb8822-40f8-481c-8b46-ea03d41232fb.png" width="400" height="400"/>

### Flow Chart

AI가 길 찾기를 수행하는 과정을 순서도로 표현한 그림입니다.

<img src="https://github.com/ludensor/EQSNavigationSystem/assets/76856672/fafc1c4a-3454-40ef-a895-fffafb3174a2.png"/>
