/* IL2CPP: Rotatelab.PreBoosters.PreBooster$$get_RemainingUsages
int64_t Rotatelab_PreBoosters_PreBooster__get_RemainingUsages (Rotatelab_PreBoosters_PreBooster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.PreBoosters.PreBooster$$get_RemainingUsages
   int64_t Rotatelab_PreBoosters_PreBooster__get_RemainingUsages
   (Rotatelab_PreBoosters_PreBooster_o* __this, const MethodInfo* method); */

void Rotatelab_PreBoosters_PreBooster__get_RemainingUsages_10ebf68(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_010fbfe8 + 0x10fbf7c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fbfec + 0x10fbf90));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010fbff0 + 0x10fbfa4));
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar2 = (int *)Rotatelab_Currency_CurrencyManager__GetCurrency_10808a4
                            (iVar1,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc),0);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4(0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00fc436c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xf0))(piVar2,*(undefined4 *)(*piVar2 + 0xf4));
  return;
}

