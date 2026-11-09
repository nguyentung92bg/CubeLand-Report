/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnCloudSaveDataOverwrittenHandler
void Rotatelab_CustomRotateEventsController__OnCloudSaveDataOverwrittenHandler (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x00fe3910) */
/* WARNING: Removing unreachable block (ram,0x00fe3920) */
/* WARNING: Removing unreachable block (ram,0x00fe3928) */
/* WARNING: Removing unreachable block (ram,0x00fe3940) */
/* WARNING: Removing unreachable block (ram,0x00fe3948) */
/* WARNING: Removing unreachable block (ram,0x00fe3960) */
/* WARNING: Removing unreachable block (ram,0x00fe3964) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnCloudSaveDataOverwrittenHandler
   void Rotatelab_CustomRotateEventsController__OnCloudSaveDataOverwrittenHandler
   (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnCloudSaveDataOverwrittenHandler_fd3aa0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  float fVar11;
  undefined1 auStack_25 [5];
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_00fe3be4 + 0xfe3abc);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe3be8 + 0xfe3ad0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe3bec + 0xfe3adc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe3bf0 + 0xfe3ae8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe3bf4 + 0xfe3af4));
    *pcVar6 = '\x01';
  }
  iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar11 = *(float *)(iVar2 + 0xe0);
  if (fVar11 <= 0.0) {
    return;
  }
  if (fVar11 != *(float *)(param_1 + 0x30)) {
    *(float *)(param_1 + 0x30) = fVar11;
    iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar7 = *(undefined4 **)(_UNK_00fe3bf8 + 0xfe3b5c);
    *(undefined4 *)(iVar2 + 0xe4) = *puVar7;
    thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0xe4));
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_00fe3bfc + 0xfe3b74));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Networking_CloudSaveManager__SaveToLocal_11427dc(iVar2,0);
    uStack_20 = **(undefined4 **)(_UNK_00fe3c04 + 0xfe3bb4);
    Rotatelab_CustomRotateEventsController__SendEcpmSetEvent_fd3118
              (uStack_20,fVar11,*puVar7,**(undefined4 **)(_UNK_00fe3c00 + 0xfe3ba4));
  }
  pcVar6 = (char *)(_UNK_00fe39a4 + 0xfe3710);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe39a8 + 0xfe3724));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe39ac + 0xfe3730));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe39b0 + 0xfe373c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe39b4 + 0xfe3748));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe39b8 + 0xfe3754));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe39bc + 0xfe3760));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe39c0 + 0xfe376c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe39c4 + 0xfe3778));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe39c8 + 0xfe3784));
    *pcVar6 = '\x01';
  }
  auStack_25[0] = 0;
  iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84();
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(**(int **)(_UNK_00fe39cc + 0xfe37b8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
  uVar1 = System_Single__ToString_2b850a4(iVar2 + 0xe0,uVar1,0);
  piVar9 = *(int **)(_UNK_00fe39d0 + 0xfe37f0);
  iVar2 = *piVar9;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar9;
  }
  piVar10 = *(int **)(_UNK_00fe39d4 + 0xfe3810);
  iVar3 = *piVar10;
  uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x5c);
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934(iVar3);
  }
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar4,uVar1,0);
  iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar2 != 0) {
    uVar5 = *(undefined4 *)(iVar2 + 0xe4);
    uVar8 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 100);
    iVar2 = System_String__IsNullOrEmpty_2a0a844(uVar5,0);
    uVar4 = **(undefined4 **)(_UNK_00fe39d8 + 0xfe3888);
    if (iVar2 == 0) {
      uVar4 = uVar5;
    }
    if (*(int *)(*piVar10 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar8,uVar4,0);
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fe39dc + 0xfe38b8));
    System_Collections_Generic_Dictionary_object__object____ctor_206890c
              (iVar2,2,**(undefined4 **)(_UNK_00fe39e0 + 0xfe38d0));
    if (iVar2 != 0) {
      uVar1 = System_Collections_Generic_Dictionary_object__object___set_Item_2069314
                        (iVar2,**(undefined4 **)(_UNK_00fe39e8 + 0xfe3900),uVar1,
                         **(undefined4 **)(_UNK_00fe39e4 + 0xfe38f4));
      auStack_25[0] =
           Rotatelab_CustomRotateEventsController__SendEcpmToSatoriAsync_fd39f0(uVar1,iVar2,0);
      Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(auStack_25,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

