/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$IsBonusBankCapReached
bool Rotatelab_SeasonPass_SeasonPassManager__IsBonusBankCapReached (Rotatelab_SeasonPass_SeasonPassManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$IsBonusBankCapReached
   bool Rotatelab_SeasonPass_SeasonPassManager__IsBonusBankCapReached
   (Rotatelab_SeasonPass_SeasonPassManager_o* __this, const MethodInfo* method); */

bool Rotatelab_SeasonPass_SeasonPassManager__IsBonusBankCapReached_10a7254(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)(_UNK_010b72e0 + 0x10b7268);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b72e4 + 0x10b727c));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x7c) + 0x40);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Save_SavedValue_int___get_Value_1a8b7e4
                    (iVar2,**(undefined4 **)(_UNK_010b72e8 + 0x10b72b0));
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(int *)(*(int *)(param_1 + 0x40) + 0x14) <= iVar2;
}

