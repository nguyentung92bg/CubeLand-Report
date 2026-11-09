/* IL2CPP: Rotatelab.Scripts.ScrewController$$DestructionBehaviour
void Rotatelab_Scripts_ScrewController__DestructionBehaviour (Rotatelab_Scripts_ScrewController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.ScrewController$$DestructionBehaviour
   void Rotatelab_Scripts_ScrewController__DestructionBehaviour
   (Rotatelab_Scripts_ScrewController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ScrewController__DestructionBehaviour_1050580(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x48),0);
  iVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localPosition_3613b6c(&uStack_2c,iVar2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localPosition_3613c6c(iVar1,uStack_2c,uStack_28,uStack_24,0);
  if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_ParticleSystem__Play_368e960(*(int *)(param_1 + 0x48),0);
  if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_PlaypenController__OnScrewDestroyed_104fb04(*(int *)(param_1 + 0x4c),param_1);
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,0,0);
  return;
}

