/* IL2CPP: Rotatelab.Scripts.PilotBlasterController$$OnDestroy
void Rotatelab_Scripts_PilotBlasterController__OnDestroy (Rotatelab_Scripts_PilotBlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PilotBlasterController$$OnDestroy
   void Rotatelab_Scripts_PilotBlasterController__OnDestroy
   (Rotatelab_Scripts_PilotBlasterController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_PilotBlasterController__OnDestroy_1040b24(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x198) != 0) {
    DG_Tweening_TweenExtensions__Kill_1168b64(*(int *)(param_1 + 0x198),0,0);
  }
  PrimeTween_Sequence__Stop_2cf07bc(param_1 + 0x1a0,0);
  pcVar3 = (char *)(_UNK_010416cc + 0x1041660);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010416d0 + 0x1041674),0);
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010416d4 + 0x1041688) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694(param_1 + 200,0);
  PrimeTween_Tween__Stop_2ced694(param_1 + 0xd8,0);
  PrimeTween_Tween__Stop_2ced694(param_1 + 0xf8,0);
  pcVar3 = (char *)(_UNK_02cfd7a8 + 0x2cfd6a8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_02cfd7ac + 0x2cfd6bc),0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_02cfd7b0 + 0x2cfd6c8));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_02cfd7b4 + 0x2cfd6dc);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = PrimeTween_Tween__get_isAlive_2ce3e0c(param_1 + 0xe8);
  if (iVar1 != 0) {
    if (*(int *)(*piVar4 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = PrimeTween_Tween__TryManipulate_2ce3eb4(param_1 + 0xe8,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0xf0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    PrimeTween_TweenArray__get_Item_2cf4b68(*(int *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
    iVar1 = *(int *)(param_1 + 0xf0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(iVar1 + 0xc);
    iVar1 = *(int *)(*(int *)(iVar1 + 8) + 0x18);
    if (*(int *)(**(int **)(_UNK_02cfd7b8 + 0x2cfd780) + 0x74) == 0) {
      FUN_00ec3934();
    }
    *(uint *)(iVar1 + iVar2 * 0x40) = *(uint *)(iVar1 + iVar2 * 0x40) & 0xfffffeff;
  }
  return;
}

