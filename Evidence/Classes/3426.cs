public class BotNameGeneratorSo : ScriptableObject // TypeDefIndex: 3426
{
	// Fields
	[SerializeField]
	private string[] maleNames; // 0xC
	[SerializeField]
	private string[] femaleNames; // 0x10
	[SerializeField]
	private string[] nicknames; // 0x14
	[SerializeField]
	private BotNameGeneratorSo.NicknameFormat[] nicknameFormats; // 0x18

	// Methods

	// RVA: 0x10B152C Offset: 0x10B152C VA: 0x10B152C
	public string[] Generate(int maleCount, int femaleCount, int nicknameCount) { }

	// RVA: 0x10B1A20 Offset: 0x10B1A20 VA: 0x10B1A20
	public void .ctor() { }
}

// Namespace: Rotatelab.Leaderboard
[Serializable]