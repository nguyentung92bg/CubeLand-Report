/* IL2CPP: Rotatelab.CustomRotateEventsController$$SendEcpmSetEvent
void Rotatelab_CustomRotateEventsController__SendEcpmSetEvent (Rotatelab_CustomRotateEventsController_o* __this, float eCpm, System_String_o* ecpmSource, System_String_o* role, System_String_o* revenuePrecision, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$SendEcpmSetEvent
   void Rotatelab_CustomRotateEventsController__SendEcpmSetEvent
   (Rotatelab_CustomRotateEventsController_o* __this, float eCpm, System_String_o* ecpmSource,
   System_String_o* role, System_String_o* revenuePrecision, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__SendEcpmSetEvent_fd3118
               (undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  double dStack_38;
  
  pcVar9 = (char *)(_UNK_00fe3684 + 0xfe313c);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe3688 + 0xfe3154));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe368c + 0xfe3160));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe3690 + 0xfe316c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe3694 + 0xfe3178));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe3698 + 0xfe3184));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe369c + 0xfe3190));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe36a0 + 0xfe319c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe36a4 + 0xfe31a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe36a8 + 0xfe31b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe36ac + 0xfe31c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe36b0 + 0xfe31cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe36b4 + 0xfe31d8));
    *pcVar9 = '\x01';
  }
  piVar1 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fe36b8 + 0xfe31f0),6);
  puVar10 = *(undefined4 **)(_UNK_00fe36bc + 0xfe3204);
  iVar2 = thunk_FUN_00f00cdc(*puVar10);
  Firebase_Analytics_Parameter___ctor_11dec2c
            (iVar2,**(undefined4 **)(_UNK_00fe36c0 + 0xfe321c),SUB84((double)param_2,0),
             (int)((ulonglong)(double)param_2 >> 0x20),0);
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
  iVar2 = thunk_FUN_00f00cdc(*puVar10);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar2,**(undefined4 **)(_UNK_00fe36c4 + 0xfe32a8),param_3,0);
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
  puVar11 = *(undefined4 **)(_UNK_00fe36c8 + 0xfe3308);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar11);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_Ads_AdManager__get_CurrentNeftaModeName_10f5a1c(iVar2,0);
  iVar2 = thunk_FUN_00f00cdc(*puVar10);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar2,**(undefined4 **)(_UNK_00fe36cc + 0xfe334c),uVar4,0);
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
  iVar2 = thunk_FUN_00f00cdc(*puVar10);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar2,**(undefined4 **)(_UNK_00fe36d0 + 0xfe33c0),param_4,0);
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
  iVar2 = thunk_FUN_00f00cdc(*puVar10);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar2,**(undefined4 **)(_UNK_00fe36d4 + 0xfe3434),param_5,0);
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
  fVar5 = (float)UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar11);
  fVar14 = _UNK_00fe3680;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar12 = *(float *)(iVar2 + 0x14);
  pcVar9 = (char *)(_UNK_00fe36d8 + 0xfe34c8);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe36dc + 0xfe34dc));
    *pcVar9 = '\x01';
  }
  fVar14 = (fVar5 - fVar12) * fVar14;
  if (*(int *)(**(int **)(_UNK_00fe36e0 + 0xfe34f4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar13 = (double)fVar14;
  dVar15 = (double)modf(SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20),&dStack_38);
  if (0.0 <= fVar14) {
    if (dVar15 != 0.5) {
      dVar13 = (double)floor(SUB84(dVar13 + 0.5,0),(int)((ulonglong)(dVar13 + 0.5) >> 0x20));
      goto LAB_00fe3590;
    }
    dVar13 = 1.0;
  }
  else {
    if (dVar15 != -0.5) {
      dVar13 = (double)ceil(SUB84(dVar13 + -0.5,0),(int)((ulonglong)(dVar13 + -0.5) >> 0x20));
      goto LAB_00fe3590;
    }
    dVar13 = -1.0;
  }
  uVar6 = FUN_00f88224(SUB84(dStack_38,0),(int)((ulonglong)dStack_38 >> 0x20));
  dVar13 = dStack_38 + dVar13;
  if ((uVar6 & 1) == 0) {
    dVar13 = dStack_38;
  }
LAB_00fe3590:
  iVar3 = (int)(longlong)dVar13;
  iVar7 = thunk_FUN_00f00cdc(*puVar10);
  iVar2 = iVar3 >> 0x1f;
  if (dVar13 == _UNK_00fe3678) {
    iVar3 = -0x80000000;
    iVar2 = -1;
  }
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar7,**(undefined4 **)(_UNK_00fe36e4 + 0xfe35b8),iVar3,iVar2,0);
  if ((iVar7 != 0) &&
     (iVar2 = thunk_FUN_00f00bc8(iVar7,*(undefined4 *)(*piVar1 + 0x20)), iVar2 == 0)) {
    uVar4 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar4,0);
  }
  if ((uint)piVar1[3] < 6) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[9] = iVar7;
  thunk_FUN_00ec5080(piVar1 + 9,iVar7);
  if (*(int *)(**(int **)(_UNK_00fe36e8 + 0xfe3630) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Scripts_ControllerFirebase__SendEvent_1060a54
            (**(undefined4 **)(_UNK_00fe36ec + 0xfe3654),piVar1,0);
  uVar4 = **(undefined4 **)(_UNK_00fe36f0 + 0xfe3664);
  pcVar9 = (char *)(_UNK_00fd83d8 + 0xfd8350);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd83dc + 0xfd8364));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd83e0 + 0xfd8370));
    *pcVar9 = '\x01';
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
  pcVar9 = (char *)(_UNK_035c1d64 + 0x35c1c58);
  if (*pcVar9 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d68 + 0x35c1c6c),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d6c + 0x35c1c78));
    *pcVar9 = '\x01';
  }
  piVar1 = *(int **)(_UNK_035c1d70 + 0x35c1c8c);
  if (*(int *)(*piVar1 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar9 = (char *)(_UNK_035c1d74 + 0x35c1ca8);
  if (*pcVar9 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d78 + 0x35c1cbc));
    *pcVar9 = '\x01';
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
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_035c1d7c + 0x35c1d00)) {
        puVar10 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xd8);
        goto LAB_035c1d48;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar6 != 0);
  }
  puVar10 = (undefined4 *)thunk_FUN_00efdb38(piVar1,**(int **)(_UNK_035c1d7c + 0x35c1d00),3);
LAB_035c1d48:
                    /* WARNING: Could not recover jumptable at 0x035c1d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar10)(piVar1,3,uVar4,puVar10[1]);
  return;
}

