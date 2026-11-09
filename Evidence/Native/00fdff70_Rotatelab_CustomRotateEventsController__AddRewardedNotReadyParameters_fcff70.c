/* IL2CPP: Rotatelab.CustomRotateEventsController$$AddRewardedNotReadyParameters
void Rotatelab_CustomRotateEventsController__AddRewardedNotReadyParameters (System_Collections_Generic_List_Parameter__o* parameters, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$AddRewardedNotReadyParameters
   void Rotatelab_CustomRotateEventsController__AddRewardedNotReadyParameters
   (System_Collections_Generic_List_Parameter__o* parameters, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__AddRewardedNotReadyParameters_fcff70(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  double dVar14;
  float fVar15;
  undefined8 uVar16;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar7 = (char *)(_UNK_00fe06b8 + 0xfdff90);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe06bc + 0xfdffa4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe06c0 + 0xfdffb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe06c4 + 0xfdffbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe06c8 + 0xfdffc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe06cc + 0xfdffd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe06d0 + 0xfdffe0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe06d4 + 0xfdffec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe06d8 + 0xfdfff8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe06dc + 0xfe0004));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe06e0 + 0xfe0010));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe06e4 + 0xfe001c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe06e8 + 0xfe0028));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe06ec + 0xfe0034));
    *pcVar7 = '\x01';
  }
  puVar8 = *(undefined4 **)(_UNK_00fe06f0 + 0xfe0048);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar11 = *(int *)(iVar1 + 0x4c);
  fVar2 = (float)UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar13 = *(int **)(_UNK_00fe06f4 + 0xfe0094);
  fVar15 = *(float *)(iVar1 + 0x14);
  if (*(int *)(*piVar13 + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar7 = (char *)(_UNK_00fe06f8 + 0xfe00b8);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe06fc + 0xfe00cc));
    *pcVar7 = '\x01';
  }
  dVar14 = (double)(fVar2 - fVar15);
  if (*(int *)(*piVar13 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar16 = System_Math__Round_2b702b4(SUB84(dVar14,0),(int)((ulonglong)dVar14 >> 0x20),1,0,0);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fe0700 + 0xfe0118));
  Firebase_Analytics_Parameter___ctor_11dec2c
            (uVar3,**(undefined4 **)(_UNK_00fe0704 + 0xfe0134),(int)uVar16,
             (int)((ulonglong)uVar16 >> 0x20),0);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(param_1 + 8);
  uVar9 = *(uint *)(param_1 + 0xc);
  piVar6 = *(int **)(_UNK_00fe0708 + 0xfe016c);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar9 < *(uint *)(iVar1 + 0xc)) {
    *(uint *)(param_1 + 0xc) = uVar9 + 1;
    puVar8 = (undefined4 *)(iVar1 + uVar9 * 4 + 0x10);
    *puVar8 = uVar3;
    thunk_FUN_00ec5080(puVar8,uVar3);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (param_1,uVar3,*(undefined4 *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38));
  }
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar2 = (float)Rotatelab_Ads_RewardedAdFormat__get_SecondsSinceShow_10f405c(iVar11,0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe070c + 0xfe01ec));
    *pcVar7 = '\x01';
  }
  if (*(int *)(*piVar13 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar16 = System_Math__Round_2b702b4
                     (SUB84((double)fVar2,0),(int)((ulonglong)(double)fVar2 >> 0x20),1,0,0);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fe0710 + 0xfe0238));
  Firebase_Analytics_Parameter___ctor_11dec2c
            (uVar3,**(undefined4 **)(_UNK_00fe0714 + 0xfe0254),(int)uVar16,
             (int)((ulonglong)uVar16 >> 0x20),0);
  iVar1 = *(int *)(param_1 + 8);
  uVar9 = *(uint *)(param_1 + 0xc);
  piVar6 = *(int **)(_UNK_00fe0718 + 0xfe0280);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar9 < *(uint *)(iVar1 + 0xc)) {
    *(uint *)(param_1 + 0xc) = uVar9 + 1;
    puVar8 = (undefined4 *)(iVar1 + uVar9 * 4 + 0x10);
    *puVar8 = uVar3;
    thunk_FUN_00ec5080(puVar8,uVar3);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (param_1,uVar3,*(undefined4 *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38));
  }
  puVar8 = *(undefined4 **)(_UNK_00fe071c + 0xfe02dc);
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar2 = (float)Rotatelab_Ads_RewardedAdFormat__get_SecondsSinceShowEnd_10f409c(iVar11,0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe0720 + 0xfe0308));
    *pcVar7 = '\x01';
  }
  if (*(int *)(*piVar13 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar16 = System_Math__Round_2b702b4
                     (SUB84((double)fVar2,0),(int)((ulonglong)(double)fVar2 >> 0x20),1,0,0);
  uVar3 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11dec2c
            (uVar3,**(undefined4 **)(_UNK_00fe0724 + 0xfe0368),(int)uVar16,
             (int)((ulonglong)uVar16 >> 0x20),0);
  iVar1 = *(int *)(param_1 + 8);
  uVar9 = *(uint *)(param_1 + 0xc);
  piVar13 = *(int **)(_UNK_00fe0728 + 0xfe0394);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar9 < *(uint *)(iVar1 + 0xc)) {
    *(uint *)(param_1 + 0xc) = uVar9 + 1;
    puVar4 = (undefined4 *)(iVar1 + uVar9 * 4 + 0x10);
    *puVar4 = uVar3;
    thunk_FUN_00ec5080(puVar4,uVar3);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (param_1,uVar3,*(undefined4 *)(*(int *)(*(int *)(*piVar13 + 0x10) + 0x60) + 0x38));
  }
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = Rotatelab_Ads_RewardedAdFormat__get_IsShowing_10f4040(iVar11,0);
  uVar10 = **(undefined4 **)(_UNK_00fe072c + 0xfe040c);
  uVar5 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11debc4(uVar5,uVar10,uVar3,0,0);
  iVar1 = *(int *)(param_1 + 8);
  uVar9 = *(uint *)(param_1 + 0xc);
  iVar12 = *piVar13;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar9 < *(uint *)(iVar1 + 0xc)) {
    *(uint *)(param_1 + 0xc) = uVar9 + 1;
    puVar4 = (undefined4 *)(iVar1 + uVar9 * 4 + 0x10);
    *puVar4 = uVar5;
    thunk_FUN_00ec5080(puVar4,uVar5);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (param_1,uVar5,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
  }
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar11 + 0x20);
  uVar3 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11debc4
            (uVar3,**(undefined4 **)(_UNK_00fe0730 + 0xfe04c0),iVar1,iVar1 >> 0x1f,0);
  iVar1 = *(int *)(param_1 + 8);
  uVar9 = *(uint *)(param_1 + 0xc);
  iVar12 = *piVar13;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar9 < *(uint *)(iVar1 + 0xc)) {
    *(uint *)(param_1 + 0xc) = uVar9 + 1;
    puVar4 = (undefined4 *)(iVar1 + uVar9 * 4 + 0x10);
    *puVar4 = uVar3;
    thunk_FUN_00ec5080(puVar4,uVar3);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (param_1,uVar3,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
  }
  iVar1 = *(int *)(iVar11 + 0x24);
  uVar3 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11debc4
            (uVar3,**(undefined4 **)(_UNK_00fe0734 + 0xfe0558),iVar1,iVar1 >> 0x1f,0);
  iVar1 = *(int *)(param_1 + 8);
  uVar9 = *(uint *)(param_1 + 0xc);
  iVar11 = *piVar13;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar9 < *(uint *)(iVar1 + 0xc)) {
    *(uint *)(param_1 + 0xc) = uVar9 + 1;
    puVar4 = (undefined4 *)(iVar1 + uVar9 * 4 + 0x10);
    *puVar4 = uVar3;
    thunk_FUN_00ec5080(puVar4,uVar3);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (param_1,uVar3,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
  }
  if (*(int *)(**(int **)(_UNK_00fe0738 + 0xfe05d8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uStack_3c = UnityEngine_Application__get_internetReachability_35a8364(0);
  uStack_40 = 0xffffffff;
  uStack_44 = **(undefined4 **)(_UNK_00fe073c + 0xfe05fc);
  uVar3 = System_Enum__ToString_2bab8c0(&uStack_44,0);
  uVar5 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11deb88
            (uVar5,**(undefined4 **)(_UNK_00fe0740 + 0xfe063c),uVar3,0);
  iVar1 = *(int *)(param_1 + 8);
  uVar9 = *(uint *)(param_1 + 0xc);
  iVar11 = *piVar13;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar9 < *(uint *)(iVar1 + 0xc)) {
    *(uint *)(param_1 + 0xc) = uVar9 + 1;
    puVar8 = (undefined4 *)(iVar1 + uVar9 * 4 + 0x10);
    *puVar8 = uVar5;
    thunk_FUN_00ec5080(puVar8,uVar5);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (param_1,uVar5,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
  }
  return;
}

