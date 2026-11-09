/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$GenerateFilledSprite
void Rotatelab_UI_SlicedFilledImage__GenerateFilledSprite (Rotatelab_UI_SlicedFilledImage_o* __this, UnityEngine_UI_VertexHelper_o* vh, UnityEngine_Vector4_o vertices, UnityEngine_Vector4_o uvs, float fillAmount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$GenerateFilledSprite
   void Rotatelab_UI_SlicedFilledImage__GenerateFilledSprite (Rotatelab_UI_SlicedFilledImage_o*
   __this, UnityEngine_UI_VertexHelper_o* vh, UnityEngine_Vector4_o vertices, UnityEngine_Vector4_o
   uvs, float fillAmount, const MethodInfo* method); */

void Rotatelab_UI_SlicedFilledImage__GenerateFilledSprite_1121ea4
               (int *param_1,int param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,float param_9,float param_10,float param_11)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  pcVar7 = (char *)(_UNK_0113233c + 0x1131ed0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01132340 + 0x1131ee4));
    *pcVar7 = '\x01';
  }
  if (_UNK_011322e4 <= (float)param_1[0x22]) {
    if (param_11 < 1.0) {
      iVar1 = param_1[0x21];
      if (iVar1 == 0) {
        param_9 = param_7 + (param_9 - param_7) * param_11;
        param_5 = param_3 + (param_5 - param_3) * param_11;
      }
      else if (iVar1 == 3) {
        param_8 = param_10 - (param_10 - param_8) * param_11;
        param_4 = param_6 - (param_6 - param_4) * param_11;
      }
      else if (iVar1 == 1) {
        param_7 = param_9 - (param_9 - param_7) * param_11;
        param_3 = param_5 - (param_5 - param_3) * param_11;
      }
      else {
        param_10 = param_8 + (param_10 - param_8) * param_11;
        param_6 = param_4 + (param_6 - param_4) * param_11;
      }
    }
    piVar8 = *(int **)(_UNK_01132344 + 0x1131fd0);
    iVar1 = *piVar8;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar8;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(float *)(iVar1 + 0x10) = param_3;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(float *)(iVar1 + 0x14) = param_4;
    iVar1 = **(int **)(*piVar8 + 0x5c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar1 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(float *)(iVar1 + 0x1c) = param_3;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(float *)(iVar1 + 0x20) = param_6;
    iVar1 = **(int **)(*piVar8 + 0x5c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar1 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(float *)(iVar1 + 0x28) = param_5;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(float *)(iVar1 + 0x2c) = param_6;
    iVar1 = **(int **)(*piVar8 + 0x5c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar1 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(float *)(iVar1 + 0x34) = param_5;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(float *)(iVar1 + 0x38) = param_4;
    iVar1 = *(int *)(*(int *)(*piVar8 + 0x5c) + 4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(float *)(iVar1 + 0x10) = param_7;
    *(float *)(iVar1 + 0x14) = param_8;
    iVar1 = *(int *)(*(int *)(*piVar8 + 0x5c) + 4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar1 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(float *)(iVar1 + 0x18) = param_7;
    *(float *)(iVar1 + 0x1c) = param_10;
    iVar1 = *(int *)(*(int *)(*piVar8 + 0x5c) + 4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar1 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(float *)(iVar1 + 0x20) = param_9;
    *(float *)(iVar1 + 0x24) = param_10;
    iVar1 = *(int *)(*(int *)(*piVar8 + 0x5c) + 4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar1 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(float *)(iVar1 + 0x28) = param_9;
    *(float *)(iVar1 + 0x2c) = param_8;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_UI_VertexHelper__get_currentVertCount_39c9de4(param_2,0);
    iVar9 = 0x10;
    iVar10 = 0;
    uVar11 = 0;
    do {
      iVar2 = *piVar8;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar8;
      }
      iVar2 = **(int **)(iVar2 + 0x5c);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar2 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar2 = iVar2 + iVar10;
      uVar5 = *(undefined4 *)(iVar2 + 0x10);
      uVar6 = *(undefined4 *)(iVar2 + 0x14);
      uVar3 = *(undefined4 *)(iVar2 + 0x18);
      (**(code **)(*param_1 + 0x170))(&uStack_78,param_1,*(undefined4 *)(*param_1 + 0x174));
      uVar4 = FUN_01011a24(uStack_78,uStack_74,uStack_70,uStack_6c,0);
      iVar2 = *(int *)(*(int *)(*piVar8 + 0x5c) + 4);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar2 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_UI_VertexHelper__AddVert_39cab2c
                (param_2,uVar5,uVar6,uVar3,uVar4,*(undefined4 *)(iVar2 + iVar9),
                 ((undefined4 *)(iVar2 + iVar9))[1],0,0,0);
      uVar11 = uVar11 + 1;
      iVar9 = iVar9 + 8;
      iVar10 = iVar10 + 0xc;
    } while (uVar11 != 4);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_VertexHelper__AddTriangle_39cad84(param_2,iVar1,iVar1 + 1,iVar1 + 2,0);
    UnityEngine_UI_VertexHelper__AddTriangle_39cad84(param_2,iVar1 + 2,iVar1 + 3,iVar1,0);
  }
  return;
}

