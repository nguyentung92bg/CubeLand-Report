private struct RoundedBoxMeshGenerator.CacheKey : IEquatable<RoundedBoxMeshGenerator.CacheKey> // TypeDefIndex: 4058
{
	// Fields
	private readonly int _width; // 0x0
	private readonly int _height; // 0x4
	private readonly int _depth; // 0x8
	private readonly int _radius; // 0xC
	private readonly int _segments; // 0x10

	// Methods

	// RVA: 0x101B310 Offset: 0x101B310 VA: 0x101B310
	public void .ctor(Vector3 size, float radius, int segments) { }

	// RVA: 0x101D1D8 Offset: 0x101D1D8 VA: 0x101D1D8 Slot: 4
	public bool Equals(RoundedBoxMeshGenerator.CacheKey other) { }

	// RVA: 0x101D230 Offset: 0x101D230 VA: 0x101D230 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x101D2F8 Offset: 0x101D2F8 VA: 0x101D2F8 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x101D0B0 Offset: 0x101D0B0 VA: 0x101D0B0
	private static int Quantize(float value) { }
}

// Namespace: Rotatelab.Scripts