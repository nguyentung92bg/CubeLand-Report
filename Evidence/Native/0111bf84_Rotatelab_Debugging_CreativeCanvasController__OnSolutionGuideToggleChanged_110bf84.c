/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$OnSolutionGuideToggleChanged
void Rotatelab_Debugging_CreativeCanvasController__OnSolutionGuideToggleChanged (Rotatelab_Debugging_CreativeCanvasController_o* __this, bool isOn, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$OnSolutionGuideToggleChanged
   void Rotatelab_Debugging_CreativeCanvasController__OnSolutionGuideToggleChanged
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, bool isOn, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__OnSolutionGuideToggleChanged_110bf84
               (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  
  pcVar4 = (char *)(_UNK_0111c0a4 + 0x111bf9c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111c0a8 + 0x111bfb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111c0ac + 0x111bfbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111c0b0 + 0x111bfc8));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_0111c0b4 + 0x111bfdc);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_SolutionGuideController__SetGuideEnabled_10531ac(iVar1,param_2,0);
  iVar6 = *(int *)(_UNK_0111c0b8 + 0x111c010);
  uStack_19 = (undefined1)param_2;
  uVar2 = FUN_00ec393c(*(undefined4 *)(iVar6 + 0x14),&uStack_19);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_1a = Rotatelab_Scripts_SolutionGuideController__get_HasSolution_1052ddc(iVar1,0);
  uVar3 = FUN_00ec393c(*(undefined4 *)(iVar6 + 0x14),&uStack_1a);
  uVar2 = System_String__Format_2a0c264(**(undefined4 **)(_UNK_0111c0bc + 0x111c06c),uVar2,uVar3,0);
  if (*(int *)(**(int **)(_UNK_0111c0c0 + 0x111c080) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Debug__Log_35b1c44(uVar2,0);
  return;
}

