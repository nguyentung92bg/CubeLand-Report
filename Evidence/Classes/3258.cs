public class LoaderSceneManager : MonoBehaviour // TypeDefIndex: 3258
{
	// Fields
	[SerializeField]
	private GameObject[] dontDestroyOnLoad; // 0x10
	[SerializeField]
	[Tooltip("In a Transform hierarchy, a single dirty Transform will force the whole parent-child hierarchy to be refreshed. Unparenting complex children can therefore be beneficial.")]
	private Transform[] childrenToUnparent; // 0x14

	// Methods

	[AsyncStateMachine(typeof(LoaderSceneManager.<Start>d__2))]
	// RVA: 0x1071098 Offset: 0x1071098 VA: 0x1071098
	protected UniTaskVoid Start() { }

	[AsyncStateMachine(typeof(LoaderSceneManager.<WaitForHiroInitializationAsync>d__3))]
	// RVA: 0x107113C Offset: 0x107113C VA: 0x107113C
	private UniTaskVoid WaitForHiroInitializationAsync(StopwatchEvent stopwatch) { }

	// RVA: 0x10711E0 Offset: 0x10711E0 VA: 0x10711E0
	public void .ctor() { }
}

// Namespace: 