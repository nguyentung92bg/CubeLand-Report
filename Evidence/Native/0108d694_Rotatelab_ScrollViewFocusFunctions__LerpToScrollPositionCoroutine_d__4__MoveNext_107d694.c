/* IL2CPP: Rotatelab.ScrollViewFocusFunctions.<LerpToScrollPositionCoroutine>d__4$$MoveNext
bool Rotatelab_ScrollViewFocusFunctions__LerpToScrollPositionCoroutine_d__4__MoveNext (Rotatelab_ScrollViewFocusFunctions__LerpToScrollPositionCoroutine_d__4_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ScrollViewFocusFunctions.<LerpToScrollPositionCoroutine>d__4$$MoveNext
   bool Rotatelab_ScrollViewFocusFunctions__LerpToScrollPositionCoroutine_d__4__MoveNext
   (Rotatelab_ScrollViewFocusFunctions__LerpToScrollPositionCoroutine_d__4_o* __this, const
   MethodInfo* method); */

undefined4
Rotatelab_ScrollViewFocusFunctions__LerpToScrollPositionCoroutine_d__4__MoveNext_107d694
          (int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(int *)(param_1 + 8) == 1) {
    fVar3 = *(float *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    fVar2 = *(float *)(param_1 + 0x28);
    fVar1 = (float)UnityEngine_Time__get_unscaledDeltaTime_3610a80(0);
    fVar2 = fVar2 + fVar3 * fVar1;
    *(float *)(param_1 + 0x28) = fVar2;
    if (1.0 <= fVar2) {
      if (*(int *)(param_1 + 0x10) != 0) {
        UnityEngine_UI_ScrollRect__set_normalizedPosition_39bbca0
                  (*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                   *(undefined4 *)(param_1 + 0x18),0);
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_ScrollRect__get_normalizedPosition_39bb94c(&uStack_30,*(int *)(param_1 + 0x10),0)
    ;
    fVar2 = _UNK_0108d7e8;
    *(undefined4 *)(param_1 + 0x20) = uStack_30;
    *(undefined4 *)(param_1 + 0x24) = uStack_2c;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  fVar2 = 1.0 - (1.0 - fVar2) * (1.0 - fVar2);
  if (*(int *)(param_1 + 0x10) != 0) {
    UnityEngine_UI_ScrollRect__set_normalizedPosition_39bbca0
              (*(int *)(param_1 + 0x10),
               *(float *)(param_1 + 0x20) +
               fVar2 * (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x20)),
               *(float *)(param_1 + 0x24) +
               fVar2 * (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x24)),0);
    *(undefined4 *)(param_1 + 0xc) = 0;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
    *(undefined4 *)(param_1 + 8) = 1;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

