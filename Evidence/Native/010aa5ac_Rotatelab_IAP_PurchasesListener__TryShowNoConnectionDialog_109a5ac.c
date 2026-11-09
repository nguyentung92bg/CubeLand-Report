/* IL2CPP: Rotatelab.IAP.PurchasesListener$$TryShowNoConnectionDialog
bool Rotatelab_IAP_PurchasesListener__TryShowNoConnectionDialog (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$TryShowNoConnectionDialog
   bool Rotatelab_IAP_PurchasesListener__TryShowNoConnectionDialog (const MethodInfo* method); */

bool Rotatelab_IAP_PurchasesListener__TryShowNoConnectionDialog_109a5ac(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_010aa668 + 0x10aa5c0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa66c + 0x10aa5d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa670 + 0x10aa5e0));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010aa674 + 0x10aa5f4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Application__get_internetReachability_35a8364(0);
  if (iVar1 == 0) {
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010aa678 + 0x10aa624));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Networking_HiroController__ShowInternetConnectionDialogAsync_114ce04
              (&uStack_18,iVar2,0,0);
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget_321de88(uStack_18,uStack_14,0);
  }
  return iVar1 == 0;
}

