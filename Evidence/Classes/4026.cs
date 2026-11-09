public class EnvironmentManager : SingletonBehaviour<EnvironmentManager> // TypeDefIndex: 4026
{
	// Fields
	[SerializeField]
	private EnvironmentDataSo environmentSo; // 0x10
	[SerializeField]
	private Image boostersBackground; // 0x14
	[SerializeField]
	private Image settingsButton; // 0x18
	public static readonly SavedBool IsLightModeEnabled; // 0x0

	// Methods

	// RVA: 0x100D5C8 Offset: 0x100D5C8 VA: 0x100D5C8
	protected void OnEnable() { }

	// RVA: 0x100D5CC Offset: 0x100D5CC VA: 0x100D5CC
	public void RefreshLightMode() { }

	// RVA: 0x100D908 Offset: 0x100D908 VA: 0x100D908
	public void Initialize(SoLevelData levelData) { }

	// RVA: 0x100D9E8 Offset: 0x100D9E8 VA: 0x100D9E8
	public EnvironmentData CurrentEnvironmentData(int levelDifficultyIndex) { }

	// RVA: 0x100DA88 Offset: 0x100DA88 VA: 0x100DA88
	private void UpdateColor(EnvironmentColors environmentColors) { }

	// RVA: 0x100DAE0 Offset: 0x100DAE0 VA: 0x100DAE0
	public void .ctor() { }

	// RVA: 0x100DB34 Offset: 0x100DB34 VA: 0x100DB34
	private static void .cctor() { }
}

// Namespace: Rotatelab.Scripts