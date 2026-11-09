/* IL2CPP: Rotatelab.UI.PageButtonBase$$get_IsUnlocked
bool Rotatelab_UI_PageButtonBase__get_IsUnlocked (Rotatelab_UI_PageButtonBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PageButtonBase$$get_IsUnlocked
   bool Rotatelab_UI_PageButtonBase__get_IsUnlocked (Rotatelab_UI_PageButtonBase_o* __this, const
   MethodInfo* method); */

bool Rotatelab_UI_PageButtonBase__get_IsUnlocked_112d1d4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0113d248 + 0x113d1e8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113d24c + 0x113d1fc));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0113d250 + 0x113d210) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
  return *(int *)(param_1 + 0x30) <= iVar2;
}

