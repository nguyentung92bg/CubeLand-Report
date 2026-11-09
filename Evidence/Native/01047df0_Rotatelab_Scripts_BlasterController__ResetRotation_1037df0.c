/* IL2CPP: Rotatelab.Scripts.BlasterController$$ResetRotation
void Rotatelab_Scripts_BlasterController__ResetRotation (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$ResetRotation
   void Rotatelab_Scripts_BlasterController__ResetRotation (Rotatelab_Scripts_BlasterController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__ResetRotation_1037df0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_01047f24 + 0x1047e08);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01047f28 + 0x1047e1c));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01047f2c + 0x1047e34) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694((undefined8 *)(param_1 + 0xf8),0);
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  pcVar3 = (char *)(_UNK_01047f30 + 0x1047e74);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01047f34 + 0x1047e88));
    *pcVar3 = '\x01';
  }
  uVar4 = *(undefined4 *)(param_1 + 0x70);
  puVar2 = *(undefined4 **)(**(int **)(_UNK_01047f38 + 0x1047ea8) + 0x5c);
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  uVar5 = puVar2[2];
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_38,3,0);
  PrimeTween_Tween__Rotation_2ce4bd8
            (&uStack_38,uVar1,uVar6,uVar7,uVar5,uVar4,uStack_38,uStack_34,uStack_30,uStack_2c,
             uStack_28,1,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0xf8) = CONCAT44(uStack_34,uStack_38);
  *(ulonglong *)(param_1 + 0x100) = CONCAT44(uStack_2c,uStack_30);
  thunk_FUN_00ec5080(param_1 + 0x100,0);
  return;
}

