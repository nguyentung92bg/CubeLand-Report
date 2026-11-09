public class RewardParticle : MonoBehaviour // TypeDefIndex: 3603
{
	// Fields
	[SerializeField]
	private Image icon; // 0x10
	[SerializeField]
	private TextMeshProUGUI info; // 0x14
	[SerializeField]
	private CanvasGroup canvasGroup; // 0x18
	[SerializeField]
	private float popDuration; // 0x1C
	[SerializeField]
	private float holdDuration; // 0x20
	[SerializeField]
	private float floatDistance; // 0x24
	[SerializeField]
	private float floatDuration; // 0x28
	[SerializeField]
	private float fadeDuration; // 0x2C
	private Sequence rewardSequence; // 0x30

	// Methods

	// RVA: 0x10EAB18 Offset: 0x10EAB18 VA: 0x10EAB18
	public void Play(Sprite rewardIcon, string rewardInfo, Vector3 spawnPosition) { }

	// RVA: 0x10EBF10 Offset: 0x10EBF10 VA: 0x10EBF10
	public void .ctor() { }
}

// Namespace: 
[Serializable]