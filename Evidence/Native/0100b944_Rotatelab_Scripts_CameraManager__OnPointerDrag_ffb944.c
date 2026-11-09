/* IL2CPP: Rotatelab.Scripts.CameraManager$$OnPointerDrag
void Rotatelab_Scripts_CameraManager__OnPointerDrag (Rotatelab_Scripts_CameraManager_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.CameraManager$$OnPointerDrag
   void Rotatelab_Scripts_CameraManager__OnPointerDrag (Rotatelab_Scripts_CameraManager_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void Rotatelab_Scripts_CameraManager__OnPointerDrag_ffb944(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar3 = (char *)(_UNK_0100b9d0 + 0x100b95c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100b9d4 + 0x100b970));
    *pcVar3 = '\x01';
  }
  if (*(char *)(param_1 + 0x1c) == '\0') {
    return;
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0100b9d8 + 0x100b990));
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar4 = *(float *)(param_2 + 0xf8);
  fVar5 = *(float *)(param_2 + 0xfc);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar3 = (char *)(_UNK_0103d6f8 + 0x103d58c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103d6fc + 0x103d5a0),fVar4,fVar5,0);
    *pcVar3 = '\x01';
  }
  uVar6 = *(undefined4 *)(iVar1 + 0x50);
  if (*(int *)(**(int **)(_UNK_0103d700 + 0x103d5b4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Equality_36033f4(uVar6,0,0);
  if (iVar2 == 0) {
    fVar9 = *(float *)(iVar1 + 0x70);
    fVar5 = *(float *)(iVar1 + 0x6c) * fVar5;
    fVar7 = -(fVar4 * *(float *)(iVar1 + 0x6c));
    iVar2 = *(int *)(iVar1 + 0x10);
    fVar8 = -fVar9;
    fVar4 = fVar5;
    if (fVar9 < fVar5) {
      fVar4 = fVar9;
    }
    fVar10 = fVar7;
    if (fVar9 < fVar7) {
      fVar10 = fVar9;
    }
    if (fVar5 < fVar8) {
      fVar4 = fVar8;
    }
    if (fVar7 < fVar8) {
      fVar10 = fVar8;
    }
    if (*(int *)(iVar1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_up_36151f0(&uStack_3c,*(int *)(iVar1 + 0x4c),0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__Rotate_3616240(iVar2,uStack_3c,uStack_38,uStack_34,fVar10,0,0);
    iVar2 = *(int *)(iVar1 + 0x10);
    if (*(int *)(iVar1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_right_3615130(&uStack_3c,*(int *)(iVar1 + 0x4c),0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__Rotate_3616240(iVar2,uStack_3c,uStack_38,uStack_34,fVar4,0,0);
  }
  return;
}

