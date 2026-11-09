/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$PopulateCubeValues
void Rotatelab_Scripts_RoundedMeshGenerator__PopulateCubeValues (System_Single_array* cubeValues, System_Single_array* sdfGrid, int32_t ix, int32_t iy, int32_t iz, Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid_o grid, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$PopulateCubeValues
   void Rotatelab_Scripts_RoundedMeshGenerator__PopulateCubeValues (System_Single_array* cubeValues,
   System_Single_array* sdfGrid, int32_t ix, int32_t iy, int32_t iz,
   Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid_o grid, const MethodInfo* method); */

void Rotatelab_Scripts_RoundedMeshGenerator__PopulateCubeValues_1023be0
               (int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  pcVar3 = (char *)(_UNK_01033d68 + 0x1033c0c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01033d6c + 0x1033c20));
    *pcVar3 = '\x01';
  }
  uVar7 = 0;
  piVar6 = *(int **)(_UNK_01033d70 + 0x1033c40);
  iVar5 = 0;
  while( true ) {
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar6;
    }
    if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(**(int **)(iVar1 + 0x5c) + 0xc) <= (int)uVar7) {
      return;
    }
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar6;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar1 = iVar1 + iVar5 * 3;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = ((*(int *)(iVar1 + 0x10) + param_3) * in_stack_00000018 +
            *(int *)(iVar1 + 0x14) + param_4) * in_stack_0000001c + *(int *)(iVar1 + 0x18) + param_5
    ;
    if (*(uint *)(param_2 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar7 = uVar7 + 1;
    puVar2 = (undefined4 *)(param_1 + 0x10 + iVar5);
    iVar5 = iVar5 + 4;
    *puVar2 = *(undefined4 *)(param_2 + uVar4 * 4 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

