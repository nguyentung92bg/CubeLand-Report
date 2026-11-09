/* IL2CPP: Rotatelab.SeasonPass.SeasonPassRewardBase$$ShowChest
void Rotatelab_SeasonPass_SeasonPassRewardBase__ShowChest (Rotatelab_SeasonPass_SeasonPassRewardBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassRewardBase$$ShowChest
   void Rotatelab_SeasonPass_SeasonPassRewardBase__ShowChest
   (Rotatelab_SeasonPass_SeasonPassRewardBase_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassRewardBase__ShowChest_10a1ae0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  
  pcVar3 = (char *)(_UNK_010b1b94 + 0x10b1af4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b1b98 + 0x10b1b08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b1b9c + 0x10b1b14));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_010b1ba0 + 0x10b1b28);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x188);
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0xc);
  uVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b4fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))
            (*(undefined4 *)(iVar1 + 0x20),uVar5,uVar2,*(undefined4 *)(iVar1 + 0x14));
  return;
}

