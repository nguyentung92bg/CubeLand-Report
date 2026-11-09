/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$OnPerfHudToggleChanged
void Rotatelab_Debugging_CreativeCanvasController__OnPerfHudToggleChanged (Rotatelab_Debugging_CreativeCanvasController_o* __this, bool isOn, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$OnPerfHudToggleChanged
   void Rotatelab_Debugging_CreativeCanvasController__OnPerfHudToggleChanged
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, bool isOn, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__OnPerfHudToggleChanged_110c1c4
               (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 uStack_19;
  
  pcVar2 = (char *)(_UNK_0111c328 + 0x111c1dc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111c32c + 0x111c1f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111c330 + 0x111c1fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111c334 + 0x111c208));
    *pcVar2 = '\x01';
  }
  pcVar2 = (char *)(_UNK_0111c338 + 0x111c21c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111c33c + 0x111c230));
    *pcVar2 = '\x01';
  }
  piVar4 = *(int **)(_UNK_0111c340 + 0x111c244);
  uVar3 = **(undefined4 **)(*piVar4 + 0x5c);
  if (*(int *)(**(int **)(_UNK_0111c344 + 0x111c250) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar3,0,0);
  if (iVar1 != 0) {
    if (*pcVar2 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0111c348 + 0x111c298));
      *pcVar2 = '\x01';
    }
    iVar1 = **(int **)(*piVar4 + 0x5c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Debugging_PerformanceHudController__SetVisible_110a6d0(iVar1,param_2);
  }
  uStack_19 = (undefined1)param_2;
  uVar3 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_0111c34c + 0x111c2d4) + 0x14),&uStack_19);
  uVar3 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_0111c350 + 0x111c2f0),uVar3,0);
  if (*(int *)(**(int **)(_UNK_0111c354 + 0x111c304) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Debug__Log_35b1c44(uVar3,0);
  return;
}

