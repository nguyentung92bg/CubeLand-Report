/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$StopActiveSolve
void Rotatelab_Scripts_LiveSolverGuideController__StopActiveSolve (Rotatelab_Scripts_LiveSolverGuideController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$StopActiveSolve
   void Rotatelab_Scripts_LiveSolverGuideController__StopActiveSolve
   (Rotatelab_Scripts_LiveSolverGuideController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_LiveSolverGuideController__StopActiveSolve_105905c(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 != 0) {
    UnityEngine_Networking_UnityWebRequest__Abort_39e7fa8(iVar3,0);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  thunk_FUN_00ec5080((int *)(param_1 + 0x38),0);
  piVar4 = (int *)(param_1 + 0x34);
  if (*piVar4 == 0) {
    return;
  }
  UnityEngine_MonoBehaviour__StopCoroutine_3604570(param_1,*piVar4,0);
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

