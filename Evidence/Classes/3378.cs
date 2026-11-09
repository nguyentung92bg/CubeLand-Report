public class PurchasesListener : SingletonBehaviour<PurchasesListener>, IStoreListener // TypeDefIndex: 3378
{
	// Fields
	[SerializeField]
	private List<IapObject> iapObjects; // 0x10
	public Button restoreButton; // 0x14
	[SerializeField]
	private GameObject loadingScreen; // 0x18
	[SerializeField]
	private List<string> productIdentifiers; // 0x1C
	private IStoreController _storeController; // 0x20
	private IExtensionProvider _extensionProvider; // 0x24
	private bool _isInitialized; // 0x28
	private IapObject _pendingIapObject; // 0x2C
	private const string LoadingPriceText = "Loading...";
	private const float InitRetryCooldownSeconds = 10;
	private float _lastInitRetryTime; // 0x30
	public string paySource; // 0x34
	public readonly SavedList<string> LastPurchaseRecords; // 0x38
	private readonly SavedList<ValueTuple<string, double, string>> purchasesMadeBeforeCloudSaveFetched; // 0x3C
	private readonly SavedGenericValue<Dictionary<string, string>> startedPurchaseRewardKeys; // 0x40

	// Properties
	public bool IsPurchasePending { get; }

	// Methods

	// RVA: 0x109643C Offset: 0x109643C VA: 0x109643C
	public bool get_IsPurchasePending() { }

	// RVA: 0x109644C Offset: 0x109644C VA: 0x109644C
	protected void Start() { }

	// RVA: 0x10966C0 Offset: 0x10966C0 VA: 0x10966C0
	private void InitializeUnityIAP() { }

	[AsyncStateMachine(typeof(PurchasesListener.<RetryInitializationAsync>d__19))]
	// RVA: 0x1096A48 Offset: 0x1096A48 VA: 0x1096A48
	private UniTaskVoid RetryInitializationAsync() { }

	// RVA: 0x10969E4 Offset: 0x10969E4 VA: 0x10969E4
	private static ProductType GetProductType(string productId) { }

	// RVA: 0x1096AE4 Offset: 0x1096AE4 VA: 0x1096AE4 Slot: 5
	public void OnInitialized(IStoreController controller, IExtensionProvider extensions) { }

	// RVA: 0x1097000 Offset: 0x1097000 VA: 0x1097000 Slot: 9
	public void OnInitializeFailed(InitializationFailureReason error) { }

	// RVA: 0x1097008 Offset: 0x1097008 VA: 0x1097008 Slot: 6
	public void OnInitializeFailed(InitializationFailureReason error, string message) { }

	// RVA: 0x1097148 Offset: 0x1097148 VA: 0x1097148 Slot: 7
	public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs purchaseEvent) { }

	// RVA: 0x1097170 Offset: 0x1097170 VA: 0x1097170
	private PurchaseProcessingResult ProcessPurchase(Product product) { }

	// RVA: 0x1098788 Offset: 0x1098788 VA: 0x1098788
	private PurchaseProcessingResult GrantPurchase(Product product, IapObject iapObject) { }

	// RVA: 0x1098FE8 Offset: 0x1098FE8 VA: 0x1098FE8
	private static void LogAppleTransactionToFirebase(Product product) { }

	// RVA: 0x109976C Offset: 0x109976C VA: 0x109976C
	private void OnDeferredPurchase(Product product) { }

	// RVA: 0x1099878 Offset: 0x1099878 VA: 0x1099878 Slot: 10
	public void OnPurchaseFailed(Product product, PurchaseFailureDescription failureDescription) { }

	// RVA: 0x1099E28 Offset: 0x1099E28 VA: 0x1099E28 Slot: 8
	public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason) { }

	// RVA: 0x10998B0 Offset: 0x10998B0 VA: 0x10998B0
	private void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason, string error) { }

	// RVA: 0x1099E40 Offset: 0x1099E40 VA: 0x1099E40
	public Product GetProduct(string productId) { }

	// RVA: 0x1099F28 Offset: 0x1099F28 VA: 0x1099F28
	public bool IsInCatalog(string productId) { }

	// RVA: 0x1099F94 Offset: 0x1099F94 VA: 0x1099F94
	public bool HasUnfinishedPurchase(string productId) { }

	// RVA: 0x109A038 Offset: 0x109A038 VA: 0x109A038
	public string GetLocalizedPriceString(string productId) { }

	// RVA: 0x109A0C0 Offset: 0x109A0C0 VA: 0x109A0C0
	public void AddIAPButton(PurchaseButtonBase iapButton, IAPData iapData) { }

	// RVA: 0x10985B4 Offset: 0x10985B4 VA: 0x10985B4
	private bool TryFindIapObject(string productId, string rewardKey, out IapObject iapObject) { }

	// RVA: 0x1095DC0 Offset: 0x1095DC0 VA: 0x1095DC0
	public void BeginPurchase(IapObject iapObject) { }

	// RVA: 0x109A5AC Offset: 0x109A5AC VA: 0x109A5AC
	private static bool TryShowNoConnectionDialog() { }

	// RVA: 0x109A67C Offset: 0x109A67C VA: 0x109A67C
	private static void ShowStoreUnavailableDialog() { }

	// RVA: 0x109A754 Offset: 0x109A754 VA: 0x109A754
	private void OnShopReadyHandler() { }

	// RVA: 0x109A79C Offset: 0x109A79C VA: 0x109A79C
	public void OnShopOpened() { }

	// RVA: 0x109A7FC Offset: 0x109A7FC VA: 0x109A7FC
	private void OnBaseOfferShownHandler(bool isActive) { }

	// RVA: 0x109A808 Offset: 0x109A808 VA: 0x109A808
	public void SetRestoreButton(Button restoreButton) { }

	[AsyncStateMachine(typeof(PurchasesListener.<OnCloudSaveFetchedAsync>d__45))]
	// RVA: 0x109A8D4 Offset: 0x109A8D4 VA: 0x109A8D4
	private UniTaskVoid OnCloudSaveFetchedAsync(bool isRemoteDataApplied) { }

	// RVA: 0x109A758 Offset: 0x109A758 VA: 0x109A758
	public void FetchProducts() { }

	// RVA: 0x1096E94 Offset: 0x1096E94 VA: 0x1096E94
	private void SetIapButtonPrices() { }

	// RVA: 0x109A3E8 Offset: 0x109A3E8 VA: 0x109A3E8
	private void SetPriceText(IapObject iapObject) { }

	// RVA: 0x109916C Offset: 0x109916C VA: 0x109916C
	private void VerifyPurchaseWithAdjust(Product product, IapObject iapObject) { }

	// RVA: 0x109AC38 Offset: 0x109AC38 VA: 0x109AC38
	private void OnAdjustVerificationResultReturned(AdjustPurchaseVerificationResult result, Product product, IapObject iapObject) { }

	[AsyncStateMachine(typeof(PurchasesListener.<PurchaseComplete>d__51))]
	// RVA: 0x109A988 Offset: 0x109A988 VA: 0x109A988
	private void PurchaseComplete(Product product, IapObject iapObject) { }

	[AsyncStateMachine(typeof(PurchasesListener.<TrySendPurchaseToSatoriAsync>d__52))]
	// RVA: 0x109B090 Offset: 0x109B090 VA: 0x109B090
	public UniTask<bool> TrySendPurchaseToSatoriAsync(double localizedPrice, string isoCurrencyCode) { }

	// RVA: 0x1097858 Offset: 0x1097858 VA: 0x1097858
	private void PurchaseFailed(Product product, IapObject iapObject, string failureSource, string errorCode, string errorMessage) { }

	// RVA: 0x1098DE8 Offset: 0x1098DE8 VA: 0x1098DE8
	private void RecordInformationAboutPurchase(string info) { }

	// RVA: 0x109B1A8 Offset: 0x109B1A8 VA: 0x109B1A8
	private void RestoreClicked() { }

	// RVA: 0x1098B44 Offset: 0x1098B44 VA: 0x1098B44
	private void HandleRestoredPurchaseAsync(Product product) { }

	// RVA: 0x109B4B4 Offset: 0x109B4B4 VA: 0x109B4B4
	private void CheckRestoredPurchases() { }

	// RVA: 0x109AA70 Offset: 0x109AA70 VA: 0x109AA70
	private static string ExtractGooglePurchaseToken(string receipt) { }

	// RVA: 0x109B8C8 Offset: 0x109B8C8 VA: 0x109B8C8
	private static string ExtractGooglePurchaseOrderId(string receipt) { }

	// RVA: 0x1098D04 Offset: 0x1098D04 VA: 0x1098D04
	private static string GetPurchaseOrderId(Product product) { }

	// RVA: 0x109BA98 Offset: 0x109BA98 VA: 0x109BA98
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x109BC8C Offset: 0x109BC8C VA: 0x109BC8C
	private void <Start>b__17_0(bool isRemoteDataApplied) { }

	[CompilerGenerated]
	// RVA: 0x109BCB8 Offset: 0x109BCB8 VA: 0x109BCB8
	private void <RestoreClicked>b__55_0(bool result, string error) { }
}

// Namespace: Rotatelab.SeasonPass