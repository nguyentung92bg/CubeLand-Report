/* IL2CPP: Rotatelab.Boosters.Booster$$get_IsUnlocked
bool Rotatelab_Boosters_Booster__get_IsUnlocked (Rotatelab_Boosters_Booster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.Booster$$get_IsUnlocked
   bool Rotatelab_Boosters_Booster__get_IsUnlocked (Rotatelab_Boosters_Booster_o* __this, const
   MethodInfo* method); */

bool Rotatelab_Boosters_Booster__get_IsUnlocked_113a12c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0114a1b4 + 0x114a140);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114a1b8 + 0x114a154));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0114a1bc + 0x114a168) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(int *)(*(int *)(param_1 + 0x10) + 0x24) <= iVar2;
}

