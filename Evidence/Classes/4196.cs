public class StateMachine<TOwner, TBaseState, TStateType> // TypeDefIndex: 4196
{
	// Fields
	private Dictionary<int, TBaseState> _states; // 0x0
	private TBaseState _currentState; // 0x0

	// Properties
	public Dictionary<int, TBaseState> States { get; }
	public TBaseState CurrentState { get; }

	// Methods

	// RVA: -1 Offset: -1
	public Dictionary<int, TBaseState> get_States() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1B0D2BC Offset: 0x1B0D2BC VA: 0x1B0D2BC
	|-StateMachine<object, object, object>.get_States
	*/

	// RVA: -1 Offset: -1
	public TBaseState get_CurrentState() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1B0D2C4 Offset: 0x1B0D2C4 VA: 0x1B0D2C4
	|-StateMachine<object, object, object>.get_CurrentState
	*/

	// RVA: -1 Offset: -1
	public void Init(TStateType startStateType, TBaseState[] states) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1B0D2CC Offset: 0x1B0D2CC VA: 0x1B0D2CC
	|-StateMachine<object, object, object>.Init
	*/

	// RVA: -1 Offset: -1
	private void InitStartState(TStateType startStateType) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1B0D314 Offset: 0x1B0D314 VA: 0x1B0D314
	|-StateMachine<object, object, object>.InitStartState
	*/

	// RVA: -1 Offset: -1
	private void AddStates(TBaseState[] states) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1B0D3E4 Offset: 0x1B0D3E4 VA: 0x1B0D3E4
	|-StateMachine<object, object, object>.AddStates
	*/

	// RVA: -1 Offset: -1
	public void ChangeState(TStateType type) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1B0D4C8 Offset: 0x1B0D4C8 VA: 0x1B0D4C8
	|-StateMachine<object, object, object>.ChangeState
	*/

	// RVA: -1 Offset: -1
	private void ExitCurrentState() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1B0D568 Offset: 0x1B0D568 VA: 0x1B0D568
	|-StateMachine<object, object, object>.ExitCurrentState
	*/

	// RVA: -1 Offset: -1
	private void EnterCurrentState() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1B0D5EC Offset: 0x1B0D5EC VA: 0x1B0D5EC
	|-StateMachine<object, object, object>.EnterCurrentState
	*/

	// RVA: -1 Offset: -1
	public void SignOutStateEvent(Action<TOwner> action, TStateType stateType, StateEventType stateEventType = 3) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1B0D670 Offset: 0x1B0D670 VA: 0x1B0D670
	|-StateMachine<object, object, object>.SignOutStateEvent
	*/

	// RVA: -1 Offset: -1
	public void SignUpStateEvent(Action<TOwner> action, TStateType stateType, StateEventType stateEventType = 3) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1B0D728 Offset: 0x1B0D728 VA: 0x1B0D728
	|-StateMachine<object, object, object>.SignUpStateEvent
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1B0D7E0 Offset: 0x1B0D7E0 VA: 0x1B0D7E0
	|-StateMachine<object, object, object>..ctor
	*/
}

// Namespace: Rotatelab.Scripts