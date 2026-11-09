/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$OnPurchaseSucceededHandler
void Rotatelab_SeasonPass_SeasonPassManager__OnPurchaseSucceededHandler (Rotatelab_SeasonPass_SeasonPassManager_o* __this, Rotatelab_IAP_IapObject_o* iapObject, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$OnPurchaseSucceededHandler
   void Rotatelab_SeasonPass_SeasonPassManager__OnPurchaseSucceededHandler
   (Rotatelab_SeasonPass_SeasonPassManager_o* __this, Rotatelab_IAP_IapObject_o* iapObject, const
   MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassManager__OnPurchaseSucceededHandler_10a7670
               (int *param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010b76f0 + 0x10b7688);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b76f4 + 0x10b769c));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010b76f8 + 0x10b76b0));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_SeasonPassIAPController__IsSeasonPassProduct_fc56c4(iVar1,param_2,0);
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010dc5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))(param_1,*(undefined4 *)(*param_1 + 0x144));
  return;
}

