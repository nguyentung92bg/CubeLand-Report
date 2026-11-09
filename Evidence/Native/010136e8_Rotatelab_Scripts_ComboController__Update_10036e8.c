/* IL2CPP: Rotatelab.Scripts.ComboController$$Update
void Rotatelab_Scripts_ComboController__Update (Rotatelab_Scripts_ComboController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ComboController$$Update
   void Rotatelab_Scripts_ComboController__Update (Rotatelab_Scripts_ComboController_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_ComboController__Update_10036e8(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  float fVar10;
  
  pcVar8 = (char *)(_UNK_010138b4 + 0x1013700);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010138b8 + 0x1013714));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010138bc + 0x1013720));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010138c0 + 0x101372c));
    *pcVar8 = '\x01';
  }
  Rotatelab_Scripts_ComboController__RefreshActive_10038d4(param_1);
  if (*(char *)(param_1 + 0x18) != '\0') {
    if (0 < *(int *)(param_1 + 0x14)) {
      fVar1 = (float)UnityEngine_Time__get_time_3610900(0);
      fVar10 = *(float *)(param_1 + 0x20);
      iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                        (**(undefined4 **)(_UNK_010138c4 + 0x1013770));
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(float *)(iVar2 + 0x18) < fVar1 - fVar10) {
        pcVar8 = (char *)(_UNK_01013b38 + 0x1013a18);
        if (*pcVar8 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_01013b3c + 0x1013a2c));
          FUN_00ec37c0(*(undefined4 *)(_UNK_01013b40 + 0x1013a38));
          FUN_00ec37c0(*(undefined4 *)(_UNK_01013b44 + 0x1013a44));
          FUN_00ec37c0(*(undefined4 *)(_UNK_01013b48 + 0x1013a50));
          *pcVar8 = '\x01';
        }
        puVar4 = *(undefined4 **)(_UNK_01013b4c + 0x1013a68);
        *(undefined4 *)(param_1 + 0x10) = 0;
        iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar4);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar2 + 0x10);
        uVar5 = UnityEngine_Time__get_time_3610900(0);
        *(undefined4 *)(param_1 + 0x1c) = uVar5;
        uVar5 = UnityEngine_Time__get_time_3610900(0);
        piVar9 = *(int **)(_UNK_01013b50 + 0x1013aac);
        *(undefined4 *)(param_1 + 0x20) = uVar5;
        iVar2 = *piVar9;
        if (*(int *)(iVar2 + 0x74) == 0) {
          FUN_00ec3934();
          iVar2 = *piVar9;
        }
        iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x54);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_GameAction_int___Raise_23a2a74
                  (iVar2,*(undefined4 *)(param_1 + 0x14),
                   **(undefined4 **)(_UNK_01013b54 + 0x1013aec));
        iVar2 = *(int *)(*(int *)(*piVar9 + 0x5c) + 0x4c);
        uVar5 = Rotatelab_Scripts_ComboController__GetCurrentThresholdInt_1003560(param_1);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar7 = 0;
        goto Rotatelab_GameAction_float__int___Raise_23a51f4;
      }
    }
    if (0.0 < *(float *)(param_1 + 0x10)) {
      fVar1 = (float)UnityEngine_Time__get_time_3610900(0);
      fVar10 = *(float *)(param_1 + 0x1c);
      iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                        (**(undefined4 **)(_UNK_010138c8 + 0x10137d8));
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(float *)(iVar2 + 0x34) <= fVar1 - fVar10) {
        fVar1 = *(float *)(param_1 + 0x10);
        fVar10 = (float)Rotatelab_Scripts_ComboController__GetCurrentDrainRate_1003b5c(param_1);
        fVar3 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
        fVar1 = fVar1 - fVar10 * fVar3;
        piVar9 = *(int **)(_UNK_010138cc + 0x101383c);
        iVar2 = *piVar9;
        iVar6 = *(int *)(iVar2 + 0x74);
        if (fVar1 < 0.0) {
          fVar1 = _UNK_010138b0;
        }
        *(float *)(param_1 + 0x10) = fVar1;
        if (iVar6 == 0) {
          FUN_00ec3934();
          iVar2 = *piVar9;
        }
        iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x4c);
        uVar7 = Rotatelab_Scripts_ComboController__GetNormalizedFill_1003c0c(param_1);
        uVar5 = Rotatelab_Scripts_ComboController__GetCurrentThresholdInt_1003560(param_1);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
Rotatelab_GameAction_float__int___Raise_23a51f4:
        iVar2 = *(int *)(iVar2 + 8);
        if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023b520c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar2 + 0xc))
                    (*(undefined4 *)(iVar2 + 0x20),uVar7,uVar5,*(undefined4 *)(iVar2 + 0x14));
          return;
        }
        return;
      }
    }
  }
  return;
}

