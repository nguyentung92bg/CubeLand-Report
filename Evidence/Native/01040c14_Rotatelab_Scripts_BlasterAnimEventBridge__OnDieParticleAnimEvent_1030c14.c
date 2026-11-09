/* IL2CPP: Rotatelab.Scripts.BlasterAnimEventBridge$$OnDieParticleAnimEvent
void Rotatelab_Scripts_BlasterAnimEventBridge__OnDieParticleAnimEvent (Rotatelab_Scripts_BlasterAnimEventBridge_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterAnimEventBridge$$OnDieParticleAnimEvent
   void Rotatelab_Scripts_BlasterAnimEventBridge__OnDieParticleAnimEvent
   (Rotatelab_Scripts_BlasterAnimEventBridge_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterAnimEventBridge__OnDieParticleAnimEvent_1030c14(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_01040d3c + 0x1040c2c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01040d40 + 0x1040c40));
    *pcVar6 = '\x01';
  }
  iVar4 = UnityEngine_Behaviour__get_isActiveAndEnabled_35fd8d0(param_1,0);
  if (iVar4 != 0) {
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01040d44 + 0x1040c68));
    iVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_position_36149b0(&uStack_34,iVar5,0);
    uVar3 = uStack_2c;
    uVar2 = uStack_30;
    uVar1 = uStack_34;
    iVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_rotation_3614cfc(&uStack_34,iVar5,0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_BulletParticleManager__EmitDie_ffadc0
              (iVar4,uVar1,uVar2,uVar3,uStack_34,uStack_30,uStack_2c,uStack_28,
               *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10c),0);
  }
  return;
}

