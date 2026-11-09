/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$OnLevelModifiedViaInputField
void Rotatelab_Debugging_CreativeCanvasController__OnLevelModifiedViaInputField (Rotatelab_Debugging_CreativeCanvasController_o* __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$OnLevelModifiedViaInputField
   void Rotatelab_Debugging_CreativeCanvasController__OnLevelModifiedViaInputField
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, System_String_o* value, const
   MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__OnLevelModifiedViaInputField_110d894
               (int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int iStack_18;
  int iStack_14;
  
  pcVar5 = (char *)(_UNK_0111d9d8 + 0x111d8b0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d9dc + 0x111d8c4));
    *pcVar5 = '\x01';
  }
  iStack_14 = 0;
  iStack_18 = 0;
  iVar1 = System_String__IsNullOrWhiteSpace_2a0a85c(param_2,0);
  if ((iVar1 == 0) && (iVar1 = System_Int32__TryParse_2b6c230(param_2,&iStack_14,0), iVar1 != 0)) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x50) + 0x14);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *(int *)(iVar4 + 0xc);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iStack_18 = *(int *)(iVar4 + 0xc);
    if (iStack_14 < iStack_18) {
      iStack_18 = iStack_14;
    }
    if (iStack_14 < 1) {
      iStack_18 = 1;
    }
    uVar2 = System_Int32__ToString_2b6b9ec(&iStack_18,0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (*(int *)(**(int **)(_UNK_0111d9e0 + 0x111d970) + 0x74) == 0) {
      FUN_00ec3934();
    }
    piVar3 = (int *)Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = (**(code **)(*piVar3 + 0xd8))(piVar3,*(undefined4 *)(*piVar3 + 0xdc));
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  TMPro_TMP_InputField__set_text_34eb818(iVar1,uVar2,0);
  return;
}

