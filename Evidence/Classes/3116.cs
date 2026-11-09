public class AdjustManager : MonoBehaviour // TypeDefIndex: 3116
{
	// Fields
	[SerializeField]
	private string appToken; // 0x10
	[CompilerGenerated]
	private string <CurrentSegment>k__BackingField; // 0x14
	[CompilerGenerated]
	private string <AdjustId>k__BackingField; // 0x18
	private AdjustManager.AdjustIdSatoriState adjustIdSatoriState; // 0x1C
	public Action<string> OnSegmentUpdated; // 0x20
	private const int MaxAttributionRetries = 10;
	private const float AttributionRetryIntervalSeconds = 30;
	private bool hasSentRealCampaign; // 0x24
	private const int AttStatusNotDetermined = 0;
	private const float EndFirstSessionDelayTimeoutSeconds = 50;
	private bool hasEndedFirstSessionDelay; // 0x25
	private readonly HashSet<int> refreshedAdIdLevels; // 0x28

	// Properties
	public string CurrentSegment { get; set; }
	public string AdjustId { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xFA7B98 Offset: 0xFA7B98 VA: 0xFA7B98
	public string get_CurrentSegment() { }

	[CompilerGenerated]
	// RVA: 0xFA7BA0 Offset: 0xFA7BA0 VA: 0xFA7BA0
	private void set_CurrentSegment(string value) { }

	[CompilerGenerated]
	// RVA: 0xFA7BA8 Offset: 0xFA7BA8 VA: 0xFA7BA8
	public string get_AdjustId() { }

	[CompilerGenerated]
	// RVA: 0xFA7BB0 Offset: 0xFA7BB0 VA: 0xFA7BB0
	private void set_AdjustId(string value) { }

	// RVA: 0xFA7BB8 Offset: 0xFA7BB8 VA: 0xFA7BB8
	protected void OnEnable() { }

	// RVA: 0xFA7D4C Offset: 0xFA7D4C VA: 0xFA7D4C
	protected void OnDisable() { }

	// RVA: 0xFA7EE0 Offset: 0xFA7EE0 VA: 0xFA7EE0
	private void ProcessDeeplink(string url) { }

	// RVA: 0xFA7F4C Offset: 0xFA7F4C VA: 0xFA7F4C
	public void Initialize() { }

	// RVA: 0xFA8394 Offset: 0xFA8394 VA: 0xFA8394
	private IEnumerator EndFirstSessionDelayAfterATTAndHeroic() { }

	// RVA: 0xFA84A0 Offset: 0xFA84A0 VA: 0xFA84A0
	private void EndFirstSessionDelay() { }

	// RVA: 0xFA8550 Offset: 0xFA8550 VA: 0xFA8550
	public void RefreshAdId() { }

	[AsyncStateMachine(typeof(AdjustManager.<SetAdIdAsync>d__26))]
	// RVA: 0xFA85E0 Offset: 0xFA85E0 VA: 0xFA85E0
	private void SetAdIdAsync(string adId) { }

	// RVA: 0xFA86B4 Offset: 0xFA86B4 VA: 0xFA86B4
	private void AttributionChangedCallback(AdjustAttribution attribution) { }

	// RVA: 0xFA840C Offset: 0xFA840C VA: 0xFA840C
	private IEnumerator PollAttributionUntilCampaignResolves() { }

	// RVA: 0xFA8BC8 Offset: 0xFA8BC8 VA: 0xFA8BC8
	private void OnPolledAttribution(AdjustAttribution attribution) { }

	// RVA: 0xFA898C Offset: 0xFA898C VA: 0xFA898C
	private void EmitSegment(string segment, string campaign, bool isFallback) { }

	// RVA: 0xFA8794 Offset: 0xFA8794 VA: 0xFA8794
	private string ParseSegment(string campaign) { }

	// RVA: 0xFA8C34 Offset: 0xFA8C34 VA: 0xFA8C34
	private IEnumerator SendSegmentToFirebase(string adid, string segment, string campaign) { }

	// RVA: 0xFA8CF0 Offset: 0xFA8CF0 VA: 0xFA8CF0
	private void OnLevelLoadedHandler(SoLevelData obj) { }

	// RVA: 0xFA8DC8 Offset: 0xFA8DC8 VA: 0xFA8DC8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0xFA8F70 Offset: 0xFA8F70 VA: 0xFA8F70
	private void <Initialize>b__22_0(AdjustSessionSuccess args) { }

	[CompilerGenerated]
	// RVA: 0xFA8F98 Offset: 0xFA8F98 VA: 0xFA8F98
	private UniTask <SetAdIdAsync>b__26_0() { }
}

// Namespace: 