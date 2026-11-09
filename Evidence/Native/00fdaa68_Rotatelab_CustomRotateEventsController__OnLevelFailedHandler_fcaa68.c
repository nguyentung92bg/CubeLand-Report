/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnLevelFailedHandler
void Rotatelab_CustomRotateEventsController__OnLevelFailedHandler (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnLevelFailedHandler
   void Rotatelab_CustomRotateEventsController__OnLevelFailedHandler
   (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnLevelFailedHandler_fcaa68(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  int *piVar17;
  uint uVar18;
  int *piVar19;
  undefined4 uVar20;
  uint in_fpscr;
  float fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  uint uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_4c;
  
  pcVar11 = (char *)(_UNK_00fdba58 + 0xfdaa88);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdba5c + 0xfdaa9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdba60 + 0xfdaaa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdba64 + 0xfdaab4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdba68 + 0xfdaac0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdba6c + 0xfdaacc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdba70 + 0xfdaad8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdba74 + 0xfdaae4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdba78 + 0xfdaaf0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdba7c + 0xfdaafc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdba80 + 0xfdab08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdba84 + 0xfdab14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdba88 + 0xfdab20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdba8c + 0xfdab2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdba90 + 0xfdab38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdba94 + 0xfdab44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdba98 + 0xfdab50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdbb54 + 0xfdab5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdbb58 + 0xfdab68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdbb5c + 0xfdab74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdbb60 + 0xfdab80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdbb64 + 0xfdab8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdbb68 + 0xfdab98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdbb6c + 0xfdaba4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdbb70 + 0xfdabb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdbb74 + 0xfdabbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdbb78 + 0xfdabc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdbb7c + 0xfdabd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdbb80 + 0xfdabe0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdbb84 + 0xfdabec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdbb88 + 0xfdabf8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdbb8c + 0xfdac04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdbb90 + 0xfdac10));
    *pcVar11 = '\x01';
  }
  iStack_4c = 0;
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdbb94 + 0xfdac28));
  System_Object___ctor_2bb93bc(iVar2,0);
  iVar3 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar10 = *(uint *)(iVar3 + 0x68);
  puVar4 = *(undefined4 **)(_UNK_00fdbc64 + 0xfdac74);
  *(uint *)(iVar3 + 0x68) = uVar10 + 1;
  *(uint *)(iVar3 + 0x6c) = *(int *)(iVar3 + 0x6c) + (uint)(0xfffffffe < uVar10);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar4 = *(undefined4 **)(_UNK_00fdbc68 + 0xfdac9c);
  uVar5 = System_Linq_Enumerable__OfType_object__146d384(*(undefined4 *)(iVar3 + 0xb4),*puVar4);
  puVar16 = *(undefined4 **)(_UNK_00fdbc6c + 0xfdacb0);
  iVar6 = System_Linq_Enumerable__ToArray_object__1476e44(uVar5,*puVar16);
  uVar5 = System_Linq_Enumerable__OfType_object__146d384(*(undefined4 *)(iVar3 + 0xb8),*puVar4);
  iVar7 = System_Linq_Enumerable__ToArray_object__1476e44(uVar5,*puVar16);
  fVar24 = _UNK_00fdb0a4;
  uVar10 = 0;
  iVar14 = 0;
  while( true ) {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar6 + 0xc) <= (int)uVar10) break;
    if (*(uint *)(iVar6 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar12 = *(int *)(iVar6 + 0x10 + uVar10 * 4);
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = uVar10 + 1;
    iVar14 = *(int *)(iVar12 + 0x114) + iVar14;
  }
  fVar22 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x16) & 3);
  pcVar11 = (char *)(_UNK_00fdbc70 + 0xfdad40);
  fVar21 = (float)VectorSignedToFloat(*(undefined4 *)(iVar3 + 0xb0),(byte)(in_fpscr >> 0x16) & 3);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdbd38 + 0xfdad5c));
    *pcVar11 = '\x01';
  }
  fVar21 = (fVar22 / fVar21) * fVar24;
  piVar19 = *(int **)(_UNK_00fdbd3c + 0xfdad74);
  if (*(int *)(*piVar19 + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar23 = (double)fVar21;
  dVar25 = (double)modf(SUB84(dVar23,0),(int)((ulonglong)dVar23 >> 0x20),&uStack_70);
  if (NAN(fVar21)) {
    uVar10 = in_fpscr & 0xfffffff | (uint)(dVar25 == -0.5) << 0x1e;
    if (SUB41(uVar10 >> 0x1e,0)) {
      dVar23 = -1.0;
LAB_00fdadd8:
      dVar25 = (double)CONCAT44(uStack_6c,uStack_70);
      uVar8 = FUN_00f88224(uStack_70,uStack_6c);
      dVar23 = dVar25 + dVar23;
      if ((uVar8 & 1) == 0) {
        dVar23 = dVar25;
      }
    }
    else {
      dVar23 = (double)ceil(SUB84(dVar23 + -0.5,0),(int)((ulonglong)(dVar23 + -0.5) >> 0x20));
    }
  }
  else {
    uVar10 = in_fpscr & 0xfffffff | (uint)(dVar25 == 0.5) << 0x1e;
    if (SUB41(uVar10 >> 0x1e,0)) {
      dVar23 = 1.0;
      goto LAB_00fdadd8;
    }
    dVar23 = (double)floor(SUB84(dVar23 + 0.5,0),(int)((ulonglong)(dVar23 + 0.5) >> 0x20));
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar21 = (float)VectorSignedToFloat(*(int *)(iVar6 + 0xc),(byte)(uVar10 >> 0x16) & 3);
  fVar22 = (float)VectorSignedToFloat(*(int *)(iVar7 + 0xc) + *(int *)(iVar6 + 0xc),
                                      (byte)(uVar10 >> 0x16) & 3);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdbdec + 0xfdae54));
    *pcVar11 = '\x01';
  }
  fVar24 = (fVar21 / fVar22) * fVar24;
  if (*(int *)(*piVar19 + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar25 = (double)fVar24;
  dVar26 = (double)modf(SUB84(dVar25,0),(int)((ulonglong)dVar25 >> 0x20),&uStack_70);
  if (0.0 <= fVar24) {
    if (dVar26 != 0.5) {
      dVar25 = (double)floor(SUB84(dVar25 + 0.5,0),(int)((ulonglong)(dVar25 + 0.5) >> 0x20));
      goto LAB_00fdaefc;
    }
    dVar25 = 1.0;
  }
  else {
    if (dVar26 != -0.5) {
      dVar25 = (double)ceil(SUB84(dVar25 + -0.5,0),(int)((ulonglong)(dVar25 + -0.5) >> 0x20));
      goto LAB_00fdaefc;
    }
    dVar25 = -1.0;
  }
  dVar26 = (double)CONCAT44(uStack_6c,uStack_70);
  uVar10 = FUN_00f88224(uStack_70,uStack_6c);
  dVar25 = dVar26 + dVar25;
  if ((uVar10 & 1) == 0) {
    dVar25 = dVar26;
  }
LAB_00fdaefc:
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fdbe9c + 0xfdaf08));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LevelManager__GetAttemptInfo_106a51c(&uStack_70,iVar3,0);
  uVar8 = uStack_6c;
  uVar10 = uStack_70;
  Rotatelab_CustomRotateEventsController__GetProgressInfo_fca97c
            (&uStack_70,uStack_64,uStack_70,uStack_6c,uStack_68,uStack_64,uStack_60,uStack_5c,
             uStack_58,uStack_54);
  uVar1 = uStack_6c;
  piVar19 = *(int **)(_UNK_00fdbf54 + 0xfdaf68);
  iVar3 = *piVar19;
  if ((uStack_70 & 1) == 0) {
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar19;
    }
    puVar4 = (undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x20);
  }
  else {
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar19;
    }
    puVar4 = (undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
  }
  uVar5 = *puVar4;
  iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdbf58 + 0xfdafc4));
  System_Collections_Generic_List_object____ctor_267d274
            (iVar3,**(undefined4 **)(_UNK_00fdbf5c + 0xfdafe0));
  piVar19 = *(int **)(_UNK_00fdbf60 + 0xfdaff4);
  iVar6 = *piVar19;
  if (*(int *)(iVar6 + 0x74) == 0) {
    FUN_00ec3934();
    iVar6 = *piVar19;
  }
  uVar13 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xb0);
  uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdbf70 + 0xfdb01c));
  Firebase_Analytics_Parameter___ctor_11debc4(uVar9,uVar13,8,0,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(iVar3 + 8);
  uVar18 = *(uint *)(iVar3 + 0xc);
  piVar19 = *(int **)(_UNK_00fdc024 + 0xfdb070);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar18 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar18 + 1;
    puVar4 = (undefined4 *)(iVar6 + uVar18 * 4 + 0x10);
    *puVar4 = uVar9;
    thunk_FUN_00ec5080(puVar4,uVar9);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(*piVar19 + 0x10) + 0x60) + 0x38));
  }
  piVar17 = *(int **)(_UNK_00fdc028 + 0xfdb0cc);
  uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdc02c + 0xfdb0d4));
  Firebase_Analytics_Parameter___ctor_11debc4(uVar9,uStack_68,uStack_6c,(int)uStack_6c >> 0x1f,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar18 = *(uint *)(iVar3 + 0xc);
  piVar19 = *(int **)(_UNK_00fdc0dc + 0xfdb118);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar18 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar18 + 1;
    puVar4 = (undefined4 *)(iVar6 + uVar18 * 4 + 0x10);
    *puVar4 = uVar9;
    thunk_FUN_00ec5080(puVar4,uVar9);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(*piVar19 + 0x10) + 0x60) + 0x38));
  }
  uVar13 = *(undefined4 *)(*(int *)(*piVar17 + 0x5c) + 4);
  fVar24 = *(float *)(param_1 + 0x10);
  uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdc0e0 + 0xfdb178));
  Firebase_Analytics_Parameter___ctor_11dec2c
            (uVar9,uVar13,SUB84((double)fVar24,0),(int)((ulonglong)(double)fVar24 >> 0x20),0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar18 = *(uint *)(iVar3 + 0xc);
  piVar19 = *(int **)(_UNK_00fdc0e4 + 0xfdb1c8);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar18 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar18 + 1;
    puVar4 = (undefined4 *)(iVar6 + uVar18 * 4 + 0x10);
    *puVar4 = uVar9;
    thunk_FUN_00ec5080(puVar4,uVar9);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(*piVar19 + 0x10) + 0x60) + 0x38));
  }
  uVar13 = *(undefined4 *)(*(int *)(*piVar17 + 0x5c) + 8);
  fVar24 = *(float *)(param_1 + 0x14);
  uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdc0e8 + 0xfdb228));
  Firebase_Analytics_Parameter___ctor_11dec2c
            (uVar9,uVar13,SUB84((double)fVar24,0),(int)((ulonglong)(double)fVar24 >> 0x20),0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar18 = *(uint *)(iVar3 + 0xc);
  piVar19 = *(int **)(_UNK_00fdc254 + 0xfdb278);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar18 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar18 + 1;
    puVar4 = (undefined4 *)(iVar6 + uVar18 * 4 + 0x10);
    *puVar4 = uVar9;
    thunk_FUN_00ec5080(puVar4,uVar9);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(*piVar19 + 0x10) + 0x60) + 0x38));
  }
  uVar9 = *(undefined4 *)(*(int *)(*piVar17 + 0x5c) + 0x2c);
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fdc284 + 0xfdb2d8));
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar13 = Rotatelab_Currency_CurrencyManager__get_Coins_1083318(iVar6,0);
  uVar27 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar13,0);
  uVar13 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdc288 + 0xfdb31c));
  Firebase_Analytics_Parameter___ctor_11debc4
            (uVar13,uVar9,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20),0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar18 = *(uint *)(iVar3 + 0xc);
  piVar19 = *(int **)(_UNK_00fdc28c + 0xfdb358);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar18 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar18 + 1;
    puVar4 = (undefined4 *)(iVar6 + uVar18 * 4 + 0x10);
    *puVar4 = uVar13;
    thunk_FUN_00ec5080(puVar4,uVar13);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar13,*(undefined4 *)(*(int *)(*(int *)(*piVar19 + 0x10) + 0x60) + 0x38));
  }
  piVar19 = *(int **)(_UNK_00fdc290 + 0xfdb3b0);
  uVar9 = *(undefined4 *)(*(int *)(*piVar19 + 0x5c) + 0x54);
  if (*(int *)(**(int **)(_UNK_00fdc294 + 0xfdb3bc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar6 = Rotatelab_UI_FailPanelController__get_levelBasePlayOnUseCount_1118dbc(0);
  uVar13 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdc298 + 0xfdb3f0));
  Firebase_Analytics_Parameter___ctor_11debc4(uVar13,uVar9,iVar6,iVar6 >> 0x1f,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar18 = *(uint *)(iVar3 + 0xc);
  piVar17 = *(int **)(_UNK_00fdc29c + 0xfdb42c);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar18 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar18 + 1;
    puVar4 = (undefined4 *)(iVar6 + uVar18 * 4 + 0x10);
    *puVar4 = uVar13;
    thunk_FUN_00ec5080(puVar4,uVar13);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar13,*(undefined4 *)(*(int *)(*(int *)(*piVar17 + 0x10) + 0x60) + 0x38));
  }
  uVar9 = *(undefined4 *)(*(int *)(*piVar19 + 0x5c) + 0x60);
  if (*(int *)(**(int **)(_UNK_00fdc2a0 + 0xfdb488) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar6 = Rotatelab_CustomRotateEventsController__GetLevelBaseBoosterUseCount_fc67d4(0,1);
  uVar13 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdc2a4 + 0xfdb4c0));
  Firebase_Analytics_Parameter___ctor_11debc4(uVar13,uVar9,iVar6,iVar6 >> 0x1f,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar18 = *(uint *)(iVar3 + 0xc);
  piVar17 = *(int **)(_UNK_00fdc2a8 + 0xfdb4fc);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar18 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar18 + 1;
    puVar4 = (undefined4 *)(iVar6 + uVar18 * 4 + 0x10);
    *puVar4 = uVar13;
    thunk_FUN_00ec5080(puVar4,uVar13);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar13,*(undefined4 *)(*(int *)(*(int *)(*piVar17 + 0x10) + 0x60) + 0x38));
  }
  uVar13 = *(undefined4 *)(*(int *)(*piVar19 + 0x5c) + 100);
  iVar6 = Rotatelab_CustomRotateEventsController__GetLevelBaseBoosterUseCount_fc67d4(0,2);
  uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdc540 + 0xfdb574));
  Firebase_Analytics_Parameter___ctor_11debc4(uVar9,uVar13,iVar6,iVar6 >> 0x1f,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar18 = *(uint *)(iVar3 + 0xc);
  piVar17 = *(int **)(_UNK_00fdc544 + 0xfdb5b0);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar18 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar18 + 1;
    puVar4 = (undefined4 *)(iVar6 + uVar18 * 4 + 0x10);
    *puVar4 = uVar9;
    thunk_FUN_00ec5080(puVar4,uVar9);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(*piVar17 + 0x10) + 0x60) + 0x38));
  }
  uVar13 = *(undefined4 *)(*(int *)(*piVar19 + 0x5c) + 0x68);
  iVar6 = Rotatelab_CustomRotateEventsController__GetLevelBaseBoosterUseCount_fc67d4(0,3);
  uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdc548 + 0xfdb628));
  Firebase_Analytics_Parameter___ctor_11debc4(uVar9,uVar13,iVar6,iVar6 >> 0x1f,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar18 = *(uint *)(iVar3 + 0xc);
  piVar17 = *(int **)(_UNK_00fdc54c + 0xfdb664);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar18 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar18 + 1;
    puVar4 = (undefined4 *)(iVar6 + uVar18 * 4 + 0x10);
    *puVar4 = uVar9;
    thunk_FUN_00ec5080(puVar4,uVar9);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(*piVar17 + 0x10) + 0x60) + 0x38));
  }
  uVar13 = *(undefined4 *)(*(int *)(*piVar19 + 0x5c) + 0x6c);
  iVar6 = Rotatelab_CustomRotateEventsController__GetLevelBaseBoosterUseCount_fc67d4(0,4);
  uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdc550 + 0xfdb6dc));
  Firebase_Analytics_Parameter___ctor_11debc4(uVar9,uVar13,iVar6,iVar6 >> 0x1f,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar18 = *(uint *)(iVar3 + 0xc);
  piVar17 = *(int **)(_UNK_00fdc554 + 0xfdb718);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar18 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar18 + 1;
    puVar4 = (undefined4 *)(iVar6 + uVar18 * 4 + 0x10);
    *puVar4 = uVar9;
    thunk_FUN_00ec5080(puVar4,uVar9);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(*piVar17 + 0x10) + 0x60) + 0x38));
  }
  uVar13 = *(undefined4 *)(*(int *)(*piVar19 + 0x5c) + 0x70);
  iVar6 = Rotatelab_CustomRotateEventsController__GetLevelBaseBoosterUseCount_fc67d4(0,5);
  uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdc558 + 0xfdb790));
  Firebase_Analytics_Parameter___ctor_11debc4(uVar9,uVar13,iVar6,iVar6 >> 0x1f,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar18 = *(uint *)(iVar3 + 0xc);
  piVar17 = *(int **)(_UNK_00fdc55c + 0xfdb7cc);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar18 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar18 + 1;
    puVar4 = (undefined4 *)(iVar6 + uVar18 * 4 + 0x10);
    *puVar4 = uVar9;
    thunk_FUN_00ec5080(puVar4,uVar9);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(*piVar17 + 0x10) + 0x60) + 0x38));
  }
  uVar13 = *(undefined4 *)(*(int *)(*piVar19 + 0x5c) + 0x7c);
  iVar6 = Rotatelab_CustomRotateEventsController__get_LevelBaseManualRotationUseCount_fc6564();
  uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdc560 + 0xfdb838));
  Firebase_Analytics_Parameter___ctor_11debc4(uVar9,uVar13,iVar6,iVar6 >> 0x1f,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar18 = *(uint *)(iVar3 + 0xc);
  piVar17 = *(int **)(_UNK_00fdc564 + 0xfdb87c);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar18 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar18 + 1;
    puVar4 = (undefined4 *)(iVar6 + uVar18 * 4 + 0x10);
    *puVar4 = uVar9;
    thunk_FUN_00ec5080(puVar4,uVar9);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(*piVar17 + 0x10) + 0x60) + 0x38));
  }
  uVar9 = *(undefined4 *)(*(int *)(*piVar19 + 0x5c) + 0x88);
  iVar6 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar20 = *(undefined4 *)(iVar6 + 0x60);
  uVar15 = *(undefined4 *)(iVar6 + 100);
  uVar13 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdc568 + 0xfdb8fc));
  Firebase_Analytics_Parameter___ctor_11debc4(uVar13,uVar9,uVar20,uVar15,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar18 = *(uint *)(iVar3 + 0xc);
  piVar19 = *(int **)(_UNK_00fdc56c + 0xfdb940);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar17 = *(int **)(_UNK_00fdc570 + 0xfdb960);
  if (uVar18 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar18 + 1;
    puVar4 = (undefined4 *)(iVar6 + uVar18 * 4 + 0x10);
    *puVar4 = uVar13;
    thunk_FUN_00ec5080(puVar4,uVar13);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar13,*(undefined4 *)(*(int *)(*(int *)(*piVar19 + 0x10) + 0x60) + 0x38));
  }
  uVar9 = *(undefined4 *)(*(int *)(*piVar17 + 0x5c) + 0x90);
  if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_68 = *(undefined4 *)(uVar10 + 0x50);
  uStack_70 = **(uint **)(_UNK_00fdc574 + 0xfdb9c0);
  uStack_6c = 0xffffffff;
  uVar13 = System_Enum__ToString_2bab8c0(&uStack_70,0);
  uVar15 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdc578 + 0xfdb9ec));
  Firebase_Analytics_Parameter___ctor_11deb88(uVar15,uVar9,uVar13,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar18 = *(uint *)(iVar3 + 0xc);
  piVar19 = *(int **)(_UNK_00fdc57c + 0xfdba24);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar18 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar18 + 1;
    puVar4 = (undefined4 *)(iVar6 + uVar18 * 4 + 0x10);
    *puVar4 = uVar15;
    thunk_FUN_00ec5080(puVar4,uVar15);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar15,*(undefined4 *)(*(int *)(*(int *)(*piVar19 + 0x10) + 0x60) + 0x38));
  }
  iVar6 = (int)(longlong)dVar23;
  uVar13 = *(undefined4 *)(*(int *)(*piVar17 + 0x5c) + 0x94);
  iVar7 = *(int *)(param_1 + 0x1c);
  uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdc580 + 0xfdbacc));
  Firebase_Analytics_Parameter___ctor_11debc4(uVar9,uVar13,iVar7,iVar7 >> 0x1f,0);
  iVar7 = *(int *)(iVar3 + 8);
  uVar18 = *(uint *)(iVar3 + 0xc);
  piVar19 = *(int **)(_UNK_00fdc584 + 0xfdbb1c);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar18 < *(uint *)(iVar7 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar18 + 1;
    puVar4 = (undefined4 *)(iVar7 + uVar18 * 4 + 0x10);
    *puVar4 = uVar9;
    thunk_FUN_00ec5080(puVar4,uVar9);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(*piVar19 + 0x10) + 0x60) + 0x38));
  }
  iVar14 = (int)(longlong)dVar25;
  uVar13 = *(undefined4 *)(*(int *)(**(int **)(_UNK_00fdc588 + 0xfdbbc0) + 0x5c) + 0x9c);
  uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdc58c + 0xfdbbd0));
  dVar26 = _UNK_00fdbf68;
  iVar7 = iVar6 >> 0x1f;
  if (dVar23 == _UNK_00fdbf68) {
    iVar6 = -0x80000000;
    iVar7 = -1;
  }
  Firebase_Analytics_Parameter___ctor_11debc4(uVar9,uVar13,iVar6,iVar7,0);
  iVar6 = *(int *)(iVar3 + 8);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  uVar18 = *(uint *)(iVar3 + 0xc);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar18 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar18 + 1;
    puVar4 = (undefined4 *)(iVar6 + uVar18 * 4 + 0x10);
    *puVar4 = uVar9;
    thunk_FUN_00ec5080(puVar4,uVar9);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar9,
               *(undefined4 *)
                (*(int *)(*(int *)(**(int **)(_UNK_00fdc590 + 0xfdbc30) + 0x10) + 0x60) + 0x38));
  }
  piVar19 = *(int **)(_UNK_00fdc594 + 0xfdbc9c);
  uVar13 = *(undefined4 *)(*(int *)(*piVar19 + 0x5c) + 0xa0);
  uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdc598 + 0xfdbcac));
  iVar6 = iVar14 >> 0x1f;
  if (dVar25 == dVar26) {
    iVar14 = -0x80000000;
    iVar6 = -1;
  }
  Firebase_Analytics_Parameter___ctor_11debc4(uVar9,uVar13,iVar14,iVar6,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar18 = *(uint *)(iVar3 + 0xc);
  piVar17 = *(int **)(_UNK_00fdc59c + 0xfdbd04);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar18 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar18 + 1;
    puVar4 = (undefined4 *)(iVar6 + uVar18 * 4 + 0x10);
    *puVar4 = uVar9;
    thunk_FUN_00ec5080(puVar4,uVar9);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(*piVar17 + 0x10) + 0x60) + 0x38));
  }
  uVar13 = *(undefined4 *)(*(int *)(*piVar19 + 0x5c) + 0x1c);
  uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdc5a0 + 0xfdbd6c));
  Firebase_Analytics_Parameter___ctor_11debc4(uVar9,uVar13,uVar8,(int)uVar8 >> 0x1f,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar8 = *(uint *)(iVar3 + 0xc);
  piVar17 = *(int **)(_UNK_00fdc5a4 + 0xfdbdb4);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar8 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar8 + 1;
    puVar4 = (undefined4 *)(iVar6 + uVar8 * 4 + 0x10);
    *puVar4 = uVar9;
    thunk_FUN_00ec5080(puVar4,uVar9);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(*piVar17 + 0x10) + 0x60) + 0x38));
  }
  iVar6 = *(int *)(uVar10 + 0xc);
  uVar13 = *(undefined4 *)(*(int *)(*piVar19 + 0x5c) + 0x20);
  uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdc5a8 + 0xfdbe1c));
  Firebase_Analytics_Parameter___ctor_11debc4(uVar9,uVar13,iVar6,iVar6 >> 0x1f,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar8 = *(uint *)(iVar3 + 0xc);
  piVar17 = *(int **)(_UNK_00fdc5ac + 0xfdbe68);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar8 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar8 + 1;
    puVar4 = (undefined4 *)(iVar6 + uVar8 * 4 + 0x10);
    *puVar4 = uVar9;
    thunk_FUN_00ec5080(puVar4,uVar9);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(*piVar17 + 0x10) + 0x60) + 0x38));
  }
  uVar9 = *(undefined4 *)(*(int *)(*piVar19 + 0x5c) + 0x34);
  iVar6 = **(int **)(_UNK_00fdc5b0 + 0xfdbed4);
  if (*(int *)(uVar10 + 0x10) != 0) {
    iVar6 = *(int *)(uVar10 + 0x10);
  }
  uVar13 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdc5b4 + 0xfdbee8));
  Firebase_Analytics_Parameter___ctor_11deb88(uVar13,uVar9,iVar6,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar8 = *(uint *)(iVar3 + 0xc);
  piVar17 = *(int **)(_UNK_00fdc5b8 + 0xfdbf20);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar8 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar8 + 1;
    puVar4 = (undefined4 *)(iVar6 + uVar8 * 4 + 0x10);
    *puVar4 = uVar13;
    thunk_FUN_00ec5080(puVar4,uVar13);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar13,*(undefined4 *)(*(int *)(*(int *)(*piVar17 + 0x10) + 0x60) + 0x38));
  }
  iVar6 = *piVar19;
  if (*(int *)(iVar6 + 0x74) == 0) {
    FUN_00ec3934();
    iVar6 = *piVar19;
  }
  uVar13 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x24);
  uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdc5bc + 0xfdbfb4));
  Firebase_Analytics_Parameter___ctor_11deb88(uVar9,uVar13,uStack_54,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar8 = *(uint *)(iVar3 + 0xc);
  piVar17 = *(int **)(_UNK_00fdc5c0 + 0xfdbff0);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar8 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar8 + 1;
    puVar4 = (undefined4 *)(iVar6 + uVar8 * 4 + 0x10);
    *puVar4 = uVar9;
    thunk_FUN_00ec5080(puVar4,uVar9);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(*piVar17 + 0x10) + 0x60) + 0x38));
  }
  uVar15 = *(undefined4 *)(*(int *)(*piVar19 + 0x5c) + 0x28);
  uVar9 = UnityEngine_Object__get_name_36081bc(uVar10,0);
  uVar13 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdc5c4 + 0xfdc070));
  Firebase_Analytics_Parameter___ctor_11deb88(uVar13,uVar15,uVar9,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar10 = *(uint *)(iVar3 + 0xc);
  piVar17 = *(int **)(_UNK_00fdc5c8 + 0xfdc0a8);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar10 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar10 + 1;
    puVar4 = (undefined4 *)(iVar6 + uVar10 * 4 + 0x10);
    *puVar4 = uVar13;
    thunk_FUN_00ec5080(puVar4,uVar13);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,uVar13,*(undefined4 *)(*(int *)(*(int *)(*piVar17 + 0x10) + 0x60) + 0x38));
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar17 = (int *)(iVar2 + 8);
  *piVar17 = iVar3;
  thunk_FUN_00ec5080(piVar17,iVar3);
  if (*(int *)(**(int **)(_UNK_00fdc5cc + 0xfdc12c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar6 = 0;
  iVar3 = Rotatelab_Scripts_LevelMovePathRecorder__GetCompactChunks_1015de0(100,0);
  while( true ) {
    iStack_4c = iVar6;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *piVar17;
    if (*(int *)(iVar3 + 0xc) <= iVar6) break;
    iVar6 = *piVar19;
    if (*(int *)(iVar6 + 0x74) == 0) {
      FUN_00ec3934();
      iVar6 = *piVar19;
    }
    uVar13 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xac);
    uVar9 = System_Int32__ToString_2b6b9ec(&iStack_4c,0);
    uVar9 = System_String__Concat_29fee38(uVar13,uVar9,0);
    uVar13 = System_Collections_Generic_List_object___get_Item_267d814
                       (iVar3,iStack_4c,**(undefined4 **)(_UNK_00fdc5d0 + 0xfdc1c0));
    uVar15 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdc5d4 + 0xfdc1dc));
    Firebase_Analytics_Parameter___ctor_11deb88(uVar15,uVar9,uVar13,0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(iVar7 + 8);
    uVar10 = *(uint *)(iVar7 + 0xc);
    piVar19 = *(int **)(_UNK_00fdc5d8 + 0xfdc220);
    *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar10 < *(uint *)(iVar6 + 0xc)) {
      *(uint *)(iVar7 + 0xc) = uVar10 + 1;
      puVar4 = (undefined4 *)(iVar6 + uVar10 * 4 + 0x10);
      *puVar4 = uVar15;
      thunk_FUN_00ec5080(puVar4,uVar15);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar7,uVar15,*(undefined4 *)(*(int *)(*(int *)(*piVar19 + 0x10) + 0x60) + 0x38));
    }
    piVar19 = *(int **)(_UNK_00fdc5dc + 0xfdc27c);
    iVar6 = iStack_4c + 1;
  }
  if (*(int *)(**(int **)(_UNK_00fdc5e0 + 0xfdc2b8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Scripts_ControllerFirebase__SendEvent_10609ac(uVar5,iVar7,0);
  uStack_70 = uVar1;
  uVar9 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_00fdc5e4 + 0xfdc2ec) + 0x24),&uStack_70);
  uVar13 = System_String__Join_2a0c7e0(**(undefined4 **)(_UNK_00fdc5e8 + 0xfdc314),iVar3,0);
  uVar5 = System_String__Format_2a0c2b4
                    (**(undefined4 **)(_UNK_00fdc5ec + 0xfdc330),uVar5,uVar9,uVar13,0);
  Rotatelab_CustomRotateEventsController__LogMessage_fc833c(uVar5,uVar5);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fdc5f0 + 0xfdc34c));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (*(undefined4 *)(iVar3 + 0x44),**(undefined4 **)(_UNK_00fdc5f4 + 0xfdc370));
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_00fdc5f8 + 0xfdc38c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    piVar19 = (int *)Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
    if (piVar19 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = (**(code **)(*piVar19 + 0xd8))(piVar19,*(undefined4 *)(*piVar19 + 0xdc));
    *(undefined4 *)(iVar2 + 0xc) = uVar5;
    thunk_FUN_00ec5080();
    if (*(int *)(**(int **)(_UNK_00fdc5fc + 0xfdc3e4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_DateTime__get_UtcNow_2b4a27c(&uStack_70,0);
    puVar4 = *(undefined4 **)(_UNK_00fdc600 + 0xfdc418);
    *(uint *)(iVar2 + 0x10) = uStack_70;
    *(uint *)(iVar2 + 0x14) = uStack_6c;
    uVar5 = thunk_FUN_00f00cdc(*puVar4);
    System_Func_UniTask____ctor_2395d44(uVar5,iVar2,**(undefined4 **)(_UNK_00fdc604 + 0xfdc438),0);
    if (*(int *)(**(int **)(_UNK_00fdc608 + 0xfdc44c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Networking_HiroController__ExecuteTask_114cc9c(&uStack_70,uVar5,3,0,0x40000000,0,0,0);
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget_bool__16500f4
              (uStack_70,uStack_6c,**(undefined4 **)(_UNK_00fdc60c + 0xfdc494));
  }
  iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar10 = *(uint *)(iVar2 + 0x60);
  *(uint *)(iVar2 + 0x60) = uVar10 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar10);
  Rotatelab_CustomRotateEventsController__ResetLevelStats_fca180();
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  Rotatelab_CustomRotateEventsController__SetUserProperties_fca284();
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fdc610 + 0xfdc4e4));
  if (iVar2 != 0) {
    Rotatelab_Ads_AdManager__LevelFailed_10f65f4(iVar2,0);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_00fdc614 + 0xfdc510));
    if (iVar2 != 0) {
      RotateAdLogicManager__TryShowInter_fabf8c(iVar2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

