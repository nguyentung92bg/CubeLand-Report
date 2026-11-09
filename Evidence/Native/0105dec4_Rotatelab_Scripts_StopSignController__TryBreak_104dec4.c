/* IL2CPP: Rotatelab.Scripts.StopSignController$$TryBreak
void Rotatelab_Scripts_StopSignController__TryBreak (Rotatelab_Scripts_StopSignController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.StopSignController$$TryBreak
   void Rotatelab_Scripts_StopSignController__TryBreak (Rotatelab_Scripts_StopSignController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_StopSignController__TryBreak_104dec4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  pcVar4 = (char *)(_UNK_0105e018 + 0x105dedc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105e01c + 0x105def0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105e020 + 0x105defc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105e024 + 0x105df08));
    *pcVar4 = '\x01';
  }
  if (0 < *(int *)(param_1 + 0x48)) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
    Rotatelab_Scripts_StopSignController__UpdateHealthText_104de4c(param_1);
    if (*(int *)(param_1 + 0x48) < 1) {
      pcVar4 = (char *)(_UNK_0105e1d4 + 0x105e04c);
      if (*pcVar4 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0105e1d8 + 0x105e060));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0105e1dc + 0x105e06c));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0105e1e0 + 0x105e078));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0105e1e4 + 0x105e084));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0105e1e8 + 0x105e090));
        *pcVar4 = '\x01';
      }
      Rotatelab_Scripts_StopSignController__UpdateAnimationState_1046b80(param_1,4,0);
      piVar6 = *(int **)(_UNK_0105e1ec + 0x105e0b4);
      iVar2 = *piVar6;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar6;
      }
      puVar3 = *(undefined4 **)(iVar2 + 0x5c);
      iVar5 = puVar3[1];
      if (iVar5 == 0) {
        if (*(int *)(iVar2 + 0x74) == 0) {
          FUN_00ec3934();
          puVar3 = *(undefined4 **)(*piVar6 + 0x5c);
        }
        uVar1 = *puVar3;
        iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105e1f0 + 0x105e0fc));
        System_Action___ctor_2b10bac(iVar5,uVar1,**(undefined4 **)(_UNK_0105e1f4 + 0x105e11c),0);
        piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 4);
        *piVar6 = iVar5;
        thunk_FUN_00ec5080(piVar6,iVar5);
      }
      if (*(int *)(**(int **)(_UNK_0105e1f8 + 0x105e144) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Delay_2cea14c(&uStack_28,param_1,0x3e99999a,iVar5,0,0,0);
      uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105e1fc + 0x105e188));
      System_Action___ctor_2b10bac(uVar1,param_1,**(undefined4 **)(_UNK_0105e200 + 0x105e1a4),0);
      PrimeTween_Tween__Delay_2cea14c(&uStack_28,param_1,0x3f400000,uVar1,0,0,0);
      return;
    }
    if (*(int *)(param_1 + 0x44) != 2) {
      if (*(int *)(**(int **)(_UNK_0105e028 + 0x105df54) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Stop_2ced694((undefined8 *)(param_1 + 0x50),0);
      Rotatelab_Scripts_StopSignController__UpdateAnimationState_1046b80(param_1,0,0);
      Rotatelab_Scripts_StopSignController__UpdateAnimationState_1046b80(param_1,3,0);
      uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105e02c + 0x105dfa0));
      System_Action___ctor_2b10bac(uVar1,param_1,**(undefined4 **)(_UNK_0105e030 + 0x105dfbc),0);
      PrimeTween_Tween__Delay_2cea14c(&uStack_28,param_1,0x3ecccccd,uVar1,0,0,0);
      *(undefined8 *)(param_1 + 0x50) = uStack_28;
      *(undefined8 *)(param_1 + 0x58) = uStack_20;
      thunk_FUN_00ec5080(param_1 + 0x58,0);
    }
  }
  return;
}

