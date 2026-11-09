/* IL2CPP: Rotatelab.Scripts.ComboController$$Start
void Rotatelab_Scripts_ComboController__Start (Rotatelab_Scripts_ComboController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ComboController$$Start
   void Rotatelab_Scripts_ComboController__Start (Rotatelab_Scripts_ComboController_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_ComboController__Start_10033c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_01013530 + 0x10133dc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01013534 + 0x10133f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01013538 + 0x10133fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101353c + 0x1013408));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01013540 + 0x1013414));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01013544 + 0x1013420));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_01013548 + 0x1013434));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar2 = UnityEngine_Time__get_time_3610900();
  piVar4 = *(int **)(_UNK_0101354c + 0x1013468);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x54);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_int___Raise_23a2a74
            (iVar1,*(undefined4 *)(param_1 + 0x14),**(undefined4 **)(_UNK_01013550 + 0x10134a8));
  iVar1 = *(int *)(*(int *)(*piVar4 + 0x5c) + 0x4c);
  uVar2 = Rotatelab_Scripts_ComboController__GetCurrentThresholdInt_1003560(param_1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_float__int___Raise_23a51f4
            (iVar1,0,uVar2,**(undefined4 **)(_UNK_01013554 + 0x10134e8));
  iVar1 = *(int *)(*(int *)(*piVar4 + 0x5c) + 0x58);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b2824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))
            (*(undefined4 *)(iVar1 + 0x20),*(char *)(param_1 + 0x18) != '\0',
             *(undefined4 *)(iVar1 + 0x14));
  return;
}

