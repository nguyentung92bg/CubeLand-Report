internal struct AdConfig.PlatformSpecificData // TypeDefIndex: 3610
{
	// Fields
	public string InterstitialAdUnitId; // 0x0
	public string BannerAdUnitId; // 0x4
	public string RewardedAdUnitId; // 0x8
	[Tooltip("Nefta dual-track ad units (A + B per format), used only in optimized sessions (Satori NeftaConfig status 2). The units above serve every other session and are the backfill track of optimized ones. No bid floor must be set on these in the MAX dashboard.")]
	public string NeftaInterstitialAdUnitIdA; // 0xC
	[Tooltip("Nefta dual-track ad units (A + B per format), used only in optimized sessions (Satori NeftaConfig status 2). The units above serve every other session and are the backfill track of optimized ones. No bid floor must be set on these in the MAX dashboard.")]
	public string NeftaInterstitialAdUnitIdB; // 0x10
	[Tooltip("Nefta dual-track ad units (A + B per format), used only in optimized sessions (Satori NeftaConfig status 2). The units above serve every other session and are the backfill track of optimized ones. No bid floor must be set on these in the MAX dashboard.")]
	public string NeftaRewardedAdUnitIdA; // 0x14
	[Tooltip("Nefta dual-track ad units (A + B per format), used only in optimized sessions (Satori NeftaConfig status 2). The units above serve every other session and are the backfill track of optimized ones. No bid floor must be set on these in the MAX dashboard.")]
	public string NeftaRewardedAdUnitIdB; // 0x18
	[Tooltip("Nefta app id. Used when IsNeftaEnabled is on.")]
	public string NeftaAppId; // 0x1C
}

// Namespace: Rotatelab.Ads