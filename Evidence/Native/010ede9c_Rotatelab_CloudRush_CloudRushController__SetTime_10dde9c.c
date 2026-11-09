/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$SetTime
void Rotatelab_CloudRush_CloudRushController__SetTime (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$SetTime
   void Rotatelab_CloudRush_CloudRushController__SetTime (Rotatelab_CloudRush_CloudRushController_o*
   __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushController__SetTime_10dde9c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  int extraout_r1_00;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  double dVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_010ee1b8 + 0x10edeb4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee1bc + 0x10edec8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee1c0 + 0x10eded4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee1c4 + 0x10edee0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee1c8 + 0x10edeec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee1cc + 0x10edef8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee1d0 + 0x10edf04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee1d4 + 0x10edf10));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_010ee1d8 + 0x10edf28);
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  if (*(int *)(*piVar5 + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_CloudRush_CloudRushController__get_Now_10dbbb0(&uStack_38);
  uVar1 = uStack_34;
  uVar3 = uStack_38;
  iVar2 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c();
  if (iVar2 == 3) {
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Save_SavedValue_DateTime___get_Value_1a8b364
              (&uStack_30,*(int *)(param_1 + 0x28),**(undefined4 **)(_UNK_010ee1e4 + 0x10edff0));
    if (*(int *)(**(int **)(_UNK_010ee1e8 + 0x10ee004) + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_DateTime__AddMinutes_2b48b14(&uStack_38,&uStack_30,0,0x403e0000,0);
  }
  else if (iVar2 == 1) {
    if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Save_SavedValue_DateTime___get_Value_1a8b364
              (&uStack_30,*(int *)(param_1 + 0x2c),**(undefined4 **)(_UNK_010ee1dc + 0x10edf8c));
    if (*(int *)(**(int **)(_UNK_010ee1e0 + 0x10edfa0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_DateTime__AddHours_2b489e0(&uStack_38,&uStack_30,0,0x40380000,0);
  }
  else {
    iVar2 = *(int *)(*piVar5 + 0x74);
    if (iVar2 == 0) {
      FUN_00ec3934();
      iVar2 = extraout_r1;
    }
    Rotatelab_CloudRush_CloudRushController__GetNextCycleStart_10ddbf4(&uStack_38,iVar2,uVar3,uVar1)
    ;
  }
  iVar2 = *(int *)(**(int **)(_UNK_010ee1ec + 0x10ee06c) + 0x74);
  if (iVar2 == 0) {
    FUN_00ec3934();
    iVar2 = extraout_r1_00;
  }
  System_DateTime__op_Subtraction_2b4c068(&uStack_28,iVar2,uStack_38,uStack_34,uVar3,uVar1,0);
  piVar5 = *(int **)(_UNK_010ee1f0 + 0x10ee0a8);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar7 = (double)System_TimeSpan__get_TotalSeconds_2b89cf0(&uStack_28,0);
  if (dVar7 < 0.0) {
    iVar2 = *piVar5;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar5;
    }
    uStack_28 = **(undefined4 **)(iVar2 + 0x5c);
    uStack_24 = (*(undefined4 **)(iVar2 + 0x5c))[1];
  }
  uVar1 = uStack_24;
  uVar3 = uStack_28;
  if (*(int *)(**(int **)(_UNK_010ee1f4 + 0x10ee114) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = 0;
  uVar3 = Rotatelab_Extensions__GetTimeText_fc3638(uVar3,uVar1,0);
  puVar6 = *(undefined4 **)(_UNK_010ee1f8 + 0x10ee148);
  while( true ) {
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x14) + 0xc) <= iVar2) {
      return;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar5 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                              (*(int *)(param_1 + 0x14),iVar2,*puVar6);
    if (piVar5 == (int *)0x0) break;
    (**(code **)(*piVar5 + 0x2b0))(piVar5,uVar3,*(undefined4 *)(*piVar5 + 0x2b4));
    iVar2 = iVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

