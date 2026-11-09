public struct FindVisibleGridCellsJob : IJobParallelFor // TypeDefIndex: 3710
{
	// Fields
	[NativeDisableParallelForRestriction]
	public NativeArray<int> Grid; // 0x0
	public float3 GridMinPosition; // 0xC
	public int3 GridSize; // 0x18
	public float3 RayDirection; // 0x24
	public float3 InverseRayDirection; // 0x30
	public float3 ViewportBottomLeft; // 0x3C
	public float3 HorizontalStep; // 0x48
	public float3 VerticalStep; // 0x54
	public int HorizontalStepCount; // 0x60

	// Methods

	// RVA: 0x1106018 Offset: 0x1106018 VA: 0x1106018 Slot: 4
	public void Execute(int index) { }
}

// Namespace: Rotatelab.Grid