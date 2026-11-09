public class SoLevelData : ScriptableObject, ISerializationCallbackReceiver // TypeDefIndex: 3234
{
	// Fields
	public int Version; // 0xC
	public string contentHash; // 0x10
	public Texture2D Icon; // 0x14
	public int dockCount; // 0x18
	public Vector3 rootPosition; // 0x1C
	public Vector3 rootLocalEulerAngles; // 0x28
	public Vector3 voxelizedObjectCenterPosition; // 0x34
	public Vector3 voxelizedObjectShadowPosition; // 0x40
	public float voxelizedObjectScale; // 0x4C
	public LevelDifficulty difficulty; // 0x50
	public bool shouldLoop; // 0x54
	public bool shouldOfferMeteorShower; // 0x55
	public LayerData[] LayerData; // 0x58
	public LargeVoxelData[] LargeVoxelData; // 0x5C
	public DoubleLargeVoxelData[] DoubleLargeVoxelData; // 0x60
	public IceWrapperData[] IceWrapperData; // 0x64
	public GiftWrapperData[] GiftWrapperData; // 0x68
	public PlaypenData[] PlaypenData; // 0x6C
	public ShrinkingCoverData[] ShrinkingCoverData; // 0x70
	public BombData[] BombData; // 0x74
	public ColorBoxData[] ColorBoxData; // 0x78
	public ShieldData[] ShieldData; // 0x7C
	public FlyingPiggyData[] FlyingPiggyData; // 0x80
	public HiddenChestData[] HiddenChestData; // 0x84
	public BlasterData[][] BlasterData; // 0x88
	public int[] SolutionColumns; // 0x8C
	[SerializeField]
	private SoLevelData.PlaceableColumn[] serializedPlaceableColumn; // 0x90

	// Methods

	// RVA: 0xFDD228 Offset: 0xFDD228 VA: 0xFDD228 Slot: 4
	private void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize() { }

	// RVA: 0xFDD330 Offset: 0xFDD330 VA: 0xFDD330 Slot: 5
	private void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize() { }

	// RVA: 0xFDD44C Offset: 0xFDD44C VA: 0xFDD44C
	public SoLevelData ParseJson(string json) { }

	// RVA: 0xFDD74C Offset: 0xFDD74C VA: 0xFDD74C
	private void ParseLayerData(JArray root) { }

	// RVA: 0xFDDD8C Offset: 0xFDDD8C VA: 0xFDDD8C
	private void ParseSpecialObjects(JArray root) { }

	// RVA: 0xFE2E5C Offset: 0xFE2E5C VA: 0xFE2E5C
	private static int[] ParseSolutionColumns(JArray root, int columnCount) { }

	// RVA: 0xFE0B14 Offset: 0xFE0B14 VA: 0xFE0B14
	public void ParseBlasterData(JObject root) { }

	// RVA: 0xFE30CC Offset: 0xFE30CC VA: 0xFE30CC
	private BlasterData ParseSingleBlaster(JObject entry) { }

	// RVA: 0xFE23A8 Offset: 0xFE23A8 VA: 0xFE23A8
	private ColorType ParseColor(JToken token, ColorType defaultValue = 0) { }

	// RVA: 0xFE2D24 Offset: 0xFE2D24 VA: 0xFE2D24
	private Vector3 ParseVector3(JToken token, Vector3 defaultValue) { }

	// RVA: 0xFE3EE4 Offset: 0xFE3EE4 VA: 0xFE3EE4
	private Vector3Int ParseVector3Int(JToken token, Vector3Int defaultValue) { }

	// RVA: 0xFE2468 Offset: 0xFE2468 VA: 0xFE2468
	private Vector3Int[] ParseVoxelPositions(JArray array) { }

	// RVA: 0xFE2C24 Offset: 0xFE2C24 VA: 0xFE2C24
	private ColorType[] ParsePlaypenScrewColors(JArray array) { }

	// RVA: 0xFE401C Offset: 0xFE401C VA: 0xFE401C
	public bool HasIvyLock() { }

	// RVA: 0xFE40BC Offset: 0xFE40BC VA: 0xFE40BC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0xFE2584 Offset: 0xFE2584 VA: 0xFE2584
	private Bounds <ParseSpecialObjects>g__ParseBounds|32_0(JToken token) { }

	[CompilerGenerated]
	// RVA: 0xFE26CC Offset: 0xFE26CC VA: 0xFE26CC
	private HpTextData[] <ParseSpecialObjects>g__ParseHpTextData|32_1(JToken token) { }

	[CompilerGenerated]
	// RVA: 0xFE29F0 Offset: 0xFE29F0 VA: 0xFE29F0
	private LargeVoxelData <ParseSpecialObjects>g__ParseLargeGroup|32_2(JToken token) { }
}

// Namespace: Rotatelab
[Serializable]