public struct RaycastJob : IJob // TypeDefIndex: 3716
{
	// Fields
	[ReadOnly]
	[NativeDisableContainerSafetyRestriction]
	public NativeArray<int> Grid; // 0x0
	[WriteOnly]
	public NativeArray<int4> HitCell; // 0xC
	public float3 RayOrigin; // 0x18
	public float3 GridMinPosition; // 0x24
	public int3 GridSize; // 0x30
	public float3 RayDirection; // 0x3C

	// Methods

	// RVA: 0x110A094 Offset: 0x110A094 VA: 0x110A094 Slot: 4
	public void Execute() { }
}

// Namespace: Rotatelab.Debugging