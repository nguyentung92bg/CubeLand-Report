/* IL2CPP: Rotatelab.OfflinePlayController$$OnFocusChanged
void Rotatelab_OfflinePlayController__OnFocusChanged (bool hasFocus, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.OfflinePlayController$$OnFocusChanged
   void Rotatelab_OfflinePlayController__OnFocusChanged (bool hasFocus, const MethodInfo* method);
    */

void Rotatelab_OfflinePlayController__OnFocusChanged_fb7d80(int param_1)

{
  undefined1 uStack_9;
  
  uStack_9 = 0;
  if (param_1 != 0) {
    uStack_9 = Rotatelab_OfflinePlayController__ShowDialogWhileOfflineDelayedAsync_fb7db4();
    Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_9,0);
  }
  return;
}

