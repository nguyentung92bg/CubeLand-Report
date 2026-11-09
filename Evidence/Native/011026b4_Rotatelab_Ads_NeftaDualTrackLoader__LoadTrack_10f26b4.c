/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$LoadTrack
void Rotatelab_Ads_NeftaDualTrackLoader__LoadTrack (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, Rotatelab_Ads_NeftaDualTrackLoader_Track_o* track, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02c3c3dc) */
/* WARNING: Removing unreachable block (ram,0x02c3c3e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$LoadTrack
   void Rotatelab_Ads_NeftaDualTrackLoader__LoadTrack (Rotatelab_Ads_NeftaDualTrackLoader_o* __this,
   Rotatelab_Ads_NeftaDualTrackLoader_Track_o* track, const MethodInfo* method); */

void Rotatelab_Ads_NeftaDualTrackLoader__LoadTrack_10f26b4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 *puStack_30;
  char cStack_29;
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_01102898 + 0x11026d0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110289c + 0x11026e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011028a0 + 0x11026f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011028a4 + 0x11026fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011028a8 + 0x1102708));
    *pcVar7 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011028ac + 0x110271c));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar1 + 8) = param_1;
  thunk_FUN_00ec5080((int *)(iVar1 + 8),param_1);
  piVar10 = (int *)(iVar1 + 0xc);
  *piVar10 = param_2;
  thunk_FUN_00ec5080(piVar10,param_2);
  iVar5 = *piVar10;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar5 + 0x14) = 1;
  iVar9 = *(int *)(param_1 + 0xc);
  if (*(char *)(iVar5 + 0x10) == '\0') {
    uVar2 = *(undefined4 *)(iVar5 + 8);
    if (*(int *)(**(int **)(_UNK_011028b0 + 0x1102824) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uStack_20 = 0;
    NeftaCustomAdapter_NeftaAdapterEvents__OnExternalMediationRequest_2c2c5fc
              (iVar9,uVar2,0,0xbff00000);
    iVar1 = *(int *)(param_1 + 0x10);
    if (*piVar10 != 0) {
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01102890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))
                  (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(*piVar10 + 8),
                   *(undefined4 *)(iVar1 + 0x14));
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar5 + 0x18);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011028b4 + 0x11027ac));
  NeftaCustomAdapter_NeftaAdapterEvents_OnInsightsCallback___ctor_2c2c0b8
            (uVar2,iVar1,**(undefined4 **)(_UNK_011028b8 + 0x11027cc),0);
  uVar8 = 8;
  if (iVar9 == 2) {
    uVar8 = 4;
  }
  if (*(int *)(**(int **)(_UNK_011028bc + 0x11027ec) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar7 = (char *)(_UNK_02c3c5cc + 0x2c3c20c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_02c3c5d0 + 0x2c3c220),iVar5,uVar2,0,uVar8);
    FUN_00ec37c0(*(undefined4 *)(_UNK_02c3c5d4 + 0x2c3c22c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_02c3c5d8 + 0x2c3c238));
    FUN_00ec37c0(*(undefined4 *)(_UNK_02c3c5dc + 0x2c3c244));
    FUN_00ec37c0(*(undefined4 *)(_UNK_02c3c5e0 + 0x2c3c250));
    *pcVar7 = '\x01';
  }
  auStack_28[0] = 0;
  cStack_29 = '\0';
  if (iVar5 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)(iVar5 + 8);
  }
  piVar10 = *(int **)(_UNK_02c3c5e4 + 0x2c3c280);
  iVar1 = *piVar10;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar10;
  }
  puStack_30 = auStack_28;
  pcStack_34 = &cStack_29;
  cStack_29 = '\0';
  auStack_28[0] = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xc);
  uStack_38 = 0;
  System_Threading_Monitor__Enter_2bdfb90(auStack_28[0],pcStack_34,0);
  iVar1 = *piVar10;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar10;
  }
  uVar12 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x10);
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_02c3c5e8 + 0x2c3c2f4));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  *(undefined4 *)(iVar1 + 8) = uVar12;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0xc),uVar2);
  iVar5 = *(int *)(*(int *)(*piVar10 + 0x5c) + 0xc);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar9 = *(int *)(iVar5 + 8);
  uVar11 = *(uint *)(iVar5 + 0xc);
  piVar6 = *(int **)(_UNK_02c3c5ec + 0x2c3c350);
  *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar11 < *(uint *)(iVar9 + 0xc)) {
    *(uint *)(iVar5 + 0xc) = uVar11 + 1;
    piVar6 = (int *)(iVar9 + uVar11 * 4 + 0x10);
    *piVar6 = iVar1;
    thunk_FUN_00ec5080(piVar6,iVar1);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar5,iVar1,*(undefined4 *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38));
  }
  *(int *)(*(int *)(*piVar10 + 0x5c) + 0x10) = *(int *)(*(int *)(*piVar10 + 0x5c) + 0x10) + 1;
  if (cStack_29 != '\0') {
    System_Threading_Monitor__Exit_2be3444(*puStack_30,0);
  }
  if (*(int *)(*piVar10 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = NeftaCustomAdapter_NeftaAdapterEvents__get_NeftaAdapterClass_2c2e764();
  piVar10 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_02c3c5f0 + 0x2c3c41c),3);
  iVar9 = *(int *)(_UNK_02c3c5f4 + 0x2c3c434);
  uStack_38 = uVar12;
  iVar5 = FUN_00ec393c(*(undefined4 *)(iVar9 + 0x24),&uStack_38);
  if (piVar10 != (int *)0x0) {
    if ((iVar5 != 0) &&
       (iVar4 = thunk_FUN_00f00bc8(iVar5,*(undefined4 *)(*piVar10 + 0x20)), iVar4 == 0)) {
      uVar2 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar2,0);
    }
    if (piVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar10[4] = iVar5;
    thunk_FUN_00ec5080(piVar10 + 4,iVar5);
    uStack_3c = uVar8;
    iVar5 = FUN_00ec393c(*(undefined4 *)(iVar9 + 0x24),&uStack_3c);
    if ((iVar5 != 0) &&
       (iVar4 = thunk_FUN_00f00bc8(iVar5,*(undefined4 *)(*piVar10 + 0x20)), iVar4 == 0)) {
      uVar2 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar2,0);
    }
    if ((uint)piVar10[3] < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar10[5] = iVar5;
    thunk_FUN_00ec5080(piVar10 + 5,iVar5);
    uStack_40 = uVar3;
    iVar5 = FUN_00ec393c(*(undefined4 *)(iVar9 + 0x24),&uStack_40);
    if ((iVar5 != 0) &&
       (iVar9 = thunk_FUN_00f00bc8(iVar5,*(undefined4 *)(*piVar10 + 0x20)), iVar9 == 0)) {
      uVar2 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar2,0);
    }
    if (2 < (uint)piVar10[3]) {
      piVar10[6] = iVar5;
      thunk_FUN_00ec5080(piVar10 + 6,iVar5);
      if (iVar1 != 0) {
        UnityEngine_AndroidJavaObject__CallStatic_3589e34
                  (iVar1,**(undefined4 **)(_UNK_02c3c5f8 + 0x2c3c580),piVar10,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

