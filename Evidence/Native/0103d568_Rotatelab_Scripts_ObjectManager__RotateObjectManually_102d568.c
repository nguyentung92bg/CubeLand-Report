/* IL2CPP: Rotatelab.Scripts.ObjectManager$$RotateObjectManually
void Rotatelab_Scripts_ObjectManager__RotateObjectManually (Rotatelab_Scripts_ObjectManager_o* __this, UnityEngine_Vector2_o pointerDelta, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$RotateObjectManually
   void Rotatelab_Scripts_ObjectManager__RotateObjectManually (Rotatelab_Scripts_ObjectManager_o*
   __this, UnityEngine_Vector2_o pointerDelta, const MethodInfo* method); */

void Rotatelab_Scripts_ObjectManager__RotateObjectManually_102d568
               (int param_1,float param_2,float param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar2 = (char *)(_UNK_0103d6f8 + 0x103d58c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103d6fc + 0x103d5a0));
    *pcVar2 = '\x01';
  }
  uVar3 = *(undefined4 *)(param_1 + 0x50);
  if (*(int *)(**(int **)(_UNK_0103d700 + 0x103d5b4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar3,0,0);
  if (iVar1 == 0) {
    fVar6 = *(float *)(param_1 + 0x70);
    param_3 = *(float *)(param_1 + 0x6c) * param_3;
    fVar4 = -(param_2 * *(float *)(param_1 + 0x6c));
    iVar1 = *(int *)(param_1 + 0x10);
    fVar5 = -fVar6;
    fVar7 = param_3;
    if (fVar6 < param_3) {
      fVar7 = fVar6;
    }
    fVar8 = fVar4;
    if (fVar6 < fVar4) {
      fVar8 = fVar6;
    }
    if (param_3 < fVar5) {
      fVar7 = fVar5;
    }
    if (fVar4 < fVar5) {
      fVar8 = fVar5;
    }
    if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_up_36151f0(&uStack_3c,*(int *)(param_1 + 0x4c),0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__Rotate_3616240(iVar1,uStack_3c,uStack_38,uStack_34,fVar8,0,0);
    iVar1 = *(int *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_right_3615130(&uStack_3c,*(int *)(param_1 + 0x4c),0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__Rotate_3616240(iVar1,uStack_3c,uStack_38,uStack_34,fVar7,0,0);
  }
  return;
}

