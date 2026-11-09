/* IL2CPP: Rotatelab.SoLevelABTestsData$$CalculateChecksum
int32_t Rotatelab_SoLevelABTestsData__CalculateChecksum (Rotatelab_SoLevelABTestsData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.SoLevelABTestsData$$CalculateChecksum
   int32_t Rotatelab_SoLevelABTestsData__CalculateChecksum (Rotatelab_SoLevelABTestsData_o* __this,
   const MethodInfo* method); */

int Rotatelab_SoLevelABTestsData__CalculateChecksum_fdcc60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = 0;
  iVar2 = *(int *)(iVar3 + 0xc) + 0x2c9;
  while( true ) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar3 + 0xc) <= (int)uVar7) {
      return iVar2;
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar4 = *(int *)(iVar3 + uVar7 * 4 + 0x10);
    if (iVar4 == 0) break;
    iVar8 = *(int *)(iVar4 + 0xc);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = 0;
    iVar2 = (iVar2 * 0x17 + *(int *)(iVar4 + 8)) * 0x17 + *(int *)(iVar8 + 0xc);
    while( true ) {
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(iVar8 + 0xc) <= (int)uVar6) break;
      if (*(uint *)(iVar8 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar5 = *(int **)(iVar8 + 0x10 + uVar6 * 4);
      if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar1 = (**(code **)(*piVar5 + 0xf8))(piVar5,*(undefined4 *)(*piVar5 + 0xfc));
      iVar4 = Rotatelab_SoLevelABTestsData__CalculateStableStringHashCode_fdd030(uVar1,uVar1);
      iVar2 = iVar2 * 0x17 + iVar4;
      uVar6 = uVar6 + 1;
    }
    uVar7 = uVar7 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

