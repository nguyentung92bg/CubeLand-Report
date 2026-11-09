public class SeasonPassSo : ScriptableObject // TypeDefIndex: 3391
{
	// Fields
	public List<SeasonPassSo.SeasonPassCheckpointData> seasonPassCheckpoints; // 0xC
	public List<SeasonPassSo.SeasonRewardType> seasonRewardTypes; // 0x10
	public int bonusBankTotalTargetReward; // 0x14
	public int bonusBankSingleTargetReward; // 0x18
	public int bonusBankSingleTargetKey; // 0x1C
	[Tooltip("Each line refers a month")]
	public List<string> seasonNames; // 0x20

	// Methods

	// RVA: 0x10A2000 Offset: 0x10A2000 VA: 0x10A2000
	private Color GreenColor() { }

	// RVA: 0x10A2020 Offset: 0x10A2020 VA: 0x10A2020
	private void OnValidate() { }

	// RVA: 0x10A22A8 Offset: 0x10A22A8 VA: 0x10A22A8
	public void FillRewardIcons() { }

	// RVA: 0x10A2798 Offset: 0x10A2798 VA: 0x10A2798
	public SeasonPassSo.SeasonRewardType GetRewardType(CurrencyType currencyType) { }

	// RVA: 0x10A2898 Offset: 0x10A2898 VA: 0x10A2898
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10A28A0 Offset: 0x10A28A0 VA: 0x10A28A0
	private void <OnValidate>b__7_0(SeasonPassSo.SeasonReward i) { }

	[CompilerGenerated]
	// RVA: 0x10A28CC Offset: 0x10A28CC VA: 0x10A28CC
	private void <OnValidate>b__7_1(SeasonPassSo.SeasonReward i) { }
}

// Namespace: 
[Serializable]