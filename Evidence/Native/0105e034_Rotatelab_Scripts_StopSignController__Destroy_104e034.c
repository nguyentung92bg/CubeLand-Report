/* IL2CPP: Rotatelab.Scripts.StopSignController$$Destroy
void Rotatelab_Scripts_StopSignController__Destroy (Rotatelab_Scripts_StopSignController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.StopSignController$$Destroy
   void Rotatelab_Scripts_StopSignController__Destroy (Rotatelab_Scripts_StopSignController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_StopSignController__Destroy_104e034(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 auStack_28 [16];
  
  pcVar3 = (char *)(_UNK_0105e1d4 + 0x105e04c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105e1d8 + 0x105e060));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105e1dc + 0x105e06c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105e1e0 + 0x105e078));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105e1e4 + 0x105e084));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105e1e8 + 0x105e090));
    *pcVar3 = '\x01';
  }
  Rotatelab_Scripts_StopSignController__UpdateAnimationState_1046b80(param_1,4,0);
  piVar6 = *(int **)(_UNK_0105e1ec + 0x105e0b4);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar4 = puVar2[1];
  if (iVar4 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar6 + 0x5c);
    }
    uVar5 = *puVar2;
    iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105e1f0 + 0x105e0fc));
    System_Action___ctor_2b10bac(iVar4,uVar5,**(undefined4 **)(_UNK_0105e1f4 + 0x105e11c),0);
    piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 4);
    *piVar6 = iVar4;
    thunk_FUN_00ec5080(piVar6,iVar4);
  }
  if (*(int *)(**(int **)(_UNK_0105e1f8 + 0x105e144) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Delay_2cea14c(auStack_28,param_1,0x3e99999a,iVar4,0,0,0);
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105e1fc + 0x105e188));
  System_Action___ctor_2b10bac(uVar5,param_1,**(undefined4 **)(_UNK_0105e200 + 0x105e1a4),0);
  PrimeTween_Tween__Delay_2cea14c(auStack_28,param_1,0x3f400000,uVar5,0,0,0);
  return;
}

