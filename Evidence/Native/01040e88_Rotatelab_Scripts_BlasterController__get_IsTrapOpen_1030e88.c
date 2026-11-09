/* IL2CPP: Rotatelab.Scripts.BlasterController$$get_IsTrapOpen
bool Rotatelab_Scripts_BlasterController__get_IsTrapOpen (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BlasterController$$get_IsTrapOpen
   bool Rotatelab_Scripts_BlasterController__get_IsTrapOpen (Rotatelab_Scripts_BlasterController_o*
   __this, const MethodInfo* method); */

undefined1 Rotatelab_Scripts_BlasterController__get_IsTrapOpen_1030e88(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xa4) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled_35fd8d0(*(int *)(param_1 + 0xa4),0);
  uVar1 = 1;
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xa4) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4(1);
    }
    uVar1 = 0;
    if (*(char *)(*(int *)(param_1 + 0xa4) + 0x14) != '\0') {
      uVar1 = 1;
    }
  }
  return uVar1;
}

