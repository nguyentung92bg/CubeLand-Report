/* IL2CPP: Rotatelab.Scripts.DockManager$$GetGhostDockLocalPosition
UnityEngine_Vector3_o Rotatelab_Scripts_DockManager__GetGhostDockLocalPosition (Rotatelab_Scripts_DockManager_o* __this, int32_t dockIndex, int32_t usedDockCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$GetGhostDockLocalPosition
   UnityEngine_Vector3_o Rotatelab_Scripts_DockManager__GetGhostDockLocalPosition
   (Rotatelab_Scripts_DockManager_o* __this, int32_t dockIndex, int32_t usedDockCount, const
   MethodInfo* method); */

void Rotatelab_Scripts_DockManager__GetGhostDockLocalPosition_100747c
               (float *param_1,int param_2,uint param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  
  iVar2 = *(int *)(param_2 + 0x5c);
  if (param_4 < 7) {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar2 + 0xc) <= param_3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar2 = iVar2 + param_3 * 0xc;
    uVar10 = *(undefined8 *)(iVar2 + 0x10);
    param_1[2] = *(float *)(iVar2 + 0x18);
    *(undefined8 *)param_1 = uVar10;
  }
  else {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    fVar9 = *(float *)(iVar2 + 0x10);
    fVar8 = *(float *)(iVar2 + 0x14);
    iVar3 = *(int *)(param_2 + 0x5c);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar3 + 0xc) < 6) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    fVar6 = *(float *)(iVar3 + 0x4c);
    fVar4 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = *(float *)(iVar3 + 0x50);
    fVar5 = (float)VectorSignedToFloat(param_4 + -1,(byte)(in_fpscr >> 0x16) & 3);
    fVar4 = fVar4 / fVar5;
    bVar1 = fVar4 < 0.0;
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    if (bVar1) {
      fVar4 = _UNK_01017590;
    }
    param_1[2] = *(float *)(iVar2 + 0x18) +
                 fVar4 * (*(float *)(iVar3 + 0x54) - *(float *)(iVar2 + 0x18));
    param_1[1] = fVar8 + fVar4 * (fVar7 - fVar8);
    *param_1 = fVar9 + fVar4 * (fVar6 - fVar9);
  }
  return;
}

