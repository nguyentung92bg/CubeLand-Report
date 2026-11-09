/* IL2CPP: Rotatelab.Shop.StarChallengeController$$PlayRewardParticle
void Rotatelab_Shop_StarChallengeController__PlayRewardParticle (Rotatelab_Shop_StarChallengeController_o* __this, Rotatelab_Shop_StarChallengeSO_SingleReward_o* reward, UnityEngine_Vector3_o spawnPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$PlayRewardParticle
   void Rotatelab_Shop_StarChallengeController__PlayRewardParticle
   (Rotatelab_Shop_StarChallengeController_o* __this, Rotatelab_Shop_StarChallengeSO_SingleReward_o*
   reward, UnityEngine_Vector3_o spawnPosition, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeController__PlayRewardParticle_10c9cf0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  
  pcVar8 = (char *)(_UNK_010d9f34 + 0x10d9d0c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d9f38 + 0x10d9d20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d9f3c + 0x10d9d2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d9f40 + 0x10d9d38));
    *pcVar8 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar9 = *(int **)(_UNK_010d9f44 + 0x10d9d58);
  iVar1 = *piVar9;
  iVar4 = *(int *)(iVar1 + 0x74);
  if (*(int *)(param_2 + 0xc) == 5) {
    if (iVar4 == 0) {
      FUN_00ec3934();
      iVar1 = *piVar9;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 300);
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x20),0,**(undefined4 **)(_UNK_010d9f50 + 0x10d9e34));
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(iVar4,0);
    uVar7 = *(undefined4 *)(param_2 + 0x10);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = 10;
    uVar5 = **(undefined4 **)(_UNK_010d9f54 + 0x10d9e80);
    uVar3 = 1;
  }
  else if (*(int *)(param_2 + 0xc) == 0) {
    if (iVar4 == 0) {
      FUN_00ec3934();
      iVar1 = *piVar9;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 300);
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x20),0,**(undefined4 **)(_UNK_010d9f48 + 0x10d9da8));
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(iVar4,0);
    uVar7 = *(undefined4 *)(param_2 + 0x10);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = 0;
    uVar5 = **(undefined4 **)(_UNK_010d9f4c + 0x10d9df4);
    uVar3 = 8;
  }
  else {
    if (iVar4 == 0) {
      FUN_00ec3934();
      iVar1 = *piVar9;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 300);
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x20),0,**(undefined4 **)(_UNK_010d9f58 + 0x10d9ec8));
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(iVar4,0);
    uVar7 = *(undefined4 *)(param_2 + 0x10);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = 1;
    uVar5 = **(undefined4 **)(_UNK_010d9f5c + 0x10d9f18);
  }
  Rotatelab_GameAction_object__object__Int32Enum__int___Raise_23a7234
            (iVar1,uVar2,uVar7,uVar6,uVar3,uVar5);
  return;
}

