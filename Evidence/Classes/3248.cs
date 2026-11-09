public class BlasterData // TypeDefIndex: 3248
{
	// Fields
	public int id; // 0x8
	public BlasterType Type; // 0xC
	public ColorType color; // 0x10
	public ColorType secondaryColor; // 0x14
	public int bulletCount; // 0x18
	public bool isHidden; // 0x1C
	public int iceHp; // 0x20
	public bool isPilot; // 0x24
	public bool isChained; // 0x25
	public bool hasTrap; // 0x26
	public bool isTrapOpen; // 0x27
	public bool hasColorBarrel; // 0x28
	public int colorBarrelHp; // 0x2C
	public ColorType colorBarrelColor; // 0x30
	[SerializeReference]
	public List<BlasterData> ConnectedBlasters; // 0x34
	[SerializeReference]
	public List<BlasterData> ChainedBlasters; // 0x38
	[SerializeReference]
	public List<BlasterData> InnerBlasters; // 0x3C

	// Methods

	// RVA: 0x1070E88 Offset: 0x1070E88 VA: 0x1070E88
	public void .ctor() { }
}

// Namespace: Rotatelab