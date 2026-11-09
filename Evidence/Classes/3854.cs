public class CloudSaveManager : SingletonBehaviour<CloudSaveManager> // TypeDefIndex: 3854
{
	// Fields
	[CompilerGenerated]
	private bool <DeferRemoteData>k__BackingField; // 0x10
	[CompilerGenerated]
	private bool <IsRemoteDataFetched>k__BackingField; // 0x11
	[CompilerGenerated]
	private bool <IsSendingDataToRemote>k__BackingField; // 0x12
	[CompilerGenerated]
	private CloudSaveData <Data>k__BackingField; // 0x14
	private CloudSaveData pendingRemoteData; // 0x18
	[CompilerGenerated]
	private CloudSaveManager.RemoteDataFetchedDelegate OnRemoteDataFetched; // 0x1C
	public Action OnDataOverwritten; // 0x20

	// Properties
	public NakamaSystem Nakama { get; }
	public NetworkMonitor Monitor { get; }
	public bool DeferRemoteData { get; set; }
	public bool HasPendingRemoteData { get; }
	public bool IsRemoteDataFetched { get; set; }
	public bool IsSendingDataToRemote { get; set; }
	public CloudSaveData Data { get; set; }

	// Methods

	// RVA: 0x11417DC Offset: 0x11417DC VA: 0x11417DC
	public NakamaSystem get_Nakama() { }

	// RVA: 0x114183C Offset: 0x114183C VA: 0x114183C
	public NetworkMonitor get_Monitor() { }

	[CompilerGenerated]
	// RVA: 0x114189C Offset: 0x114189C VA: 0x114189C
	public bool get_DeferRemoteData() { }

	[CompilerGenerated]
	// RVA: 0x11418A4 Offset: 0x11418A4 VA: 0x11418A4
	public void set_DeferRemoteData(bool value) { }

	// RVA: 0x11418AC Offset: 0x11418AC VA: 0x11418AC
	public bool get_HasPendingRemoteData() { }

	[CompilerGenerated]
	// RVA: 0x11418BC Offset: 0x11418BC VA: 0x11418BC
	public bool get_IsRemoteDataFetched() { }

	[CompilerGenerated]
	// RVA: 0x11418C4 Offset: 0x11418C4 VA: 0x11418C4
	private void set_IsRemoteDataFetched(bool value) { }

	[CompilerGenerated]
	// RVA: 0x11418CC Offset: 0x11418CC VA: 0x11418CC
	public bool get_IsSendingDataToRemote() { }

	[CompilerGenerated]
	// RVA: 0x11418D4 Offset: 0x11418D4 VA: 0x11418D4
	private void set_IsSendingDataToRemote(bool value) { }

	[CompilerGenerated]
	// RVA: 0x11418DC Offset: 0x11418DC VA: 0x11418DC
	public CloudSaveData get_Data() { }

	[CompilerGenerated]
	// RVA: 0x11418E4 Offset: 0x11418E4 VA: 0x11418E4
	private void set_Data(CloudSaveData value) { }

	[CompilerGenerated]
	// RVA: 0x11418EC Offset: 0x11418EC VA: 0x11418EC
	public void add_OnRemoteDataFetched(CloudSaveManager.RemoteDataFetchedDelegate value) { }

	[CompilerGenerated]
	// RVA: 0x114198C Offset: 0x114198C VA: 0x114198C
	public void remove_OnRemoteDataFetched(CloudSaveManager.RemoteDataFetchedDelegate value) { }

	// RVA: 0x1141A2C Offset: 0x1141A2C VA: 0x1141A2C Slot: 4
	protected override void Awake() { }

	[AsyncStateMachine(typeof(CloudSaveManager.<RefreshAsync>d__29))]
	// RVA: 0x11429E8 Offset: 0x11429E8 VA: 0x11429E8
	public UniTask RefreshAsync(CancellationToken cancellationToken) { }

	// RVA: 0x1142AC0 Offset: 0x1142AC0 VA: 0x1142AC0
	public bool ApplyPendingRemoteData() { }

	// RVA: 0x1143290 Offset: 0x1143290 VA: 0x1143290
	private bool IsPendingRemoteDataNewer(bool checkLevelProgressOnly) { }

	// RVA: 0x114349C Offset: 0x114349C VA: 0x114349C
	private void PreparePendingRemoteData() { }

	// RVA: 0x11437AC Offset: 0x11437AC VA: 0x11437AC
	private void SetRemoteDataFetched(bool isRemoteDataApplied) { }

	// RVA: 0x1143940 Offset: 0x1143940 VA: 0x1143940
	public void OnNakamaUserLoggedIn() { }

	[AsyncStateMachine(typeof(CloudSaveManager.<SendToRemoteAsync>d__35))]
	// RVA: 0x1143A20 Offset: 0x1143A20 VA: 0x1143A20
	public UniTask SendToRemoteAsync(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(CloudSaveManager.<LoadFromRemoteAsync>d__36))]
	// RVA: 0x1143B00 Offset: 0x1143B00 VA: 0x1143B00
	private UniTask<CloudSaveData> LoadFromRemoteAsync(CancellationToken cancellationToken) { }

	// RVA: 0x11427DC Offset: 0x11427DC VA: 0x11427DC
	public void SaveToLocal() { }

	// RVA: 0x1141C04 Offset: 0x1141C04 VA: 0x1141C04
	private CloudSaveData LoadFromLocal() { }

	// RVA: 0x1143C1C Offset: 0x1143C1C VA: 0x1143C1C
	private string GetPlayerPrefsKey() { }

	// RVA: 0x1143C64 Offset: 0x1143C64 VA: 0x1143C64
	private string SerializeData(CloudSaveData data) { }

	// RVA: 0x1143CCC Offset: 0x1143CCC VA: 0x1143CCC
	private CloudSaveData DeserializeData(string json) { }

	// RVA: 0x1143730 Offset: 0x1143730 VA: 0x1143730
	private void OverwriteData(CloudSaveData source, CloudSaveData target) { }

	[AsyncStateMachine(typeof(CloudSaveManager.<MigrateDataFromRemoteHiroValuesAsync>d__43))]
	// RVA: 0x1143D50 Offset: 0x1143D50 VA: 0x1143D50
	private UniTask<CloudSaveData> MigrateDataFromRemoteHiroValuesAsync(CancellationToken cancellationToken) { }

	// RVA: 0x1142798 Offset: 0x1142798 VA: 0x1142798
	private void TryMigrateDataFromHiroCache(CloudSaveData data) { }

	// RVA: 0x1143E6C Offset: 0x1143E6C VA: 0x1143E6C
	private void TryMigrateFromHiroEconomySystem(CloudSaveData data) { }

	// RVA: 0x1144430 Offset: 0x1144430 VA: 0x1144430
	private void TryMigrateFromHiroEnergiesSystem(CloudSaveData data) { }

	// RVA: 0x11448E0 Offset: 0x11448E0 VA: 0x11448E0
	private void TryMigrateFromHiroInventorySystem(CloudSaveData data) { }

	// RVA: 0x11452D4 Offset: 0x11452D4 VA: 0x11452D4
	private void TryMigrateFromHiroStatsSystem(CloudSaveData data) { }

	// RVA: 0x1145E5C Offset: 0x1145E5C VA: 0x1145E5C
	private void TryMigrateFromHiroStorageSystem(CloudSaveData data) { }

	// RVA: 0x11461D4 Offset: 0x11461D4 VA: 0x11461D4
	private void MigrateHiroLongValue(CloudSaveData data, string id, long value) { }

	// RVA: -1 Offset: -1
	private bool TryReadHiroCache<T>(string key, out T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x143AB6C Offset: 0x143AB6C VA: 0x143AB6C
	|-CloudSaveManager.TryReadHiroCache<object>
	*/

	// RVA: 0x1141D54 Offset: 0x1141D54 VA: 0x1141D54
	private void TryMigrateDataFromLegacyPlayerPrefs(CloudSaveData data) { }

	// RVA: 0x1146BE4 Offset: 0x1146BE4 VA: 0x1146BE4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x1146C38 Offset: 0x1146C38 VA: 0x1146C38
	private void <Awake>b__28_0(bool value) { }
}

// Namespace: 
[Serializable]