public struct GridJobHelpers // TypeDefIndex: 3712
{
	// Methods

	// RVA: 0x11062A8 Offset: 0x11062A8 VA: 0x11062A8
	public static bool InitializeDDAData(in float3 gridMinPosition, in int3 gridSize, in float3 rayOrigin, in float3 rayDirection, in float3 inverseRayDirection, out int3 currentCell, out int3 step, out float3 tDelta, out float3 tMax) { }

	// RVA: 0x1106858 Offset: 0x1106858 VA: 0x1106858
	public static bool ExecuteDDAStep(ref float3 tMax, in float3 tDelta, ref int3 currentCell, in int3 step, in int3 gridSize) { }

	// RVA: 0x1106940 Offset: 0x1106940 VA: 0x1106940
	public static int GetFlattenedGridCellIndex(in int3 cell, in int3 gridSize) { }
}

// Namespace: Rotatelab.Grid
[RequireComponent(typeof(GridVisibilityController))]