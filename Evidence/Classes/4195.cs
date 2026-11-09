public abstract class BaseState<TOwner, TStateType> // TypeDefIndex: 4195
{
	// Fields
	private Action<TOwner> _preExitEvent; // 0x0
	private Action<TOwner> _postExitEvent; // 0x0
	private Action<TOwner> _preEnterEvent; // 0x0
	private Action<TOwner> _postEnterEvent; // 0x0
	public TStateType type; // 0x0
	protected readonly TOwner owner; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	protected void .ctor(TOwner owner, TStateType type) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1E6ACE4 Offset: 0x1E6ACE4 VA: 0x1E6ACE4
	|-BaseState<object, object>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void Enter();
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-BaseState<object, object>.Enter
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void Exit();
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-BaseState<object, object>.Exit
	*/

	// RVA: -1 Offset: -1
	public void RaiseEvent(StateEventType eventType) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1E6AD20 Offset: 0x1E6AD20 VA: 0x1E6AD20
	|-BaseState<object, object>.RaiseEvent
	*/

	// RVA: -1 Offset: -1
	public void SignUpEvent(StateEventType eventType, Action<TOwner> onEvent) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1E6AD84 Offset: 0x1E6AD84 VA: 0x1E6AD84
	|-BaseState<object, object>.SignUpEvent
	*/

	// RVA: -1 Offset: -1
	public void SignOutEvent(StateEventType eventType, Action<TOwner> onEvent) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1E6AEA4 Offset: 0x1E6AEA4 VA: 0x1E6AEA4
	|-BaseState<object, object>.SignOutEvent
	*/
}

// Namespace: Rotatelab.Scripts