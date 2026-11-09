/* IL2CPP: Rotatelab.Grid.GridVisibilityController$$CalculateViewportRectOfGrid
UnityEngine_Rect_o Rotatelab_Grid_GridVisibilityController__CalculateViewportRectOfGrid (Rotatelab_Grid_GridVisibilityController_o* __this, UnityEngine_Camera_o* camera, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridVisibilityController$$CalculateViewportRectOfGrid
   UnityEngine_Rect_o Rotatelab_Grid_GridVisibilityController__CalculateViewportRectOfGrid
   (Rotatelab_Grid_GridVisibilityController_o* __this, UnityEngine_Camera_o* camera, const
   MethodInfo* method); */

void Rotatelab_Grid_GridVisibilityController__CalculateViewportRectOfGrid_1109a70
               (float *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float *pfStack_78;
  float *pfStack_74;
  int iStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  int iStack_60;
  
  pcVar3 = (char *)(_UNK_01119d24 + 0x1119a9c);
  iStack_60 = **(int **)(_UNK_01119d28 + 0x1119aac);
  pfStack_78 = param_1;
  iStack_70 = param_2;
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01119d2c + 0x1119ac4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01119d30 + 0x1119ad0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01119d34 + 0x1119adc));
    *pcVar3 = '\x01';
  }
  iVar4 = iStack_70;
  func_0x01133810(&fStack_6c,iStack_70 + 0x14,0);
  pfStack_74 = &fStack_d8;
  fVar9 = (float)VectorSignedToFloat(fStack_6c,(byte)(in_fpscr >> 0x16) & 3);
  fVar8 = (float)VectorSignedToFloat(fStack_68,(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = (float)VectorSignedToFloat(uStack_64,(byte)(in_fpscr >> 0x16) & 3);
  fVar10 = (float)VectorSignedToFloat(*(undefined4 *)(iVar4 + 0x20),(byte)(in_fpscr >> 0x16) & 3);
  fVar11 = (float)VectorSignedToFloat(*(undefined4 *)(iVar4 + 0x24),(byte)(in_fpscr >> 0x16) & 3);
  fVar12 = (float)VectorSignedToFloat(*(undefined4 *)(iVar4 + 0x28),(byte)(in_fpscr >> 0x16) & 3);
  FUN_00f88e5c(pfStack_74,0x60);
  iVar4 = 0;
  fStack_d8 = fVar9 + -0.5;
  fStack_d4 = fVar8 + -0.5;
  fStack_d0 = fVar7 + -0.5;
  fStack_cc = fStack_d8 + fVar10;
  fStack_a0 = fStack_d0 + fVar12;
  fStack_bc = fStack_d4 + fVar11;
  fVar7 = _UNK_01119d1c;
  fVar8 = _UNK_01119d20;
  fVar9 = _UNK_01119d20;
  fVar10 = _UNK_01119d1c;
  fStack_c8 = fStack_d4;
  fStack_c4 = fStack_d0;
  fStack_c0 = fStack_d8;
  fStack_b8 = fStack_d0;
  fStack_b4 = fStack_cc;
  fStack_b0 = fStack_bc;
  fStack_ac = fStack_d0;
  fStack_a8 = fStack_d8;
  fStack_a4 = fStack_d4;
  fStack_9c = fStack_cc;
  fStack_98 = fStack_d4;
  fStack_94 = fStack_a0;
  fStack_90 = fStack_d8;
  fStack_8c = fStack_bc;
  fStack_88 = fStack_a0;
  fStack_84 = fStack_cc;
  fStack_80 = fStack_bc;
  fStack_7c = fStack_a0;
  while( true ) {
    iVar1 = UnityEngine_Component__get_transform_35fe190(iStack_70,0);
    puVar2 = (undefined4 *)((int)pfStack_74 + iVar4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__TransformPoint_3616968(&fStack_6c,iVar1,*puVar2,puVar2[1],puVar2[2],0);
    if (param_3 == 0) break;
    iVar4 = iVar4 + 0xc;
    UnityEngine_Camera__WorldToViewportPoint_35aea38
              (&fStack_6c,param_3,fStack_6c,fStack_68,uStack_64,0);
    fVar11 = fStack_68;
    if (fStack_68 < fVar10) {
      fVar11 = fVar10;
    }
    fVar12 = fStack_6c;
    if (fStack_6c < fVar7) {
      fVar12 = fVar7;
    }
    fVar6 = fStack_68;
    if (fVar9 < fStack_68) {
      fVar6 = fVar9;
    }
    fVar5 = fStack_6c;
    if (fVar8 < fStack_6c) {
      fVar5 = fVar8;
    }
    fVar7 = fVar12;
    fVar8 = fVar5;
    fVar9 = fVar6;
    fVar10 = fVar11;
    if (iVar4 == 0x60) {
      *pfStack_78 = 0.0;
      pfStack_78[1] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      pfStack_78[2] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      pfStack_78[3] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      *pfStack_78 = fVar5;
      pfStack_78[1] = fVar6;
      pfStack_78[2] = fVar12 - fVar5;
      pfStack_78[3] = fVar11 - fVar6;
      if (**(int **)(_UNK_01119d38 + 0x1119d00) != iStack_60) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

