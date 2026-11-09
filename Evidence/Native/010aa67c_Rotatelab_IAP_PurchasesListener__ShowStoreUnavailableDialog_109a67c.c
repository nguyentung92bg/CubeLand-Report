/* IL2CPP: Rotatelab.IAP.PurchasesListener$$ShowStoreUnavailableDialog
void Rotatelab_IAP_PurchasesListener__ShowStoreUnavailableDialog (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$ShowStoreUnavailableDialog
   void Rotatelab_IAP_PurchasesListener__ShowStoreUnavailableDialog (const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__ShowStoreUnavailableDialog_109a67c(void)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010aa730 + 0x10aa690);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa734 + 0x10aa6a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa738 + 0x10aa6b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa73c + 0x10aa6bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa740 + 0x10aa6c8));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                    (**(undefined4 **)(_UNK_010aa744 + 0x10aa6dc));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_GenericDialog__Show_1111834
            (iVar1,**(undefined4 **)(_UNK_010aa750 + 0x10aa714),
             **(undefined4 **)(_UNK_010aa74c + 0x10aa708),
             **(undefined4 **)(_UNK_010aa748 + 0x10aa6fc),0,0);
  return;
}

