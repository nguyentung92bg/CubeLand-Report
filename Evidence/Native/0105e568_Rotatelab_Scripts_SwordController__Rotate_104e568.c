/* IL2CPP: Rotatelab.Scripts.SwordController$$Rotate
PrimeTween_Tween_o Rotatelab_Scripts_SwordController__Rotate (Rotatelab_Scripts_SwordController_o* __this, UnityEngine_Transform_o* targetPoint, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.SwordController$$Rotate
   PrimeTween_Tween_o Rotatelab_Scripts_SwordController__Rotate
   (Rotatelab_Scripts_SwordController_o* __this, UnityEngine_Transform_o* targetPoint, float
   duration, const MethodInfo* method); */

void Rotatelab_Scripts_SwordController__Rotate_104e568
               (undefined8 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar6 = (char *)(_UNK_0105e6d4 + 0x105e594);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105e6d8 + 0x105e5a8));
    *pcVar6 = '\x01';
  }
  puVar7 = (undefined8 *)(param_2 + 0x78);
  if (*(int *)(**(int **)(_UNK_0105e6dc + 0x105e5c0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694(puVar7,0);
  uVar4 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  iVar5 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_eulerAngles_3614c78(&uStack_40,iVar5,0);
  uVar3 = uStack_38;
  uVar2 = uStack_3c;
  uVar1 = uStack_40;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_eulerAngles_3614c78(&uStack_40,param_3,0);
  PrimeTween_Tween__Rotation_2ce4f08
            (&uStack_40,uVar4,uVar1,uVar2,uVar3,uStack_40,uStack_3c,uStack_38,param_4,0,0,0,0,0,1,0,
             0,0,0,0);
  *puVar7 = CONCAT44(uStack_3c,uStack_40);
  *(ulonglong *)(param_2 + 0x80) = CONCAT44(uStack_34,uStack_38);
  thunk_FUN_00ec5080(param_2 + 0x80,0);
  uVar8 = *(undefined8 *)(param_2 + 0x80);
  *param_1 = *puVar7;
  param_1[1] = uVar8;
  return;
}

