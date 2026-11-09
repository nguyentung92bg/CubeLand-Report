/* IL2CPP: Rotatelab.Scripts.TrapController$$Init
void Rotatelab_Scripts_TrapController__Init (Rotatelab_Scripts_TrapController_o* __this, bool isTrapOpen, Rotatelab_Scripts_BlasterController_o* blaster, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.TrapController$$Init
   void Rotatelab_Scripts_TrapController__Init (Rotatelab_Scripts_TrapController_o* __this, bool
   isTrapOpen, Rotatelab_Scripts_BlasterController_o* blaster, const MethodInfo* method); */

void Rotatelab_Scripts_TrapController__Init_105cb48(int param_1,undefined1 param_2,int param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  undefined1 auStack_30 [16];
  
  pcVar2 = (char *)(_UNK_0106cc44 + 0x106cb68);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106cc48 + 0x106cb7c));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0106cc4c + 0x106cb94) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694(param_1 + 0x28,0);
  PrimeTween_Sequence__Stop_2cf07bc(param_1 + 0x38,0);
  piVar3 = (int *)(param_1 + 0x20);
  *piVar3 = param_3;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x14) = param_2;
  thunk_FUN_00ec5080(piVar3,param_3);
  if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = 0x3f800000;
  if (*(char *)(param_1 + 0x14) == '\0') {
    uVar1 = _UNK_0106cc40;
  }
  Rotatelab_Scripts_BlasterController__ScaleBlasterVisual_1033f58(auStack_30,*piVar3,uVar1,0,0,0);
  uVar1 = 1;
  if (*(char *)(param_1 + 0x14) == '\0') {
    uVar1 = 3;
  }
  Rotatelab_Scripts_TrapController__UpdateAnimationState_105cc50(param_1,uVar1);
  return;
}

