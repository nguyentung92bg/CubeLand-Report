/* IL2CPP: Rotatelab.Scripts.RemoteSolverClient.<Solve>d__5$$<>m__Finally1
void Rotatelab_Scripts_RemoteSolverClient__Solve_d__5____m__Finally1 (Rotatelab_Scripts_RemoteSolverClient__Solve_d__5_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RemoteSolverClient.<Solve>d__5$$<>m__Finally1
   void Rotatelab_Scripts_RemoteSolverClient__Solve_d__5____m__Finally1
   (Rotatelab_Scripts_RemoteSolverClient__Solve_d__5_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_RemoteSolverClient__Solve_d__5____m__Finally1_105be64(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_0106bf18 + 0x106be78);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106bf1c + 0x106be8c));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_0106bf20 + 0x106beb8)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_0106bf04;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(piVar6,**(int **)(_UNK_0106bf20 + 0x106beb8),0);
LAB_0106bf04:
                    /* WARNING: Could not recover jumptable at 0x0106bf14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}

