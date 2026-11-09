/* IL2CPP: Rotatelab.EditorTools.LightBackgroundVoxelReviewLayout$$RefreshLayout
void Rotatelab_EditorTools_LightBackgroundVoxelReviewLayout__RefreshLayout (Rotatelab_EditorTools_LightBackgroundVoxelReviewLayout_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.EditorTools.LightBackgroundVoxelReviewLayout$$RefreshLayout
   void Rotatelab_EditorTools_LightBackgroundVoxelReviewLayout__RefreshLayout
   (Rotatelab_EditorTools_LightBackgroundVoxelReviewLayout_o* __this, const MethodInfo* method); */

void Rotatelab_EditorTools_LightBackgroundVoxelReviewLayout__RefreshLayout_106d29c(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  
  pcVar5 = (char *)(_UNK_0107d66c + 0x107d2bc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107d670 + 0x107d2d0));
    *pcVar5 = '\x01';
  }
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(**(int **)(_UNK_0107d674 + 0x107d2e4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Equality_36033f4(uVar6,0,0);
  fVar1 = _UNK_0107d65c;
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    uVar9 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x44) < _UNK_0107d65c) << 0x1f;
    fVar12 = *(float *)(param_1 + 0x48);
    if (*(float *)(param_1 + 0x48) < _UNK_0107d65c) {
      fVar12 = _UNK_0107d65c;
    }
    *(float *)(param_1 + 0x48) = fVar12;
    fVar12 = *(float *)(param_1 + 0x44);
    if (SUB41(uVar9 >> 0x1f,0)) {
      fVar12 = fVar1;
    }
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    *(int *)(param_1 + 0x2c) = iVar2;
    *(float *)(param_1 + 0x44) = fVar12;
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localPosition_3613c6c
              (*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
               *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0);
    fVar1 = _UNK_0107d660;
    fStack_70 = *(float *)(param_1 + 0x20) * _UNK_0107d660;
    fStack_6c = *(float *)(param_1 + 0x24) * _UNK_0107d660;
    iVar2 = *(int *)(param_1 + 0x10);
    fStack_68 = *(float *)(param_1 + 0x28) * _UNK_0107d660;
    UnityEngine_Quaternion__Internal_FromEulerRad_35ee008(&uStack_80,&fStack_70,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localRotation_361507c
              (iVar2,uStack_80,uStack_7c,uStack_78,uStack_74,0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Transform__get_childCount_3616bd8(*(int *)(param_1 + 0x10),0);
    fVar12 = (float)VectorSignedToFloat(iVar2,(byte)(uVar9 >> 0x16) & 3);
    fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x2c),(byte)(uVar9 >> 0x16) & 3);
    pcVar5 = (char *)(_UNK_0107d678 + 0x107d424);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0107d67c + 0x107d438));
      *pcVar5 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_0107d680 + 0x107d450) + 0x74) == 0) {
      FUN_00ec3934();
    }
    fVar12 = (float)FUN_01f4f1bc(fVar12 / fVar13);
    fVar13 = (float)VectorSignedToFloat((int)fVar12 + -1,(byte)(uVar9 >> 0x16) & 3);
    uVar9 = uVar9 & 0xfffffff | (uint)(fVar12 == _UNK_0107d664) << 0x1e;
    fVar12 = fVar13 * 0.5;
    if (SUB41(uVar9 >> 0x1e,0)) {
      fVar12 = _UNK_0107d668;
    }
    if (0 < iVar2) {
      iVar8 = 0;
      fVar13 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x2c) + -1,(byte)(uVar9 >> 0x16) & 3);
      do {
        if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = UnityEngine_Transform__GetChild_3617760(*(int *)(param_1 + 0x10),iVar8,0);
        iVar7 = *(int *)(param_1 + 0x2c);
        iVar4 = func_0x00f88028(iVar8,iVar7);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        fVar10 = (float)VectorSignedToFloat(iVar4,(byte)(uVar9 >> 0x16) & 3);
        fVar11 = (float)VectorSignedToFloat(iVar8 - iVar7 * iVar4,(byte)(uVar9 >> 0x16) & 3);
        UnityEngine_Transform__set_localPosition_3613c6c
                  (iVar3,(fVar11 - fVar13 * 0.5) * *(float *)(param_1 + 0x30),
                   (fVar12 - fVar10) * *(float *)(param_1 + 0x34),0,0);
        fStack_70 = *(float *)(param_1 + 0x38) * fVar1;
        fStack_6c = *(float *)(param_1 + 0x3c) * fVar1;
        fStack_68 = *(float *)(param_1 + 0x40) * fVar1;
        UnityEngine_Quaternion__Internal_FromEulerRad_35ee008(&uStack_80,&fStack_70,0);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__set_localRotation_361507c
                  (iVar3,uStack_80,uStack_7c,uStack_78,uStack_74,0);
        if (*(char *)(_UNK_0107d684 + 0x107d5bc) == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_0107d688 + 0x107d5d0));
          *(undefined1 *)(_UNK_0107d68c + 0x107d5e0) = 1;
        }
        fVar10 = *(float *)(param_1 + 0x44);
        iVar4 = *(int *)(**(int **)(_UNK_0107d690 + 0x107d5f0) + 0x5c);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__set_localScale_36155dc
                  (iVar3,*(float *)(iVar4 + 0xc) * fVar10,*(float *)(iVar4 + 0x10) * fVar10,
                   *(float *)(iVar4 + 0x14) * fVar10,0);
        Rotatelab_EditorTools_LightBackgroundVoxelReviewLayout__LayoutVoxels_106d694(param_1,iVar3);
        iVar8 = iVar8 + 1;
      } while (iVar2 != iVar8);
    }
  }
  return;
}

