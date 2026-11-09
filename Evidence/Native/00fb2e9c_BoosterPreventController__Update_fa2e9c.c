/* IL2CPP: BoosterPreventController$$Update
void BoosterPreventController__Update (BoosterPreventController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BoosterPreventController$$Update
   void BoosterPreventController__Update (BoosterPreventController_o* __this, const MethodInfo*
   method); */

void BoosterPreventController__Update_fa2e9c(int param_1)

{
  int iVar1;
  char *pcVar2;
  uint in_fpscr;
  float fVar3;
  undefined8 uVar4;
  undefined8 uStack_20;
  float fStack_18;
  
  pcVar2 = (char *)(_UNK_00fb2fb4 + 0xfb2eb4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2fb8 + 0xfb2ec8));
    *pcVar2 = '\x01';
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    iVar1 = UnityEngine_Input__GetMouseButtonDown_368b1a0(0,0);
    if (iVar1 != 0) {
      UnityEngine_Input__get_mousePosition_368b588(&uStack_20,0);
      *(float *)(param_1 + 0x48) = fStack_18;
      *(undefined8 *)(param_1 + 0x40) = uStack_20;
    }
    iVar1 = UnityEngine_Input__GetMouseButtonUp_368b1ec(0,0);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_00fb2fbc + 0xfb2f2c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar1 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *(int *)(iVar1 + 0x20);
      UnityEngine_Input__get_mousePosition_368b588(&uStack_20,0);
      uVar4 = FloatVectorSub(uStack_20,*(undefined8 *)(param_1 + 0x40),2,0x20);
      fStack_18 = fStack_18 - *(float *)(param_1 + 0x48);
      uVar4 = FloatVectorMult(uVar4,uVar4,2,0x20);
      fVar3 = (float)VectorSignedToFloat(iVar1 * iVar1,(byte)(in_fpscr >> 0x16) & 3);
      if ((float)uVar4 + (float)((ulonglong)uVar4 >> 0x20) + fStack_18 * fStack_18 < fVar3) {
        BoosterPreventController__HandleTap_fa2fc0(param_1);
      }
    }
  }
  return;
}

