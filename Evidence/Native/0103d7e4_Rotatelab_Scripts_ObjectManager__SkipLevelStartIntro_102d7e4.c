/* IL2CPP: Rotatelab.Scripts.ObjectManager$$SkipLevelStartIntro
void Rotatelab_Scripts_ObjectManager__SkipLevelStartIntro (Rotatelab_Scripts_ObjectManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.ObjectManager$$SkipLevelStartIntro
   void Rotatelab_Scripts_ObjectManager__SkipLevelStartIntro (Rotatelab_Scripts_ObjectManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_ObjectManager__SkipLevelStartIntro_102d7e4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (0.0 < *(float *)(param_1 + 0x90)) {
    iVar2 = *(int *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_up_36151f0(&uStack_34,*(int *)(param_1 + 0x14),0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = fmodf(*(undefined4 *)(param_1 + 0x94),0x43b40000);
    UnityEngine_Transform__Rotate_3616240(iVar2,uStack_34,uStack_30,uStack_2c,uVar1,0,0);
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  if (0.0 < *(float *)(param_1 + 0xa4)) {
    Rotatelab_Scripts_ObjectManager__SetObjectScaleMultiplier_102d8a4(param_1,0x3f800000);
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  return;
}

