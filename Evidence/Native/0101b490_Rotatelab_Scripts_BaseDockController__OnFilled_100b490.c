/* IL2CPP: Rotatelab.Scripts.BaseDockController$$OnFilled
void Rotatelab_Scripts_BaseDockController__OnFilled (Rotatelab_Scripts_BaseDockController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BaseDockController$$OnFilled
   void Rotatelab_Scripts_BaseDockController__OnFilled (Rotatelab_Scripts_BaseDockController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_BaseDockController__OnFilled_100b490(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0101b51c + 0x101b4a4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b520 + 0x101b4b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b524 + 0x101b4c4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0101b528 + 0x101b4d8);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(**(int **)(iVar1 + 0x5c) + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b2f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_1,*(undefined4 *)(iVar1 + 0x14));
  return;
}

