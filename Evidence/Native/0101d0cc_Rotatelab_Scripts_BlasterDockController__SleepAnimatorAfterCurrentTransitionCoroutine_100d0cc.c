/* IL2CPP: Rotatelab.Scripts.BlasterDockController$$SleepAnimatorAfterCurrentTransitionCoroutine
System_Collections_IEnumerator_o* Rotatelab_Scripts_BlasterDockController__SleepAnimatorAfterCurrentTransitionCoroutine (Rotatelab_Scripts_BlasterDockController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterDockController$$SleepAnimatorAfterCurrentTransitionCoroutine
   System_Collections_IEnumerator_o*
   Rotatelab_Scripts_BlasterDockController__SleepAnimatorAfterCurrentTransitionCoroutine
   (Rotatelab_Scripts_BlasterDockController_o* __this, const MethodInfo* method); */

int Rotatelab_Scripts_BlasterDockController__SleepAnimatorAfterCurrentTransitionCoroutine_100d0cc
              (undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0101d138 + 0x101d0e0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101d13c + 0x101d0f4));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101d140 + 0x101d108));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

