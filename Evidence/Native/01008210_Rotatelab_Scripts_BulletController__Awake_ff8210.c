/* IL2CPP: Rotatelab.Scripts.BulletController$$Awake
void Rotatelab_Scripts_BulletController__Awake (Rotatelab_Scripts_BulletController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BulletController$$Awake
   void Rotatelab_Scripts_BulletController__Awake (Rotatelab_Scripts_BulletController_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_BulletController__Awake_ff8210(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_TrailRenderer__get_widthMultiplier_35c2828(*(int *)(param_1 + 0x14),0);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  iVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  iVar3 = UnityEngine_Camera__get_main_35aede4(0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__get_transform_35fe190(iVar3,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localRotation_3614f58(&uStack_30,iVar3,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localRotation_361507c(iVar2,uStack_30,uStack_2c,uStack_28,uStack_24,0);
  return;
}

