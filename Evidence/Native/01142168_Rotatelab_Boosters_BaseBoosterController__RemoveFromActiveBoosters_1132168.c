/* IL2CPP: Rotatelab.Boosters.BaseBoosterController$$RemoveFromActiveBoosters
void Rotatelab_Boosters_BaseBoosterController__RemoveFromActiveBoosters (Rotatelab_Boosters_BaseBoosterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BaseBoosterController$$RemoveFromActiveBoosters
   void Rotatelab_Boosters_BaseBoosterController__RemoveFromActiveBoosters
   (Rotatelab_Boosters_BaseBoosterController_o* __this, const MethodInfo* method); */

uint Rotatelab_Boosters_BaseBoosterController__RemoveFromActiveBoosters_1132168(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_01142280 + 0x114217c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01142284 + 0x1142190));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01142288 + 0x114219c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114228c + 0x11421a8));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01142290 + 0x11421bc);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  uVar2 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Collections_Generic_List_Int32Enum___Contains_261e7a0
                    (iVar1,uVar2,**(undefined4 **)(_UNK_01142294 + 0x114220c));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  uVar2 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
  if (iVar1 != 0) {
    uVar3 = System_Array__IndexOf_Int32Enum__1642b7c
                      (*(undefined4 *)(iVar1 + 8),uVar2,0,*(undefined4 *)(iVar1 + 0xc),
                       *(undefined4 *)
                        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(**(int **)(_UNK_01142298 +
                                                                                0x1142270) + 0x10) +
                                                            0x60) + 100) + 0x10) + 0x60) + 0xa4));
    if (-1 < (int)uVar3) {
      System_Collections_Generic_List_Int32Enum___RemoveAt_261fcfc(iVar1,uVar3);
    }
    return ~uVar3 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

