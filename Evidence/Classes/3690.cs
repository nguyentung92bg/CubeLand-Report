public class BulletPool : ObjectPool<BulletController> // TypeDefIndex: 3690
{
	// Fields
	public readonly List<BulletController> AliveBullets; // 0x28

	// Methods

	// RVA: 0x1102C08 Offset: 0x1102C08 VA: 0x1102C08
	protected void OnEnable() { }

	// RVA: 0x1102CEC Offset: 0x1102CEC VA: 0x1102CEC
	protected void OnDisable() { }

	// RVA: 0x1102DD0 Offset: 0x1102DD0 VA: 0x1102DD0
	private void OnWinSequenceStartedHandler() { }

	// RVA: 0x1102FA4 Offset: 0x1102FA4 VA: 0x1102FA4 Slot: 5
	protected override void OnInstanceCreated(BulletController instance) { }

	// RVA: 0x110301C Offset: 0x110301C VA: 0x110301C Slot: 6
	protected override void OnInstanceFetched(BulletController instance) { }

	// RVA: 0x1103108 Offset: 0x1103108 VA: 0x1103108 Slot: 7
	protected override void OnInstanceRecycled(BulletController instance) { }

	// RVA: 0x11031C4 Offset: 0x11031C4 VA: 0x11031C4
	public void ClearBulletsInScene() { }

	// RVA: 0x1103288 Offset: 0x1103288 VA: 0x1103288
	public void .ctor() { }
}

// Namespace: Rotatelab.Pool