/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$GetUnclaimedRewardCount
int32_t Rotatelab_SeasonPass_SeasonPassController__GetUnclaimedRewardCount (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$GetUnclaimedRewardCount
   int32_t Rotatelab_SeasonPass_SeasonPassController__GetUnclaimedRewardCount
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method); */

int Rotatelab_SeasonPass_SeasonPassController__GetUnclaimedRewardCount_10a557c(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_010b56a0 + 0x10b5594);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b56a4 + 0x10b55a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b56a8 + 0x10b55b4));
    *pcVar3 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  iVar1 = Rotatelab_SeasonPass_SeasonPassController__GetProjectedCheckPoint_10a5734
                    (param_1,&uStack_24,&uStack_28);
  if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x4c) + 0xc);
  iVar4 = 0;
  if (iVar1 < iVar6) {
    iVar6 = iVar1;
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 != 0) {
    iVar1 = Rotatelab_ObservableBool__op_Implicit_fac238(*(undefined4 *)(iVar1 + 0x30),0);
    if (0 < iVar6) {
      iVar4 = 0;
      iVar5 = 0;
      puVar7 = *(undefined4 **)(_UNK_010b56ac + 0x10b5640);
      do {
        if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0x4c),iVar5,*puVar7);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + (*(byte *)(iVar2 + 8) ^ 1);
        if (iVar1 != 0) {
          iVar4 = iVar4 + (*(byte *)(iVar2 + 9) ^ 1);
        }
      } while (iVar6 != iVar5);
    }
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

