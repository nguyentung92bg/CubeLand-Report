/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$TryMigrateDataFromLegacyPlayerPrefs
void Rotatelab_Networking_CloudSaveManager__TryMigrateDataFromLegacyPlayerPrefs (Rotatelab_Networking_CloudSaveManager_o* __this, Rotatelab_Networking_CloudSaveData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$TryMigrateDataFromLegacyPlayerPrefs
   void Rotatelab_Networking_CloudSaveManager__TryMigrateDataFromLegacyPlayerPrefs
   (Rotatelab_Networking_CloudSaveManager_o* __this, Rotatelab_Networking_CloudSaveData_o* data,
   const MethodInfo* method); */

void Rotatelab_Networking_CloudSaveManager__TryMigrateDataFromLegacyPlayerPrefs_1141d54
               (undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  code *pcVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01152690 + 0x1151d6c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01152694 + 0x1151d80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01152698 + 0x1151d8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115269c + 0x1151d98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526a0 + 0x1151da4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526a4 + 0x1151db0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526a8 + 0x1151dbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526ac + 0x1151dc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526b0 + 0x1151dd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526b4 + 0x1151de0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526b8 + 0x1151dec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526bc + 0x1151df8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526c0 + 0x1151e04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526c4 + 0x1151e10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526c8 + 0x1151e1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526cc + 0x1151e28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526d0 + 0x1151e34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526d4 + 0x1151e40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526d8 + 0x1151e4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526dc + 0x1151e58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526e0 + 0x1151e64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526e4 + 0x1151e70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526e8 + 0x1151e7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526ec + 0x1151e88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526f0 + 0x1151e94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526f4 + 0x1151ea0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526f8 + 0x1151eac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011526fc + 0x1151eb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01152700 + 0x1151ec4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01152704 + 0x1151ed0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01152708 + 0x1151edc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115270c + 0x1151ee8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01152710 + 0x1151ef4));
    *pcVar8 = '\x01';
  }
  puVar11 = *(undefined4 **)(_UNK_01152714 + 0x1151f0c);
  iVar2 = UnityEngine_PlayerPrefs__HasKey_35f74c0(*puVar11,0);
  if (iVar2 == 0) {
    return;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar9 = *(int **)(param_2 + 0x28);
  uStack_28 = 0;
  uVar12 = Rotatelab_Save_SaveManager__GetLong_1082ce0
                     (**(undefined4 **)(_UNK_01152718 + 0x1151f3c),0,1000,0);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_28 = *(undefined4 *)(*piVar9 + 0xfc);
  (**(code **)(*piVar9 + 0xf8))(piVar9,uStack_28,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
  piVar9 = *(int **)(param_2 + 0x18);
  iVar2 = Rotatelab_Save_SaveManager__GetInt_1078ed8(*puVar11,1,0);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_28 = *(undefined4 *)(*piVar9 + 0xfc);
  (**(code **)(*piVar9 + 0xf8))(piVar9,uStack_28,iVar2,iVar2 >> 0x1f);
  piVar9 = *(int **)(param_2 + 0x1c);
  iVar2 = Rotatelab_Save_SaveManager__GetInt_1078ed8
                    (**(undefined4 **)(_UNK_0115271c + 0x1151fd8),0,0);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_28 = *(undefined4 *)(*piVar9 + 0xfc);
  (**(code **)(*piVar9 + 0xf8))(piVar9,uStack_28,iVar2,iVar2 >> 0x1f);
  uVar3 = Rotatelab_Save_SaveManager__GetBool_107f0d4
                    (**(undefined4 **)(_UNK_01152720 + 0x1152024),0,0);
  Rotatelab_Networking_CloudSaveData__set_IsInRoundMode_1140c08(param_2,uVar3);
  iVar2 = *(int *)(param_2 + 0x58);
  uVar12 = Rotatelab_Save_SaveManager__GetInt_1078ed8
                     (**(undefined4 **)(_UNK_01152724 + 0x115204c),0,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_28 = 0;
  Rotatelab_ObservableEnergy__GrantInfiniteEnergy_fb3a88
            (iVar2,(int)((ulonglong)uVar12 >> 0x20),(int)uVar12,(int)uVar12 >> 0x1f);
  piVar9 = *(int **)(param_2 + 0x40);
  uStack_28 = 0;
  uVar12 = Rotatelab_Save_SaveManager__GetLong_1082ce0
                     (**(undefined4 **)(_UNK_01152728 + 0x115208c),extraout_r1,2,0);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_28 = *(undefined4 *)(*piVar9 + 0xfc);
  (**(code **)(*piVar9 + 0xf8))(piVar9,uStack_28,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
  piVar9 = *(int **)(param_2 + 0x44);
  uStack_28 = 0;
  uVar12 = Rotatelab_Save_SaveManager__GetLong_1082ce0
                     (**(undefined4 **)(_UNK_0115272c + 0x11520e4),extraout_r1_00,2,0);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_28 = *(undefined4 *)(*piVar9 + 0xfc);
  (**(code **)(*piVar9 + 0xf8))(piVar9,uStack_28,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
  piVar9 = *(int **)(param_2 + 0x48);
  uStack_28 = 0;
  uVar12 = Rotatelab_Save_SaveManager__GetLong_1082ce0
                     (**(undefined4 **)(_UNK_01152730 + 0x1152138),extraout_r1_01,2,0);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_28 = *(undefined4 *)(*piVar9 + 0xfc);
  (**(code **)(*piVar9 + 0xf8))(piVar9,uStack_28,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
  piVar9 = *(int **)(param_2 + 0x4c);
  uStack_28 = 0;
  uVar12 = Rotatelab_Save_SaveManager__GetLong_1082ce0
                     (**(undefined4 **)(_UNK_01152734 + 0x1152190),extraout_r1_02,2,0);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_28 = *(undefined4 *)(*piVar9 + 0xfc);
  (**(code **)(*piVar9 + 0xf8))(piVar9,uStack_28,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
  piVar9 = *(int **)(param_2 + 0x50);
  uStack_28 = 0;
  uVar12 = Rotatelab_Save_SaveManager__GetLong_1082ce0
                     (**(undefined4 **)(_UNK_01152738 + 0x11521e4),extraout_r1_03,2,0);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_28 = *(undefined4 *)(*piVar9 + 0xfc);
  (**(code **)(*piVar9 + 0xf8))(piVar9,uStack_28,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
  iVar2 = *(int *)(param_2 + 0x2c);
  uVar3 = Rotatelab_Save_SaveManager__GetBool_107f0d4
                    (**(undefined4 **)(_UNK_0115273c + 0x1152238),0,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_ObservableBool__set_Value_fa6d68(iVar2,uVar3,0);
  iVar2 = *(int *)(param_2 + 0x30);
  uVar3 = Rotatelab_Save_SaveManager__GetBool_107f0d4
                    (**(undefined4 **)(_UNK_01152740 + 0x1152274),0,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_ObservableBool__set_Value_fa6d68(iVar2,uVar3,0);
  iVar2 = *(int *)(param_2 + 0x34);
  uVar3 = Rotatelab_Save_SaveManager__GetBool_107f0d4
                    (**(undefined4 **)(_UNK_01152744 + 0x11522b0),0,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_ObservableBool__set_Value_fa6d68(iVar2,uVar3,0);
  iVar2 = *(int *)(param_2 + 0x38);
  uVar3 = Rotatelab_Save_SaveManager__GetBool_107f0d4
                    (**(undefined4 **)(_UNK_01152748 + 0x11522fc),0,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_ObservableBool__set_Value_fa6d68(iVar2,uVar3,0);
  iVar2 = Rotatelab_Save_SaveManager__GetInt_1078ed8
                    (**(undefined4 **)(_UNK_0115274c + 0x1152334),1,0);
  *(int *)(param_2 + 0x60) = iVar2;
  puVar11 = *(undefined4 **)(_UNK_01152750 + 0x1152350);
  *(int *)(param_2 + 100) = iVar2 >> 0x1f;
  iVar2 = Rotatelab_Save_SaveManager__GetInt_1078ed8(*puVar11,0,0);
  *(int *)(param_2 + 0x68) = iVar2;
  puVar11 = *(undefined4 **)(_UNK_01152754 + 0x1152378);
  *(int *)(param_2 + 0x6c) = iVar2 >> 0x1f;
  iVar2 = Rotatelab_Save_SaveManager__GetInt_1078ed8(*puVar11,0,0);
  *(int *)(param_2 + 0x70) = iVar2;
  puVar11 = *(undefined4 **)(_UNK_01152758 + 0x11523a0);
  *(int *)(param_2 + 0x74) = iVar2 >> 0x1f;
  iVar2 = Rotatelab_Save_SaveManager__GetInt_1078ed8(*puVar11,0,0);
  *(int *)(param_2 + 0x78) = iVar2;
  puVar11 = *(undefined4 **)(_UNK_0115275c + 0x11523c8);
  *(int *)(param_2 + 0x7c) = iVar2 >> 0x1f;
  iVar7 = *(int *)(param_2 + 0x40);
  iVar2 = Rotatelab_Save_SaveManager__GetInt_1078ed8(*puVar11,0,0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar11 = *(undefined4 **)(_UNK_01152760 + 0x1152400);
  *(int *)(iVar7 + 0x2c) = iVar2 >> 0x1f;
  *(int *)(iVar7 + 0x28) = iVar2;
  iVar7 = *(int *)(param_2 + 0x44);
  iVar2 = Rotatelab_Save_SaveManager__GetInt_1078ed8(*puVar11,0,0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar11 = *(undefined4 **)(_UNK_01152764 + 0x1152438);
  *(int *)(iVar7 + 0x2c) = iVar2 >> 0x1f;
  *(int *)(iVar7 + 0x28) = iVar2;
  iVar7 = *(int *)(param_2 + 0x48);
  iVar2 = Rotatelab_Save_SaveManager__GetInt_1078ed8(*puVar11,0,0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar11 = *(undefined4 **)(_UNK_01152768 + 0x1152470);
  *(int *)(iVar7 + 0x2c) = iVar2 >> 0x1f;
  *(int *)(iVar7 + 0x28) = iVar2;
  iVar7 = *(int *)(param_2 + 0x4c);
  iVar2 = Rotatelab_Save_SaveManager__GetInt_1078ed8(*puVar11,0,0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar11 = *(undefined4 **)(_UNK_0115276c + 0x11524b0);
  *(int *)(iVar7 + 0x2c) = iVar2 >> 0x1f;
  *(int *)(iVar7 + 0x28) = iVar2;
  iVar7 = *(int *)(param_2 + 0x50);
  iVar2 = Rotatelab_Save_SaveManager__GetInt_1078ed8(*puVar11,0,0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar11 = *(undefined4 **)(_UNK_01152770 + 0x11524ec);
  *(int *)(iVar7 + 0x28) = iVar2;
  *(int *)(iVar7 + 0x2c) = iVar2 >> 0x1f;
  iVar2 = Rotatelab_Save_SaveManager__GetInt_1078ed8(*puVar11,0,0);
  *(int *)(param_2 + 0xd0) = iVar2;
  puVar11 = *(undefined4 **)(_UNK_01152774 + 0x115250c);
  *(int *)(param_2 + 0xd4) = iVar2 >> 0x1f;
  iVar2 = Rotatelab_Save_SaveManager__GetInt_1078ed8(*puVar11,0,0);
  *(int *)(param_2 + 0xd8) = iVar2;
  puVar11 = *(undefined4 **)(_UNK_01152778 + 0x1152534);
  *(int *)(param_2 + 0xdc) = iVar2 >> 0x1f;
  uVar1 = Rotatelab_Save_SaveManager__GetBool_107f0d4(*puVar11,0,0);
  piVar9 = *(int **)(param_2 + 0x20);
  puVar11 = *(undefined4 **)(_UNK_0115277c + 0x1152558);
  *(undefined1 *)(param_2 + 0xb8) = uVar1;
  iVar2 = Rotatelab_Save_SaveManager__GetInt_1078ed8(*puVar11,0,0);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_28 = *(undefined4 *)(*piVar9 + 0xfc);
  (**(code **)(*piVar9 + 0xf8))(piVar9,uStack_28,iVar2,iVar2 >> 0x1f);
  piVar9 = *(int **)(param_2 + 0x24);
  iVar2 = Rotatelab_Save_SaveManager__GetInt_1078ed8
                    (**(undefined4 **)(_UNK_01152780 + 0x11525b0),1,0);
  piVar10 = *(int **)(_UNK_01152784 + 0x11525c8);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_28 = *(undefined4 *)(*piVar9 + 0xfc);
  (**(code **)(*piVar9 + 0xf8))(piVar9,uStack_28,iVar2,iVar2 >> 0x1f);
  uVar3 = Rotatelab_Save_SaveManager__GetString_10790b0
                    (**(undefined4 **)(_UNK_0115278c + 0x1152608),
                     **(undefined4 **)(_UNK_01152788 + 0x11525fc),0);
  if (*(int *)(**(int **)(_UNK_01152790 + 0x115261c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
  uVar12 = System_Double__Parse_2b51f18(uVar3,uVar4,0);
  puVar11 = *(undefined4 **)(_UNK_01152794 + 0x115265c);
  *(undefined8 *)(param_2 + 0xc0) = uVar12;
  fVar5 = (float)Rotatelab_Save_SaveManager__GetFloat_1082d24(*puVar11,0,0);
  iVar2 = *piVar10;
  uVar3 = 0;
  *(double *)(param_2 + 200) = (double)fVar5;
  pcVar8 = (char *)(_UNK_0360789c + 0x3607704);
  if (*pcVar8 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_036078a0 + 0x3607718),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_036078a4 + 0x3607724));
    *pcVar8 = '\x01';
    uVar3 = extraout_r1_04;
  }
  uStack_28 = 0;
  if (iVar2 == 0) {
    uStack_28 = 0;
  }
  else if (*(int *)(iVar2 + 8) == 0) {
    uVar3 = System_UIntPtr__op_Explicit_2bd42b0(1,0,0);
    uVar3 = System_UIntPtr__op_Explicit_2bd42dc(uVar3,0);
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&stack0xffffffe8,uVar3,0,0);
    uStack_28 = 0;
  }
  else {
    pcVar8 = (char *)(_UNK_036078a8 + 0x3607760);
    if (*pcVar8 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_036078ac + 0x3607774),uVar3);
      *pcVar8 = '\x01';
    }
    System_String__GetRawStringData_2a07d18(iVar2,0);
    uVar4 = *(undefined4 *)(iVar2 + 8);
    uVar3 = System_ReadOnlySpan_char___GetPinnableReference_1a0c144
                      (&stack0xffffffe0,**(undefined4 **)(_UNK_036078b0 + 0x3607794));
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_28,uVar3,uVar4,0);
  }
  pcVar6 = *(code **)(_UNK_036078b4 + 0x360781c);
  if (pcVar6 == (code *)0x0) {
    pcVar6 = (code *)thunk_FUN_00ec3774(_UNK_036078b8 + 0x360782c);
    *(code **)(_UNK_036078bc + 0x360783c) = pcVar6;
  }
  (*pcVar6)(&uStack_28);
  return;
}

