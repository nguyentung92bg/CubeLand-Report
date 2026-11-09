/* IL2CPP: Rotatelab.Scripts.BlasterDockController.<SleepAnimatorAfterCurrentTransitionCoroutine>d__33$$MoveNext
bool Rotatelab_Scripts_BlasterDockController__SleepAnimatorAfterCurrentTransitionCoroutine_d__33__MoveNext (Rotatelab_Scripts_BlasterDockController__SleepAnimatorAfterCurrentTransitionCoroutine_d__33_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Rotatelab.Scripts.BlasterDockController.<SleepAnimatorAfterCurrentTransitionCoroutine>d__33$$MoveNext
   bool 
   Rotatelab_Scripts_BlasterDockController__SleepAnimatorAfterCurrentTransitionCoroutine_d__33__MoveNext
   (Rotatelab_Scripts_BlasterDockController__SleepAnimatorAfterCurrentTransitionCoroutine_d__33_o*
   __this, const MethodInfo* method); */

undefined4
Rotatelab_Scripts_BlasterDockController__SleepAnimatorAfterCurrentTransitionCoroutine_d__33__MoveNext_100d400
          (int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 - 2U < 2) {
    iVar1 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Animator__IsInTransition_3590e3c(*(int *)(iVar1 + 0x18),0,0);
    if (iVar2 == 0) {
      if (*(int *)(iVar1 + 0x18) != 0) {
        UnityEngine_Behaviour__set_enabled_35fd7dc(*(int *)(iVar1 + 0x18),0,0);
        *(undefined4 *)(iVar1 + 0x30) = 0;
        thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x30),0);
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
    uVar3 = 3;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
      *(undefined4 *)(param_1 + 8) = 1;
      return 1;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
    uVar3 = 2;
  }
  *(undefined4 *)(param_1 + 8) = uVar3;
  return 1;
}

