/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$OnProgress
void Rotatelab_Scripts_LiveSolverGuideController__OnProgress (Rotatelab_Scripts_LiveSolverGuideController_o* __this, Rotatelab_Scripts_SolveStreamEvent_o* frame, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$OnProgress
   void Rotatelab_Scripts_LiveSolverGuideController__OnProgress
   (Rotatelab_Scripts_LiveSolverGuideController_o* __this, Rotatelab_Scripts_SolveStreamEvent_o*
   frame, const MethodInfo* method); */

void Rotatelab_Scripts_LiveSolverGuideController__OnProgress_10596e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 8);
  iVar1 = *(int *)(param_2 + 0x10);
  if (-1 < iVar2) {
    *(int *)(param_1 + 0x58) = iVar2;
  }
  if (0 < iVar1) {
    *(int *)(param_1 + 0x5c) = iVar1;
  }
  return;
}

