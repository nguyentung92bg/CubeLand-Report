public static class ScrollViewFocusFunctions // TypeDefIndex: 3299
{
	// Methods

	[Extension]
	// RVA: 0x107CE10 Offset: 0x107CE10 VA: 0x107CE10
	public static Vector2 CalculateFocusedScrollPosition(ScrollRect scrollView, Vector2 focusPoint) { }

	[Extension]
	// RVA: 0x107D058 Offset: 0x107D058 VA: 0x107D058
	public static Vector2 CalculateFocusedScrollPosition(ScrollRect scrollView, RectTransform item) { }

	[Extension]
	// RVA: 0x107D224 Offset: 0x107D224 VA: 0x107D224
	public static void FocusAtPoint(ScrollRect scrollView, Vector2 focusPoint) { }

	[Extension]
	// RVA: 0x107D274 Offset: 0x107D274 VA: 0x107D274
	public static void FocusOnItem(ScrollRect scrollView, RectTransform item) { }

	[Extension]
	// RVA: 0x107D2BC Offset: 0x107D2BC VA: 0x107D2BC
	private static IEnumerator LerpToScrollPositionCoroutine(ScrollRect scrollView, Vector2 targetNormalizedPos, float speed) { }

	[Extension]
	// RVA: 0x107D370 Offset: 0x107D370 VA: 0x107D370
	public static IEnumerator FocusAtPointCoroutine(ScrollRect scrollView, Vector2 focusPoint, float speed) { }

	[Extension]
	// RVA: 0x107D424 Offset: 0x107D424 VA: 0x107D424
	public static IEnumerator FocusOnItemCoroutine(ScrollRect scrollView, RectTransform item, float speed) { }
}

// Namespace: Rotatelab