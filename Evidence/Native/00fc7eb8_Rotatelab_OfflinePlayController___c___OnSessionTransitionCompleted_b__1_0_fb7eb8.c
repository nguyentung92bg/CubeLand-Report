/* IL2CPP: Rotatelab.OfflinePlayController.<>c$$<OnSessionTransitionCompleted>b__1_0
void Rotatelab_OfflinePlayController___c___OnSessionTransitionCompleted_b__1_0 (Rotatelab_OfflinePlayController___c_o* __this, Il2CppObject* __, Hiro_NetworkMonitorEventArgs_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.OfflinePlayController.<>c$$<OnSessionTransitionCompleted>b__1_0
   void Rotatelab_OfflinePlayController___c___OnSessionTransitionCompleted_b__1_0
   (Rotatelab_OfflinePlayController___c_o* __this, Il2CppObject* __, Hiro_NetworkMonitorEventArgs_o*
   e, const MethodInfo* method); */

void Rotatelab_OfflinePlayController___c___OnSessionTransitionCompleted_b__1_0_fb7eb8
               (undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 uStack_9;
  
  uStack_9 = 0;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(param_3 + 0xc) == '\0') {
    uStack_9 = Rotatelab_OfflinePlayController__ShowDialogWhileOfflineAsync_fb7cf8();
    Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_9,0);
  }
  return;
}

