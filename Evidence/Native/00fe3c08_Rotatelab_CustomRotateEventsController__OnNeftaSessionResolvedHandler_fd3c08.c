/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnNeftaSessionResolvedHandler
void Rotatelab_CustomRotateEventsController__OnNeftaSessionResolvedHandler (Rotatelab_CustomRotateEventsController_o* __this, Rotatelab_Ads_AdManager_NeftaSession_o session, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnNeftaSessionResolvedHandler
   void Rotatelab_CustomRotateEventsController__OnNeftaSessionResolvedHandler
   (Rotatelab_CustomRotateEventsController_o* __this, Rotatelab_Ads_AdManager_NeftaSession_o
   session, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnNeftaSessionResolvedHandler_fd3c08
               (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,int param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_00fe4060 + 0xfe3c28);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4064 + 0xfe3c3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4068 + 0xfe3c48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe406c + 0xfe3c54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4070 + 0xfe3c60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4074 + 0xfe3c6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4078 + 0xfe3c78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe407c + 0xfe3c84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4080 + 0xfe3c90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4084 + 0xfe3c9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4088 + 0xfe3ca8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe408c + 0xfe3cb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4090 + 0xfe3cc0));
    *pcVar5 = '\x01';
  }
  piVar1 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fe4094 + 0xfe3cd8),6);
  puVar6 = *(undefined4 **)(_UNK_00fe4098 + 0xfe3cec);
  iVar2 = thunk_FUN_00f00cdc(*puVar6);
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar2,**(undefined4 **)(_UNK_00fe409c + 0xfe3d08),param_2,param_2 >> 0x1f,0);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
    uVar4 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar4,0);
  }
  if (piVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[4] = iVar2;
  thunk_FUN_00ec5080(piVar1 + 4,iVar2);
  iVar2 = thunk_FUN_00f00cdc(*puVar6);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar2,**(undefined4 **)(_UNK_00fe40a0 + 0xfe3d90),param_3,0);
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
    uVar4 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar4,0);
  }
  if ((uint)piVar1[3] < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[5] = iVar2;
  thunk_FUN_00ec5080(piVar1 + 5,iVar2);
  uStack_2c = **(undefined4 **)(_UNK_00fe40a4 + 0xfe3df4);
  uStack_28 = 0xffffffff;
  uStack_24 = param_4;
  iVar2 = System_Enum__ToString_2bab8c0(&uStack_2c,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = System_String__ToLowerInvariant_2a0fe38(iVar2,0);
  iVar2 = thunk_FUN_00f00cdc(*puVar6);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar2,**(undefined4 **)(_UNK_00fe40a8 + 0xfe3e48),uVar4,0);
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
    uVar4 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar4,0);
  }
  if ((uint)piVar1[3] < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[6] = iVar2;
  thunk_FUN_00ec5080(piVar1 + 6,iVar2);
  iVar2 = thunk_FUN_00f00cdc(*puVar6);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar2,**(undefined4 **)(_UNK_00fe40ac + 0xfe3ec0),param_5,0);
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
    uVar4 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar4,0);
  }
  if ((uint)piVar1[3] < 4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[7] = iVar2;
  thunk_FUN_00ec5080(piVar1 + 7,iVar2);
  iVar2 = thunk_FUN_00f00cdc(*puVar6);
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar2,**(undefined4 **)(_UNK_00fe40b0 + 0xfe3f38),param_6,param_6 >> 0x1f,0);
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
    uVar4 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar4,0);
  }
  if ((uint)piVar1[3] < 5) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[8] = iVar2;
  thunk_FUN_00ec5080(piVar1 + 8,iVar2);
  iVar2 = thunk_FUN_00f00cdc(*puVar6);
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar2,**(undefined4 **)(_UNK_00fe40b4 + 0xfe3fb8),param_7,param_7 >> 0x1f,0);
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
    uVar4 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar4,0);
  }
  if ((uint)piVar1[3] < 6) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[9] = iVar2;
  thunk_FUN_00ec5080(piVar1 + 9,iVar2);
  if (*(int *)(**(int **)(_UNK_00fe40b8 + 0xfe4020) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Scripts_ControllerFirebase__SendEvent_1060a54
            (**(undefined4 **)(_UNK_00fe40bc + 0xfe4044),piVar1,0);
  Rotatelab_CustomRotateEventsController__LogMessage_fc833c
            (*(undefined4 **)(_UNK_00fe40c0 + 0xfe4054),**(undefined4 **)(_UNK_00fe40c0 + 0xfe4054))
  ;
  return;
}

