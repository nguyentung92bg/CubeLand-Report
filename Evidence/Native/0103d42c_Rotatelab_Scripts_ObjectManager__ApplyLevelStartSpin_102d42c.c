/* IL2CPP: Rotatelab.Scripts.ObjectManager$$ApplyLevelStartSpin
void Rotatelab_Scripts_ObjectManager__ApplyLevelStartSpin (Rotatelab_Scripts_ObjectManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$ApplyLevelStartSpin
   void Rotatelab_Scripts_ObjectManager__ApplyLevelStartSpin (Rotatelab_Scripts_ObjectManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_ObjectManager__ApplyLevelStartSpin_102d42c(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  fVar5 = *(float *)(param_1 + 0x8c);
  fVar2 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
  fVar3 = _UNK_0103d564;
  fVar5 = fVar5 + fVar2;
  fVar2 = fVar5 / *(float *)(param_1 + 0x90);
  *(float *)(param_1 + 0x8c) = fVar5;
  bVar1 = fVar2 < 0.0;
  if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  if (bVar1) {
    fVar2 = fVar3;
  }
  fVar3 = (float)DG_Tweening_DOVirtual__EasedValue_1168508
                           (0,0x3f800000,fVar2,*(undefined4 *)(param_1 + 0x9c),0);
  fVar3 = fVar3 * *(float *)(param_1 + 0x94);
  iVar4 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar2 = fVar3 - *(float *)(param_1 + 0x98);
  UnityEngine_Transform__get_up_36151f0(&uStack_3c,*(int *)(param_1 + 0x14),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__Rotate_3616240(iVar4,uStack_3c,uStack_38,uStack_34,fVar2,0,0);
  *(float *)(param_1 + 0x98) = fVar3;
  fVar3 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
  *(float *)(param_1 + 0x80) = fVar2 / fVar3;
  if (*(float *)(param_1 + 0x90) <= *(float *)(param_1 + 0x8c)) {
    Rotatelab_Scripts_ObjectManager__StopLevelStartSpin_102d034(param_1);
    iVar4 = *(int *)(param_1 + 0xb4);
    if (iVar4 != 0) {
      (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x14));
    }
  }
  return;
}

