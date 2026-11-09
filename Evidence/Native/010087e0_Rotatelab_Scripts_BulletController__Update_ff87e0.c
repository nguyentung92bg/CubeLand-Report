/* IL2CPP: Rotatelab.Scripts.BulletController$$Update
void Rotatelab_Scripts_BulletController__Update (Rotatelab_Scripts_BulletController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BulletController$$Update
   void Rotatelab_Scripts_BulletController__Update (Rotatelab_Scripts_BulletController_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_BulletController__Update_ff87e0(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  pcVar10 = (char *)(_UNK_01008d74 + 0x1008800);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01008d78 + 0x1008814));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01008d7c + 0x1008820));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01008d80 + 0x100882c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01008d84 + 0x1008838));
    *pcVar10 = '\x01';
  }
  uVar11 = *(undefined4 *)(param_1 + 0x38);
  if (*(int *)(**(int **)(_UNK_01008d88 + 0x100884c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = UnityEngine_Object__op_Equality_36033f4(uVar11,0,0);
  if (iVar5 != 0) {
    uVar11 = System_String__Format_29ffb6c
                       (**(undefined4 **)(_UNK_01008d8c + 0x1008888),*(undefined4 *)(param_1 + 0x38)
                        ,0);
    if (*(int *)(**(int **)(_UNK_01008d90 + 0x10088a0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Debug__LogError_35b24c8(uVar11,param_1,0);
    piVar12 = *(int **)(param_1 + 0x6c);
    if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = **(int **)(_UNK_01008d94 + 0x10088e0);
    pcVar10 = (char *)(_UNK_01867c34 + 0x1867b6c);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01867c38 + 0x1867b80));
      *pcVar10 = '\x01';
    }
    if (piVar12[8] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (piVar12[6] <= *(int *)(piVar12[8] + 0xc)) {
      if (param_1 != 0) {
        iVar5 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
        if (*(int *)(**(int **)(_UNK_01867c3c + 0x1867c14) + 0x74) == 0) {
          FUN_00ec3934();
        }
        pcVar10 = (char *)(_UNK_03619a18 + 0x36199d0);
        if (*pcVar10 == '\0') {
          thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03619a1c + 0x36199e4),0);
          *pcVar10 = '\x01';
        }
        if (*(int *)(**(int **)(_UNK_03619a20 + 0x36199f8) + 0x74) == 0) {
          thunk_FUN_00ec3934();
        }
        pcVar10 = (char *)(_UNK_03619948 + 0x36198a0);
        if (*pcVar10 == '\0') {
          thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0361994c + 0x36198b4));
          thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03619950 + 0x36198c0));
          *pcVar10 = '\x01';
        }
        if (*(int *)(**(int **)(_UNK_03619954 + 0x36198d4) + 0x1c) == 0) {
          thunk_FUN_00efd7c4();
        }
        if (iVar5 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined4 *)(iVar5 + 8);
        }
        if (*(int *)(**(int **)(_UNK_03619958 + 0x36198fc) + 0x74) == 0) {
          thunk_FUN_00ec3934();
        }
        UNRECOVERED_JUMPTABLE = *(code **)(_UNK_0361995c + 0x3619918);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_03619960 + 0x3619928);
          *(code **)(_UNK_03619964 + 0x3619938) = UNRECOVERED_JUMPTABLE;
        }
                    /* WARNING: Could not recover jumptable at 0x03619944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(uVar11,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar12 + 0xf8))(piVar12,param_1,*(undefined4 *)(*piVar12 + 0xfc));
    iVar13 = piVar12[8];
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar15 = *(int *)(iVar13 + 8);
    uVar14 = *(uint *)(iVar13 + 0xc);
    if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar15 + 0xc) <= uVar14) {
      piVar12 = (int *)(iVar13 + 8);
      if (*piVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*piVar12 + 0xc) == 0) {
        iVar15 = 4;
      }
      else {
        if (*piVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar15 = *(int *)(*piVar12 + 0xc) << 1;
      }
      System_Array__Resize_object__138a144
                (piVar12,iVar15,
                 *(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar5 + 
                                                  0x10) + 0x60) + 0x24) + 0x10) + 0x60) + 0x34) +
                                    0x10) + 0x60) + 0x38));
      iVar5 = *(int *)(iVar13 + 8);
      if (iVar5 != 0) {
        if (*(uint *)(iVar13 + 0xc) < *(uint *)(iVar5 + 0xc)) {
          piVar12 = (int *)(iVar5 + *(uint *)(iVar13 + 0xc) * 4 + 0x10);
          *piVar12 = param_1;
          thunk_FUN_00ec5080(piVar12,param_1);
          *(int *)(iVar13 + 0xc) = *(int *)(iVar13 + 0xc) + 1;
          *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + 1;
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar12 = (int *)(iVar15 + uVar14 * 4 + 0x10);
    *piVar12 = param_1;
    thunk_FUN_00ec5080(piVar12,param_1);
    *(uint *)(iVar13 + 0xc) = uVar14 + 1;
    *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + 1;
    return;
  }
  fVar16 = *(float *)(param_1 + 0x7c);
  fVar6 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
  fVar16 = fVar16 + fVar6;
  fVar8 = 1.0;
  *(float *)(param_1 + 0x7c) = fVar16;
  fVar7 = 1.0;
  fVar6 = fVar7;
  if (0.0 < *(float *)(param_1 + 0x80)) {
    fVar6 = fVar16 / *(float *)(param_1 + 0x80);
    bVar1 = fVar6 < 0.0;
    if (1.0 < fVar6) {
      fVar6 = 1.0;
    }
    if (bVar1) {
      fVar6 = _UNK_010088f8;
    }
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    fVar7 = (float)UnityEngine_AnimationCurve__Evaluate_35a61e8(*(int *)(param_1 + 0x84),fVar6,0);
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    fVar8 = (float)UnityEngine_AnimationCurve__Evaluate_35a61e8(*(int *)(param_1 + 0x88),fVar6,0);
  }
  fVar16 = *(float *)(param_1 + 0x74);
  fVar6 = *(float *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__TransformPoint_3616968
            (&fStack_74,*(int *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
             *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),0);
  fVar19 = fStack_6c;
  fVar18 = fStack_70;
  fVar17 = fStack_74;
  iVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_74,iVar5,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_position_3614acc
            (iVar5,fStack_74 + (fVar17 - *(float *)(param_1 + 0x60)),
             fStack_70 + (fVar18 - *(float *)(param_1 + 100)),
             fStack_6c + (fVar19 - *(float *)(param_1 + 0x68)),0);
  *(float *)(param_1 + 0x60) = fVar17;
  *(float *)(param_1 + 100) = fVar18;
  *(float *)(param_1 + 0x68) = fVar19;
  iVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  iVar13 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_74,iVar13,0);
  fVar4 = fStack_6c;
  fVar3 = fStack_70;
  fVar20 = fStack_74;
  fVar9 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
  fVar2 = _UNK_01008d70;
  fVar9 = fVar7 * fVar16 * fVar9;
  fVar7 = fVar9;
  if (1.0 < fVar9) {
    fVar7 = 1.0;
  }
  if (fVar9 < 0.0) {
    fVar7 = _UNK_01008d70;
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_position_3614acc
            (iVar5,fVar20 + (fVar17 - fVar20) * fVar7,fVar3 + (fVar18 - fVar3) * fVar7,
             fVar4 + (fVar19 - fVar4) * fVar7,0);
  iVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_74,iVar5,0);
  *(float *)(param_1 + 0x70) =
       (fVar18 - fStack_70) * (fVar18 - fStack_70) + (fVar17 - fStack_74) * (fVar17 - fStack_74) +
       (fVar19 - fStack_6c) * (fVar19 - fStack_6c);
  iVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  iVar13 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar13 != 0) {
    UnityEngine_Transform__get_localScale_36154c0(&fStack_74,iVar13,0);
    fVar7 = fStack_74;
    pcVar10 = (char *)(_UNK_01008d98 + 0x1008bdc);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01008d9c + 0x1008bf8));
      *pcVar10 = '\x01';
    }
    fVar19 = *(float *)(param_1 + 0x2c);
    iVar13 = *(int *)(**(int **)(_UNK_01008da0 + 0x1008c10) + 0x5c);
    fVar20 = *(float *)(iVar13 + 0xc);
    fVar17 = *(float *)(iVar13 + 0x10);
    fVar18 = *(float *)(iVar13 + 0x14);
    fVar16 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
    fVar16 = fVar8 * fVar6 * fVar16;
    fVar6 = fVar16;
    if (1.0 < fVar16) {
      fVar6 = 1.0;
    }
    if (fVar16 < 0.0) {
      fVar6 = fVar2;
    }
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc
              (iVar5,fVar7 + (fVar20 * fVar19 - fVar7) * fVar6,
               fStack_70 + (fVar17 * fVar19 - fStack_70) * fVar6,
               fStack_6c + (fVar18 * fVar19 - fStack_6c) * fVar6,0);
    fVar6 = *(float *)(param_1 + 0x34);
    iVar13 = *(int *)(param_1 + 0x14);
    iVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_localScale_36154c0(&fStack_74,iVar5,0);
    if (iVar13 != 0) {
      UnityEngine_TrailRenderer__set_widthMultiplier_35c2914(iVar13,fVar6 * fStack_74,0);
      Rotatelab_Scripts_BulletController__TryEmitLargeVoxelSurfaceHit_ff8da8(param_1);
      if (*(float *)(param_1 + 0x70) <= *(float *)(param_1 + 0x28)) {
        piVar12 = *(int **)(param_1 + 0x38);
        if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        (**(code **)(*piVar12 + 0x118))(piVar12,*(undefined4 *)(*piVar12 + 0x11c));
        if (*(int *)(param_1 + 0x6c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Pool_ObjectPool_object___Recycle_1857b50
                  (*(int *)(param_1 + 0x6c),param_1,**(undefined4 **)(_UNK_01008da4 + 0x1008d58));
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

