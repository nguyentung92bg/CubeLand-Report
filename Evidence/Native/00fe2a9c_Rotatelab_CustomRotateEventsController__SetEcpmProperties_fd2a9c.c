/* IL2CPP: Rotatelab.CustomRotateEventsController$$SetEcpmProperties
bool Rotatelab_CustomRotateEventsController__SetEcpmProperties (Rotatelab_CustomRotateEventsController_o* __this, MaxSdkBase_AdInfo_o* adInfo, System_String_o* role, System_String_o* source, bool isLastEcpm, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$SetEcpmProperties
   bool Rotatelab_CustomRotateEventsController__SetEcpmProperties
   (Rotatelab_CustomRotateEventsController_o* __this, MaxSdkBase_AdInfo_o* adInfo, System_String_o*
   role, System_String_o* source, bool isLastEcpm, const MethodInfo* method); */

bool Rotatelab_CustomRotateEventsController__SetEcpmProperties_fd2a9c
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_r1;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  float fVar8;
  float fStack_3c;
  
  pcVar6 = (char *)(_UNK_00fe2db4 + 0xfe2ac4);
  iVar2 = param_2;
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2db8 + 0xfe2adc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2dbc + 0xfe2ae8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2dc0 + 0xfe2af4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2dc4 + 0xfe2b00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2dc8 + 0xfe2b0c));
    *pcVar6 = '\x01';
    iVar2 = extraout_r1;
  }
  fStack_3c = 0.0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar1 = (float)Rotatelab_CustomRotateEventsController__ConvertAdRevenueToECPMRevenue_fd2fd8
                           (0,iVar2,(int)*(undefined8 *)(param_2 + 0x20),
                            (int)((ulonglong)*(undefined8 *)(param_2 + 0x20) >> 0x20));
  if (0.0 < fVar1) {
    fStack_3c = fVar1;
    iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar8 = *(float *)(iVar2 + 0xe0);
    if (fVar8 <= 0.0) {
      iVar2 = FUN_00ec388c(**(undefined4 **)(_UNK_00fe2dcc + 0xfe2b88),5);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(undefined4 *)(iVar2 + 0x10) = param_4;
      thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x10),param_4);
      puVar7 = *(undefined4 **)(_UNK_00fe2dd0 + 0xfe2bd4);
      uVar5 = *puVar7;
      if (*(uint *)(iVar2 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(undefined4 *)(iVar2 + 0x14) = uVar5;
      thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x14),uVar5);
      iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_00fe2dd4 + 0xfe2bf8));
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar5 = Rotatelab_Ads_AdManager__get_CurrentNeftaModeName_10f5a1c(iVar3,0);
      if (*(uint *)(iVar2 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(undefined4 *)(iVar2 + 0x18) = uVar5;
      thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x18),uVar5);
      uVar5 = *puVar7;
      if (*(uint *)(iVar2 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(undefined4 *)(iVar2 + 0x1c) = uVar5;
      thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x1c),uVar5);
      if (*(uint *)(iVar2 + 0xc) < 5) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(undefined4 *)(iVar2 + 0x20) = param_3;
      thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x20),param_3);
      uVar5 = System_String__Concat_2a0bee8(iVar2,0);
      iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(float *)(iVar2 + 0xe0) = fVar1;
      iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(undefined4 *)(iVar2 + 0xe4) = uVar5;
      thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0xe4),uVar5);
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_00fe2dd8 + 0xfe2ce8));
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Networking_CloudSaveManager__SaveToLocal_11427dc(iVar2,0);
      uVar4 = *(undefined4 *)(param_2 + 0x28);
      *(float *)(param_1 + 0x30) = fVar1;
      Rotatelab_CustomRotateEventsController__SendEcpmSetEvent_fd3118
                (uVar4,fVar1,uVar5,param_3,uVar4);
    }
    uVar5 = 0;
    if (param_5 != 0) {
      if (*(int *)(**(int **)(_UNK_00fe2ddc + 0xfe2d40) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar5 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
      uVar5 = System_Single__ToString_2b850a4(&fStack_3c,uVar5,0);
    }
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_CustomRotateEventsController__SendEcpmProperties_fd36f4(param_1,uVar5,fVar8 <= 0.0);
  }
  return 0.0 < fVar1;
}

