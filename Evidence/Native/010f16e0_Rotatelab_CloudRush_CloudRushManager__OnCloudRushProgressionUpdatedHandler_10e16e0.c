/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$OnCloudRushProgressionUpdatedHandler
void Rotatelab_CloudRush_CloudRushManager__OnCloudRushProgressionUpdatedHandler (Rotatelab_CloudRush_CloudRushManager_o* __this, bool isLevelWin, int32_t difficulty, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$OnCloudRushProgressionUpdatedHandler
   void Rotatelab_CloudRush_CloudRushManager__OnCloudRushProgressionUpdatedHandler
   (Rotatelab_CloudRush_CloudRushManager_o* __this, bool isLevelWin, int32_t difficulty, const
   MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushManager__OnCloudRushProgressionUpdatedHandler_10e16e0
               (int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint in_fpscr;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uStack_34;
  
  pcVar5 = (char *)(_UNK_010f1af8 + 0x10f1704);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f1afc + 0x10f1718));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f1b00 + 0x10f1724));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f1b04 + 0x10f1730));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f1b08 + 0x10f173c));
    *pcVar5 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_010f1b0c + 0x10f1754);
  uStack_34 = 0;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c();
  if (iVar1 != 1) {
    return;
  }
  *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
  if (param_3 == 2) {
    uVar7 = *(undefined4 *)(param_1 + 0xa0);
    uVar2 = 0x2d;
    uVar3 = 0x3c;
  }
  else if (param_3 == 1) {
    uVar7 = *(undefined4 *)(param_1 + 0xa0);
    uVar2 = 0x1e;
    uVar3 = 0x28;
  }
  else {
    iVar1 = 0;
    if (param_3 != 0) goto LAB_010f1850;
    uVar7 = *(undefined4 *)(param_1 + 0xa0);
    uVar2 = 0x14;
    uVar3 = 0x1e;
  }
  fVar9 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
  uVar2 = UnityEngine_Random__Range_35f8b14(uVar2,uVar3,0);
  fVar8 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  pcVar5 = (char *)(_UNK_010f1b10 + 0x10f17ec);
  fVar8 = fVar8 / _UNK_010f1aec;
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f1b14 + 0x10f1804));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010f1b18 + 0x10f181c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  fVar8 = (float)FUN_01f4f1b4(fVar8 * fVar9);
  in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar8 == _UNK_010f1af0) << 0x1e;
  iVar1 = (int)fVar8;
  if (SUB41(in_fpscr >> 0x1e,0)) {
    iVar1 = -0x80000000;
  }
LAB_010f1850:
  uVar2 = *puVar6;
  iVar4 = *(int *)(param_1 + 0xa0) - iVar1;
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  *(int *)(param_1 + 0xa8) = iVar4;
  *(int *)(param_1 + 0xac) = iVar1;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(uVar2);
  if (param_2 == 0) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_CloudRush_CloudRushController__set_CloudRushCurrentLevel_10dbdd8(iVar1,0);
    uVar2 = *puVar6;
    *(undefined1 *)(param_1 + 0xb4) = 1;
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(uVar2);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_CloudRush_CloudRushController__set_CloudRushCurrentState_10dc1e0(iVar1,3);
  }
  else {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_CloudRush_CloudRushController__set_CloudRushCurrentLevel_10dbdd8
              (iVar1,*(undefined4 *)(param_1 + 0xa4));
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_CloudRush_CloudRushController__set_CloudRushCurrentPlayerCount_10dbe84
              (iVar1,*(undefined4 *)(param_1 + 0xa8));
    if (*(int *)(param_1 + 0xa4) == 7) {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = *puVar6;
      *(undefined1 *)(iVar1 + 0x30) = 1;
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(uVar2);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_CloudRush_CloudRushController__set_CloudRushCurrentState_10dc1e0(iVar1,2);
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
      fVar8 = _UNK_010f1af4;
      fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xa8),
                                         (byte)(in_fpscr >> 0x16) & 3);
      pcVar5 = (char *)(_UNK_010f1b1c + 0x10f1924);
      if (*pcVar5 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010f1b20 + 0x10f1938));
        *pcVar5 = '\x01';
      }
      if (*(int *)(**(int **)(_UNK_010f1b24 + 0x10f1950) + 0x74) == 0) {
        FUN_00ec3934();
      }
      fVar8 = (float)FUN_01f4f1b4(fVar8 / fVar9);
      iVar4 = (int)fVar8;
      if (fVar8 == _UNK_010f1af0) {
        iVar4 = -0x80000000;
      }
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_CloudRush_CloudRushController__set_CloudRushRewardAmount_10dbfdc(fVar8,iVar4);
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_010f1b28 + 0x10f19a4));
      iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = Rotatelab_CloudRush_CloudRushController__get_CloudRushRewardAmount_10dbf88();
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Currency_CurrencyManager__IncreaseCurrency_10839a0
                (iVar1,0,iVar4,iVar4 >> 0x1f,0,0,0);
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uStack_34 = Rotatelab_CloudRush_CloudRushController__get_CloudRushRewardAmount_10dbf88();
      uVar2 = System_Int32__ToString_2b6b9ec(&uStack_34,0);
      uVar2 = System_String__Concat_29fee38(uVar2,**(undefined4 **)(_UNK_010f1b2c + 0x10f1a30),0);
      if (*(int *)(**(int **)(_UNK_010f1b30 + 0x10f1a44) + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Debug__Log_35b1c44(uVar2,0);
    }
  }
  Rotatelab_CloudRush_CloudRushManager__CalculateDroppingPlayerCount_10e1574(param_1);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
  if (iVar1 != 0) {
    Rotatelab_CloudRush_CloudRushController__SavePendingProgression_10dd58c
              (iVar1,*(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa0),
               *(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8),
               *(undefined4 *)(param_1 + 0xb0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

