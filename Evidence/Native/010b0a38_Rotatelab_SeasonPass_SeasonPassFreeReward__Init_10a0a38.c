/* IL2CPP: Rotatelab.SeasonPass.SeasonPassFreeReward$$Init
void Rotatelab_SeasonPass_SeasonPassFreeReward__Init (Rotatelab_SeasonPass_SeasonPassFreeReward_o* __this, Rotatelab_SeasonPass_SeasonPassSo_SeasonPassRewardData_o* rewardData, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassFreeReward$$Init
   void Rotatelab_SeasonPass_SeasonPassFreeReward__Init
   (Rotatelab_SeasonPass_SeasonPassFreeReward_o* __this,
   Rotatelab_SeasonPass_SeasonPassSo_SeasonPassRewardData_o* rewardData, int32_t index, const
   MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassFreeReward__Init_10a0a38(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  
  pcVar5 = (char *)(_UNK_010b0c00 + 0x10b0a58);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b0c04 + 0x10b0a6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b0c08 + 0x10b0a78));
    *pcVar5 = '\x01';
  }
  param_1[10] = param_2;
  param_1[9] = param_3;
  thunk_FUN_00ec5080(param_1 + 10,param_2);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 0xc);
  iVar4 = param_1[4];
  *(bool *)(param_1 + 0xb) = 1 < iVar1;
  if (iVar1 < 2) {
    if (*(int *)(param_2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar6 = *(undefined4 **)(_UNK_010b0c0c + 0x10b0b30);
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_2 + 0xc),0,*puVar6);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Image__set_sprite_37167cc(iVar4,*(undefined4 *)(iVar1 + 0x10),0);
    piVar3 = (int *)param_1[5];
    if (*(int *)(param_2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_2 + 0xc),0,*puVar6);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar3 + 0x2b0))
              (piVar3,*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(*piVar3 + 0x2b4));
    iVar1 = param_1[8];
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = 0;
  }
  else {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Image__set_sprite_37167cc(iVar4,*(undefined4 *)(param_2 + 8),0);
    iVar1 = param_1[8];
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = 1;
  }
  UnityEngine_UI_Selectable__set_interactable_39c00c0(iVar1,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x010b0bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1,0,*(undefined4 *)(*param_1 + 0xf4));
  return;
}

