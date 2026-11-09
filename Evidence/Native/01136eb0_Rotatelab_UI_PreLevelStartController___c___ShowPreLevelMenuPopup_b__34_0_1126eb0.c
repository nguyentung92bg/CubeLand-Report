/* IL2CPP: Rotatelab.UI.PreLevelStartController.<>c$$<ShowPreLevelMenuPopup>b__34_0
bool Rotatelab_UI_PreLevelStartController___c___ShowPreLevelMenuPopup_b__34_0 (Rotatelab_UI_PreLevelStartController___c_o* __this, Rotatelab_Boosters_BoosterBaseData_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PreLevelStartController.<>c$$<ShowPreLevelMenuPopup>b__34_0
   bool Rotatelab_UI_PreLevelStartController___c___ShowPreLevelMenuPopup_b__34_0
   (Rotatelab_UI_PreLevelStartController___c_o* __this, Rotatelab_Boosters_BoosterBaseData_o* e,
   const MethodInfo* method); */

bool Rotatelab_UI_PreLevelStartController___c___ShowPreLevelMenuPopup_b__34_0_1126eb0
               (undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01136f2c + 0x1136ec4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136f30 + 0x1136ed8));
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(param_2 + 0x24);
  if (*(int *)(**(int **)(_UNK_01136f34 + 0x1136ef8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
  return iVar3 == iVar2;
}

