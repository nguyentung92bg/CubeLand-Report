/* IL2CPP: Rotatelab.UI.PopupManager$$get_IsAnyPopupVisible
bool Rotatelab_UI_PopupManager__get_IsAnyPopupVisible (Rotatelab_UI_PopupManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PopupManager$$get_IsAnyPopupVisible
   bool Rotatelab_UI_PopupManager__get_IsAnyPopupVisible (Rotatelab_UI_PopupManager_o* __this, const
   MethodInfo* method); */

bool Rotatelab_UI_PopupManager__get_IsAnyPopupVisible_1124e44(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01134eec + 0x1134e58);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134ef0 + 0x1134e6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134ef4 + 0x1134e78));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(param_1 + 0x10) + 0xc) < 1) {
    return false;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                    (*(int *)(param_1 + 0x10),0,**(undefined4 **)(_UNK_01134ef8 + 0x1134ebc));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(char *)(iVar1 + 0x10) != '\0';
}

