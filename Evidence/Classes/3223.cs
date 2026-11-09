public static class EventManager // TypeDefIndex: 3223
{
	// Fields
	public static GameAction<BaseDockController> OnDockFilled; // 0x0
	public static GameAction<BaseDockController> OnDockEmptied; // 0x4
	public static GameAction<BaseTargetableController> OnVoxelDestroyed; // 0x8
	public static GameAction OnLastVoxelDestroyed; // 0xC
	public static GameAction<bool> OnManualObjectRotationModeToggled; // 0x10
	public static GameAction<bool> OnBlastersShootingStateUpdate; // 0x14
	public static GameAction<bool> OnFailSearchStateChanged; // 0x18
	public static GameAction OnWinSequenceStarted; // 0x1C
	public static GameAction<PlayOnOffer> OnPlayOnRequested; // 0x20
	public static GameAction<BlasterController> OnMagnetAnimationStarted; // 0x24
	public static GameAction OnMagnetAnimationCompleted; // 0x28
	public static GameAction OnShuffleAnimationStarted; // 0x2C
	public static GameAction OnShuffleAnimationCompleted; // 0x30
	public static GameAction OnBounceAnimationStarted; // 0x34
	public static GameAction OnBounceAnimationCompleted; // 0x38
	public static GameAction<bool> OnLevel1TutorialActivated; // 0x3C
	public static GameAction<bool> OnBoosterBannerVisibilityActivated; // 0x40
	public static GameAction OnBlasterShiftingFrontCompleted; // 0x44
	public static GameAction OnRainbowBlasterSpawned; // 0x48
	public static GameAction<float, int> OnComboFillUpdated; // 0x4C
	public static GameAction<int> OnComboTriggered; // 0x50
	public static GameAction<int> OnComboLevelReset; // 0x54
	public static GameAction<bool> OnComboActiveChanged; // 0x58
	public static GameAction<Vector3, ColorType> OnVoxelDestructionParticleRequested; // 0x5C
	public static GameAction<Vector3> OnWallDestructionParticleRequested; // 0x60
	public static GameAction<ColorType, Vector3, Vector3> OnLargeVoxelCrackParticleRequested; // 0x64
	public static GameAction<ColorType, Vector3, int, float, float> OnLargeVoxelBreakParticleRequested; // 0x68
	public static GameAction<ColorType, Vector3, Quaternion, float> OnColorBoxPlankShatterRequested; // 0x6C
	public static GameAction OnGameLoaded; // 0x70
	public static GameAction OnLevelSucceeded; // 0x74
	public static GameAction OnNextLevel; // 0x78
	public static GameAction OnLevelFailed; // 0x7C
	public static GameAction OnTryLevelRetried; // 0x80
	public static GameAction OnLevelRetried; // 0x84
	public static GameAction OnReturnToPreGame; // 0x88
	public static GameAction OnSettingsPopupOpened; // 0x8C
	public static GameAction OnSettingsPopupClosed; // 0x90
	public static GameAction OnQuitLevel; // 0x94
	public static GameAction OnSessionTransitionCompleted; // 0x98
	public static GameAction OnObjectiveAnimationFinished; // 0x9C
	public static GameAction<RectTransform, int> OnObjectiveGained; // 0xA0
	public static GameAction<CurrencyType> OnBoosterStarted; // 0xA4
	public static GameAction<CurrencyType> OnBoosterUsed; // 0xA8
	public static GameAction<CurrencyType> OnBoosterCancelled; // 0xAC
	public static GameAction<CurrencyType> OnBoosterPurchased; // 0xB0
	public static GameAction OnAnyPreBoosterUsed; // 0xB4
	public static GameAction OnPreBoosterUnlockAnimationRequested; // 0xB8
	public static GameAction<Vector3> OnCannonShotFired; // 0xBC
	public static GameAction<Vector3> OnCannonImpact; // 0xC0
	public static GameAction OnPlayOnComplete; // 0xC4
	public static GameAction<BoosterBaseData, bool, bool> OnComplementaryBoosterTutorialShown; // 0xC8
	public static GameAction<bool, bool> OnComplementaryBoosterTutorialHide; // 0xCC
	public static GameAction<bool, bool> OnComplementaryBoosterStateActivated; // 0xD0
	public static GameAction OnBoosterUnlockAnimationRequested; // 0xD4
	public static GameAction<Transform, RectTransform.Edge, int> OnMenuItemNeedToPositioning; // 0xD8
	public static GameAction OnProfileChanged; // 0xDC
	public static GameAction<IapObject> OnPurchaseSucceeded; // 0xE0
	public static GameAction OnRestored; // 0xE4
	public static GameAction OnDiscountStateEndForAnOffer; // 0xE8
	public static GameAction OnInitOtherShopItemsOutsideOfShop; // 0xEC
	public static GameAction<BaseOfferButton.BundleOfferType, float> OnBundleOfferNotificationRequested; // 0xF0
	public static GameAction OnShopReady; // 0xF4
	public static GameAction OnPiggyBankPurchaseSucceded; // 0xF8
	public static GameAction<bool> OnAnyPopupUpdate; // 0xFC
	public static GameAction<bool> OnIAPCanvasDeactivatedByPaySuccess; // 0x100
	public static GameAction<bool> OnBaseOfferShown; // 0x104
	public static GameAction OnDailyFreeRewardClaimed; // 0x108
	public static GameAction<int> OnDailyRwRewardClaimed; // 0x10C
	public static GameAction<bool> OnPowerUpOfferPopupActivated; // 0x110
	public static GameAction<bool> OnBaseOfferButtonsActivationRequested; // 0x114
	public static GameAction<MainCanvasType, bool> OnMainCanvasChangeHalfway; // 0x118
	public static GameAction<ParticleTargetPos, bool, bool> OnCurrencyObjectNeedToVisible; // 0x11C
	public static GameAction<MainCanvasType, bool> OnMainCanvasChangeEnded; // 0x120
	public static GameAction<SoLevelData> OnLevelLoaded; // 0x124
	public static GameAction<List<RewardBase>, string> ShowRewardUI; // 0x128
	public static GameAction<RectTransform, Sprite, ParticleTargetPos, int> OnMultiImageParticleStart; // 0x12C
	public static GameAction<Vector3, Sprite> OnGoldenCoinParticleStartFromWorld; // 0x130
	public static GameAction<Vector3, Sprite, ParticleTargetPos, int> OnMultiImageParticleStartFromWorld; // 0x134
	public static GameAction<Vector3, Sprite, ParticleTargetPos, int> OnExplosiveMultiImageParticleStartFromWorld; // 0x138
	public static GameAction<RectTransform, Sprite, RectTransform> OnMultiImageParticleStartWithTarget; // 0x13C
	public static GameAction<RectTransform, List<RewardBase>> OnMiniRewardAnim; // 0x140
	public static GameAction<RectTransform, RewardBase, ParticleTargetPos> OnSingleRewardAnimStart; // 0x144
	public static GameAction<bool> OnBannerAdVisibilityChanged; // 0x148
	public static GameAction OnControllerFirebaseInitialized; // 0x14C
	public static GameAction OnFirebasePseudoIdGet; // 0x150
	public static GameAction OnStarChallengeSetTarget; // 0x154
	public static GameAction OnStarChallengeClaimed; // 0x158
	public static GameAction<bool> OnStarChallengeVisible; // 0x15C
	public static GameAction OnStarChallengeReset; // 0x160
	public static GameAction<DailyQuestChest> OnDailyQuestChestClicked; // 0x164
	public static GameAction OnDailyQuestNotified; // 0x168
	public static GameAction<int> OnDailyQuestWeeklyRewardClaimed; // 0x16C
	public static GameAction<bool> OnDailyQuestButtonPreventActivated; // 0x170
	public static GameAction OnCheckStageCityState; // 0x174
	public static GameAction OnCheckStageRewardedState; // 0x178
	public static GameAction<AssetReferenceSprite> OnArtworkSet; // 0x17C
	public static GameAction OnSeasonPassTutorialStarted; // 0x180
	public static GameAction<int> OnSeasonPassCollectedKeyIncrease; // 0x184
	public static GameAction<List<SeasonPassSo.SeasonReward>, Transform> OnChestViewRequested; // 0x188
	public static GameAction<bool> OnDailyDeliveryActivated; // 0x18C
	public static GameAction OnCloudRushOfferPopupRequested; // 0x190
	public static GameAction OnCloudRushRegistrationPopupRequested; // 0x194
	public static GameAction<bool, FailPanelController.GameExitOptions> OnCloudRushProgressionPopupRequested; // 0x198
	public static GameAction<bool, LevelDifficulty> OnCloudRushProgressionUpdated; // 0x19C
	public static GameAction OnCloudRushSuccessPopupRequested; // 0x1A0
	public static GameAction OnRainbowShooterReset; // 0x1A4
	public static GameAction OnSpecialBoosterTutorialCompleted; // 0x1A8

	// Methods

	// RVA: 0xFDA408 Offset: 0xFDA408 VA: 0xFDA408
	private static void .cctor() { }
}

// Namespace: Rotatelab