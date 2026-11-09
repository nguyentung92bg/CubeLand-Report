/* IL2CPP: Rotatelab.Scripts.BasePlaceableController$$LocalMove
PrimeTween_Tween_o Rotatelab_Scripts_BasePlaceableController__LocalMove (Rotatelab_Scripts_BasePlaceableController_o* __this, UnityEngine_Vector3_o localPosition, float duration, UnityEngine_Vector3_o offset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BasePlaceableController$$LocalMove
   PrimeTween_Tween_o Rotatelab_Scripts_BasePlaceableController__LocalMove
   (Rotatelab_Scripts_BasePlaceableController_o* __this, UnityEngine_Vector3_o localPosition, float
   duration, UnityEngine_Vector3_o offset, const MethodInfo* method); */

void Rotatelab_Scripts_BasePlaceableController__LocalMove_10306f0
               (undefined8 *param_1,int param_2,float param_3,float param_4,float param_5,
               undefined4 param_6,float param_7,float param_8,float param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  pcVar6 = (char *)(_UNK_01040890 + 0x104071c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01040894 + 0x1040730));
    *pcVar6 = '\x01';
  }
  puVar7 = (undefined8 *)(param_2 + 0x28);
  if (*(int *)(**(int **)(_UNK_01040898 + 0x1040748) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694(puVar7,0);
  uVar4 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  iVar5 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localPosition_3613b6c(&uStack_48,iVar5,0);
  uVar3 = uStack_40;
  uVar2 = uStack_44;
  uVar1 = uStack_48;
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_48,9,0);
  PrimeTween_Tween__LocalPosition_2ce5748
            (&uStack_48,uVar4,uVar1,uVar2,uVar3,param_3 + param_7,param_4 + param_8,
             param_5 + param_9,param_6,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,1,0,0,0,0,0
            );
  *puVar7 = CONCAT44(uStack_44,uStack_48);
  *(ulonglong *)(param_2 + 0x30) = CONCAT44(uStack_3c,uStack_40);
  thunk_FUN_00ec5080(param_2 + 0x30,0);
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  *param_1 = *puVar7;
  param_1[1] = uVar8;
  return;
}

