/* IL2CPP: Rotatelab.Scripts.MovementActivatedParticleTrail$$LateUpdate
void Rotatelab_Scripts_MovementActivatedParticleTrail__LateUpdate (Rotatelab_Scripts_MovementActivatedParticleTrail_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.MovementActivatedParticleTrail$$LateUpdate
   void Rotatelab_Scripts_MovementActivatedParticleTrail__LateUpdate
   (Rotatelab_Scripts_MovementActivatedParticleTrail_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_MovementActivatedParticleTrail__LateUpdate_1029de0(int param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uStack_38;
  float fStack_30;
  
  cVar1 = *(char *)(param_1 + 0x34);
  iVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (cVar1 == '\0') {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_position_36149b0(&uStack_38,iVar2,0);
    *(undefined1 *)(param_1 + 0x34) = 1;
    *(float *)(param_1 + 0x30) = fStack_30;
    *(undefined8 *)(param_1 + 0x28) = uStack_38;
  }
  else {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_position_36149b0(&uStack_38,iVar2,0);
    uVar7 = FloatVectorSub(uStack_38,*(undefined8 *)(param_1 + 0x28),2,0x20);
    fVar5 = fStack_30 - *(float *)(param_1 + 0x30);
    uVar7 = FloatVectorMult(uVar7,uVar7,2,0x20);
    fVar6 = *(float *)(param_1 + 0x10);
    fVar3 = (float)UnityEngine_Time__get_time_3610900(0);
    if (fVar6 * fVar6 < (float)uVar7 + (float)((ulonglong)uVar7 >> 0x20) + fVar5 * fVar5) {
      *(float *)(param_1 + 0x38) = fVar3;
      bVar4 = true;
    }
    else {
      bVar4 = fVar3 - *(float *)(param_1 + 0x38) < *(float *)(param_1 + 0x14);
    }
    Rotatelab_Scripts_MovementActivatedParticleTrail__SetEmitting_1029c10(param_1,bVar4,0);
    iVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_position_36149b0(&uStack_38,iVar2,0);
    *(float *)(param_1 + 0x30) = fStack_30;
    *(undefined8 *)(param_1 + 0x28) = uStack_38;
  }
  return;
}

