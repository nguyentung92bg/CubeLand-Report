/* IL2CPP: Rotatelab.Scripts.DockManager.<MoveBlastersToGhostDocksCoroutine>d__56$$<>m__Finally1
void Rotatelab_Scripts_DockManager__MoveBlastersToGhostDocksCoroutine_d__56____m__Finally1 (Rotatelab_Scripts_DockManager__MoveBlastersToGhostDocksCoroutine_d__56_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager.<MoveBlastersToGhostDocksCoroutine>d__56$$<>m__Finally1
   void Rotatelab_Scripts_DockManager__MoveBlastersToGhostDocksCoroutine_d__56____m__Finally1
   (Rotatelab_Scripts_DockManager__MoveBlastersToGhostDocksCoroutine_d__56_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_DockManager__MoveBlastersToGhostDocksCoroutine_d__56____m__Finally1_100aaa8
               (int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_0101ab5c + 0x101aabc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101ab60 + 0x101aad0));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_0101ab64 + 0x101aafc)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_0101ab48;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(piVar6,**(int **)(_UNK_0101ab64 + 0x101aafc),0);
LAB_0101ab48:
                    /* WARNING: Could not recover jumptable at 0x0101ab58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}

