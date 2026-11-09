/* IL2CPP: Rotatelab.Currency.UI.UIParticleAnimController.<>c__DisplayClass18_0.<<OnSingleRewardAnimStartHandler>g__MoveRewardUIElement|0>d$$MoveNext
bool Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass18_0___OnSingleRewardAnimStartHandler_g__MoveRewardUIElement_0_d__MoveNext (Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass18_0___OnSingleRewardAnimStartHandler_g__MoveRewardUIElement_0_d_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Currency.UI.UIParticleAnimController.<>c__DisplayClass18_0.<<OnSingleRewardAnimStartHandler>g__MoveRewardUIElement|0>d$$MoveNext
   bool 
   Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass18_0___OnSingleRewardAnimStartHandler_g__MoveRewardUIElement_0_d__MoveNext
   (Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass18_0___OnSingleRewardAnimStartHandler_g__MoveRewardUIElement_0_d_o*
   __this, const MethodInfo* method); */

undefined4
Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass18_0___OnSingleRewardAnimStartHandler_g__MoveRewardUIElement_0_d__MoveNext_108c6c0
          (int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  pcVar5 = (char *)(_UNK_0109cb18 + 0x109c6dc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109cb1c + 0x109c6f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109cb20 + 0x109c6fc));
    *pcVar5 = '\x01';
  }
  fVar13 = _UNK_0109cb10;
  uVar2 = _UNK_0109cb08;
  uVar1 = _UNK_0109cb00;
  iVar4 = *(int *)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar4 == 2) {
    fVar13 = *(float *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (1.0 <= fVar13) {
      return 0;
    }
LAB_0109c99c:
    fVar9 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
    fVar13 = fVar13 + fVar9 / _UNK_0109cb14;
    if (1.0 < fVar13) {
      fVar13 = 1.0;
    }
    *(float *)(param_1 + 0x20) = fVar13;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar6 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *(int *)(*(int *)(iVar6 + 0x24) + 0x2c);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar13 = (float)UnityEngine_AnimationCurve__Evaluate_35a61e8
                              (iVar4,*(undefined4 *)(param_1 + 0x20),0);
    if (*(int *)(iVar6 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *(int *)(*(int *)(iVar6 + 0x24) + 0x10);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = System_Collections_Generic_List_object___get_Item_267d814
                      (iVar4,*(undefined4 *)(iVar6 + 0x28),
                       **(undefined4 **)(_UNK_0109cb34 + 0x109ca44));
    pcVar5 = (char *)(_UNK_0109cb38 + 0x109ca5c);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0109cb3c + 0x109ca70));
      *pcVar5 = '\x01';
    }
    uVar7 = 2;
    piVar3 = *(int **)(_UNK_0109cb40 + 0x109ca88);
  }
  else {
    if (iVar4 == 1) {
      fVar13 = *(float *)(param_1 + 0x14);
      fVar9 = *(float *)(param_1 + 0x1c);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      if (fVar9 <= fVar13) {
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar6 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__set_position_3614acc
                  (*(int *)(iVar6 + 0x20),*(undefined4 *)(iVar6 + 0x14),
                   *(undefined4 *)(iVar6 + 0x18),*(undefined4 *)(iVar6 + 0x1c),0);
        if (*(int *)(iVar6 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar7 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(iVar6 + 0x20),0);
        if (*(int *)(**(int **)(_UNK_0109cb30 + 0x109c978) + 0x74) == 0) {
          FUN_00ec3934();
        }
        UnityEngine_Object__Destroy_3609820(uVar7,0);
        fVar13 = _UNK_0109cb10;
        *(undefined4 *)(param_1 + 0x20) = 0;
        goto LAB_0109c99c;
      }
    }
    else {
      if (iVar4 != 0) {
        return 0;
      }
      fVar9 = 0.75;
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x14) = uVar1;
      *(undefined8 *)(param_1 + 0x1c) = uVar2;
    }
    fVar13 = fVar13 / fVar9;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar11 = *(float *)(iVar6 + 0x18);
    fVar10 = *(float *)(iVar6 + 0xc);
    fVar9 = 1.0 - fVar13;
    fVar8 = fVar9 * fVar9;
    fVar12 = fVar13 * (fVar9 + fVar9);
    fVar9 = fVar11;
    if (fVar11 < fVar10) {
      fVar9 = fVar10;
    }
    fVar13 = fVar13 * fVar13;
    if (*(int *)(iVar6 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_position_3614acc
              (*(int *)(iVar6 + 0x20),
               fVar12 * (*(float *)(iVar6 + 8) + *(float *)(iVar6 + 0x14)) * 0.5 +
               fVar8 * *(float *)(iVar6 + 8) + fVar13 * *(float *)(iVar6 + 0x14),
               fVar12 * (*(float *)(param_1 + 0x18) + fVar9) + fVar8 * fVar10 + fVar13 * fVar11,
               fVar8 * *(float *)(iVar6 + 0x10) + fVar12 * _UNK_0109cb10 +
               fVar13 * *(float *)(iVar6 + 0x1c),0);
    fVar9 = *(float *)(param_1 + 0x14);
    fVar13 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
    fVar8 = *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x14) = fVar9 + fVar13;
    fVar13 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
    iVar4 = *(int *)(iVar6 + 0x24);
    fVar8 = fVar8 + fVar13 / *(float *)(param_1 + 0x1c);
    if (1.0 < fVar8) {
      fVar8 = 1.0;
    }
    *(float *)(param_1 + 0x20) = fVar8;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *(int *)(iVar4 + 0x28);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar13 = (float)UnityEngine_AnimationCurve__Evaluate_35a61e8(iVar4,fVar8,0);
    iVar4 = *(int *)(iVar6 + 0x20);
    pcVar5 = (char *)(_UNK_0109cb24 + 0x109c8b8);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0109cb28 + 0x109c8cc));
      *pcVar5 = '\x01';
    }
    uVar7 = 1;
    piVar3 = *(int **)(_UNK_0109cb2c + 0x109c8e4);
  }
  iVar6 = *(int *)(*piVar3 + 0x5c);
  if (iVar4 != 0) {
    UnityEngine_Transform__set_localScale_36155dc
              (iVar4,fVar13 * *(float *)(iVar6 + 0xc),fVar13 * *(float *)(iVar6 + 0x10),
               fVar13 * *(float *)(iVar6 + 0x14),0);
    *(undefined4 *)(param_1 + 0xc) = 0;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
    *(undefined4 *)(param_1 + 8) = uVar7;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

