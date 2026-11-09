/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$CheckSystem
void Rotatelab_CloudRush_CloudRushController__CheckSystem (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$CheckSystem
   void Rotatelab_CloudRush_CloudRushController__CheckSystem
   (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushController__CheckSystem_10dc8d8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar7;
  undefined4 extraout_r1_03;
  char *pcVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_010ecb10 + 0x10ec8f0);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ecb14 + 0x10ec904));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ecb18 + 0x10ec910));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ecb1c + 0x10ec91c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ecb20 + 0x10ec928));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ecb24 + 0x10ec934));
    *pcVar8 = '\x01';
  }
  iVar6 = UnityEngine_PlayerPrefs__HasKey_35f74c0(**(undefined4 **)(_UNK_010ecb28 + 0x10ec94c),0);
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_1 + 0x24);
    if (*(int *)(**(int **)(_UNK_010ecb2c + 0x10ec964) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_CloudRush_CloudRushController__get_Now_10dbbb0(&uStack_30);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Save_SavedValue_DateTime___set_Value_1a8b3bc
              (iVar6,extraout_r1,uStack_30,uStack_2c,**(undefined4 **)(_UNK_010ecb30 + 0x10ec9a8));
  }
  piVar9 = *(int **)(_UNK_010ecb34 + 0x10ec9c0);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_CloudRush_CloudRushController__get_Now_10dbbb0(&uStack_30);
  uVar3 = uStack_2c;
  uVar1 = uStack_30;
  if (*(int *)(param_1 + 0x24) != 0) {
    Rotatelab_Save_SavedValue_DateTime___get_Value_1a8b364
              (&uStack_30,*(int *)(param_1 + 0x24),**(undefined4 **)(_UNK_010ecb38 + 0x10eca00));
    uVar4 = uStack_2c;
    uVar7 = uStack_30;
    Rotatelab_CloudRush_CloudRushController__GetStartOfCycle_10dced0
              (&uStack_30,extraout_r1_00,uVar1,uVar3);
    uVar5 = uStack_2c;
    uVar2 = uStack_30;
    Rotatelab_CloudRush_CloudRushController__GetStartOfCycle_10dced0
              (&uStack_30,extraout_r1_01,uVar7,uVar4);
    uVar4 = uStack_2c;
    uVar7 = uStack_30;
    if (*(int *)(**(int **)(_UNK_010ecb3c + 0x10eca44) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar10 = System_DateTime__op_Inequality_2b4c168(uVar2,uVar5,uVar7,uVar4,0);
    uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if ((int)uVar10 != 0) {
      Rotatelab_CloudRush_CloudRushController__set_CloudRushIsEntryRewardReady_10dc088
                ((int)uVar10,1);
      uVar10 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c();
      uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
      if ((int)uVar10 != 1) {
        Rotatelab_CloudRush_CloudRushController__ResetCloudRush_10dcd48(param_1);
        uVar7 = extraout_r1_02;
      }
    }
    iVar6 = Rotatelab_CloudRush_CloudRushController__IsCurrentStateExpired_10dd180
                      (param_1,uVar7,uVar1,uVar3);
    if (iVar6 != 0) {
      Rotatelab_CloudRush_CloudRushController__ResetCloudRush_10dcd48(param_1);
    }
    iVar6 = *(int *)(param_1 + 0x24);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_CloudRush_CloudRushController__get_Now_10dbbb0(&uStack_30);
    if (iVar6 != 0) {
      Rotatelab_Save_SavedValue_DateTime___set_Value_1a8b3bc
                (iVar6,extraout_r1_03,uStack_30,uStack_2c,
                 **(undefined4 **)(_UNK_010ecb40 + 0x10ecafc));
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

