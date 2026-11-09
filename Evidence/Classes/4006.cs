public class ComboConfigSO : SingletonScriptableObject<ComboConfigSO> // TypeDefIndex: 4006
{
	// Fields
	[Tooltip("Combo mekaniğinin ana anahtarı — kapalıyken bar gizli, birikim yok. Creative Canvas T3-Combo sekmesinden canlı açılıp kapatılabilir (iki yönde anında etkir).")]
	public bool comboEnabled; // 0xC
	[Tooltip("Sahne başında Combo Level bu değerden başlar.")]
	public int startingLevel; // 0x10
	[Tooltip("Combo Level bu değeri aşamaz. Bu seviyeye ulaşınca daha üst seviye yok.")]
	public int maxLevel; // 0x14
	[Tooltip("Son seviye atlamasından bu süre kadar üst seviyeye geçilemezse combo seviye 0'a sıfırlanır (saniye). Drain'den ayrı, daha sert bir sıfırlama.")]
	public float idleResetTimeout; // 0x18
	public float referenceBlasterCount; // 0x1C
	public float referenceWindowSeconds; // 0x20
	public float voxelsPerBlasterPerSecond; // 0x24
	[Tooltip("Threshold her seviye artışında bu oran kadar büyür: threshold(L) = base × (1 + thresholdIncreasePerLevel × L).")]
	public float thresholdIncreasePerLevel; // 0x28
	[Tooltip("Saniyede havuzdan azalan voxel sayısı (Level 0 baseline).")]
	public float drainPerSecond; // 0x2C
	[Tooltip("Her seviye için drain hızı bu oranda artar (compound): drain(L) = drainPerSecond × (1 + drainIncreasePerLevel)^L.")]
	public float drainIncreasePerLevel; // 0x30
	[Tooltip("Voxel patlamadığı bu süre kadar geçtiğinde drain devreye girer (saniye).")]
	public float drainGracePeriod; // 0x34
	[Tooltip("Dock'ta combo tetiklenince fire particle bu süre boyunca yanmaya devam eder (saniye).")]
	public float dockFireDuration; // 0x38

	// Methods

	// RVA: 0x100194C Offset: 0x100194C VA: 0x100194C
	public float GetThreshold(int level) { }

	// RVA: 0x1001980 Offset: 0x1001980 VA: 0x1001980
	public void .ctor() { }
}

// Namespace: Rotatelab.Scripts