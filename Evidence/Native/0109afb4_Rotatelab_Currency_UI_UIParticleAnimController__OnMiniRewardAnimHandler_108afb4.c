/* IL2CPP: Rotatelab.Currency.UI.UIParticleAnimController$$OnMiniRewardAnimHandler
void Rotatelab_Currency_UI_UIParticleAnimController__OnMiniRewardAnimHandler (Rotatelab_Currency_UI_UIParticleAnimController_o* __this, UnityEngine_RectTransform_o* startPos, System_Collections_Generic_List_RewardBase__o* rewardBases, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.UIParticleAnimController$$OnMiniRewardAnimHandler
   void Rotatelab_Currency_UI_UIParticleAnimController__OnMiniRewardAnimHandler
   (Rotatelab_Currency_UI_UIParticleAnimController_o* __this, UnityEngine_RectTransform_o* startPos,
   System_Collections_Generic_List_RewardBase__o* rewardBases, const MethodInfo* method); */

void Rotatelab_Currency_UI_UIParticleAnimController__OnMiniRewardAnimHandler_108afb4
               (int param_1,int param_2,int param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uStack_a8;
  float fStack_a4;
  float fStack_a0;
  float *pfStack_9c;
  undefined4 uStack_98;
  float fStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  float fStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  float fStack_78;
  int iStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  
  pcVar11 = (char *)(_UNK_0109b5d8 + 0x109afdc);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109b5dc + 0x109aff0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109b5e0 + 0x109affc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109b5e4 + 0x109b008));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109b5e8 + 0x109b014));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109b5ec + 0x109b020));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109b5f0 + 0x109b02c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109b5f4 + 0x109b038));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109b5f8 + 0x109b044));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109b5fc + 0x109b050));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109b600 + 0x109b05c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109b604 + 0x109b068));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109b608 + 0x109b074));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109b60c + 0x109b080));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109b610 + 0x109b08c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109b614 + 0x109b098));
    *pcVar11 = '\x01';
  }
  iStack_8c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_88 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  fStack_84 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  fStack_78 = 0.0;
  uStack_90 = 0;
  uStack_80 = 0;
  fStack_7c = 0.0;
  iStack_74 = iStack_8c;
  uStack_70 = uStack_88;
  fStack_6c = fStack_84;
  iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109b618 + 0x109b0b8));
  System_Object___ctor_2bb93bc(iVar3,0);
  if (*(int *)(**(int **)(_UNK_0109b61c + 0x109b0e8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = Rotatelab_Extensions__RectTransform_fc1bd0(param_1,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_rect_3612fd0(&fStack_a0,iVar4,0);
  fVar20 = fStack_94;
  if (*(int *)(**(int **)(_UNK_0109b620 + 0x109b130) + 0x74) == 0) {
    FUN_00ec3934();
  }
  fVar1 = _UNK_0109b55c;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_a0,param_2,0);
  uVar8 = uStack_98;
  pfVar2 = pfStack_9c;
  fVar19 = fStack_a0;
  iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109b624 + 0x109b188));
  System_Collections_Generic_List_MiniRewardAnimData____ctor_26744c0
            (iVar4,**(undefined4 **)(_UNK_0109b628 + 0x109b19c));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar5 = (int *)(iVar3 + 8);
  *piVar5 = iVar4;
  fVar20 = fVar20 * fVar1;
  thunk_FUN_00ec5080(piVar5,iVar4);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&fStack_a0,param_3,**(undefined4 **)(_UNK_0109b62c + 0x109b1ec));
  uVar21 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar22 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar23 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  fStack_78 = fStack_a0;
  iStack_74 = (int)pfStack_9c;
  uStack_70 = uStack_98;
  fStack_6c = fStack_94;
  fStack_a0 = 0.0;
  pfStack_9c = &fStack_78;
  while( true ) {
    iVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                      (&fStack_78,**(undefined4 **)(_UNK_0109b654 + 0x109b234));
    fVar1 = fStack_6c;
    if (iVar4 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&fStack_78,**(undefined4 **)(_UNK_0109b658 + 0x109b510));
      uVar8 = Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass17_0___OnMiniRewardAnimHandler_g__MiniRewardAnim_0_108b668
                        (iVar3);
      UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar8,0);
      return;
    }
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *(int *)(param_3 + 0xc);
    uVar17 = *(undefined4 *)(param_1 + 0x1c);
    if (*(char *)(_UNK_0109b630 + 0x109b270) == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0109b634 + 0x109b284));
      *(undefined1 *)(_UNK_0109b638 + 0x109b294) = 1;
    }
    puVar9 = *(undefined4 **)(**(int **)(_UNK_0109b63c + 0x109b2a4) + 0x5c);
    uVar12 = *puVar9;
    uVar14 = puVar9[1];
    uVar15 = puVar9[2];
    uVar16 = puVar9[3];
    uVar6 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (*(int *)(**(int **)(_UNK_0109b640 + 0x109b2c4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    fVar18 = (float)VectorSignedToFloat(iVar4 + -1,(byte)(in_fpscr >> 0x16) & 3);
    iVar4 = UnityEngine_Object__Instantiate_object__14d51e0
                      (uVar17,fVar19 - fVar20 * 0.5 * fVar18,pfVar2,uVar8,uVar12,uVar14,uVar15,
                       uVar16,uVar6,**(undefined4 **)(_UNK_0109b644 + 0x109b2f0));
    if (fVar1 == 0.0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Shop_RewardInfo__SetUI_10d354c
              (iVar4,*(undefined4 *)((int)fVar1 + 0x10),*(undefined4 *)((int)fVar1 + 0xc),0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = UnityEngine_Component__get_gameObject_35fe360(iVar4,0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar17 = UnityEngine_GameObject__AddComponent_object__1490548
                       (iVar7,**(undefined4 **)(_UNK_0109b648 + 0x109b37c));
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = UnityEngine_Component__GetComponent_object__143f3b0
                      (iVar4,**(undefined4 **)(_UNK_0109b64c + 0x109b3a0));
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_RectTransform__set_sizeDelta_3613820(iVar4,0x42c80000,0x42c80000,0);
    if (iVar4 == 0) break;
    UnityEngine_RectTransform__get_anchoredPosition_3613500(&uStack_a8,iVar4,0);
    fVar1 = fStack_a4;
    uVar6 = uStack_a8;
    fStack_7c = 0.0;
    uStack_80 = 0;
    uStack_90 = uVar17;
    iStack_8c = uVar21;
    uStack_88 = uVar22;
    fStack_84 = (float)uVar23;
    thunk_FUN_00ec5080(&uStack_90,uVar17);
    iStack_8c = iVar4;
    thunk_FUN_00ec5080((uint)&uStack_90 | 4,iVar4);
    fStack_7c = fVar20 + fVar1;
    uStack_80 = uVar6;
    fStack_84 = fVar1;
    uStack_88 = uVar6;
    iVar4 = *piVar5;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(iVar4 + 8);
    uVar13 = *(uint *)(iVar4 + 0xc);
    piVar10 = *(int **)(_UNK_0109b650 + 0x109b47c);
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar13 < *(uint *)(iVar7 + 0xc)) {
      *(uint *)(iVar4 + 0xc) = uVar13 + 1;
      iVar7 = iVar7 + uVar13 * 0x18;
      *(undefined4 *)(iVar7 + 0x10) = uStack_90;
      *(undefined4 *)(iVar7 + 0x18) = uVar6;
      *(float *)(iVar7 + 0x1c) = fVar1;
      *(undefined4 *)(iVar7 + 0x20) = uVar6;
      *(float *)(iVar7 + 0x24) = fStack_7c;
      *(int *)(iVar7 + 0x14) = iStack_8c;
      thunk_FUN_00ec5080((undefined4 *)(iVar7 + 0x10),0);
    }
    else {
      System_Collections_Generic_List_MiniRewardAnimData___AddWithResize_2674e08
                (iVar4,uStack_90,iStack_8c,uVar6,fVar1,uVar6,fStack_7c,
                 *(undefined4 *)(*(int *)(*(int *)(*piVar10 + 0x10) + 0x60) + 0x38));
    }
    fVar19 = fVar20 + fVar19;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

