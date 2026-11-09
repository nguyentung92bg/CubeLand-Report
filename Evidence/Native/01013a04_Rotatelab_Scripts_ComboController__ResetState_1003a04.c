/* IL2CPP: Rotatelab.Scripts.ComboController$$ResetState
void Rotatelab_Scripts_ComboController__ResetState (Rotatelab_Scripts_ComboController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ComboController$$ResetState
   void Rotatelab_Scripts_ComboController__ResetState (Rotatelab_Scripts_ComboController_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_ComboController__ResetState_1003a04(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_01013b38 + 0x1013a18);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01013b3c + 0x1013a2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01013b40 + 0x1013a38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01013b44 + 0x1013a44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01013b48 + 0x1013a50));
    *pcVar4 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_01013b4c + 0x1013a68);
  *(undefined4 *)(param_1 + 0x10) = 0;
  iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar1);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar2 + 0x10);
  uVar3 = UnityEngine_Time__get_time_3610900(0);
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  uVar3 = UnityEngine_Time__get_time_3610900(0);
  piVar5 = *(int **)(_UNK_01013b50 + 0x1013aac);
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  iVar2 = *piVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar5;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x54);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_int___Raise_23a2a74
            (iVar2,*(undefined4 *)(param_1 + 0x14),**(undefined4 **)(_UNK_01013b54 + 0x1013aec));
  iVar2 = *(int *)(*(int *)(*piVar5 + 0x5c) + 0x4c);
  uVar3 = Rotatelab_Scripts_ComboController__GetCurrentThresholdInt_1003560(param_1);
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
  (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),0,uVar3,*(undefined4 *)(iVar2 + 0x14));
  return;
}

