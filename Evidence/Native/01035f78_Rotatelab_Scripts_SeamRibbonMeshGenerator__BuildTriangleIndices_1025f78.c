/* IL2CPP: Rotatelab.Scripts.SeamRibbonMeshGenerator$$BuildTriangleIndices
System_Int32_array* Rotatelab_Scripts_SeamRibbonMeshGenerator__BuildTriangleIndices (int32_t perimeterCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.SeamRibbonMeshGenerator$$BuildTriangleIndices
   System_Int32_array* Rotatelab_Scripts_SeamRibbonMeshGenerator__BuildTriangleIndices (int32_t
   perimeterCount, const MethodInfo* method); */

int Rotatelab_Scripts_SeamRibbonMeshGenerator__BuildTriangleIndices_1025f78(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  pcVar3 = (char *)(_UNK_01036094 + 0x1035f8c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01036098 + 0x1035fa0));
    *pcVar3 = '\x01';
  }
  iVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_0103609c + 0x1035fbc),param_1 * 6);
  if (0 < param_1) {
    iVar5 = 3;
    uVar6 = 0;
    do {
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = *(uint *)(iVar1 + 0xc);
      if (uVar2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar4 = iVar1 + uVar6 * 4;
      *(int *)(iVar4 + 0x10) = iVar5 + -3;
      if (uVar2 <= uVar6 + 1) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(int *)(iVar4 + 0x14) = iVar5 + -2;
      uVar2 = *(uint *)(iVar1 + 0xc);
      if (uVar2 <= uVar6 + 2) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar7 = iVar5 + -1;
      *(int *)(iVar4 + 0x18) = iVar7;
      if (uVar2 <= uVar6 + 3) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(int *)(iVar4 + 0x1c) = iVar5 + -2;
      uVar2 = *(uint *)(iVar1 + 0xc);
      if (uVar2 <= uVar6 + 4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(int *)(iVar4 + 0x20) = iVar5;
      if (uVar2 <= uVar6 + 5) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar6 = uVar6 + 6;
      iVar5 = iVar5 + 2;
      param_1 = param_1 + -1;
      *(int *)(iVar4 + 0x24) = iVar7;
    } while (param_1 != 0);
  }
  return iVar1;
}

