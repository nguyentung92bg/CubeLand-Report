/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$RemoveCrossedZLayersFromGrid
void Rotatelab_Scripts_ShrinkingCoverController__RemoveCrossedZLayersFromGrid (Rotatelab_Scripts_ShrinkingCoverController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$RemoveCrossedZLayersFromGrid
   void Rotatelab_Scripts_ShrinkingCoverController__RemoveCrossedZLayersFromGrid
   (Rotatelab_Scripts_ShrinkingCoverController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ShrinkingCoverController__RemoveCrossedZLayersFromGrid_10522b4(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0106239c + 0x10622c8);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010623a0 + 0x10622dc));
    *pcVar1 = '\x01';
  }
  while( true ) {
    if (*(int *)(param_1 + 0x94) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((*(int *)(*(int *)(param_1 + 0x94) + 0xc) < 2) ||
       (*(float *)(param_1 + 0x70) < *(float *)(param_1 + 0x88))) break;
    Rotatelab_Scripts_ShrinkingCoverController__UnoccupyNextRow_1052050(param_1,0);
    *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x88) + 20.0;
  }
  while( true ) {
    if (*(int *)(param_1 + 0x94) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x94) + 0xc) < 2) break;
    if ((*(float *)(param_1 + 0x80) < *(float *)(param_1 + 0x8c)) &&
       (_UNK_01062398 <= *(float *)(param_1 + 0x8c) - *(float *)(param_1 + 0x80))) {
      return;
    }
    Rotatelab_Scripts_ShrinkingCoverController__UnoccupyNextRow_1052050(param_1,0);
    *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x8c) + 2.0;
  }
  return;
}

