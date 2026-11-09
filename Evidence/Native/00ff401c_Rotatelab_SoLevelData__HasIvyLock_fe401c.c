/* IL2CPP: Rotatelab.SoLevelData$$HasIvyLock
bool Rotatelab_SoLevelData__HasIvyLock (Rotatelab_SoLevelData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.SoLevelData$$HasIvyLock
   bool Rotatelab_SoLevelData__HasIvyLock (Rotatelab_SoLevelData_o* __this, const MethodInfo*
   method); */

bool Rotatelab_SoLevelData__HasIvyLock_fe401c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = *(int *)(param_1 + 0x88);
  uVar5 = 0;
  while( true ) {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = *(uint *)(iVar4 + 0xc);
    if ((int)uVar6 <= (int)uVar5) break;
    if (uVar6 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar1 = 0;
    iVar3 = *(int *)(iVar4 + uVar5 * 4 + 0x10);
    while( true ) {
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(iVar3 + 0xc) <= (int)uVar1) break;
      if (*(uint *)(iVar3 + 0xc) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar2 = *(int *)(iVar3 + 0x10 + uVar1 * 4);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar1 = uVar1 + 1;
      if (*(int *)(iVar2 + 0xc) == 9) goto LAB_00ff40ac;
    }
    uVar5 = uVar5 + 1;
  }
LAB_00ff40ac:
  return (int)uVar5 < (int)uVar6;
}

