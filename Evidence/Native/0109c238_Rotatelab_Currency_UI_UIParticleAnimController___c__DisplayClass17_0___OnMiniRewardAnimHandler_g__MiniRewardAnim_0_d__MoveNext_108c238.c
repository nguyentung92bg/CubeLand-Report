/* IL2CPP: Rotatelab.Currency.UI.UIParticleAnimController.<>c__DisplayClass17_0.<<OnMiniRewardAnimHandler>g__MiniRewardAnim|0>d$$MoveNext
bool Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass17_0___OnMiniRewardAnimHandler_g__MiniRewardAnim_0_d__MoveNext (Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass17_0___OnMiniRewardAnimHandler_g__MiniRewardAnim_0_d_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Currency.UI.UIParticleAnimController.<>c__DisplayClass17_0.<<OnMiniRewardAnimHandler>g__MiniRewardAnim|0>d$$MoveNext
   bool 
   Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass17_0___OnMiniRewardAnimHandler_g__MiniRewardAnim_0_d__MoveNext
   (Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass17_0___OnMiniRewardAnimHandler_g__MiniRewardAnim_0_d_o*
   __this, const MethodInfo* method); */

undefined4
Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass17_0___OnMiniRewardAnimHandler_g__MiniRewardAnim_0_d__MoveNext_108c238
          (int param_1)

{
  float fVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  int iStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  
  pcVar2 = (char *)(_UNK_0109c610 + 0x109c254);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109c614 + 0x109c268));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109c618 + 0x109c274));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109c61c + 0x109c280));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109c620 + 0x109c28c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109c624 + 0x109c298));
    *pcVar2 = '\x01';
  }
  fVar9 = _UNK_0109c60c;
  fStack_7c = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  fStack_78 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  fStack_74 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar3 = *(int *)(param_1 + 0x10);
  uStack_80 = 0;
  iStack_70 = 0;
  fStack_60 = 0.0;
  fStack_6c = fStack_7c;
  fStack_68 = fStack_78;
  fStack_64 = fStack_74;
  if (*(int *)(param_1 + 8) == 1) {
    fVar9 = *(float *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (1.0 <= fVar9) {
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar3 + 8) != 0) {
        System_Collections_Generic_List_MiniRewardAnimData___GetEnumerator_2675ec8
                  (&uStack_80,*(int *)(iVar3 + 8),**(undefined4 **)(_UNK_0109c638 + 0x109c4bc));
        puVar5 = *(undefined4 **)(_UNK_0109c63c + 0x109c4dc);
        piVar6 = *(int **)(_UNK_0109c640 + 0x109c4e4);
        while( true ) {
          iVar3 = System_Collections_Generic_List_Enumerator_MiniRewardAnimData___MoveNext_218f130
                            (&uStack_80,*puVar5);
          if (iVar3 == 0) {
            System_Collections_Generic_List_Enumerator_MiniRewardAnimData___Dispose_218f12c
                      (&uStack_80,**(undefined4 **)(_UNK_0109c644 + 0x109c544));
            return 0;
          }
          if (iStack_70 == 0) break;
          uVar11 = UnityEngine_Component__get_gameObject_35fe360(iStack_70,0);
          if (*(int *)(*piVar6 + 0x74) == 0) {
            FUN_00ec3934();
          }
          UnityEngine_Object__Destroy_3609820(uVar11,0);
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  fVar1 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
  fVar8 = 1.0;
  fVar7 = fVar9 + fVar1;
  if (1.0 < fVar9 + fVar1) {
    fVar7 = fVar8;
  }
  *(float *)(param_1 + 0x14) = fVar7;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_MiniRewardAnimData___GetEnumerator_2675ec8
            (&uStack_80,*(int *)(iVar3 + 8),**(undefined4 **)(_UNK_0109c628 + 0x109c358));
  fVar9 = _UNK_0109c60c;
  uVar11 = 0;
  puVar4 = *(undefined4 **)(_UNK_0109c62c + 0x109c380);
  puVar5 = &uStack_80;
  while( true ) {
    iVar3 = System_Collections_Generic_List_Enumerator_MiniRewardAnimData___MoveNext_218f130
                      (&uStack_80,*puVar4);
    fVar7 = fStack_74;
    if (iVar3 == 0) {
      System_Collections_Generic_List_Enumerator_MiniRewardAnimData___Dispose_218f12c
                (&uStack_80,**(undefined4 **)(_UNK_0109c630 + 0x109c468));
      *(undefined4 *)(param_1 + 0xc) = 0;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
      *(undefined4 *)(param_1 + 8) = 1;
      return 1;
    }
    fVar10 = *(float *)(param_1 + 0x14);
    fVar1 = fVar10;
    if (1.0 < fVar10) {
      fVar1 = fVar8;
    }
    if (fVar10 < 0.0) {
      fVar1 = fVar9;
    }
    if (iStack_70 == 0) break;
    UnityEngine_RectTransform__set_anchoredPosition_3613610
              (iStack_70,fStack_6c + (fStack_64 - fStack_6c) * fVar1,
               fStack_68 + (fStack_60 - fStack_68) * fVar1,0,uVar11,puVar5);
    if (0.75 <= *(float *)(param_1 + 0x14)) {
      fVar1 = *(float *)(param_1 + 0x18);
      fVar10 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
      fVar1 = fVar1 + fVar10 + fVar10;
      if (1.0 < fVar1) {
        fVar1 = fVar8;
      }
      *(float *)(param_1 + 0x18) = fVar1;
      if (fVar1 < 0.0) {
        fVar1 = fVar9;
      }
      if (fVar7 == 0.0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_CanvasGroup__set_alpha_39a3758(fVar7,1.0 - fVar1,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

