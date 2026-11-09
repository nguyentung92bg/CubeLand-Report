/* IL2CPP: Rotatelab.UI.PopupManager$$IsInQueue
bool Rotatelab_UI_PopupManager__IsInQueue (Rotatelab_UI_PopupManager_o* __this, Rotatelab_UI_PopupController_o* popup, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PopupManager$$IsInQueue
   bool Rotatelab_UI_PopupManager__IsInQueue (Rotatelab_UI_PopupManager_o* __this,
   Rotatelab_UI_PopupController_o* popup, const MethodInfo* method); */

bool Rotatelab_UI_PopupManager__IsInQueue_11250ec(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0113514c + 0x1135104);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01135150 + 0x1135118));
    *pcVar2 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      iVar1 = System_Array__IndexOf_object__16445f0
                        (*(undefined4 *)(iVar1 + 8),param_2,0,*(int *)(iVar1 + 0xc),
                         *(undefined4 *)
                          (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(**(int **)(_UNK_01135154 +
                                                                                  0x1135140) + 0x10)
                                                              + 0x60) + 100) + 0x10) + 0x60) + 0xa4)
                        );
      return iVar1 != -1;
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

