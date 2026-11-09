/* IL2CPP: Rotatelab.Boosters.BaseBoosterController$$Use
void Rotatelab_Boosters_BaseBoosterController__Use (Rotatelab_Boosters_BaseBoosterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BaseBoosterController$$Use
   void Rotatelab_Boosters_BaseBoosterController__Use (Rotatelab_Boosters_BaseBoosterController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Boosters_BaseBoosterController__Use_113229c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_0114235c + 0x11422b0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01142360 + 0x11422c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01142364 + 0x11422d0));
    *pcVar3 = '\x01';
  }
  Rotatelab_Boosters_BaseBoosterController__RemoveFromActiveBoosters_1132168(param_1);
  (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  piVar4 = *(int **)(_UNK_01142368 + 0x1142300);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xa8);
  uVar2 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b2cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),uVar2,*(undefined4 *)(iVar1 + 0x14));
  return;
}

