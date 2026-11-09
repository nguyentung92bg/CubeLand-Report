/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$UpdateClaimedRewards
void Rotatelab_SeasonPass_SeasonPassController__UpdateClaimedRewards (Rotatelab_SeasonPass_SeasonPassController_o* __this, int32_t index, bool isUpdateFreeReward, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$UpdateClaimedRewards
   void Rotatelab_SeasonPass_SeasonPassController__UpdateClaimedRewards
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, int32_t index, bool isUpdateFreeReward,
   const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassController__UpdateClaimedRewards_10a0ee8
               (int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iStack_1c;
  
  pcVar7 = (char *)(_UNK_010b0fbc + 0x10b0f04);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b0fc0 + 0x10b0f18));
    *pcVar7 = '\x01';
  }
  iVar8 = *(int *)(param_1 + 0x4c);
  if (param_3 == 0) {
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = System_Collections_Generic_List_object___get_Item_267d814
                      (iVar8,param_2,**(undefined4 **)(_UNK_010b0fc8 + 0x10b0f88));
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined1 *)(iVar8 + 9) = 1;
  }
  else {
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = System_Collections_Generic_List_object___get_Item_267d814
                      (iVar8,param_2,**(undefined4 **)(_UNK_010b0fc4 + 0x10b0f48));
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined1 *)(iVar8 + 8) = 1;
  }
  Rotatelab_SeasonPass_SeasonPassController__SaveClaimedRewardData_10a4514(param_1);
  iStack_1c = 0;
  iStack_1c = Rotatelab_SeasonPass_SeasonPassController__GetUnclaimedRewardCount_10a557c(param_1);
  iVar8 = *(int *)(param_1 + 0x18);
  if (iStack_1c < 1) {
    pcVar7 = (char *)(_UNK_010b44f4 + 0x10b444c);
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b44f8 + 0x10b4460));
      *pcVar7 = '\x01';
    }
    puVar2 = *(undefined4 **)(**(int **)(_UNK_010b44fc + 0x10b4474) + 0x5c);
    puVar4 = puVar2 + 2;
    puVar5 = puVar2 + 1;
  }
  else {
    pcVar7 = (char *)(_UNK_010b4500 + 0x10b4404);
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b4504 + 0x10b4418));
      *pcVar7 = '\x01';
    }
    iVar1 = *(int *)(**(int **)(_UNK_010b4508 + 0x10b442c) + 0x5c);
    puVar4 = (undefined4 *)(iVar1 + 0x14);
    puVar5 = (undefined4 *)(iVar1 + 0x10);
    puVar2 = (undefined4 *)(iVar1 + 0xc);
  }
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar8,*puVar2,*puVar5,*puVar4,0);
  piVar6 = *(int **)(param_1 + 0x1c);
  uVar3 = System_Int32__ToString_2b6b9ec(&iStack_1c,0);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar6 + 0x2b0))(piVar6,uVar3,*(undefined4 *)(*piVar6 + 0x2b4));
  return;
}

