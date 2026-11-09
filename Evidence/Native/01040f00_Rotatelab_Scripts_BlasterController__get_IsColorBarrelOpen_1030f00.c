/* IL2CPP: Rotatelab.Scripts.BlasterController$$get_IsColorBarrelOpen
bool Rotatelab_Scripts_BlasterController__get_IsColorBarrelOpen (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BlasterController$$get_IsColorBarrelOpen
   bool Rotatelab_Scripts_BlasterController__get_IsColorBarrelOpen
   (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method); */

undefined1 Rotatelab_Scripts_BlasterController__get_IsColorBarrelOpen_1030f00(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled_35fd8d0(*(int *)(param_1 + 0xa8),0);
  uVar1 = 1;
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4(1);
    }
    uVar1 = 0;
    if (*(char *)(*(int *)(param_1 + 0xa8) + 0x24) != '\0') {
      uVar1 = 1;
    }
  }
  return uVar1;
}

