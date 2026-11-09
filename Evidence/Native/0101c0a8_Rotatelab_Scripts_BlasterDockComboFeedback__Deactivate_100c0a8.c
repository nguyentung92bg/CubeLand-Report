/* IL2CPP: Rotatelab.Scripts.BlasterDockComboFeedback$$Deactivate
void Rotatelab_Scripts_BlasterDockComboFeedback__Deactivate (Rotatelab_Scripts_BlasterDockComboFeedback_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterDockComboFeedback$$Deactivate
   void Rotatelab_Scripts_BlasterDockComboFeedback__Deactivate
   (Rotatelab_Scripts_BlasterDockComboFeedback_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterDockComboFeedback__Deactivate_100c0a8(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0101c124 + 0x101c0bc);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c128 + 0x101c0d0));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0101c12c + 0x101c0e8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694(param_1 + 0x30,0);
  if (-1 < *(int *)(param_1 + 0x28)) {
    Rotatelab_Scripts_BlasterDockComboFeedback__FadeOutLevel_100c204(param_1);
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  }
  return;
}

