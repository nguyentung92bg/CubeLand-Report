/* IL2CPP: Rotatelab.Scripts.ObjectManager$$Update
void Rotatelab_Scripts_ObjectManager__Update (Rotatelab_Scripts_ObjectManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$Update
   void Rotatelab_Scripts_ObjectManager__Update (Rotatelab_Scripts_ObjectManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_ObjectManager__Update_102d0b8(int param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  float fVar8;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  pcVar5 = (char *)(_UNK_0103d380 + 0x103d0d4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103d384 + 0x103d0e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103d388 + 0x103d0f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103d38c + 0x103d100));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103d390 + 0x103d10c));
    *pcVar5 = '\x01';
  }
  uVar6 = *(undefined4 *)(param_1 + 0x50);
  if (*(int *)(**(int **)(_UNK_0103d394 + 0x103d120) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Equality_36033f4(uVar6,0,0);
  if (iVar2 == 0) {
    if (*(float *)(param_1 + 0xa0) < *(float *)(param_1 + 0xa4)) {
      Rotatelab_Scripts_ObjectManager__ApplyLevelStartScale_102d3a8(param_1);
    }
    if (*(float *)(param_1 + 0x8c) < *(float *)(param_1 + 0x90)) {
      fVar8 = *(float *)(param_1 + 0x8c);
      fVar3 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
      fVar4 = _UNK_0103d564;
      fVar8 = fVar8 + fVar3;
      fVar3 = fVar8 / *(float *)(param_1 + 0x90);
      *(float *)(param_1 + 0x8c) = fVar8;
      bVar1 = fVar3 < 0.0;
      if (1.0 < fVar3) {
        fVar3 = 1.0;
      }
      if (bVar1) {
        fVar3 = fVar4;
      }
      fVar4 = (float)DG_Tweening_DOVirtual__EasedValue_1168508
                               (0,0x3f800000,fVar3,*(undefined4 *)(param_1 + 0x9c),0);
      fVar4 = fVar4 * *(float *)(param_1 + 0x94);
      iVar2 = *(int *)(param_1 + 0x10);
      if (*(int *)(param_1 + 0x14) != 0) {
        fVar3 = fVar4 - *(float *)(param_1 + 0x98);
        UnityEngine_Transform__get_up_36151f0(&uStack_3c,*(int *)(param_1 + 0x14),0);
        if (iVar2 != 0) {
          UnityEngine_Transform__Rotate_3616240(iVar2,uStack_3c,uStack_38,fStack_34,fVar3,0,0);
          *(float *)(param_1 + 0x98) = fVar4;
          fVar4 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
          *(float *)(param_1 + 0x80) = fVar3 / fVar4;
          if (*(float *)(param_1 + 0x90) <= *(float *)(param_1 + 0x8c)) {
            Rotatelab_Scripts_ObjectManager__StopLevelStartSpin_102d034(param_1);
            iVar2 = *(int *)(param_1 + 0xb4);
            if (iVar2 != 0) {
              (**(code **)(iVar2 + 0xc))
                        (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
            }
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0103d398 + 0x103d198));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(iVar2 + 0x1c) == '\0') {
      if (*(char *)(param_1 + 0x88) != '\0') {
        iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_0103d39c + 0x103d1d0));
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(char *)(iVar2 + 0x10) == '\0') {
          iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                            (**(undefined4 **)(_UNK_0103d3a0 + 0x103d1fc));
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar2 = Rotatelab_Scripts_DockManager__get_AnyBlasterHasShootableTarget_100463c(iVar2,0);
          if (iVar2 != 0) {
            *(undefined4 *)(param_1 + 0x80) = 0;
            return;
          }
        }
        *(undefined1 *)(param_1 + 0x88) = 0;
      }
      puVar7 = *(undefined4 **)(_UNK_0103d3a4 + 0x103d244);
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = Rotatelab_Scripts_LevelStateManager__get_IsPaused_100e3e4(iVar2,0);
      fVar4 = _UNK_0103d37c;
      if (iVar2 == 0) {
        fVar4 = (float)Rotatelab_Scripts_ObjectManager__GetIdleRotationSpeed_102a878();
      }
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = Rotatelab_Scripts_LevelStateManager__get_IsWinSequenceAnimating_1006428(iVar2,0);
      if (iVar2 == 0) {
        fVar8 = *(float *)(param_1 + 0x80);
        fVar3 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
        bVar1 = fVar3 < 0.0;
        if (1.0 < fVar3) {
          fVar3 = 1.0;
        }
        if (bVar1) {
          fVar3 = _UNK_0103d37c;
        }
        fVar4 = fVar8 + (fVar4 - fVar8) * fVar3;
      }
      iVar2 = *(int *)(param_1 + 0x10);
      *(float *)(param_1 + 0x80) = fVar4;
      fVar3 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__get_up_36151f0(&fStack_34,*(int *)(param_1 + 0x14),0);
      fVar4 = fVar4 * fVar3;
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uStack_3c = 0;
      UnityEngine_Transform__Rotate_3615eb8
                (iVar2,fVar4 * fStack_34,fVar4 * fStack_30,fVar4 * fStack_2c,0);
    }
  }
  return;
}

