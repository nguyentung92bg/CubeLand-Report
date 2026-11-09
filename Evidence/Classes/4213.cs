public sealed class LightBackgroundVoxelReviewLayout : MonoBehaviour // TypeDefIndex: 4213
{
	// Fields
	private const int CubeSize = 3;
	[SerializeField]
	private Transform layoutRoot; // 0x10
	[SerializeField]
	private Vector3 boardOffset; // 0x14
	[SerializeField]
	private Vector3 boardEulerAngles; // 0x20
	[SerializeField]
	[Min(1)]
	private int groupColumns; // 0x2C
	[SerializeField]
	private Vector2 groupSpacing; // 0x30
	[FormerlySerializedAs("defaultColorCubeEulerAngles")]
	[SerializeField]
	private Vector3 allColorCubesLocalEulerAngles; // 0x38
	[SerializeField]
	[Min(0.01)]
	private float allColorCubesLocalScale; // 0x44
	[SerializeField]
	[Min(0.01)]
	private float voxelSpacing; // 0x48

	// Methods

	// RVA: 0x106D228 Offset: 0x106D228 VA: 0x106D228
	private void OnValidate() { }

	[ContextMenu("Refresh Review Layout")]
	// RVA: 0x106D29C Offset: 0x106D29C VA: 0x106D29C
	public void RefreshLayout() { }

	// RVA: 0x106D694 Offset: 0x106D694 VA: 0x106D694
	private void LayoutVoxels(Transform colorGroup) { }

	// RVA: 0x106D838 Offset: 0x106D838 VA: 0x106D838
	public void .ctor() { }
}

// Namespace: EpicToonFX