public class BulletFlowTracker : SingletonBehaviour<BulletFlowTracker> // TypeDefIndex: 3995
{
	// Fields
	private bool _isInitialized; // 0x10
	private float _bulletsAtLastFire; // 0x14
	private float _lastFireTime; // 0x18
	private bool _isGamePaused; // 0x1C
	private bool _isWinSequenceStarted; // 0x1D
	private bool _isFrozen; // 0x1E
	private float _freezeStartTime; // 0x20

	// Properties
	public float Bullets { get; }
	private float CurrentTime { get; }
	private int MaxBulletCount { get; }
	private float DrainPerSecond { get; }
	private float DrainGracePeriod { get; }

	// Methods

	// RVA: 0xFF94B0 Offset: 0xFF94B0 VA: 0xFF94B0
	public float get_Bullets() { }

	// RVA: 0xFF9564 Offset: 0xFF9564 VA: 0xFF9564
	private float get_CurrentTime() { }

	// RVA: 0xFF957C Offset: 0xFF957C VA: 0xFF957C
	private int get_MaxBulletCount() { }

	// RVA: 0xFF95E4 Offset: 0xFF95E4 VA: 0xFF95E4
	private float get_DrainPerSecond() { }

	// RVA: 0xFF964C Offset: 0xFF964C VA: 0xFF964C
	private float get_DrainGracePeriod() { }

	// RVA: 0xFF96B4 Offset: 0xFF96B4 VA: 0xFF96B4
	protected void OnEnable() { }

	// RVA: 0xFF9984 Offset: 0xFF9984 VA: 0xFF9984
	protected void OnDisable() { }

	// RVA: 0xFF9C54 Offset: 0xFF9C54 VA: 0xFF9C54
	public void Init(float maxBulletCount) { }

	// RVA: 0xFF9C60 Offset: 0xFF9C60 VA: 0xFF9C60
	private void OnBulletFiredHandler() { }

	// RVA: 0xFF94B4 Offset: 0xFF94B4 VA: 0xFF94B4
	private float GetDrainedBullets() { }

	// RVA: 0xFF9CC0 Offset: 0xFF9CC0 VA: 0xFF9CC0
	public void ResetState() { }

	// RVA: 0xFF9CF8 Offset: 0xFF9CF8 VA: 0xFF9CF8
	private void OnGamePauseStateChanged(bool isPaused) { }

	// RVA: 0xFF9D88 Offset: 0xFF9D88 VA: 0xFF9D88
	private void OnWinSequenceStartedHandler() { }

	// RVA: 0xFF9DD0 Offset: 0xFF9DD0 VA: 0xFF9DD0
	private void OnLevelRestartedHandler() { }

	// RVA: 0xFF9D00 Offset: 0xFF9D00 VA: 0xFF9D00
	private void UpdateFrozenState() { }

	// RVA: 0xFF9E10 Offset: 0xFF9E10 VA: 0xFF9E10
	public void .ctor() { }
}

// Namespace: Rotatelab.Scripts