/* IL2CPP: Rotatelab.Scripts.MovementActivatedParticleTrail$$OnEnable
void Rotatelab_Scripts_MovementActivatedParticleTrail__OnEnable (Rotatelab_Scripts_MovementActivatedParticleTrail_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.MovementActivatedParticleTrail$$OnEnable
   void Rotatelab_Scripts_MovementActivatedParticleTrail__OnEnable
   (Rotatelab_Scripts_MovementActivatedParticleTrail_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_MovementActivatedParticleTrail__OnEnable_1029ba0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_20,iVar1,0);
  *(undefined1 *)(param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 0x30) = uStack_18;
  *(undefined8 *)(param_1 + 0x28) = uStack_20;
  uVar2 = UnityEngine_Time__get_time_3610900(0);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  Rotatelab_Scripts_MovementActivatedParticleTrail__SetEmitting_1029c10(param_1,0,1);
  return;
}

