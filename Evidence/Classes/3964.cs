public class AutoPlayerBot : MonoBehaviour // TypeDefIndex: 3964
{
	// Fields
	[Tooltip("1 = always pick the best move (most-abundant outer-layer color); 0 = random legal move. Lower it to make the bot play badly for pass/fail variety.")]
	[SerializeField]
	private float greediness; // 0x10
	[Tooltip("Max blasters the bot may take from the SAME queue column in a row before it must switch columns (when another column is available), so the finger doesn't keep hammering one slot. 0 = no limit.")]
	[Min(0)]
	[SerializeField]
	private int maxSameColumnInARow; // 0x14
	[Tooltip("Minimum pause between blaster placements. The bot fills empty dock slots (up to all five) at this cadence and waits when the docks are full, so keep it human-paced — flooding the board with simultaneous fire stresses the engine. 0 = as fast as the game allows. During recording this is scaled by the hand-speed multiplier, so a faster hand also shortens this wait proportionally.")]
	[Min(0)]
	[SerializeField]
	private float moveDelaySeconds; // 0x18
	[Tooltip("On win, load the next level and keep playing.")]
	[SerializeField]
	private bool autoAdvanceOnWin; // 0x1C
	[Tooltip("On fail, reload the same level and try again.")]
	[SerializeField]
	private bool retryOnFail; // 0x1D
	[Tooltip("Delay before auto-advancing / retrying, so the win/fail moment stays on camera.")]
	[Min(0)]
	[SerializeField]
	private float flowDelaySeconds; // 0x20
	[Tooltip("Range mode (active when Range Level Count > 0): on start the bot jumps to this 1-based level and plays a fixed run from here. Tip: launch 'Play From Level…' at this same number to avoid a brief initial-level flash before the jump.")]
	[Min(1)]
	[SerializeField]
	private int rangeStartLevel; // 0x24
	[Tooltip("How many consecutive levels to auto-play, advancing to the NEXT level on BOTH win and fail, then stop. Overrides autoAdvanceOnWin / retryOnFail while > 0. 0 = range mode off.")]
	[Min(0)]
	[SerializeField]
	private int rangeLevelCount; // 0x28
	[Tooltip("On-screen finger cursor. Glides to each tap target and shows a pressed frame at the moment of placement, so recorded sessions read like a real player. Wired to the FingerCanvas child of this prefab.")]
	[SerializeField]
	private BotClickHand clickHand; // 0x2C
	private const float PollSeconds = 0.1;
	private readonly List<BlasterController> _candidates; // 0x30
	private readonly List<int> _candidateColumns; // 0x34
	private readonly List<int> _bestTies; // 0x38
	private int[] _colorCounts; // 0x3C
	private Coroutine _loop; // 0x40
	private bool _terminalReached; // 0x44
	private int _moveCount; // 0x48
	private int _lastColumn; // 0x4C
	private int _sameColumnCount; // 0x50
	private int _chosenColumn; // 0x54
	private int _rangePlayed; // 0x58

	// Methods

	// RVA: 0xFF1898 Offset: 0xFF1898 VA: 0xFF1898
	protected void Awake() { }

	// RVA: 0xFF1988 Offset: 0xFF1988 VA: 0xFF1988
	protected void OnEnable() { }

	// RVA: 0xFF1E88 Offset: 0xFF1E88 VA: 0xFF1E88
	protected void OnDisable() { }

	// RVA: 0xFF20D0 Offset: 0xFF20D0 VA: 0xFF20D0
	private void OnLevelStarted() { }

	// RVA: 0xFF1E20 Offset: 0xFF1E20 VA: 0xFF1E20
	private void BeginLoop() { }

	// RVA: 0xFF207C Offset: 0xFF207C VA: 0xFF207C
	private void StopLoop() { }

	// RVA: 0xFF20FC Offset: 0xFF20FC VA: 0xFF20FC
	private IEnumerator PlayLoop() { }

	// RVA: 0xFF21B8 Offset: 0xFF21B8 VA: 0xFF21B8
	private bool IsReadyToTap() { }

	// RVA: 0xFF2304 Offset: 0xFF2304 VA: 0xFF2304
	private BlasterController ChooseBlaster() { }

	// RVA: 0xFF2750 Offset: 0xFF2750 VA: 0xFF2750
	private void DropOverusedColumn() { }

	// RVA: 0xFF2BC4 Offset: 0xFF2BC4 VA: 0xFF2BC4
	private void RegisterColumnUse(int column) { }

	// RVA: 0xFF28E4 Offset: 0xFF28E4 VA: 0xFF28E4
	private int PickHighestScoringIndex() { }

	// RVA: 0xFF2BEC Offset: 0xFF2BEC VA: 0xFF2BEC
	private void CountOuterColors() { }

	// RVA: 0xFF2D3C Offset: 0xFF2D3C VA: 0xFF2D3C
	private int ColorCount(ColorType color) { }

	// RVA: 0xFF2DA0 Offset: 0xFF2DA0 VA: 0xFF2DA0
	private void OnLevelSucceeded() { }

	// RVA: 0xFF2EE8 Offset: 0xFF2EE8 VA: 0xFF2EE8
	private void OnLevelFailed() { }

	// RVA: 0xFF2E50 Offset: 0xFF2E50 VA: 0xFF2E50
	private void HandleTerminal(string outcome, bool reloadOnFlow, int reloadIndex) { }

	// RVA: 0xFF3108 Offset: 0xFF3108 VA: 0xFF3108
	private void AdvanceRange() { }

	// RVA: 0xFF3228 Offset: 0xFF3228 VA: 0xFF3228
	private IEnumerator LoadAfterDelay(int zeroBasedIndex) { }

	// RVA: 0xFF2FC0 Offset: 0xFF2FC0 VA: 0xFF2FC0
	private void Report(string outcome) { }

	// RVA: 0xFF32C4 Offset: 0xFF32C4 VA: 0xFF32C4
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]