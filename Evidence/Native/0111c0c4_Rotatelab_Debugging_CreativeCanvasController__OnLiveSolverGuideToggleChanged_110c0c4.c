/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$OnLiveSolverGuideToggleChanged
void Rotatelab_Debugging_CreativeCanvasController__OnLiveSolverGuideToggleChanged (Rotatelab_Debugging_CreativeCanvasController_o* __this, bool isOn, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$OnLiveSolverGuideToggleChanged
   void Rotatelab_Debugging_CreativeCanvasController__OnLiveSolverGuideToggleChanged
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, bool isOn, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__OnLiveSolverGuideToggleChanged_110c0c4
               (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 uStack_11;
  
  pcVar3 = (char *)(_UNK_0111c1a4 + 0x111c0dc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111c1a8 + 0x111c0f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111c1ac + 0x111c0fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111c1b0 + 0x111c108));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0111c1b4 + 0x111c11c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LiveSolverGuideController__SetGuideEnabled_1058f34(iVar1,param_2,0);
  uStack_11 = (undefined1)param_2;
  uVar2 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_0111c1b8 + 0x111c150) + 0x14),&uStack_11);
  uVar2 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_0111c1bc + 0x111c16c),uVar2,0);
  if (*(int *)(**(int **)(_UNK_0111c1c0 + 0x111c180) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Debug__Log_35b1c44(uVar2,0);
  return;
}

