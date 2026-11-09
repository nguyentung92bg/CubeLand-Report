/* IL2CPP: Rotatelab.CustomRotateEventsController$$SendSessionAdLoaded
void Rotatelab_CustomRotateEventsController__SendSessionAdLoaded (Rotatelab_CustomRotateEventsController_o* __this, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$SendSessionAdLoaded
   void Rotatelab_CustomRotateEventsController__SendSessionAdLoaded
   (Rotatelab_CustomRotateEventsController_o* __this, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo*
   method); */

void Rotatelab_CustomRotateEventsController__SendSessionAdLoaded_fd2310
               (undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  
  pcVar6 = (char *)(_UNK_00fe2764 + 0xfe232c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2768 + 0xfe2340));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe276c + 0xfe234c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2770 + 0xfe2358));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2774 + 0xfe2364));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2778 + 0xfe2370));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe277c + 0xfe237c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2780 + 0xfe2388));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2784 + 0xfe2394));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2788 + 0xfe23a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe278c + 0xfe23ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2790 + 0xfe23b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2794 + 0xfe23c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2798 + 0xfe23d0));
    *pcVar6 = '\x01';
  }
  piVar1 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fe279c + 0xfe23e8),6);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar8 = *(undefined4 **)(_UNK_00fe27a0 + 0xfe2408);
  uVar7 = *(undefined4 *)(param_2 + 0xc);
  iVar2 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar2,**(undefined4 **)(_UNK_00fe27a4 + 0xfe2428),uVar7,0);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if (piVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[4] = iVar2;
  thunk_FUN_00ec5080(piVar1 + 4,iVar2);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  iVar2 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11dec2c
            (iVar2,**(undefined4 **)(_UNK_00fe27a8 + 0xfe24a8),(int)uVar9,
             (int)((ulonglong)uVar9 >> 0x20),0);
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar1[3] < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[5] = iVar2;
  thunk_FUN_00ec5080(piVar1 + 5,iVar2);
  uVar7 = *(undefined4 *)(param_2 + 0x28);
  iVar2 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar2,**(undefined4 **)(_UNK_00fe27ac + 0xfe2528),uVar7,0);
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar1[3] < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[6] = iVar2;
  thunk_FUN_00ec5080(piVar1 + 6,iVar2);
  iVar2 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar2,**(undefined4 **)(_UNK_00fe27b0 + 0xfe2598),
             **(undefined4 **)(_UNK_00fe27b4 + 0xfe25a4),0);
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar1[3] < 4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[7] = iVar2;
  thunk_FUN_00ec5080(piVar1 + 7,iVar2);
  uVar7 = *(undefined4 *)(param_2 + 8);
  iVar2 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar2,**(undefined4 **)(_UNK_00fe27b8 + 0xfe261c),uVar7,0);
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar1[3] < 5) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[8] = iVar2;
  thunk_FUN_00ec5080(piVar1 + 8,iVar2);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fe27bc + 0xfe267c));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = Rotatelab_Ads_AdManager__get_CurrentNeftaModeName_10f5a1c(iVar2,0);
  iVar2 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar2,**(undefined4 **)(_UNK_00fe27c0 + 0xfe26c0),uVar7,0);
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar1[3] < 6) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[9] = iVar2;
  thunk_FUN_00ec5080(piVar1 + 9,iVar2);
  if (*(int *)(**(int **)(_UNK_00fe27c4 + 0xfe2720) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Scripts_ControllerFirebase__SendEvent_1060a54
            (**(undefined4 **)(_UNK_00fe27c8 + 0xfe2744),piVar1,0);
  uVar7 = **(undefined4 **)(_UNK_00fe27cc + 0xfe2754);
  pcVar6 = (char *)(_UNK_00fd83d8 + 0xfd8350);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd83dc + 0xfd8364));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd83e0 + 0xfd8370));
    *pcVar6 = '\x01';
  }
  piVar1 = *(int **)(_UNK_00fd83e4 + 0xfd8384);
  iVar2 = *piVar1;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar1;
  }
  if (*(char *)(*(int *)(iVar2 + 0x5c) + 0x78) == '\0') {
    return;
  }
  if (*(int *)(**(int **)(_UNK_00fd83e8 + 0xfd83b4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar6 = (char *)(_UNK_035c1d64 + 0x35c1c58);
  if (*pcVar6 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d68 + 0x35c1c6c),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d6c + 0x35c1c78));
    *pcVar6 = '\x01';
  }
  piVar1 = *(int **)(_UNK_035c1d70 + 0x35c1c8c);
  if (*(int *)(*piVar1 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar6 = (char *)(_UNK_035c1d74 + 0x35c1ca8);
  if (*pcVar6 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d78 + 0x35c1cbc));
    *pcVar6 = '\x01';
  }
  iVar2 = *piVar1;
  if (*(int *)(iVar2 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar2 = *piVar1;
  }
  piVar1 = *(int **)(*(int *)(iVar2 + 0x5c) + 4);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *piVar1;
  uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_035c1d7c + 0x35c1d00)) {
        puVar8 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xd8);
        goto LAB_035c1d48;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar8 = (undefined4 *)thunk_FUN_00efdb38(piVar1,**(int **)(_UNK_035c1d7c + 0x35c1d00),3);
LAB_035c1d48:
                    /* WARNING: Could not recover jumptable at 0x035c1d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar8)(piVar1,3,uVar7,puVar8[1]);
  return;
}

