/* IL2CPP: Rotatelab.Scripts.BasePlaceableController$$MoveToTransform
PrimeTween_Tween_o Rotatelab_Scripts_BasePlaceableController__MoveToTransform (Rotatelab_Scripts_BasePlaceableController_o* __this, UnityEngine_Transform_o* target, float duration, UnityEngine_Vector3_o offset, int8_t ease, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BasePlaceableController$$MoveToTransform
   PrimeTween_Tween_o Rotatelab_Scripts_BasePlaceableController__MoveToTransform
   (Rotatelab_Scripts_BasePlaceableController_o* __this, UnityEngine_Transform_o* target, float
   duration, UnityEngine_Vector3_o offset, int8_t ease, const MethodInfo* method); */

void Rotatelab_Scripts_BasePlaceableController__MoveToTransform_103089c
               (undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  pcVar5 = (char *)(_UNK_01040ab8 + 0x10408c8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01040abc + 0x10408dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01040ac0 + 0x10408e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01040ac4 + 0x10408f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01040ac8 + 0x1040900));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01040acc + 0x104090c));
    *pcVar5 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01040ad0 + 0x1040928));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 0x14) = param_3;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x14),param_3);
  *(undefined4 *)(iVar1 + 0x18) = param_5;
  *(undefined4 *)(iVar1 + 0x1c) = param_6;
  *(undefined4 *)(iVar1 + 0x20) = param_7;
  iVar2 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_40,iVar2,0);
  iVar2 = **(int **)(_UNK_01040ad4 + 0x10409a4);
  *(undefined4 *)(iVar1 + 0x10) = uStack_38;
  *(undefined8 *)(iVar1 + 8) = uStack_40;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
  }
  puVar6 = (undefined8 *)(param_2 + 0x28);
  PrimeTween_Tween__Stop_2ced694(puVar6,0);
  uVar3 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01040ad8 + 0x10409f0));
  System_Action_object__float____ctor_1f19254
            (uVar4,iVar1,**(undefined4 **)(_UNK_01040adc + 0x1040a0c),0);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_58,9,0);
  PrimeTween_Tween__Custom_object__15d5b3c
            (&uStack_58,uVar3,0,0x3f800000,param_4,uVar4,uStack_58,uStack_54,uStack_50,uStack_4c,
             uStack_48,1,0,0,0,0,**(undefined4 **)(_UNK_01040ae0 + 0x1040a3c));
  *puVar6 = CONCAT44(uStack_54,uStack_58);
  *(ulonglong *)(param_2 + 0x30) = CONCAT44(uStack_4c,uStack_50);
  thunk_FUN_00ec5080(param_2 + 0x30,0);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  *param_1 = *puVar6;
  param_1[1] = uVar7;
  return;
}

