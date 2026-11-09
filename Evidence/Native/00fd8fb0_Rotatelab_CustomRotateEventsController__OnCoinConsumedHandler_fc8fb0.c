/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnCoinConsumedHandler
void Rotatelab_CustomRotateEventsController__OnCoinConsumedHandler (Rotatelab_CustomRotateEventsController_o* __this, int32_t amount, System_String_o* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnCoinConsumedHandler
   void Rotatelab_CustomRotateEventsController__OnCoinConsumedHandler
   (Rotatelab_CustomRotateEventsController_o* __this, int32_t amount, System_String_o* source, const
   MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnCoinConsumedHandler_fc8fb0
               (undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  byte bStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_00fd969c + 0xfd8fd4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd96a0 + 0xfd8fe8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd96a4 + 0xfd8ff4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd96a8 + 0xfd9000));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd96ac + 0xfd900c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd96b0 + 0xfd9018));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd96b4 + 0xfd9024));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd96b8 + 0xfd9030));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd96bc + 0xfd903c));
    *pcVar6 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fd96c0 + 0xfd9054));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LevelManager__GetAttemptInfo_106a51c(&iStack_48,iVar1,0);
  piVar2 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fd96c4 + 0xfd90b4),10);
  piVar8 = *(int **)(_UNK_00fd96c8 + 0xfd90d8);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  puVar3 = *(undefined4 **)(_UNK_00fd96cc + 0xfd90fc);
  uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xb0);
  iVar1 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar5,8,0,0);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
    uVar5 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar5,0);
  }
  if (piVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[4] = iVar1;
  thunk_FUN_00ec5080(piVar2 + 4,iVar1);
  uVar5 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xb4);
  iVar1 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar5,bStack_30 & 1,0,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
    uVar5 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar5,0);
  }
  if ((uint)piVar2[3] < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[5] = iVar1;
  thunk_FUN_00ec5080(piVar2 + 5,iVar1);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x14);
  iVar1 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar5,uStack_40,uStack_3c,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
    uVar5 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar5,0);
  }
  if ((uint)piVar2[3] < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[6] = iVar1;
  thunk_FUN_00ec5080(piVar2 + 6,iVar1);
  uVar5 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x18);
  iVar1 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar5,uStack_38,uStack_34,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
    uVar5 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar5,0);
  }
  if ((uint)piVar2[3] < 4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[7] = iVar1;
  thunk_FUN_00ec5080(piVar2 + 7,iVar1);
  uVar5 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x20);
  if (iStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iStack_48 + 0xc);
  iVar1 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar5,iVar4,iVar4 >> 0x1f,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
    uVar5 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar5,0);
  }
  if ((uint)piVar2[3] < 5) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[8] = iVar1;
  thunk_FUN_00ec5080(piVar2 + 8,iVar1);
  uVar5 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x24);
  iVar1 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11deb88(iVar1,uVar5,uStack_2c,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
    uVar5 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar5,0);
  }
  if ((uint)piVar2[3] < 6) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[9] = iVar1;
  thunk_FUN_00ec5080(piVar2 + 9,iVar1);
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x28);
  uVar5 = UnityEngine_Object__get_name_36081bc(iStack_48,0);
  iVar1 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11deb88(iVar1,uVar7,uVar5,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
    uVar5 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar5,0);
  }
  if ((uint)piVar2[3] < 7) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[10] = iVar1;
  thunk_FUN_00ec5080(piVar2 + 10,iVar1);
  uVar5 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x1c);
  iVar1 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar5,iStack_44,iStack_44 >> 0x1f,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
    uVar5 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar5,0);
  }
  if ((uint)piVar2[3] < 8) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[0xb] = iVar1;
  thunk_FUN_00ec5080(piVar2 + 0xb,iVar1);
  uVar5 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xc0);
  iVar1 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar5,param_2,param_2 >> 0x1f,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
    uVar5 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar5,0);
  }
  if ((uint)piVar2[3] < 9) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[0xc] = iVar1;
  thunk_FUN_00ec5080(piVar2 + 0xc,iVar1);
  uVar5 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xc4);
  iVar1 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11deb88(iVar1,uVar5,param_3,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
    uVar5 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar5,0);
  }
  if ((uint)piVar2[3] < 10) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[0xd] = iVar1;
  thunk_FUN_00ec5080(piVar2 + 0xd,iVar1);
  piVar8 = *(int **)(_UNK_00fd96d0 + 0xfd9618);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x5c);
  if (*(int *)(**(int **)(_UNK_00fd96d4 + 0xfd9638) + 0x74) == 0) {
    FUN_00ec3934(**(int **)(_UNK_00fd96d4 + 0xfd9638));
  }
  Rotatelab_Scripts_ControllerFirebase__SendEvent_1060a54(uVar5,piVar2,0);
  Rotatelab_CustomRotateEventsController__LogMessage_fc833c
            (*(undefined4 **)(_UNK_00fd96d8 + 0xfd9670),**(undefined4 **)(_UNK_00fd96d8 + 0xfd9670))
  ;
  Rotatelab_CustomRotateEventsController__ReportVirtualResourceTransactionToAxon_fc8734
            (param_1,extraout_r1,-param_2,-param_2 >> 0x1f,
             **(undefined4 **)(_UNK_00fd96dc + 0xfd9688));
  return;
}

