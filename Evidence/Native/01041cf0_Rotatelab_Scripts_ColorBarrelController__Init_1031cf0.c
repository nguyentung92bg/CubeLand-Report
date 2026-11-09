/* IL2CPP: Rotatelab.Scripts.ColorBarrelController$$Init
void Rotatelab_Scripts_ColorBarrelController__Init (Rotatelab_Scripts_ColorBarrelController_o* __this, int32_t hp, int32_t color, Rotatelab_Scripts_BlasterController_o* blaster, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.ColorBarrelController$$Init
   void Rotatelab_Scripts_ColorBarrelController__Init (Rotatelab_Scripts_ColorBarrelController_o*
   __this, int32_t hp, int32_t color, Rotatelab_Scripts_BlasterController_o* blaster, const
   MethodInfo* method); */

void Rotatelab_Scripts_ColorBarrelController__Init_1031cf0
               (int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined1 auStack_20 [16];
  
  *(undefined4 *)(param_1 + 0x30) = param_2;
  piVar1 = (int *)(param_1 + 0x34);
  *piVar1 = param_4;
  thunk_FUN_00ec5080(piVar1,param_4);
  *(undefined4 *)(param_1 + 0x28) = param_3;
  Rotatelab_Scripts_ColorBarrelController__UpdateHpText_103cc84(param_1);
  Rotatelab_Scripts_ColorBarrelController__UpdateColor_103ccfc(param_1);
  if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_BlasterController__SetBulletCountTextVisibility_1033f10(*piVar1,0);
  if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_BlasterController__ScaleBlasterVisual_1033f58(auStack_20,*piVar1,0,0,0);
  return;
}

