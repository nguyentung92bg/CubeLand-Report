/* IL2CPP: Rotatelab.Boosters.ExtraSlotBoosterController$$OnActivated
void Rotatelab_Boosters_ExtraSlotBoosterController__OnActivated (Rotatelab_Boosters_ExtraSlotBoosterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.ExtraSlotBoosterController$$OnActivated
   void Rotatelab_Boosters_ExtraSlotBoosterController__OnActivated
   (Rotatelab_Boosters_ExtraSlotBoosterController_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_ExtraSlotBoosterController__OnActivated_113714c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_01147200 + 0x1147160);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01147204 + 0x1147174));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01147208 + 0x1147180));
    *pcVar3 = '\x01';
  }
  Rotatelab_Boosters_BaseBoosterController__OnActivated_1132370(param_1);
  Rotatelab_Boosters_BaseBoosterController__Use_113229c(param_1);
  piVar4 = *(int **)(_UNK_0114720c + 0x11471a4);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xac);
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

