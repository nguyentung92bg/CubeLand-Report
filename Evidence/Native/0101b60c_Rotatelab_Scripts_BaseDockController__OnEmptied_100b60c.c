/* IL2CPP: Rotatelab.Scripts.BaseDockController$$OnEmptied
void Rotatelab_Scripts_BaseDockController__OnEmptied (Rotatelab_Scripts_BaseDockController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BaseDockController$$OnEmptied
   void Rotatelab_Scripts_BaseDockController__OnEmptied (Rotatelab_Scripts_BaseDockController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_BaseDockController__OnEmptied_100b60c(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0101b698 + 0x101b620);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b69c + 0x101b634));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b6a0 + 0x101b640));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0101b6a4 + 0x101b654);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b2f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_1,*(undefined4 *)(iVar1 + 0x14));
  return;
}

