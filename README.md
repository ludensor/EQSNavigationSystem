# EQSNavigationSystem

언리얼엔진의 EQS를 이용한 3차원 내비게이션 시스템 모듈입니다.

### 데모
<img src="https://github.com/ludensor/EQSNavigationSystem/assets/76856672/1ccd34ba-6203-4256-94eb-b5fc11236c07.gif" width="400" height="400"/>
<img src="https://github.com/ludensor/EQSNavigationSystem/assets/76856672/6bd92a9e-764c-429f-bc06-32c0dc9b95b8.gif" width="400" height="400"/>

### 동작 원리
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
- AI의 위치에서 Target이 보이는지 검출합니다.

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
        MyMemory->CurrentDestination = MyMemory->CurrentDestination = GetGoalLocation();
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

- EQS에서 복셀을 생성하여 이동할 위치를 찾습니다.
