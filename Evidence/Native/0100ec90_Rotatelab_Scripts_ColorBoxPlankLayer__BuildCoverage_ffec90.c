/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer$$BuildCoverage
void Rotatelab_Scripts_ColorBoxPlankLayer__BuildCoverage (Rotatelab_Scripts_ColorBoxPlankLayer_o* __this, UnityEngine_Bounds_o bounds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer$$BuildCoverage
   void Rotatelab_Scripts_ColorBoxPlankLayer__BuildCoverage (Rotatelab_Scripts_ColorBoxPlankLayer_o*
   __this, UnityEngine_Bounds_o bounds, const MethodInfo* method); */

void Rotatelab_Scripts_ColorBoxPlankLayer__BuildCoverage_ffec90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float in_stack_00000000;
  float in_stack_00000004;
  float in_stack_00000008;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  pcVar7 = (char *)(_UNK_0100f514 + 0x100ecb4);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100f518 + 0x100ecd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100f51c + 0x100ecdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100f520 + 0x100ece8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100f524 + 0x100ecf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100f528 + 0x100ed00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100f52c + 0x100ed0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100f530 + 0x100ed18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100f534 + 0x100ed24));
    *pcVar7 = '\x01';
  }
  piVar10 = *(int **)(_UNK_0100f538 + 0x100ed38);
  uVar8 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar8,0,0);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_0100f53c + 0x100ed70) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar8 = **(undefined4 **)(_UNK_0100f540 + 0x100ed8c);
    goto LAB_0100ee90;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__GetComponentInChildren_object__143f57c
                    (*(int *)(param_1 + 0x10),**(undefined4 **)(_UNK_0100f544 + 0x100edac));
  if (*(int *)(*piVar10 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Equality_36033f4(iVar1,0,0);
  if (iVar2 == 0) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar8 = UnityEngine_MeshFilter__get_sharedMesh_35cdfcc(iVar1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = UnityEngine_Object__op_Equality_36033f4(uVar8,0,0);
    if (iVar2 == 0) {
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = UnityEngine_MeshFilter__get_sharedMesh_35cdfcc(iVar1,0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Mesh__get_bounds_35cfd48(&fStack_80,iVar1,0);
      fVar14 = fStack_6c + fStack_6c;
      if (fVar14 < _UNK_0100f250) {
        if (*(int *)(param_1 + 0x10) != 0) {
          uVar8 = UnityEngine_Object__get_name_36081bc(*(int *)(param_1 + 0x10),0);
          fStack_80 = fStack_74 + fStack_74;
          fStack_7c = fStack_70 + fStack_70;
          fStack_78 = fVar14;
          uVar3 = FUN_00ec393c(**(undefined4 **)(_UNK_0100f554 + 0x100ef44),&fStack_80);
          uVar8 = System_String__Format_2a0c264
                            (**(undefined4 **)(_UNK_0100f558 + 0x100ef6c),uVar8,uVar3,0);
          if (*(int *)(**(int **)(_UNK_0100f55c + 0x100ef80) + 0x74) == 0) {
            FUN_00ec3934();
          }
          UnityEngine_Debug__LogError_35b24c8(uVar8,param_1,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x10),0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar1,0,0);
      pcVar7 = (char *)(_UNK_0100f560 + 0x100efec);
      if (*pcVar7 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0100f564 + 0x100f000));
        *pcVar7 = '\x01';
      }
      piVar10 = *(int **)(_UNK_0100f568 + 0x100f018);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        FUN_00ec3934();
      }
      dVar17 = (double)(in_stack_00000000 + in_stack_00000000);
      dVar18 = (double)modf(SUB84(dVar17,0),(int)((ulonglong)dVar17 >> 0x20),&fStack_80);
      if (0.0 <= in_stack_00000000 + in_stack_00000000) {
        if (dVar18 == 0.5) {
          dVar17 = 1.0;
          goto LAB_0100f07c;
        }
        dVar17 = (double)floor(SUB84(dVar17 + 0.5,0),(int)((ulonglong)(dVar17 + 0.5) >> 0x20));
      }
      else if (dVar18 == -0.5) {
        dVar17 = -1.0;
LAB_0100f07c:
        dVar18 = (double)CONCAT44(fStack_7c,fStack_80);
        uVar5 = FUN_00f88224(fStack_80,fStack_7c);
        dVar17 = dVar18 + dVar17;
        if ((uVar5 & 1) == 0) {
          dVar17 = dVar18;
        }
      }
      else {
        dVar17 = (double)ceil(SUB84(dVar17 + -0.5,0),(int)((ulonglong)(dVar17 + -0.5) >> 0x20));
      }
      dVar18 = _UNK_0100f258;
      uVar8 = (undefined4)(longlong)dVar17;
      if (dVar17 == _UNK_0100f258) {
        uVar8 = 0x80000000;
      }
      if (*pcVar7 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0100f56c + 0x100f0e4));
        *pcVar7 = '\x01';
      }
      if (*(int *)(*piVar10 + 0x74) == 0) {
        FUN_00ec3934();
      }
      dVar17 = (double)(in_stack_00000004 + in_stack_00000004);
      dVar19 = (double)modf(SUB84(dVar17,0),(int)((ulonglong)dVar17 >> 0x20),&fStack_80);
      if (0.0 <= in_stack_00000004 + in_stack_00000004) {
        if (dVar19 == 0.5) {
          dVar17 = 1.0;
          goto LAB_0100f154;
        }
        dVar17 = (double)floor(SUB84(dVar17 + 0.5,0),(int)((ulonglong)(dVar17 + 0.5) >> 0x20));
      }
      else if (dVar19 == -0.5) {
        dVar17 = -1.0;
LAB_0100f154:
        dVar19 = (double)CONCAT44(fStack_7c,fStack_80);
        uVar5 = FUN_00f88224(fStack_80,fStack_7c);
        dVar17 = dVar19 + dVar17;
        if ((uVar5 & 1) == 0) {
          dVar17 = dVar19;
        }
      }
      else {
        dVar17 = (double)ceil(SUB84(dVar17 + -0.5,0),(int)((ulonglong)(dVar17 + -0.5) >> 0x20));
      }
      uVar3 = (undefined4)(longlong)dVar17;
      if (dVar17 == dVar18) {
        uVar3 = 0x80000000;
      }
      if (*pcVar7 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0100f570 + 0x100f1b8));
        *pcVar7 = '\x01';
      }
      if (*(int *)(*piVar10 + 0x74) == 0) {
        FUN_00ec3934();
      }
      dVar17 = (double)(in_stack_00000008 + in_stack_00000008);
      dVar19 = (double)modf(SUB84(dVar17,0),(int)((ulonglong)dVar17 >> 0x20),&fStack_80);
      if (0.0 <= in_stack_00000008 + in_stack_00000008) {
        if (dVar19 != 0.5) {
          dVar17 = (double)floor(SUB84(dVar17 + 0.5,0),(int)((ulonglong)(dVar17 + 0.5) >> 0x20));
          goto LAB_0100f270;
        }
        dVar17 = 1.0;
      }
      else {
        if (dVar19 != -0.5) {
          dVar17 = (double)ceil(SUB84(dVar17 + -0.5,0),(int)((ulonglong)(dVar17 + -0.5) >> 0x20));
          goto LAB_0100f270;
        }
        dVar17 = -1.0;
      }
      uVar5 = FUN_00f88224(fStack_80,fStack_7c);
      dVar17 = (double)CONCAT44(fStack_7c,fStack_80) + dVar17;
      if ((uVar5 & 1) == 0) {
        dVar17 = (double)CONCAT44(fStack_7c,fStack_80);
      }
