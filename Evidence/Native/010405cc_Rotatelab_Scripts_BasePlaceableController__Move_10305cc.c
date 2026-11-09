/* IL2CPP: Rotatelab.Scripts.BasePlaceableController$$Move
PrimeTween_Tween_o Rotatelab_Scripts_BasePlaceableController__Move (Rotatelab_Scripts_BasePlaceableController_o* __this, UnityEngine_Vector3_o position, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BasePlaceableController$$Move
   PrimeTween_Tween_o Rotatelab_Scripts_BasePlaceableController__Move
   (Rotatelab_Scripts_BasePlaceableController_o* __this, UnityEngine_Vector3_o position, float
   duration, const MethodInfo* method); */

void Rotatelab_Scripts_BasePlaceableController__Move_10305cc
               (undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  pcVar2 = (char *)(_UNK_010406e4 + 0x10405f4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010406e8 + 0x104060c));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010406ec + 0x1040624) + 0x74) == 0) {
    FUN_00ec3934();
  }
  puVar3 = (undefined8 *)(param_2 + 0x28);
  PrimeTween_Tween__Stop_2ced694(puVar3,0);
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_48,9,0);
  PrimeTween_Tween__Position_2ce50e8
            (&uStack_48,uVar1,param_3,param_4,param_5,param_6,uStack_48,uStack_44,uStack_40,
             uStack_3c,uStack_38,1,0,0,0,0,0);
  *puVar3 = CONCAT44(uStack_44,uStack_48);
  *(ulonglong *)(param_2 + 0x30) = CONCAT44(uStack_3c,uStack_40);
  thunk_FUN_00ec5080(param_2 + 0x30,0);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  *param_1 = *puVar3;
  param_1[1] = uVar4;
  return;
}

