/* IL2CPP: Rotatelab.Boosters.CannonBoosterController.<CameraRotationCoroutine>d__24$$MoveNext
bool Rotatelab_Boosters_CannonBoosterController__CameraRotationCoroutine_d__24__MoveNext (Rotatelab_Boosters_CannonBoosterController__CameraRotationCoroutine_d__24_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonBoosterController.<CameraRotationCoroutine>d__24$$MoveNext
   bool Rotatelab_Boosters_CannonBoosterController__CameraRotationCoroutine_d__24__MoveNext
   (Rotatelab_Boosters_CannonBoosterController__CameraRotationCoroutine_d__24_o* __this, const
   MethodInfo* method); */

undefined4
Rotatelab_Boosters_CannonBoosterController__CameraRotationCoroutine_d__24__MoveNext_1136d8c
          (int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  
  pcVar4 = (char *)(_UNK_01146f40 + 0x1146da4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146f44 + 0x1146db8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146f48 + 0x1146dc4));
    *pcVar4 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar3 == 2) {
LAB_01146df0:
    puVar1 = *(undefined4 **)(_UNK_01146f4c + 0x1146e00);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar1);
    fVar2 = _UNK_01146f3c;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(iVar3 + 0x1c) != '\0') {
      *(undefined4 *)(param_1 + 0x14) = 0;
      goto LAB_01146e54;
    }
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01146f58 + 0x1146ecc));
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 != 0) {
        return 0;
      }
      goto LAB_01146df0;
    }
    fVar2 = *(float *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    fVar7 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
    fVar2 = fVar2 + fVar7;
    *(float *)(param_1 + 0x14) = fVar2;
LAB_01146e54:
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (fVar2 < *(float *)(iVar6 + 0x28)) {
      iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01146f50 + 0x1146e7c));
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar5 = 1;
      if (*(char *)(iVar3 + 0x1c) != '\0') {
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      goto LAB_01146f18;
    }
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01146f54 + 0x1146eb4));
  }
  fVar7 = *(float *)(iVar6 + 0x24);
  fVar2 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_ObjectManager__RotateObjectManually_102d568(iVar3,fVar7 * fVar2,0,0);
  uVar5 = 2;
LAB_01146f18:
  *(undefined4 *)(param_1 + 0xc) = 0;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
  *(undefined4 *)(param_1 + 8) = uVar5;
  return 1;
}

