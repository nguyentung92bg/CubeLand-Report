public class StarChallengeRewardParticle : MonoBehaviour // TypeDefIndex: 3517
{
	// Fields
	[SerializeField]
	private Image icon; // 0x10
	[SerializeField]
	private TMP_Text info; // 0x14
	[SerializeField]
	private CanvasGroup canvasGroup; // 0x18
	[SerializeField]
	[Tooltip("Spawns this far above the claimed target instead of right on top of it.")]
	private float spawnOffsetY; // 0x1C
	[SerializeField]
	private float popDuration; // 0x20
	[SerializeField]
	private float holdDuration; // 0x24
	[SerializeField]
	private float floatDistance; // 0x28
	[SerializeField]
	private float floatDuration; // 0x2C
	[SerializeField]
	private float fadeDuration; // 0x30
	private Sequence rewardSequence; // 0x38

	// Methods

	// RVA: 0x10CBAC0 Offset: 0x10CBAC0 VA: 0x10CBAC0
	public void Play(StarChallengeSO.SingleReward reward, Vector3 spawnPosition) { }

	// RVA: 0x10CBFD0 Offset: 0x10CBFD0 VA: 0x10CBFD0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10CC010 Offset: 0x10CC010 VA: 0x10CC010
	private void <Play>b__10_0(float f) { }
}

// Namespace: Rotatelab.Shop