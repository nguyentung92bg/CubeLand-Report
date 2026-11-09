/* IL2CPP: Rotatelab.Scripts.LevelManager$$GetAttemptInfo
Rotatelab_Scripts_LevelAttemptInfo_o Rotatelab_Scripts_LevelManager__GetAttemptInfo (Rotatelab_Scripts_LevelManager_o* __this, Rotatelab_SoLevelData_o* level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager$$GetAttemptInfo
   Rotatelab_Scripts_LevelAttemptInfo_o Rotatelab_Scripts_LevelManager__GetAttemptInfo
   (Rotatelab_Scripts_LevelManager_o* __this, Rotatelab_SoLevelData_o* level, const MethodInfo*
   method); */

void Rotatelab_Scripts_LevelManager__GetAttemptInfo_1069364
               (undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  pcVar6 = (char *)(_UNK_010795bc + 0x1079384);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010795c0 + 0x1079398));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010795c4 + 0x10793a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010795c8 + 0x10793b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010795cc + 0x10793bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010795d0 + 0x10793c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010795d4 + 0x10793d4));
    *pcVar6 = '\x01';
  }
  uVar2 = Rotatelab_Scripts_LevelManager__get_CurrentLevelIndex_106645c();
  iVar3 = Rotatelab_Scripts_LevelManager__GetLoopedLevelIndex_106986c(param_2,uVar2);
  if (*(int *)(param_2 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar7 = *(undefined4 **)(_UNK_010795d8 + 0x1079410);
  uVar2 = Rotatelab_Networking_AdvancedAssetReference_object___get_Asset_1f1ca8c
                    (*(int *)(param_2 + 0x2c),*puVar7);
  if (*(int *)(**(int **)(_UNK_010795dc + 0x1079424) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = UnityEngine_Object__op_Inequality_36018e4(uVar2,0,0);
  if (iVar4 == 0) {
    uVar2 = **(undefined4 **)(_UNK_010795e0 + 0x107949c);
  }
  else {
    if (*(int *)(param_2 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = Rotatelab_Networking_AdvancedAssetReference_object___get_Asset_1f1ca8c
                      (*(int *)(param_2 + 0x2c),*puVar7);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = Rotatelab_SoLevelABTestsData__GetLevelVariantValue_fdcd70(iVar4,iVar3 + 1,param_3,0);
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010795e4 + 0x10794ac));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = Rotatelab_Networking_SatoriFlag_int___op_Implicit_1a88bec
                    (*(undefined4 *)(iVar3 + 0x68),**(undefined4 **)(_UNK_010795e8 + 0x10794cc));
  if (*(int *)(**(int **)(_UNK_010795ec + 0x10794e4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar8 = Rotatelab_ObservableLong__op_Implicit_fb4344(*(undefined4 *)(iVar3 + 0x18),0);
  iVar3 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar9 = Rotatelab_ObservableLong__op_Implicit_fb4344(*(undefined4 *)(iVar3 + 0x1c),0);
  uVar1 = Rotatelab_Scripts_LevelManager__get_IsInRoundMode_105fc68();
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[4] = 0;
  param_1[5] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[6] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[7] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *param_1 = param_3;
  thunk_FUN_00ec5080(param_1,param_3);
  *(undefined8 *)(param_1 + 2) = uVar8;
  param_1[7] = uVar2;
  *(undefined8 *)(param_1 + 4) = uVar9;
  param_1[1] = uVar5;
  *(undefined1 *)(param_1 + 6) = uVar1;
  thunk_FUN_00ec5080(param_1 + 7);
  return;
}

