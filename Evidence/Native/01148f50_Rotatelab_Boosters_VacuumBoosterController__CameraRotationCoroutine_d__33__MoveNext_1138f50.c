/* IL2CPP: Rotatelab.Boosters.VacuumBoosterController.<CameraRotationCoroutine>d__33$$MoveNext
bool Rotatelab_Boosters_VacuumBoosterController__CameraRotationCoroutine_d__33__MoveNext (Rotatelab_Boosters_VacuumBoosterController__CameraRotationCoroutine_d__33_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.VacuumBoosterController.<CameraRotationCoroutine>d__33$$MoveNext
   bool Rotatelab_Boosters_VacuumBoosterController__CameraRotationCoroutine_d__33__MoveNext
   (Rotatelab_Boosters_VacuumBoosterController__CameraRotationCoroutine_d__33_o* __this, const
   MethodInfo* method); */

undefined4
Rotatelab_Boosters_VacuumBoosterController__CameraRotationCoroutine_d__33__MoveNext_1138f50
          (int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pcVar4 = (char *)(_UNK_01149324 + 0x1148f68);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01149328 + 0x1148f7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114932c + 0x1148f88));
    *pcVar4 = '\x01';
  }
  if (4 < *(uint *)(param_1 + 8)) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x10);
  switch(*(uint *)(param_1 + 8)) {
  default:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(iVar5 + 0x20) == '\0') {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(&UNK_01149150 + _UNK_01149330));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(char *)(iVar1 + 0x1c) != '\0') {
        *(undefined4 *)(param_1 + 0x18) = 0;
        goto code_r0x01149178;
      }
code_r0x01149184:
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(&UNK_01149190 + _UNK_01149338));
      goto code_r0x01149268;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    break;
  case 1:
    fVar8 = *(float *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    fVar7 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
    fVar8 = fVar8 + fVar7;
    *(float *)(param_1 + 0x18) = fVar8;
    if (fVar8 < 3.0) {
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
code_r0x01149178:
      if (*(char *)(iVar5 + 0x20) == '\0') {
        iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(&UNK_011492d4 + _UNK_01149334));
        if (iVar5 != 0) {
          if (*(char *)(iVar5 + 0x1c) != '\0') {
            *(undefined4 *)(param_1 + 0x18) = 0;
          }
          *(undefined4 *)(param_1 + 0xc) = 0;
          thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
          *(undefined4 *)(param_1 + 8) = 1;
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      goto code_r0x01149184;
    }
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(&UNK_01149254 + _UNK_0114933c));
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
code_r0x01149268:
    fVar8 = *(float *)(iVar5 + 0x54);
    fVar7 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_ObjectManager__RotateObjectManually_102d568(iVar1,fVar8 * fVar7,0,0);
    *(undefined4 *)(param_1 + 0xc) = 0;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
    uVar3 = 2;
    goto code_r0x011492b4;
  case 3:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    break;
  case 4:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    goto code_r0x01149108;
  }
  if (*(char *)(iVar5 + 0x20) == '\0') {
code_r0x01149108:
    fVar7 = *(float *)(param_1 + 0x14);
    if (fVar7 == 0.0) {
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 0x88) = 0;
        thunk_FUN_00ec5080((undefined4 *)(iVar5 + 0x88),0);
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar2 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
    uVar3 = **(undefined4 **)(&UNK_011491cc + _UNK_01149344);
    fVar8 = fVar2 * _UNK_01149320;
    if (_UNK_0114931c - fVar7 < 0.0) {
      fVar8 = -(fVar2 * _UNK_01149320);
    }
    fVar6 = _UNK_0114931c;
    if (fVar2 * _UNK_01149320 < ABS(_UNK_0114931c - fVar7)) {
      fVar6 = fVar7 + fVar8;
    }
    *(float *)(param_1 + 0x14) = fVar6;
    iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(uVar3);
    fVar8 = *(float *)(param_1 + 0x14);
    fVar7 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_ObjectManager__RotateObjectManually_102d568(iVar5,fVar8 * fVar7,0,0);
    *(undefined4 *)(param_1 + 0xc) = 0;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
    uVar3 = 4;
  }
  else {
    fVar8 = *(float *)(iVar5 + 0x58);
    fVar9 = *(float *)(param_1 + 0x14);
    fVar2 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
    fVar6 = fVar8 - fVar9;
    uVar3 = **(undefined4 **)(&UNK_0114908c + _UNK_01149340);
    fVar7 = fVar2 * _UNK_01149318;
    if (fVar6 < 0.0) {
      fVar7 = -(fVar2 * _UNK_01149318);
    }
    if (fVar2 * _UNK_01149318 < ABS(fVar6)) {
      fVar8 = fVar9 + fVar7;
    }
    *(float *)(param_1 + 0x14) = fVar8;
    iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(uVar3);
    fVar8 = *(float *)(param_1 + 0x14);
    fVar7 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_ObjectManager__RotateObjectManually_102d568(iVar5,fVar8 * fVar7,0,0);
    *(undefined4 *)(param_1 + 0xc) = 0;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
    uVar3 = 3;
  }
code_r0x011492b4:
  *(undefined4 *)(param_1 + 8) = uVar3;
  return 1;
}

