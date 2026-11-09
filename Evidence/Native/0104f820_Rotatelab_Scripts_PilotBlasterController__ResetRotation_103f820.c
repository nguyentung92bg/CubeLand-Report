/* IL2CPP: Rotatelab.Scripts.PilotBlasterController$$ResetRotation
void Rotatelab_Scripts_PilotBlasterController__ResetRotation (Rotatelab_Scripts_PilotBlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PilotBlasterController$$ResetRotation
   void Rotatelab_Scripts_PilotBlasterController__ResetRotation
   (Rotatelab_Scripts_PilotBlasterController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_PilotBlasterController__ResetRotation_103f820(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_0104f914 + 0x104f838);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104f918 + 0x104f84c));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0104f91c + 0x104f860) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694((undefined8 *)(param_1 + 0xf8),0);
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  uVar4 = *(undefined4 *)(param_1 + 0x168);
  uVar3 = *(undefined4 *)(param_1 + 0x178);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_38,3,0);
  PrimeTween_Tween__LocalRotation_2ce4354
            (&uStack_38,uVar1,0,uVar4,0,uVar3,uStack_38,uStack_34,uStack_30,uStack_2c,uStack_28,1,0,
             0,0,0,0);
  *(undefined8 *)(param_1 + 0xf8) = CONCAT44(uStack_34,uStack_38);
  *(ulonglong *)(param_1 + 0x100) = CONCAT44(uStack_2c,uStack_30);
  thunk_FUN_00ec5080(param_1 + 0x100,0);
  return;
}

