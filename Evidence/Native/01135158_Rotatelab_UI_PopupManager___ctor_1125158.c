/* IL2CPP: Rotatelab.UI.PopupManager$$.ctor
void Rotatelab_UI_PopupManager___ctor (Rotatelab_UI_PopupManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PopupManager$$.ctor
   void Rotatelab_UI_PopupManager___ctor (Rotatelab_UI_PopupManager_o* __this, const MethodInfo*
   method); */

int Rotatelab_UI_PopupManager___ctor_1125158(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_011351f4 + 0x113516c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011351f8 + 0x1135180));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011351fc + 0x113518c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01135200 + 0x1135198));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01135204 + 0x11351ac));
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar1,4,**(undefined4 **)(_UNK_01135208 + 0x11351c4));
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x10),uVar1);
  pcVar2 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

