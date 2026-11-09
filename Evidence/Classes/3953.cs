public class GetLegacyPlayerDataResponse // TypeDefIndex: 3953
{
	// Fields
	[CompilerGenerated]
	private string <LivesInfiniteDurationProxy>k__BackingField; // 0x8
	[CompilerGenerated]
	private double <AdRevenue>k__BackingField; // 0x10
	[CompilerGenerated]
	private double <IapRevenue>k__BackingField; // 0x18
	[CompilerGenerated]
	private Dictionary<string, string> <EconomyProxy>k__BackingField; // 0x20
	[CompilerGenerated]
	private Dictionary<string, string> <InventoryProxy>k__BackingField; // 0x24
	[CompilerGenerated]
	private Dictionary<string, string> <StatsProxy>k__BackingField; // 0x28

	// Properties
	[DataMember(Name = "lives_infinite_duration")]
	[Preserve]
	public string LivesInfiniteDurationProxy { get; set; }
	[IgnoreDataMember]
	public long LivesInfiniteDuration { get; }
	[DataMember(Name = "ad_revenue")]
	[Preserve]
	public double AdRevenue { get; set; }
	[DataMember(Name = "iap_revenue")]
	[Preserve]
	public double IapRevenue { get; set; }
	[DataMember(Name = "economy")]
	[Preserve]
	public Dictionary<string, string> EconomyProxy { get; set; }
	[IgnoreDataMember]
	public IDictionary<string, string> Economy { get; }
	[DataMember(Name = "inventory")]
	[Preserve]
	public Dictionary<string, string> InventoryProxy { get; set; }
	[IgnoreDataMember]
	public IDictionary<string, string> Inventory { get; }
	[DataMember(Name = "stats")]
	[Preserve]
	public Dictionary<string, string> StatsProxy { get; set; }
	[IgnoreDataMember]
	public IDictionary<string, string> Stats { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xFF0C50 Offset: 0xFF0C50 VA: 0xFF0C50
	public string get_LivesInfiniteDurationProxy() { }

	[CompilerGenerated]
	// RVA: 0xFF0C58 Offset: 0xFF0C58 VA: 0xFF0C58
	public void set_LivesInfiniteDurationProxy(string value) { }

	// RVA: 0xFF0C60 Offset: 0xFF0C60 VA: 0xFF0C60
	public long get_LivesInfiniteDuration() { }

	[CompilerGenerated]
	// RVA: 0xFF0CA4 Offset: 0xFF0CA4 VA: 0xFF0CA4
	public double get_AdRevenue() { }

	[CompilerGenerated]
	// RVA: 0xFF0CB0 Offset: 0xFF0CB0 VA: 0xFF0CB0
	public void set_AdRevenue(double value) { }

	[CompilerGenerated]
	// RVA: 0xFF0CC0 Offset: 0xFF0CC0 VA: 0xFF0CC0
	public double get_IapRevenue() { }

	[CompilerGenerated]
	// RVA: 0xFF0CCC Offset: 0xFF0CCC VA: 0xFF0CCC
	public void set_IapRevenue(double value) { }

	[CompilerGenerated]
	// RVA: 0xFF0CDC Offset: 0xFF0CDC VA: 0xFF0CDC
	public Dictionary<string, string> get_EconomyProxy() { }

	[CompilerGenerated]
	// RVA: 0xFF0CE4 Offset: 0xFF0CE4 VA: 0xFF0CE4
	public void set_EconomyProxy(Dictionary<string, string> value) { }

	// RVA: 0xFF0CEC Offset: 0xFF0CEC VA: 0xFF0CEC
	public IDictionary<string, string> get_Economy() { }

	[CompilerGenerated]
	// RVA: 0xFF0D7C Offset: 0xFF0D7C VA: 0xFF0D7C
	public Dictionary<string, string> get_InventoryProxy() { }

	[CompilerGenerated]
	// RVA: 0xFF0D84 Offset: 0xFF0D84 VA: 0xFF0D84
	public void set_InventoryProxy(Dictionary<string, string> value) { }

	// RVA: 0xFF0D8C Offset: 0xFF0D8C VA: 0xFF0D8C
	public IDictionary<string, string> get_Inventory() { }

	[CompilerGenerated]
	// RVA: 0xFF0E1C Offset: 0xFF0E1C VA: 0xFF0E1C
	public Dictionary<string, string> get_StatsProxy() { }

	[CompilerGenerated]
	// RVA: 0xFF0E24 Offset: 0xFF0E24 VA: 0xFF0E24
	public void set_StatsProxy(Dictionary<string, string> value) { }

	// RVA: 0xFF0E2C Offset: 0xFF0E2C VA: 0xFF0E2C
	public IDictionary<string, string> get_Stats() { }

	// RVA: 0xFF0EBC Offset: 0xFF0EBC VA: 0xFF0EBC
	public void .ctor() { }
}

// Namespace: Rotatelab.Networking.HiroServices
[Preserve]