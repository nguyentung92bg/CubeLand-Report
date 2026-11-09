/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$ContinueLoading
void Rotatelab_Ads_NeftaDualTrackLoader__ContinueLoading (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02c3c3dc) */
/* WARNING: Removing unreachable block (ram,0x02c3c3e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$ContinueLoading
   void Rotatelab_Ads_NeftaDualTrackLoader__ContinueLoading (Rotatelab_Ads_NeftaDualTrackLoader_o*
   __this, const MethodInfo* method); */

void Rotatelab_Ads_NeftaDualTrackLoader__ContinueLoading_10f2538(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 *puStack_30;
  char cStack_29;
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
  
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  if (*(int *)(iVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(iVar5 + 0x10) + 0x14) == 0) {
    iVar5 = *(int *)(param_1 + 8);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    Rotatelab_Ads_NeftaDualTrackLoader__LoadTrack_10f26b4(param_1,*(undefined4 *)(iVar5 + 0x10));
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    return;
  }
  iVar5 = 5;
  while( true ) {
    if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 8) + 0xc) <= (int)(iVar5 - 4U)) break;
    iVar8 = *(int *)(param_1 + 8);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar8 + 0xc) <= iVar5 - 4U) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar8 = *(int *)(iVar8 + iVar5 * 4);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = iVar5 + 1;
    if (*(int *)(iVar8 + 0x14) == 1) {
      return;
    }
  }
  iVar5 = 5;
  while( true ) {
    if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar9 = iVar5 - 4;
    if (*(int *)(*(int *)(param_1 + 8) + 0xc) <= (int)uVar9) {
      return;
    }
    iVar8 = *(int *)(param_1 + 8);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar8 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar8 = *(int *)(iVar8 + iVar5 * 4);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar8 + 0x14) == 0) break;
    iVar5 = iVar5 + 1;
  }
  iVar8 = *(int *)(param_1 + 8);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar8 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  iVar5 = *(int *)(iVar8 + iVar5 * 4);
  pcVar6 = (char *)(_UNK_01102898 + 0x11026d0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110289c + 0x11026e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011028a0 + 0x11026f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011028a4 + 0x11026fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011028a8 + 0x1102708));
    *pcVar6 = '\x01';
  }
  iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011028ac + 0x110271c));
  System_Object___ctor_2bb93bc(iVar8,0);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar8 + 8) = param_1;
  thunk_FUN_00ec5080((int *)(iVar8 + 8),param_1);
  piVar11 = (int *)(iVar8 + 0xc);
  *piVar11 = iVar5;
  thunk_FUN_00ec5080(piVar11,iVar5);
  iVar5 = *piVar11;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar5 + 0x14) = 1;
  iVar10 = *(int *)(param_1 + 0xc);
  if (*(char *)(iVar5 + 0x10) != '\0') {
    iVar5 = *(int *)(iVar5 + 0x18);
    uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011028b4 + 0x11027ac));
    NeftaCustomAdapter_NeftaAdapterEvents_OnInsightsCallback___ctor_2c2c0b8
              (uVar1,iVar8,**(undefined4 **)(_UNK_011028b8 + 0x11027cc),0);
    uVar7 = 8;
    if (iVar10 == 2) {
      uVar7 = 4;
    }
    if (*(int *)(**(int **)(_UNK_011028bc + 0x11027ec) + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar6 = (char *)(_UNK_02c3c5cc + 0x2c3c20c);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_02c3c5d0 + 0x2c3c220),iVar5,uVar1,0,uVar7);
      FUN_00ec37c0(*(undefined4 *)(_UNK_02c3c5d4 + 0x2c3c22c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_02c3c5d8 + 0x2c3c238));
      FUN_00ec37c0(*(undefined4 *)(_UNK_02c3c5dc + 0x2c3c244));
      FUN_00ec37c0(*(undefined4 *)(_UNK_02c3c5e0 + 0x2c3c250));
      *pcVar6 = '\x01';
    }
    auStack_28[0] = 0;
    cStack_29 = '\0';
    if (iVar5 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = *(undefined4 *)(iVar5 + 8);
    }
    piVar11 = *(int **)(_UNK_02c3c5e4 + 0x2c3c280);
    iVar5 = *piVar11;
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      iVar5 = *piVar11;
    }
    puStack_30 = auStack_28;
    pcStack_34 = &cStack_29;
    cStack_29 = '\0';
    auStack_28[0] = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0xc);
    uStack_38 = 0;
    System_Threading_Monitor__Enter_2bdfb90(auStack_28[0],pcStack_34,0);
    iVar5 = *piVar11;
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      iVar5 = *piVar11;
    }
    uVar12 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x10);
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_02c3c5e8 + 0x2c3c2f4));
    System_Object___ctor_2bb93bc(iVar5,0);
    *(undefined4 *)(iVar5 + 0xc) = uVar1;
    *(undefined4 *)(iVar5 + 8) = uVar12;
    thunk_FUN_00ec5080((undefined4 *)(iVar5 + 0xc),uVar1);
    iVar8 = *(int *)(*(int *)(*piVar11 + 0x5c) + 0xc);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar10 = *(int *)(iVar8 + 8);
    uVar9 = *(uint *)(iVar8 + 0xc);
    piVar4 = *(int **)(_UNK_02c3c5ec + 0x2c3c350);
    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar9 < *(uint *)(iVar10 + 0xc)) {
      *(uint *)(iVar8 + 0xc) = uVar9 + 1;
      piVar4 = (int *)(iVar10 + uVar9 * 4 + 0x10);
      *piVar4 = iVar5;
      thunk_FUN_00ec5080(piVar4,iVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar8,iVar5,*(undefined4 *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38));
    }
    *(int *)(*(int *)(*piVar11 + 0x5c) + 0x10) = *(int *)(*(int *)(*piVar11 + 0x5c) + 0x10) + 1;
    if (cStack_29 != '\0') {
      System_Threading_Monitor__Exit_2be3444(*puStack_30,0);
    }
    if (*(int *)(*piVar11 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar5 = NeftaCustomAdapter_NeftaAdapterEvents__get_NeftaAdapterClass_2c2e764();
    piVar11 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_02c3c5f0 + 0x2c3c41c),3);
    iVar10 = *(int *)(_UNK_02c3c5f4 + 0x2c3c434);
    uStack_38 = uVar12;
    iVar8 = FUN_00ec393c(*(undefined4 *)(iVar10 + 0x24),&uStack_38);
    if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((iVar8 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar8,*(undefined4 *)(*piVar11 + 0x20)), iVar3 == 0)) {
      uVar1 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar1,0);
    }
    if (piVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar11[4] = iVar8;
    thunk_FUN_00ec5080(piVar11 + 4,iVar8);
    uStack_3c = uVar7;
    iVar8 = FUN_00ec393c(*(undefined4 *)(iVar10 + 0x24),&uStack_3c);
    if ((iVar8 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar8,*(undefined4 *)(*piVar11 + 0x20)), iVar3 == 0)) {
      uVar1 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar1,0);
    }
    if ((uint)piVar11[3] < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar11[5] = iVar8;
    thunk_FUN_00ec5080(piVar11 + 5,iVar8);
    uStack_40 = uVar2;
    iVar8 = FUN_00ec393c(*(undefined4 *)(iVar10 + 0x24),&uStack_40);
    if ((iVar8 != 0) &&
       (iVar10 = thunk_FUN_00f00bc8(iVar8,*(undefined4 *)(*piVar11 + 0x20)), iVar10 == 0)) {
      uVar1 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar1,0);
    }
    if ((uint)piVar11[3] < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar11[6] = iVar8;
    thunk_FUN_00ec5080(piVar11 + 6,iVar8);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_AndroidJavaObject__CallStatic_3589e34
              (iVar5,**(undefined4 **)(_UNK_02c3c5f8 + 0x2c3c580),piVar11,0);
    return;
  }
  uVar1 = *(undefined4 *)(iVar5 + 8);
  if (*(int *)(**(int **)(_UNK_011028b0 + 0x1102824) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uStack_20 = 0;
  NeftaCustomAdapter_NeftaAdapterEvents__OnExternalMediationRequest_2c2c5fc
            (iVar10,uVar1,0,0xbff00000);
  iVar5 = *(int *)(param_1 + 0x10);
  if (*piVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x01102890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar5 + 0xc))
            (*(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(*piVar11 + 8),
             *(undefined4 *)(iVar5 + 0x14));
  return;
}

