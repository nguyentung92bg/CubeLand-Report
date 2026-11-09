public class AppUpdateManager : MonoBehaviour // TypeDefIndex: 4176
{
	// Fields
	[SerializeField]
	private VersionDataSo versionDataSo; // 0x10
	private string storeURL; // 0x14

	// Methods

	[AsyncStateMachine(typeof(AppUpdateManager.<Start>d__2))]
	// RVA: 0x105EFCC Offset: 0x105EFCC VA: 0x105EFCC
	protected UniTaskVoid Start() { }

	// RVA: 0x105F06C Offset: 0x105F06C VA: 0x105F06C
	private Version GetVersion(string version) { }

	// RVA: 0x105F130 Offset: 0x105F130 VA: 0x105F130
	private void ShowForceUpdateDialog() { }

	// RVA: 0x105F368 Offset: 0x105F368 VA: 0x105F368
	private void OnUpdateButtonClicked() { }

	// RVA: 0x105F3DC Offset: 0x105F3DC VA: 0x105F3DC
	public void .ctor() { }
}

// Namespace: 
[Serializable]