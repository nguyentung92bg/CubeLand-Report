/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$RequestSolve
void Rotatelab_Scripts_LiveSolverGuideController__RequestSolve (Rotatelab_Scripts_LiveSolverGuideController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$RequestSolve
   void Rotatelab_Scripts_LiveSolverGuideController__RequestSolve
   (Rotatelab_Scripts_LiveSolverGuideController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_LiveSolverGuideController__RequestSolve_1058fa0(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01069050 + 0x1068fb4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01069054 + 0x1068fc8));
    *pcVar5 = '\x01';
  }
  if (*(char *)(param_1 + 0x6c) == '\0') {
    return;
  }
  Rotatelab_Scripts_LiveSolverGuideController__StopActiveSolve_105905c(param_1);
  uVar3 = UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
  puVar4 = *(undefined4 **)(_UNK_01069058 + 0x1069000);
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x60) = *puVar4;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  thunk_FUN_00ec5080();
  *(undefined1 *)(param_1 + 100) = 0;
  uVar3 = Rotatelab_Scripts_LiveSolverGuideController__SolveRoutine_105964c(param_1);
  uVar3 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar3,0);
  puVar4 = (undefined4 *)(param_1 + 0x34);
  *puVar4 = uVar3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