LAB_0100f270:
      pcVar7 = (char *)(_UNK_0100f574 + 0x100f280);
      uVar9 = (undefined4)(longlong)dVar17;
      if (dVar17 == dVar18) {
        uVar9 = 0x80000000;
      }
      if (*pcVar7 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0100f578 + 0x100f2a4));
        *pcVar7 = '\x01';
      }
      iVar1 = *(int *)(param_1 + 0x14);
      puVar4 = *(undefined4 **)(**(int **)(_UNK_0100f57c + 0x100f2bc) + 0x5c);
      uVar11 = puVar4[2];
      uVar12 = *puVar4;
      uVar13 = puVar4[1];
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      fVar14 = _UNK_0100f510 / fVar14;
      if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      fVar15 = -in_stack_00000000;
      fVar16 = -in_stack_00000008;
      Rotatelab_Scripts_ColorBoxPlankLayer__TileXZFace_1000050
                (param_1,uVar12,uVar13,uVar11,1,in_stack_00000004,fVar15,uVar8,fVar16,uVar9,fVar14,
                 *(undefined4 *)(iVar1 + 0x10));
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar1 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      in_stack_00000004 = -in_stack_00000004;
      Rotatelab_Scripts_ColorBoxPlankLayer__TileXZFace_1000050
                (param_1,uVar12,uVar13,uVar11,0xffffffff,in_stack_00000004,fVar15,uVar8,fVar16,uVar9
                 ,fVar14,*(undefined4 *)(iVar1 + 0x14));
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar1 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      Rotatelab_Scripts_ColorBoxPlankLayer__TileYZFace_1000230
                (param_1,uVar12,uVar13,uVar11,1,in_stack_00000000,in_stack_00000004,uVar3,fVar16,
                 uVar9,fVar14,*(undefined4 *)(iVar1 + 0x18));
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 != 0) {
        if (*(uint *)(iVar1 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        Rotatelab_Scripts_ColorBoxPlankLayer__TileYZFace_1000230
                  (param_1,uVar12,uVar13,uVar11,0xffffffff,fVar15,in_stack_00000004,uVar3,fVar16,
                   uVar9,fVar14,*(undefined4 *)(iVar1 + 0x1c));
        iVar1 = *(int *)(param_1 + 0x14);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar1 + 0xc) < 5) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        Rotatelab_Scripts_ColorBoxPlankLayer__TileXYFace_10003d4
                  (param_1,uVar12,uVar13,uVar11,1,in_stack_00000008,fVar15,uVar8,in_stack_00000004,
                   uVar3,fVar14,*(undefined4 *)(iVar1 + 0x20));
        iVar1 = *(int *)(param_1 + 0x14);
        if (iVar1 != 0) {
          if (5 < *(uint *)(iVar1 + 0xc)) {
            Rotatelab_Scripts_ColorBoxPlankLayer__TileXYFace_10003d4
                      (param_1,uVar12,uVar13,uVar11,0xffffffff,fVar16,fVar15,uVar8,in_stack_00000004
                       ,uVar3,fVar14,*(undefined4 *)(iVar1 + 0x24));
            return;
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar8 = UnityEngine_Object__get_name_36081bc(*(int *)(param_1 + 0x10),0);
  uVar8 = System_String__Concat_2a0b574
                    (**(undefined4 **)(_UNK_0100f548 + 0x100ee5c),uVar8,
                     **(undefined4 **)(_UNK_0100f54c + 0x100ee68),0);
  if (*(int *)(**(int **)(_UNK_0100f550 + 0x100ee7c) + 0x74) == 0) {
    FUN_00ec3934();
  }
LAB_0100ee90:
  pcVar7 = (char *)(_UNK_035c25f8 + 0x35c24e4);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c25fc + 0x35c24f8),param_1,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c2600 + 0x35c2504));
    *pcVar7 = '\x01';
  }
  piVar10 = *(int **)(_UNK_035c2604 + 0x35c2518);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar7 = (char *)(_UNK_035c2608 + 0x35c2534);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c260c + 0x35c2548));
    *pcVar7 = '\x01';
  }
  iVar1 = *piVar10;
  if (*(int *)(iVar1 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar1 = *piVar10;
  }
  piVar10 = *(int **)(*(int *)(iVar1 + 0x5c) + 4);
  if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar10;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_035c2610 + 0x35c258c)) {
        puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xe0);
        goto LAB_035c25d4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined4 *)thunk_FUN_00efdb38(piVar10,**(int **)(_UNK_035c2610 + 0x35c258c),4);
LAB_035c25d4:
  (*(code *)*puVar4)(piVar10,0,uVar8,param_1);
  return;
}

