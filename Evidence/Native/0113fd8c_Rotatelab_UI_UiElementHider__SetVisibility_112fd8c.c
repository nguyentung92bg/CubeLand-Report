/* IL2CPP: Rotatelab.UI.UiElementHider$$SetVisibility
void Rotatelab_UI_UiElementHider__SetVisibility (bool isVisible, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UiElementHider$$SetVisibility
   void Rotatelab_UI_UiElementHider__SetVisibility (bool isVisible, const MethodInfo* method); */

void Rotatelab_UI_UiElementHider__SetVisibility_112fd8c(int param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar2 = (char *)(_UNK_0113ff20 + 0x113fda4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113ff24 + 0x113fdb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113ff28 + 0x113fdc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113ff2c + 0x113fdd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113ff30 + 0x113fddc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113ff34 + 0x113fde8));
    *pcVar2 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar3 = *(int **)(_UNK_0113ff38 + 0x113fe04);
  uStack_28 = 0;
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_28,**(int **)(iVar1 + 0x5c),**(undefined4 **)(_UNK_0113ff3c + 0x113fe40));
  puVar4 = *(undefined4 **)(_UNK_0113ff40 + 0x113fe60);
  while( true ) {
    while( true ) {
      iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                        (&uStack_28,*puVar4);
      if (iVar1 == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                  (&uStack_28,**(undefined4 **)(_UNK_0113ff44 + 0x113feb8));
        return;
      }
      if (param_1 != 0) break;
      if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_UI_UiElementHider__Hide_112f818(iStack_1c);
    }
    if (iStack_1c == 0) break;
    Rotatelab_UI_UiElementHider__Show_112ec5c(iStack_1c);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

