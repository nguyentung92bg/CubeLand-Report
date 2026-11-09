/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$LogMessage
void Rotatelab_Debugging_CreativeCanvasController__LogMessage (Rotatelab_Debugging_CreativeCanvasController_o* __this, System_String_o* log, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$LogMessage
   void Rotatelab_Debugging_CreativeCanvasController__LogMessage
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, System_String_o* log, const MethodInfo*
   method); */

void Rotatelab_Debugging_CreativeCanvasController__LogMessage_110e8d8
               (int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_0111ea54 + 0x111e8f4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ea58 + 0x111e908));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ea5c + 0x111e914));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ea60 + 0x111e920));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ea64 + 0x111e92c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ea68 + 0x111e938));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  uStack_18 = 0;
  if (*(int *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Text_StringBuilder__Append_2a16604
                    (*(int *)(param_1 + 0x68),**(undefined4 **)(_UNK_0111ea6c + 0x111e96c),0);
  if (*(int *)(**(int **)(_UNK_0111ea70 + 0x111e984) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Now_2b4a124(&uStack_18,0);
  uVar2 = System_DateTime__ToString_2b4b52c
                    (&uStack_18,**(undefined4 **)(_UNK_0111ea74 + 0x111e9b4),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Text_StringBuilder__Append_2a16604(iVar1,uVar2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Text_StringBuilder__Append_2a16604
                    (iVar1,**(undefined4 **)(_UNK_0111ea78 + 0x111e9fc),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Text_StringBuilder__Append_2a16604(iVar1,param_2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Text_StringBuilder__Append_2a16604(iVar1,**(undefined4 **)(_UNK_0111ea7c + 0x111ea44),0);
  return;
}

