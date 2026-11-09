/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnBoosterUsed
void Rotatelab_CustomRotateEventsController__OnBoosterUsed (Rotatelab_CustomRotateEventsController_o* __this, int32_t boosterType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnBoosterUsed
   void Rotatelab_CustomRotateEventsController__OnBoosterUsed
   (Rotatelab_CustomRotateEventsController_o* __this, int32_t boosterType, const MethodInfo*
   method); */

void Rotatelab_CustomRotateEventsController__OnBoosterUsed_fc78f0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_r1;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  byte bStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_00fd8294 + 0xfd790c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd8298 + 0xfd7920));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd829c + 0xfd792c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd82a0 + 0xfd7938));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd82a4 + 0xfd7944));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd82a8 + 0xfd7950));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd82ac + 0xfd795c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd82b0 + 0xfd7968));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd82b4 + 0xfd7974));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd82b8 + 0xfd7980));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd82bc + 0xfd798c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd82c0 + 0xfd7998));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd82c4 + 0xfd79a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd82c8 + 0xfd79b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd82cc + 0xfd79bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd82d0 + 0xfd79c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd82d4 + 0xfd79d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd82d8 + 0xfd79e0));
    *pcVar8 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd82dc + 0xfd79f4));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = param_2 - 1;
  *(int *)(iVar1 + 8) = param_2;
  if ((8 < uVar6) || ((0x10fU >> (uVar6 & 0xff) & 1) == 0)) {
    FUN_00b87610(iVar1);
    iStack_48 = *(int *)(iVar1 + 8);
    uVar7 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_00fd8324 + 0xfd8230));
    uVar7 = FUN_00ec393c(uVar7,&iStack_48);
    uVar9 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_00fd8328 + 0xfd8248));
    uVar7 = System_String__Format_29ffb6c(uVar9,uVar7,0);
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_00fd832c + 0xfd8264));
    uVar9 = thunk_FUN_00f00cdc();
    System_ArgumentException___ctor_2b113a4(uVar9,uVar7,0);
    uVar7 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_00fd8330 + 0xfd8284));
    func_0x00ec3920(uVar9,uVar7);
                    /* WARNING: Subroutine does not return */
    FUN_00ec3760();
  }
  uVar7 = *(undefined4 *)(_UNK_00fd82e0 + 0xfd7a44 + uVar6 * 4);
  if (*(int *)(**(int **)(_UNK_00fd82e4 + 0xfd7a48) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = Rotatelab_CustomRotateEventsController__GetLevelBaseBoosterUseCount_fc67d4(0,uVar7);
  Rotatelab_CustomRotateEventsController__SetLevelBaseBoosterUseCount_fc6850(0,uVar7,iVar2 + 1);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fd82e8 + 0xfd7a88));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Currency_CurrencyManager__GetBooster_10837e8(iVar2,0,uVar7,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = *(uint *)(iVar2 + 0x28);
  puVar3 = *(undefined4 **)(_UNK_00fd82ec + 0xfd7ae4);
  *(uint *)(iVar2 + 0x28) = uVar6 + 1;
  *(uint *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + (uint)(0xfffffffe < uVar6);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LevelManager__GetAttemptInfo_106a51c(&iStack_48,iVar2,0);
  piVar4 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fd82f0 + 0xfd7b48),10);
  piVar11 = *(int **)(_UNK_00fd82f4 + 0xfd7b6c);
  iVar2 = *piVar11;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar11;
  }
  puVar3 = *(undefined4 **)(_UNK_00fd82f8 + 0xfd7b94);
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xb0);
  iVar2 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar2,uVar7,8,0,0);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar2 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if (piVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar4[4] = iVar2;
  thunk_FUN_00ec5080(piVar4 + 4,iVar2);
  uVar7 = *(undefined4 *)(*(int *)(*piVar11 + 0x5c) + 0xb4);
  iVar2 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar2,uVar7,bStack_30 & 1,0,0);
  if ((iVar2 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar4[3] < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar4[5] = iVar2;
  thunk_FUN_00ec5080(piVar4 + 5,iVar2);
  iVar2 = *piVar11;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar11;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
  iVar2 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar2,uVar7,uStack_40,uStack_3c,0);
  if ((iVar2 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar4[3] < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar4[6] = iVar2;
  thunk_FUN_00ec5080(piVar4 + 6,iVar2);
  uVar7 = *(undefined4 *)(*(int *)(*piVar11 + 0x5c) + 0x18);
  iVar2 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar2,uVar7,uStack_38,uStack_34,0);
  if ((iVar2 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar4[3] < 4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar4[7] = iVar2;
  thunk_FUN_00ec5080(piVar4 + 7,iVar2);
  uVar7 = *(undefined4 *)(*(int *)(*piVar11 + 0x5c) + 0x20);
  if (iStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iStack_48 + 0xc);
  iVar2 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar2,uVar7,iVar5,iVar5 >> 0x1f,0);
  if ((iVar2 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar4[3] < 5) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar4[8] = iVar2;
  thunk_FUN_00ec5080(piVar4 + 8,iVar2);
  uVar7 = *(undefined4 *)(*(int *)(*piVar11 + 0x5c) + 0x24);
  iVar2 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11deb88(iVar2,uVar7,uStack_2c,0);
  if ((iVar2 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar4[3] < 6) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar4[9] = iVar2;
  thunk_FUN_00ec5080(piVar4 + 9,iVar2);
  uVar9 = *(undefined4 *)(*(int *)(*piVar11 + 0x5c) + 0x28);
  uVar7 = UnityEngine_Object__get_name_36081bc(iStack_48,0);
  iVar2 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11deb88(iVar2,uVar9,uVar7,0);
  if ((iVar2 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar4[3] < 7) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar4[10] = iVar2;
  thunk_FUN_00ec5080(piVar4 + 10,iVar2);
  uVar7 = *(undefined4 *)(*(int *)(*piVar11 + 0x5c) + 0x1c);
  iVar2 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar2,uVar7,iStack_44,iStack_44 >> 0x1f,0);
  if ((iVar2 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar4[3] < 8) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar4[0xb] = iVar2;
  thunk_FUN_00ec5080(piVar4 + 0xb,iVar2);
  uVar7 = *(undefined4 *)(*(int *)(*piVar11 + 0x5c) + 0xb8);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fd82fc + 0xfd7fcc));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar10 = *(undefined4 *)(*(int *)(iVar2 + 0x14) + 0xc);
  uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd8300 + 0xfd8000));
  System_Func_object__bool____ctor_239b120
            (uVar9,iVar1,**(undefined4 **)(_UNK_00fd8304 + 0xfd8024),0);
  iVar2 = System_Linq_Enumerable__FirstOrDefault_object__146abf0
                    (uVar10,uVar9,**(undefined4 **)(_UNK_00fd8308 + 0xfd803c));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar2 + 0x1c);
  iVar2 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar2,uVar7,iVar5,iVar5 >> 0x1f,0);
  if ((iVar2 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar4[3] < 9) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar4[0xc] = iVar2;
  thunk_FUN_00ec5080(piVar4 + 0xc,iVar2);
  uVar9 = *(undefined4 *)(*(int *)(*piVar11 + 0x5c) + 0xbc);
  uStack_40 = *(undefined4 *)(iVar1 + 8);
  iStack_48 = **(int **)(_UNK_00fd830c + 0xfd80e0);
  iStack_44 = 0xffffffff;
  uVar7 = System_Enum__ToString_2bab8c0(&iStack_48,0);
  iVar1 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11deb88(iVar1,uVar9,uVar7,0);
  if ((iVar1 != 0) &&
     (iVar2 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar4 + 0x20)), iVar2 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar4[3] < 10) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar4[0xd] = iVar1;
  thunk_FUN_00ec5080(piVar4 + 0xd,iVar1);
  piVar11 = *(int **)(_UNK_00fd8310 + 0xfd8174);
  iVar1 = *piVar11;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar11;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x50);
  if (*(int *)(**(int **)(_UNK_00fd8314 + 0xfd8194) + 0x74) == 0) {
    FUN_00ec3934(**(int **)(_UNK_00fd8314 + 0xfd8194));
  }
  Rotatelab_Scripts_ControllerFirebase__SendEvent_1060a54(uVar7,piVar4,0);
  Rotatelab_CustomRotateEventsController__LogMessage_fc833c
            (*(undefined4 **)(_UNK_00fd8318 + 0xfd81cc),**(undefined4 **)(_UNK_00fd8318 + 0xfd81cc))
  ;
  Rotatelab_CustomRotateEventsController__ReportToAxon_fc83ec
            (param_1,**(undefined4 **)(_UNK_00fd831c + 0xfd81e0),0);
  Rotatelab_CustomRotateEventsController__ReportVirtualResourceTransactionToAxon_fc8734
            (param_1,extraout_r1,0xffffffff,0xffffffff,**(undefined4 **)(_UNK_00fd8320 + 0xfd8200));
  return;
}

