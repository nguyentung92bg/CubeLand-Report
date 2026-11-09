/* IL2CPP: Rotatelab.BetterWaitForSeconds$$Pool
void Rotatelab_BetterWaitForSeconds__Pool (Rotatelab_BetterWaitForSeconds_WaitForSeconds_o* instance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.BetterWaitForSeconds$$Pool
   void Rotatelab_BetterWaitForSeconds__Pool (Rotatelab_BetterWaitForSeconds_WaitForSeconds_o*
   instance, const MethodInfo* method); */

void Rotatelab_BetterWaitForSeconds__Pool_107c8ac(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  pcVar3 = (char *)(_UNK_0108c938 + 0x108c8c0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c93c + 0x108c8d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c940 + 0x108c8e0));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_0108c944 + 0x108c8f4);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(iVar1 + 8);
  uVar5 = *(uint *)(iVar1 + 0xc);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar5 < *(uint *)(iVar6 + 0xc)) {
    puVar2 = (undefined4 *)(iVar6 + uVar5 * 4 + 0x10);
    *puVar2 = param_1;
    thunk_FUN_00ec5080(puVar2,param_1);
    *(uint *)(iVar1 + 0xc) = uVar5 + 1;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    return;
  }
  piVar4 = (int *)(iVar1 + 8);
  if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*piVar4 + 0xc) == 0) {
    iVar6 = 4;
  }
  else {
    if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(*piVar4 + 0xc) << 1;
  }
  System_Array__Resize_object__138a144
            (piVar4,iVar6,
             *(undefined4 *)
              (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(**(int **)(_UNK_0108c948 + 0x108c92c) +
                                                           0x10) + 0x60) + 0x34) + 0x10) + 0x60) +
              0x38));
  iVar6 = *(int *)(iVar1 + 8);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar6 + 0xc) <= *(uint *)(iVar1 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  puVar2 = (undefined4 *)(iVar6 + *(uint *)(iVar1 + 0xc) * 4 + 0x10);
  *puVar2 = param_1;
  thunk_FUN_00ec5080(puVar2,param_1);
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  return;
}

