public struct GridCell // TypeDefIndex: 3711
{
	// Fields
	public BaseTargetableController Targetable; // 0x0
	public Component Obstacle; // 0x4
	public bool IsVisible; // 0x8

	// Methods

	// RVA: 0x1105F80 Offset: 0x1105F80 VA: 0x1105F80
	public void AddObject(Component obj) { }

	// RVA: 0x1106284 Offset: 0x1106284 VA: 0x1106284
	public void RemoveObject(Component obj) { }

	// RVA: -1 Offset: -1
	public T GetContent<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1492A2C Offset: 0x1492A2C VA: 0x1492A2C
	|-GridCell.GetContent<object>
	*/
}

// Namespace: Rotatelab.Grid
[BurstCompile]