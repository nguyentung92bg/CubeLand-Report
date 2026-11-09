/* IL2CPP: Rotatelab.Scripts.BlasterDockComboFeedback.<>c$$<TryActivate>b__13_0
void Rotatelab_Scripts_BlasterDockComboFeedback___c___TryActivate_b__13_0 (Rotatelab_Scripts_BlasterDockComboFeedback___c_o* __this, Rotatelab_Scripts_BlasterDockComboFeedback_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterDockComboFeedback.<>c$$<TryActivate>b__13_0
   void Rotatelab_Scripts_BlasterDockComboFeedback___c___TryActivate_b__13_0
   (Rotatelab_Scripts_BlasterDockComboFeedback___c_o* __this,
   Rotatelab_Scripts_BlasterDockComboFeedback_o* this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterDockComboFeedback___c___TryActivate_b__13_0_100c56c
               (undefined4 param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar1 = (char *)(_UNK_0101c124 + 0x101c0bc);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c128 + 0x101c0d0));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0101c12c + 0x101c0e8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694(param_2 + 0x30,0);
  if (-1 < *(int *)(param_2 + 0x28)) {
    Rotatelab_Scripts_BlasterDockComboFeedback__FadeOutLevel_100c204(param_2);
    *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  }
  return;
}

