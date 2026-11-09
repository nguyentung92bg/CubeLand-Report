/* IL2CPP: Rotatelab.Boosters.MagicWand3DController$$UpdateAnimationState
void Rotatelab_Boosters_MagicWand3DController__UpdateAnimationState (Rotatelab_Boosters_MagicWand3DController_o* __this, int32_t newState, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.MagicWand3DController$$UpdateAnimationState
   void Rotatelab_Boosters_MagicWand3DController__UpdateAnimationState
   (Rotatelab_Boosters_MagicWand3DController_o* __this, int32_t newState, const MethodInfo* method);
    */

void Rotatelab_Boosters_MagicWand3DController__UpdateAnimationState_11312b0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01141374 + 0x11412cc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01141378 + 0x11412e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114137c + 0x11412ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01141380 + 0x11412f8));
    *pcVar3 = '\x01';
  }
  if (param_2 == 2) {
    iVar1 = *(int *)(param_1 + 0x18);
    puVar2 = *(undefined4 **)(_UNK_0114138c + 0x1141348);
  }
  else if (param_2 == 1) {
    iVar1 = *(int *)(param_1 + 0x18);
    puVar2 = *(undefined4 **)(_UNK_01141388 + 0x1141338);
  }
  else {
    if (param_2 != 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x18);
    puVar2 = *(undefined4 **)(_UNK_01141384 + 0x1141328);
  }
  if (iVar1 != 0) {
    UnityEngine_Animator__Play_35915ac(iVar1,*puVar2,0,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

