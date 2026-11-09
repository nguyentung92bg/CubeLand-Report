/* IL2CPP: Rotatelab.Scripts.ComboController$$OnBulletFiredHandler
void Rotatelab_Scripts_ComboController__OnBulletFiredHandler (Rotatelab_Scripts_ComboController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ComboController$$OnBulletFiredHandler
   void Rotatelab_Scripts_ComboController__OnBulletFiredHandler
   (Rotatelab_Scripts_ComboController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ComboController__OnBulletFiredHandler_1003c98(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  float fVar10;
  
  pcVar5 = (char *)(_UNK_01013ee4 + 0x1013cb4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01013ee8 + 0x1013cc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01013eec + 0x1013cd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01013ef0 + 0x1013ce0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01013ef4 + 0x1013cec));
    *pcVar5 = '\x01';
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    return;
  }
  uVar1 = UnityEngine_Time__get_time_3610900(0);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + 1.0;
  puVar7 = *(undefined4 **)(_UNK_01013ef8 + 0x1013d2c);
  piVar8 = *(int **)(_UNK_01013efc + 0x1013d34);
  puVar9 = *(undefined4 **)(_UNK_01013f00 + 0x1013d3c);
  while( true ) {
    iVar6 = *(int *)(param_1 + 0x14);
    iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar7);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0x14) <= iVar6) break;
    fVar10 = *(float *)(param_1 + 0x10);
    iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar7);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar3 = (float)Rotatelab_Scripts_ComboConfigSO__GetThreshold_100194c
                             (iVar2,*(undefined4 *)(param_1 + 0x14),0);
    if (fVar10 < fVar3) break;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    uVar1 = UnityEngine_Time__get_time_3610900(0);
    iVar2 = *piVar8;
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar8;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x50);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_int___Raise_23a2a74(iVar2,*(undefined4 *)(param_1 + 0x14),*puVar9);
  }
  iVar6 = *(int *)(param_1 + 0x14);
  iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar7);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x14) <= iVar6) {
    fVar10 = *(float *)(param_1 + 0x10);
    iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar7);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar3 = (float)Rotatelab_Scripts_ComboConfigSO__GetThreshold_100194c
                             (iVar2,*(undefined4 *)(param_1 + 0x14),0);
    if (fVar10 < fVar3) {
      fVar3 = fVar10;
    }
    *(float *)(param_1 + 0x10) = fVar3;
  }
  iVar2 = *piVar8;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar8;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x4c);
  uVar1 = Rotatelab_Scripts_ComboController__GetNormalizedFill_1003c0c(param_1);
  uVar4 = Rotatelab_Scripts_ComboController__GetCurrentThresholdInt_1003560(param_1);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b520c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 + 0xc))
            (*(undefined4 *)(iVar2 + 0x20),uVar1,uVar4,*(undefined4 *)(iVar2 + 0x14));
  return;
}

