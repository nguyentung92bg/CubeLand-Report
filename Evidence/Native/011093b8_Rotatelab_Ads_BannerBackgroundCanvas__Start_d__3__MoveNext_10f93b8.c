/* IL2CPP: Rotatelab.Ads.BannerBackgroundCanvas.<Start>d__3$$MoveNext
bool Rotatelab_Ads_BannerBackgroundCanvas__Start_d__3__MoveNext (Rotatelab_Ads_BannerBackgroundCanvas__Start_d__3_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.BannerBackgroundCanvas.<Start>d__3$$MoveNext
   bool Rotatelab_Ads_BannerBackgroundCanvas__Start_d__3__MoveNext
   (Rotatelab_Ads_BannerBackgroundCanvas__Start_d__3_o* __this, const MethodInfo* method); */

bool Rotatelab_Ads_BannerBackgroundCanvas__Start_d__3__MoveNext_10f93b8(int param_1)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  uint in_fpscr;
  uint uVar12;
  float fVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  undefined4 uStack_50;
  float fStack_4c;
  
  pcVar7 = (char *)(_UNK_01109828 + 0x11093d8);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110982c + 0x11093ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109830 + 0x11093f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109834 + 0x1109404));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109838 + 0x1109410));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110983c + 0x110941c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109840 + 0x1109428));
    *pcVar7 = '\x01';
  }
  iVar11 = *(int *)(param_1 + 8);
  iVar8 = *(int *)(param_1 + 0x10);
  if (iVar11 == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Ads_BannerBackgroundCanvas__OnBannerHidden_10f9384(iVar8);
    iVar8 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0110985c + 0x11095c4));
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar14 = Rotatelab_Ads_AdManager__WaitForInitializationCoroutine_10f63e8(iVar8);
    *(undefined4 *)(param_1 + 0xc) = uVar14;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar14);
    *(undefined4 *)(param_1 + 8) = 1;
    goto LAB_01109800;
  }
  if (iVar11 != 1) goto LAB_01109800;
  puVar2 = *(undefined4 **)(_UNK_01109844 + 0x1109458);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar2);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar9 = (int *)(iVar8 + 0x18);
  *piVar9 = iVar3;
  thunk_FUN_00ec5080(piVar9,iVar3);
  if (*piVar9 == 0) goto LAB_01109800;
  puVar2 = *(undefined4 **)(_UNK_01109848 + 0x11094ac);
  iVar3 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar2);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar12 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar3 + 0x54) == 0.0) << 0x1e;
  if (SUB41(uVar12 >> 0x1e,0)) goto LAB_01109800;
  fVar4 = (float)UnityEngine_Screen__get_dpi_35bd108(0);
  UnityEngine_Screen__get_safeArea_35bd318(&uStack_50,0);
  fVar13 = fStack_4c;
  if (*(int *)(**(int **)(_UNK_0110984c + 0x11094f8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  fVar1 = _UNK_01109824;
  fVar4 = fVar4 / _UNK_01109820;
  pcVar7 = (char *)(_UNK_01109850 + 0x1109520);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109854 + 0x1109538));
    *pcVar7 = '\x01';
  }
  fVar13 = fVar13 + fVar4 * fVar1;
  if (*(int *)(**(int **)(_UNK_01109858 + 0x1109550) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar15 = (double)fVar13;
  dVar16 = (double)modf(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20),&uStack_50);
  if (NAN(fVar13)) {
    uVar12 = uVar12 & 0xfffffff | (uint)(dVar16 == -0.5) << 0x1e;
    if (SUB41(uVar12 >> 0x1e,0)) {
      dVar15 = -1.0;
LAB_01109614:
      dVar16 = (double)CONCAT44(fStack_4c,uStack_50);
      uVar5 = FUN_00f88224(uStack_50,fStack_4c);
      dVar15 = dVar16 + dVar15;
      if ((uVar5 & 1) == 0) {
        dVar15 = dVar16;
      }
    }
    else {
      dVar15 = (double)ceil(SUB84(dVar15 + -0.5,0),(int)((ulonglong)(dVar15 + -0.5) >> 0x20));
    }
  }
  else {
    uVar12 = uVar12 & 0xfffffff | (uint)(dVar16 == 0.5) << 0x1e;
    if (SUB41(uVar12 >> 0x1e,0)) {
      dVar15 = 1.0;
      goto LAB_01109614;
    }
    dVar15 = (double)floor(SUB84(dVar15 + 0.5,0),(int)((ulonglong)(dVar15 + 0.5) >> 0x20));
  }
  if (*(int *)(iVar8 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(iVar8 + 0x14),0);
  if (*(int *)(iVar8 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar14 = VectorSignedToFloat((int)(longlong)dVar15,(byte)(uVar12 >> 0x16) & 3);
  iVar6 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(iVar8 + 0x14),0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_sizeDelta_3613710(&uStack_50,iVar6,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (dVar15 == _UNK_01109818) {
    uVar14 = 0xcf000000;
  }
  UnityEngine_RectTransform__set_sizeDelta_3613820(iVar3,uStack_50,uVar14,0);
  piVar10 = *(int **)(iVar8 + 0x14);
  iVar3 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar2);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar10 + 0x178))
            (piVar10,*(undefined4 *)(iVar3 + 0x48),*(undefined4 *)(iVar3 + 0x4c),
             *(undefined4 *)(iVar3 + 0x50),*(undefined4 *)(iVar3 + 0x54),
             *(undefined4 *)(*piVar10 + 0x17c));
  if (*piVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(*piVar9 + 0x40) != '\0') {
    Rotatelab_Ads_BannerBackgroundCanvas__OnBannerDisplayed_10f935c(iVar8);
  }
  puVar2 = *(undefined4 **)(_UNK_01109860 + 0x110977c);
  iVar3 = *(int *)(iVar8 + 0x18);
  uVar14 = thunk_FUN_00f00cdc(*puVar2);
  System_Action___ctor_2b10bac(uVar14,iVar8,**(undefined4 **)(_UNK_01109864 + 0x110979c),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Ads_BannerAdFormat__add_AdDisplayedEvent_10ee5e0(iVar3,uVar14);
  iVar3 = *(int *)(iVar8 + 0x18);
  uVar14 = thunk_FUN_00f00cdc(*puVar2);
  System_Action___ctor_2b10bac(uVar14,iVar8,**(undefined4 **)(_UNK_01109868 + 0x11097e0),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Ads_BannerAdFormat__add_AdHiddenEvent_10ee720(iVar3,uVar14);
LAB_01109800:
  return iVar11 == 0;
}

