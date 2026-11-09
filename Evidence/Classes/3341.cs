public class UIParticleAnimController : MonoBehaviour // TypeDefIndex: 3341
{
	// Fields
	public List<RectTransform> particleTargetPositions; // 0x10
	public List<ParticleImage> everySingleParticleCompleteParticle; // 0x14
	public ParticleImage multiImageParticle; // 0x18
	public RewardInfo rewardInfo; // 0x1C
	public Gradient bouncyCoinColorOverLifetime; // 0x20
	public Gradient goldenCoinColorOverLifetime; // 0x24
	public AnimationCurve scaleCurve; // 0x28
	public AnimationCurve scaleUpCurve; // 0x2C
	public AnimationCurve bouncyCoinAttractorLerp; // 0x30
	public const float GoldenCoinFlightSeconds = 0.75;

	// Methods

	// RVA: 0x1088704 Offset: 0x1088704 VA: 0x1088704
	protected void Awake() { }

	// RVA: 0x1088BA4 Offset: 0x1088BA4 VA: 0x1088BA4
	private void OnMultiImageParticleStartWithTargetHandler(RectTransform insRect, Sprite sprite, RectTransform targetPos) { }

	// RVA: 0x1088D70 Offset: 0x1088D70 VA: 0x1088D70
	private void OnMultiImageParticleStartFromWorldHandler(Vector3 worldPos, Sprite sprite, ParticleTargetPos targetPos, int ratePerSecond) { }

	// RVA: 0x1089470 Offset: 0x1089470 VA: 0x1089470
	private void OnMultiImageParticleStartHandler(RectTransform insRect, Sprite sprite, ParticleTargetPos targetPos, int ratePerSecond) { }

	// RVA: 0x1089AD4 Offset: 0x1089AD4 VA: 0x1089AD4
	private void OnGoldenCoinParticleStartFromWorldHandler(Vector3 worldPos, Sprite sprite) { }

	// RVA: 0x108A278 Offset: 0x108A278 VA: 0x108A278
	private void OnExplosiveMultiImageParticleStartFromWorldHandler(Vector3 worldPos, Sprite sprite, ParticleTargetPos targetPos, int rateOverLifetime) { }

	// RVA: 0x108AE34 Offset: 0x108AE34 VA: 0x108AE34
	private void OnAnyParticleFinished(ParticleTargetPos targetPos) { }

	// RVA: 0x108AFB4 Offset: 0x108AFB4 VA: 0x108AFB4
	private void OnMiniRewardAnimHandler(RectTransform startPos, List<RewardBase> rewardBases) { }

	// RVA: 0x108B6E0 Offset: 0x108B6E0 VA: 0x108B6E0
	public void OnSingleRewardAnimStartHandler(RectTransform insRect, RewardBase rewardBase, ParticleTargetPos targetPos) { }

	// RVA: 0x108BA1C Offset: 0x108BA1C VA: 0x108BA1C
	private void OnDestroy() { }

	// RVA: 0x108BE18 Offset: 0x108BE18 VA: 0x108BE18
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x108BE60 Offset: 0x108BE60 VA: 0x108BE60
	private void <OnGoldenCoinParticleStartFromWorldHandler>b__14_0() { }
}

// Namespace: Rotatelab.Audio