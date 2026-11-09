/* IL2CPP: Rotatelab.Grid.FindVisibleGridCellsJob$$Execute
void Rotatelab_Grid_FindVisibleGridCellsJob__Execute (Rotatelab_Grid_FindVisibleGridCellsJob_o __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Grid.FindVisibleGridCellsJob$$Execute
   void Rotatelab_Grid_FindVisibleGridCellsJob__Execute (Rotatelab_Grid_FindVisibleGridCellsJob_o
   __this, int32_t index, const MethodInfo* method); */

void Rotatelab_Grid_FindVisibleGridCellsJob__Execute_1106018(int *param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fStack_70;
  float fStack_6c;
  float afStack_68 [2];
  float afStack_60 [4];
  int aiStack_50 [4];
  int iStack_40;
  int iStack_3c;
  int aiStack_38 [2];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  iVar6 = param_1[0x18];
  fStack_2c = 0.0;
  fStack_30 = 0.0;
  fStack_28 = 0.0;
  iStack_3c = 0;
  iStack_40 = 0;
  aiStack_38[0] = 0;
  aiStack_50[1] = 0;
  aiStack_50[0] = 0;
  aiStack_50[2] = 0;
  afStack_60[1] = 0.0;
  afStack_60[0] = 0.0;
  afStack_60[2] = 0.0;
  iVar1 = func_0x00f88028(param_2,iVar6);
  fVar11 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  fVar10 = (float)VectorSignedToFloat(param_2 - iVar1 * iVar6,(byte)(in_fpscr >> 0x16) & 3);
  fStack_6c = 0.0;
  fStack_70 = 0.0;
  afStack_68[0] = 0.0;
  fStack_2c = (float)param_1[0x10] + (float)param_1[0x13] * fVar10 + (float)param_1[0x16] * fVar11;
  fStack_30 = (float)param_1[0xf] + (float)param_1[0x12] * fVar10 + (float)param_1[0x15] * fVar11;
  fStack_28 = (float)param_1[0x11] + (float)param_1[0x14] * fVar10 + (float)param_1[0x17] * fVar11;
  iVar1 = func_0x01133260(param_1 + 3,param_1 + 6,&fStack_30,param_1 + 9,param_1 + 0xc,&iStack_40,
                          aiStack_50,afStack_60,&fStack_70,0);
  if (iVar1 != 0) {
    iVar9 = *param_1;
    iVar6 = param_1[6];
    iVar3 = param_1[7];
    iVar1 = iStack_40;
    while (iVar7 = iStack_40, iVar6 = iVar9 + (iVar3 * aiStack_38[0] + iStack_3c) * iVar6 * 4,
          *(int *)(iVar6 + iVar1 * 4) < 1) {
      *(undefined4 *)(iVar6 + iVar1 * 4) = 0xffffffff;
      pfVar2 = afStack_68;
      piVar4 = aiStack_38;
      pfVar5 = afStack_60 + 2;
      piVar8 = aiStack_50 + 2;
      fVar10 = afStack_68[0];
      if (fStack_6c <= fStack_70) {
        if (fStack_6c < afStack_68[0]) {
          pfVar2 = (float *)((uint)&fStack_70 | 4);
          pfVar5 = (float *)((uint)afStack_60 | 4);
          piVar8 = (int *)((uint)aiStack_50 | 4);
          piVar4 = (int *)((uint)&iStack_40 | 4);
          fVar10 = fStack_6c;
        }
LAB_0111620c:
        fVar11 = *pfVar5;
        *piVar4 = *piVar8 + *piVar4;
        *pfVar2 = fVar10 + fVar11;
      }
      else {
        if (afStack_68[0] <= fStack_70) goto LAB_0111620c;
        fStack_70 = fStack_70 + afStack_60[0];
        iVar7 = aiStack_50[0] + iStack_40;
        iStack_40 = iVar7;
      }
      if (iVar7 < 0) {
        return;
      }
      iVar6 = param_1[6];
      if (iVar6 <= iVar7) {
        return;
      }
      if (iStack_3c < 0) {
        return;
      }
      iVar3 = param_1[7];
      if (iVar3 <= iStack_3c) {
        return;
      }
      if (aiStack_38[0] < 0) {
        return;
      }
      iVar1 = iVar7;
      if (param_1[8] <= aiStack_38[0]) {
        return;
      }
    }
    *(undefined4 *)(iVar6 + iVar1 * 4) = 2;
  }
  return;
}

