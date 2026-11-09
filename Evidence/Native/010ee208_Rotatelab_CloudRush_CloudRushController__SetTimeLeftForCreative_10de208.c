/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$SetTimeLeftForCreative
void Rotatelab_CloudRush_CloudRushController__SetTimeLeftForCreative (Rotatelab_CloudRush_CloudRushController_o* __this, System_TimeSpan_o timeLeft, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$SetTimeLeftForCreative
   void Rotatelab_CloudRush_CloudRushController__SetTimeLeftForCreative
   (Rotatelab_CloudRush_CloudRushController_o* __this, System_TimeSpan_o timeLeft, const MethodInfo*
   method); */

void Rotatelab_CloudRush_CloudRushController__SetTimeLeftForCreative_10de208
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  int extraout_r1_06;
  int extraout_r1_07;
  undefined4 extraout_r1_08;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar6 = (char *)(_UNK_010ee5bc + 0x10ee230);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee5c0 + 0x10ee244));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee5c4 + 0x10ee250));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee5c8 + 0x10ee25c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee5cc + 0x10ee268));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee5d0 + 0x10ee274));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee5d4 + 0x10ee280));
    *pcVar6 = '\x01';
  }
  uStack_3c = 0;
  uStack_40 = 0;
  iVar1 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c();
  if (iVar1 == 3) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (*(int *)(**(int **)(_UNK_010ee5e8 + 0x10ee354) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_CloudRush_CloudRushController__get_Now_10dbbb0(&uStack_48);
    uVar5 = uStack_44;
    uVar4 = uStack_48;
    iVar3 = *(int *)(**(int **)(_UNK_010ee5ec + 0x10ee37c) + 0x74);
    if (iVar3 == 0) {
      FUN_00ec3934();
      iVar3 = extraout_r1_01;
    }
    System_TimeSpan__FromMinutes_2b8a2b8(&uStack_48,iVar3,0,0x403e0000,0);
    uVar9 = uStack_44;
    uVar8 = uStack_48;
    iVar3 = *(int *)(**(int **)(_UNK_010ee5f0 + 0x10ee3b8) + 0x74);
    if (iVar3 == 0) {
      FUN_00ec3934();
      iVar3 = extraout_r1_02;
    }
  }
  else {
    if (iVar1 != 1) {
      if (*(int *)(**(int **)(_UNK_010ee5f4 + 0x10ee448) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_CloudRush_CloudRushController__get_Now_10dbbb0(&uStack_48);
      Rotatelab_CloudRush_CloudRushController__GetNextCycleStart_10ddbf4
                (&uStack_48,extraout_r1_05,uStack_48,uStack_44);
      uVar8 = uStack_44;
      uVar4 = uStack_48;
      Rotatelab_CloudRush_CloudRushController__get_Now_10dbbb0(&uStack_48);
      uVar9 = uStack_44;
      uVar5 = uStack_48;
      iVar1 = *(int *)(**(int **)(_UNK_010ee5f8 + 0x10ee48c) + 0x74);
      if (iVar1 == 0) {
        FUN_00ec3934();
        iVar1 = extraout_r1_06;
      }
      System_DateTime__op_Subtraction_2b4c068(&uStack_48,iVar1,uVar4,uVar8,uVar5,uVar9,0);
      uVar5 = uStack_44;
      uVar4 = uStack_48;
      iVar1 = *(int *)(**(int **)(_UNK_010ee5fc + 0x10ee4c8) + 0x74);
      if (iVar1 == 0) {
        FUN_00ec3934();
        iVar1 = extraout_r1_07;
      }
      System_TimeSpan__op_Subtraction_2b8aa5c(&uStack_40,iVar1,uVar4,uVar5,param_3,param_4,0);
      iVar1 = *(int *)(param_1 + 0x24);
      Rotatelab_CloudRush_CloudRushController__get_Now_10dbbb0(&uStack_48);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Save_SavedValue_DateTime___set_Value_1a8b3bc
                (iVar1,extraout_r1_08,uStack_48,uStack_44,
                 **(undefined4 **)(_UNK_010ee600 + 0x10ee52c));
      iVar1 = *(int *)(*(int *)(**(int **)(_UNK_010ee604 + 0x10ee544) + 0x5c) + 4);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      fVar2 = (float)Rotatelab_Save_SavedValue_float___get_Value_1a8becc
                               (iVar1,**(undefined4 **)(_UNK_010ee608 + 0x10ee564));
      dVar7 = (double)System_TimeSpan__get_TotalSeconds_2b89cf0(&uStack_40,0);
      if (iVar1 != 0) {
        Rotatelab_Save_SavedValue_float___set_Value_1a8bf14
                  (iVar1,fVar2 + (float)dVar7,**(undefined4 **)(_UNK_010ee60c + 0x10ee59c));
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(param_1 + 0x2c);
    if (*(int *)(**(int **)(_UNK_010ee5d8 + 0x10ee2b4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_CloudRush_CloudRushController__get_Now_10dbbb0(&uStack_48);
    uVar5 = uStack_44;
    uVar4 = uStack_48;
    iVar3 = *(int *)(**(int **)(_UNK_010ee5dc + 0x10ee2dc) + 0x74);
    if (iVar3 == 0) {
      FUN_00ec3934();
      iVar3 = extraout_r1;
    }
    System_TimeSpan__FromHours_2b8a194(&uStack_48,iVar3,0,0x40380000,0);
    uVar9 = uStack_44;
    uVar8 = uStack_48;
    iVar3 = *(int *)(**(int **)(_UNK_010ee5e0 + 0x10ee318) + 0x74);
    if (iVar3 == 0) {
      FUN_00ec3934();
      iVar3 = extraout_r1_00;
    }
  }
  System_DateTime__op_Subtraction_2b4bf30(&uStack_48,iVar3,uVar4,uVar5,uVar8,uVar9,0);
  System_DateTime__op_Addition_2b4bdf0
            (&uStack_48,extraout_r1_03,uStack_48,uStack_44,param_3,param_4,0);
  if (iVar1 != 0) {
    Rotatelab_Save_SavedValue_DateTime___set_Value_1a8b3bc
              (iVar1,extraout_r1_04,uStack_48,uStack_44,**(undefined4 **)(_UNK_010ee5e4 + 0x10ee42c)
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

