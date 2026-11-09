/* IL2CPP: Rotatelab.Scripts.PilotBlasterController$$Rotate
void Rotatelab_Scripts_PilotBlasterController__Rotate (Rotatelab_Scripts_PilotBlasterController_o* __this, UnityEngine_Vector3_o targetPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PilotBlasterController$$Rotate
   void Rotatelab_Scripts_PilotBlasterController__Rotate
   (Rotatelab_Scripts_PilotBlasterController_o* __this, UnityEngine_Vector3_o targetPosition, const
   MethodInfo* method); */

void Rotatelab_Scripts_PilotBlasterController__Rotate_103f5d0(int param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  pcVar4 = (char *)(_UNK_0104f80c + 0x104f5f0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104f810 + 0x104f604));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104f814 + 0x104f610));
    *pcVar4 = '\x01';
  }
  iVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = UnityEngine_Transform__get_parent_36148d8(iVar2,0);
  if (*(int *)(**(int **)(_UNK_0104f818 + 0x104f650) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Inequality_36018e4(uVar3,0,0);
  fVar8 = 1.0;
  if (iVar2 != 0) {
    iVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Transform__get_parent_36148d8(iVar2,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_position_36149b0(&fStack_50,iVar2,0);
    if (fStack_50 < 0.0) {
      fVar8 = -1.0;
    }
  }
  fVar6 = *(float *)(param_1 + 0x174);
  fVar7 = _UNK_0104f808;
  if (fVar6 != 0.0) {
    fVar7 = (fVar6 + fVar8 * param_2) / (fVar6 + fVar6);
    bVar1 = fVar7 < 0.0;
    if (1.0 < fVar7) {
      fVar7 = 1.0;
    }
    if (bVar1) {
      fVar7 = _UNK_0104f808;
    }
  }
  fVar8 = *(float *)(param_1 + 0x16c);
  fVar6 = *(float *)(param_1 + 0x170);
  if (*(int *)(**(int **)(_UNK_0104f81c + 0x104f728) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694((undefined8 *)(param_1 + 0xf8),0);
  uVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  uVar5 = *(undefined4 *)(param_1 + 0x178);
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_50,3,0);
  if (fVar7 < 0.0) {
    fVar7 = _UNK_0104f808;
  }
  PrimeTween_Tween__LocalRotation_2ce4354
            (&fStack_50,uVar3,0,fVar8 + fVar7 * (fVar6 - fVar8),0,uVar5,fStack_50,uStack_4c,
             uStack_48,uStack_44,uStack_40,1,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0xf8) = CONCAT44(uStack_4c,fStack_50);
  *(ulonglong *)(param_1 + 0x100) = CONCAT44(uStack_44,uStack_48);
  thunk_FUN_00ec5080(param_1 + 0x100,0);
  return;
}

