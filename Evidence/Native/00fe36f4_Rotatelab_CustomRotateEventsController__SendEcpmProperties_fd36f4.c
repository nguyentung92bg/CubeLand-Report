/* IL2CPP: Rotatelab.CustomRotateEventsController$$SendEcpmProperties
void Rotatelab_CustomRotateEventsController__SendEcpmProperties (Rotatelab_CustomRotateEventsController_o* __this, System_String_o* lastEcpm, bool refreshFlags, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$SendEcpmProperties
   void Rotatelab_CustomRotateEventsController__SendEcpmProperties
   (Rotatelab_CustomRotateEventsController_o* __this, System_String_o* lastEcpm, bool refreshFlags,
   const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__SendEcpmProperties_fd36f4
               (undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  undefined1 uStack_25;
  
  pcVar4 = (char *)(_UNK_00fe39a4 + 0xfe3710);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe39a8 + 0xfe3724));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe39ac + 0xfe3730));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe39b0 + 0xfe373c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe39b4 + 0xfe3748));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe39b8 + 0xfe3754));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe39bc + 0xfe3760));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe39c0 + 0xfe376c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe39c4 + 0xfe3778));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe39c8 + 0xfe3784));
    *pcVar4 = '\x01';
  }
  uStack_25 = 0;
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(**(int **)(_UNK_00fe39cc + 0xfe37b8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
  uVar2 = System_Single__ToString_2b850a4(iVar1 + 0xe0,uVar2,0);
  piVar9 = *(int **)(_UNK_00fe39d0 + 0xfe37f0);
  iVar1 = *piVar9;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar9;
  }
  piVar10 = *(int **)(_UNK_00fe39d4 + 0xfe3810);
  uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x5c);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    FUN_00ec3934(*piVar10);
  }
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar5,uVar2,0);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = *(undefined4 *)(iVar1 + 0xe4);
  uVar8 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 100);
  iVar1 = System_String__IsNullOrEmpty_2a0a844(uVar6,0);
  uVar5 = **(undefined4 **)(_UNK_00fe39d8 + 0xfe3888);
  if (iVar1 == 0) {
    uVar5 = uVar6;
  }
  if (*(int *)(*piVar10 + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar8,uVar5,0);
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fe39dc + 0xfe38b8));
  System_Collections_Generic_Dictionary_object__object____ctor_206890c
            (iVar1,2,**(undefined4 **)(_UNK_00fe39e0 + 0xfe38d0));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar7 = *(undefined4 **)(_UNK_00fe39e4 + 0xfe38f4);
  uVar2 = System_Collections_Generic_Dictionary_object__object___set_Item_2069314
                    (iVar1,**(undefined4 **)(_UNK_00fe39e8 + 0xfe3900),uVar2,*puVar7);
  if (param_2 != 0) {
    iVar3 = *piVar9;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar9;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x60);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      FUN_00ec3934(*piVar10);
    }
    Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar2,param_2,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = System_Collections_Generic_Dictionary_object__object___set_Item_2069314
                      (iVar1,**(undefined4 **)(_UNK_00fe39ec + 0xfe3978),param_2,*puVar7);
  }
  uStack_25 = Rotatelab_CustomRotateEventsController__SendEcpmToSatoriAsync_fd39f0
                        (uVar2,iVar1,param_3);
  Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_25,0);
  return;
}

