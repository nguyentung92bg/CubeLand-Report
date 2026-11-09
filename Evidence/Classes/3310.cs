public static class SaveManager // TypeDefIndex: 3310
{
	// Methods

	// RVA: 0x107F178 Offset: 0x107F178 VA: 0x107F178
	public static void SetBool(string key, bool value) { }

	// RVA: 0x107F0D4 Offset: 0x107F0D4 VA: 0x107F0D4
	public static bool GetBool(string key, bool defaultValue = False) { }

	// RVA: 0x1078F38 Offset: 0x1078F38 VA: 0x1078F38
	public static void SetInt(string key, int value) { }

	// RVA: 0x1078ED8 Offset: 0x1078ED8 VA: 0x1078ED8
	public static int GetInt(string key, int defaultValue = 0) { }

	// RVA: 0x1082CE0 Offset: 0x1082CE0 VA: 0x1082CE0
	public static long GetLong(string key, long defaultValue = 0) { }

	// RVA: 0x1082D1C Offset: 0x1082D1C VA: 0x1082D1C
	public static void SetFloat(string key, float value) { }

	// RVA: 0x1082D24 Offset: 0x1082D24 VA: 0x1082D24
	public static float GetFloat(string key, float defaultValue = 0) { }

	// RVA: 0x10791B8 Offset: 0x10791B8 VA: 0x10791B8
	public static void SetString(string key, string value) { }

	// RVA: 0x10790B0 Offset: 0x10790B0 VA: 0x10790B0
	public static string GetString(string key, string defaultValue = "") { }

	// RVA: 0x1082D2C Offset: 0x1082D2C VA: 0x1082D2C
	public static void SetDateTime(string key, DateTime value) { }

	// RVA: 0x1082E14 Offset: 0x1082E14 VA: 0x1082E14
	public static DateTime GetDateTime(string key, DateTime defaultValue) { }

	// RVA: 0x1082F50 Offset: 0x1082F50 VA: 0x1082F50
	public static void DeleteKey(string key, bool saveChanges = False) { }

	// RVA: 0x1082F48 Offset: 0x1082F48 VA: 0x1082F48
	public static bool HasKey(string key) { }

	// RVA: 0x1082F74 Offset: 0x1082F74 VA: 0x1082F74
	public static void Save() { }
}

// Namespace: Rotatelab.Save