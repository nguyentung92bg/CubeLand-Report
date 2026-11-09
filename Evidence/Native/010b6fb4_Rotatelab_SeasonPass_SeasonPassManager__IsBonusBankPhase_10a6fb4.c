/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$IsBonusBankPhase
bool Rotatelab_SeasonPass_SeasonPassManager__IsBonusBankPhase (Rotatelab_SeasonPass_SeasonPassManager_o* __this, int32_t cp, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$IsBonusBankPhase
   bool Rotatelab_SeasonPass_SeasonPassManager__IsBonusBankPhase
   (Rotatelab_SeasonPass_SeasonPassManager_o* __this, int32_t cp, const MethodInfo* method); */

bool Rotatelab_SeasonPass_SeasonPassManager__IsBonusBankPhase_10a6fb4(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010b701c + 0x10b6fcc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b7020 + 0x10b6fe0));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0xc);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(int *)(iVar1 + 0xc) <= param_2;
}

