/* IL2CPP: Rotatelab.Grid.RaycastJob$$Execute
void Rotatelab_Grid_RaycastJob__Execute (Rotatelab_Grid_RaycastJob_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.RaycastJob$$Execute
   void Rotatelab_Grid_RaycastJob__Execute (Rotatelab_Grid_RaycastJob_o __this, const MethodInfo*
   method); */

void Rotatelab_Grid_RaycastJob__Execute_110a094(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fStack_70;
  float fStack_6c;
  float afStack_68 [2];
  float afStack_60 [4];
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  iStack_3c = 0;
  iStack_40 = 0;
  iStack_38 = 0;
  iStack_4c = 0;
  iStack_50 = 0;
  iStack_48 = 0;
  afStack_60[1] = 0.0;
  afStack_60[0] = 0.0;
  afStack_60[2] = 0.0;
  fStack_6c = 0.0;
  fStack_70 = 0.0;
  afStack_68[0] = 0.0;
  fStack_28 = 1.0 / (float)param_1[0x11];
  if (ABS((float)param_1[0x11]) < _UNK_0111a2b0) {
    fStack_28 = _UNK_0111a2b4;
  }
  fStack_2c = 1.0 / (float)param_1[0x10];
  if (ABS((float)param_1[0x10]) < _UNK_0111a2b0) {
    fStack_2c = _UNK_0111a2b4;
  }
  fStack_30 = 1.0 / (float)param_1[0xf];
  if (ABS((float)param_1[0xf]) < _UNK_0111a2b0) {
    fStack_30 = _UNK_0111a2b4;
  }
  iVar1 = func_0x01133260(param_1 + 9,param_1 + 0xc,param_1 + 6,param_1 + 0xf,&fStack_30,&iStack_40,
                          &iStack_50,afStack_60,&fStack_70,0);
  if (iVar1 != 0) {
    iVar8 = *param_1;
    iVar4 = param_1[0xc];
    iVar5 = param_1[0xd];
    iVar1 = iStack_40;
    iVar6 = iStack_38;
    iVar7 = iStack_3c;
    while (iVar3 = (iVar5 * iVar6 + iVar7) * iVar4 + iVar1, *(int *)(iVar8 + iVar3 * 4) < 1) {
      if (fStack_6c <= fStack_70) {
        if (afStack_68[0] <= fStack_6c) goto LAB_0111a244;
        iVar7 = iStack_4c + iVar7;
        iStack_3c = iVar7;
        pfVar9 = (float *)((uint)&fStack_70 | 4);
        pfVar10 = (float *)((uint)afStack_60 | 4);
        fVar11 = fStack_6c;
LAB_0111a254:
        *pfVar9 = fVar11 + *pfVar10;
      }
      else {
        if (afStack_68[0] <= fStack_70) {
LAB_0111a244:
          iVar6 = iStack_48 + iVar6;
          iStack_38 = iVar6;
          pfVar9 = afStack_68;
          pfVar10 = afStack_60 + 2;
          fVar11 = afStack_68[0];
          goto LAB_0111a254;
        }
        fStack_70 = fStack_70 + afStack_60[0];
        iVar1 = iStack_50 + iVar1;
        iStack_40 = iVar1;
      }
      if (iVar1 < 0) {
        return;
      }
      if (iVar4 <= iVar1) {
        return;
      }
      if (iVar7 < 0) {
        return;
      }
      if (iVar5 <= iVar7) {
        return;
      }
      if (iVar6 < 0) {
        return;
      }
      if (param_1[0xe] <= iVar6) {
        return;
      }
    }
    piVar2 = (int *)param_1[3];
    *piVar2 = iVar1;
    piVar2[1] = iVar7;
    piVar2[2] = iVar6;
    piVar2[3] = iVar3;
  }
  return;
}

