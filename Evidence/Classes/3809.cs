public class BounceBoosterController : BaseBoosterController // TypeDefIndex: 3809
{
	// Fields
	[CompilerGenerated]
	private static bool <IsBounceInUsage>k__BackingField; // 0x0
	private Coroutine checkForCompletionCoroutine; // 0x10

	// Properties
	protected override CurrencyType BoosterType { get; }
	public static bool IsActive { get; }
	public static bool IsBounceInUsage { get; set; }

	// Methods

	// RVA: 0x1132770 Offset: 0x1132770 VA: 0x1132770 Slot: 4
	protected override CurrencyType get_BoosterType() { }

	// RVA: 0x1132778 Offset: 0x1132778 VA: 0x1132778
	public static bool get_IsActive() { }

	[CompilerGenerated]
	// RVA: 0x11327D8 Offset: 0x11327D8 VA: 0x11327D8
	public static bool get_IsBounceInUsage() { }

	[CompilerGenerated]
	// RVA: 0x1132828 Offset: 0x1132828 VA: 0x1132828
	private static void set_IsBounceInUsage(bool value) { }

	[RuntimeInitializeOnLoadMethod(4)]
	// RVA: 0x113287C Offset: 0x113287C VA: 0x113287C
	private static void ResetStaticState() { }

	// RVA: 0x11328D0 Offset: 0x11328D0 VA: 0x11328D0 Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x1132A28 Offset: 0x1132A28 VA: 0x1132A28 Slot: 6
	protected override void OnDisable() { }

	// RVA: 0x1132B80 Offset: 0x1132B80 VA: 0x1132B80 Slot: 7
	protected override void OnActivated() { }

	// RVA: 0x1132C18 Offset: 0x1132C18 VA: 0x1132C18 Slot: 8
	protected override void OnDeactivated() { }

	// RVA: 0x1132BB4 Offset: 0x1132BB4 VA: 0x1132BB4
	private IEnumerator CheckForCompletionCoroutine() { }

	// RVA: 0x1132C54 Offset: 0x1132C54 VA: 0x1132C54
	private void OnBounceAnimationStartedHandler() { }

	// RVA: 0x1132CA8 Offset: 0x1132CA8 VA: 0x1132CA8
	private void OnBounceAnimationCompletedHandler() { }

	// RVA: 0x1132D00 Offset: 0x1132D00 VA: 0x1132D00
	public void .ctor() { }
}

// Namespace: Rotatelab.Boosters