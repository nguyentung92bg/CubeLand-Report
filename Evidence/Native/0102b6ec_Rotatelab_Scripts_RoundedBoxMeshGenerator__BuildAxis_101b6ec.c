/* IL2CPP: Rotatelab.Scripts.RoundedBoxMeshGenerator$$BuildAxis
System_Single_array* Rotatelab_Scripts_RoundedBoxMeshGenerator__BuildAxis (float halfExtent, float innerExtent, int32_t segments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedBoxMeshGenerator$$BuildAxis
   System_Single_array* Rotatelab_Scripts_RoundedBoxMeshGenerator__BuildAxis (float halfExtent,
   float innerExtent, int32_t segments, const MethodInfo* method); */

int Rotatelab_Scripts_RoundedBoxMeshGenerator__BuildAxis_101b6ec
              (float param_1,float param_2,int param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  
  pcVar4 = (char *)(_UNK_0102b83c + 0x102b714);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102b840 + 0x102b728));
    *pcVar4 = '\x01';
  }
  iVar2 = FUN_00ec388c(**(undefined4 **)(_UNK_0102b844 + 0x102b740),param_3 * 2 + 2);
  fVar1 = _UNK_0102b838;
  if (-1 < param_3) {
    fVar10 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    uVar5 = 0;
    iVar6 = iVar2;
    do {
      fVar8 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
      fVar9 = (fVar8 / fVar10) * fVar1;
      fVar8 = (float)FUN_01f4f240(fVar9);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar7 = *(uint *)(iVar2 + 0xc);
      if (uVar7 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      fVar9 = (float)cosf(fVar9);
      *(float *)(iVar6 + 0x10) = (param_1 - param_2) * fVar8 - param_1;
      if (uVar7 <= param_3 + 1 + uVar5) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      pfVar3 = (float *)(iVar6 + param_3 * 4 + 0x14);
      iVar6 = iVar6 + 4;
      uVar5 = uVar5 + 1;
      *pfVar3 = param_2 + (param_1 - param_2) * (1.0 - fVar9);
    } while ((int)uVar5 <= param_3);
  }
  return iVar2;
}

