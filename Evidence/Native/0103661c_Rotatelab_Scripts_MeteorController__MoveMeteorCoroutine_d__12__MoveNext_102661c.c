/* IL2CPP: Rotatelab.Scripts.MeteorController.<MoveMeteorCoroutine>d__12$$MoveNext
bool Rotatelab_Scripts_MeteorController__MoveMeteorCoroutine_d__12__MoveNext (Rotatelab_Scripts_MeteorController__MoveMeteorCoroutine_d__12_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01036a88) */
/* WARNING: Removing unreachable block (ram,0x01036a30) */
/* WARNING: Removing unreachable block (ram,0x01036a5c) */
/* WARNING: Removing unreachable block (ram,0x01036ab4) */
/* WARNING: Removing unreachable block (ram,0x01036a04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MeteorController.<MoveMeteorCoroutine>d__12$$MoveNext
   bool Rotatelab_Scripts_MeteorController__MoveMeteorCoroutine_d__12__MoveNext
   (Rotatelab_Scripts_MeteorController__MoveMeteorCoroutine_d__12_o* __this, const MethodInfo*
   method); */

undefined4
Rotatelab_Scripts_MeteorController__MoveMeteorCoroutine_d__12__MoveNext_102661c(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  pcVar9 = (char *)(_UNK_01036b28 + 0x103663c);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01036b2c + 0x1036650));
    *pcVar9 = '\x01';
  }
  iVar10 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = UnityEngine_Component__get_transform_35fe190(iVar10,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_position_36149b0(&fStack_74,iVar5,0);
    *(float *)(param_1 + 0x18) = fStack_6c;
  }
  piVar14 = *(int **)(_UNK_01036b48 + 0x10366d4);
  uVar11 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(*piVar14 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = UnityEngine_Object__op_Inequality_36018e4(uVar11,0,0);
  if (iVar5 == 0) {
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  else {
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_MeteorController__GetTargetOnPlane_10264e8
              (&fStack_74,iVar10,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x14));
    fVar3 = fStack_6c;
    fVar2 = fStack_70;
    fVar1 = fStack_74;
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = UnityEngine_Component__get_transform_35fe190(iVar10,0);
    iVar6 = UnityEngine_Component__get_transform_35fe190(iVar10,0);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_position_36149b0(&fStack_74,iVar6,0);
    fVar4 = fStack_6c;
    fVar19 = fStack_70;
    fVar8 = fStack_74;
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar17 = *(float *)(iVar10 + 0x10);
    fVar7 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
    pcVar9 = (char *)(_UNK_01036b30 + 0x10367e0);
    if (*pcVar9 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01036b34 + 0x10367f4));
      *pcVar9 = '\x01';
    }
    fVar23 = fVar2 - fVar19;
    fVar22 = fVar1 - fVar8;
    fVar15 = fVar3 - fVar4;
    fVar16 = fVar23 * fVar23 + fVar22 * fVar22 + fVar15 * fVar15;
    fVar21 = fVar3;
    fVar20 = fVar2;
    fVar18 = fVar1;
    if ((fVar16 != 0.0) && ((fVar17 = fVar17 * fVar7, fVar17 < 0.0 || (fVar17 * fVar17 < fVar16))))
    {
      if (*(int *)(**(int **)(_UNK_01036b38 + 0x1036868) + 0x74) == 0) {
        FUN_00ec3934();
      }
      fVar16 = SQRT(fVar16);
      fVar21 = fVar4 + (fVar15 / fVar16) * fVar17;
      fVar20 = fVar19 + (fVar23 / fVar16) * fVar17;
      fVar18 = fVar8 + (fVar22 / fVar16) * fVar17;
    }
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_position_3614acc(iVar5,fVar18,fVar20,fVar21,0);
    if (*(int *)(iVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = UnityEngine_GameObject__get_transform_3601c90(*(int *)(iVar10 + 0x20),0);
    pcVar9 = (char *)(_UNK_01036b3c + 0x1036900);
    if (*pcVar9 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01036b40 + 0x1036914));
      *pcVar9 = '\x01';
    }
    fVar19 = *(float *)(iVar10 + 0x14);
    iVar6 = *(int *)(**(int **)(_UNK_01036b44 + 0x103692c) + 0x5c);
    uVar11 = *(undefined4 *)(iVar6 + 0x18);
    uVar12 = *(undefined4 *)(iVar6 + 0x1c);
    uVar13 = *(undefined4 *)(iVar6 + 0x20);
    fVar8 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__Rotate_3616240(iVar5,uVar11,uVar12,uVar13,fVar19 * fVar8,0,0);
    iVar5 = UnityEngine_Component__get_transform_35fe190(iVar10,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_position_36149b0(&fStack_74,iVar5,0);
    if (_UNK_01036b24 <=
        (fStack_70 - fVar2) * (fStack_70 - fVar2) + (fStack_74 - fVar1) * (fStack_74 - fVar1) +
        (fStack_6c - fVar3) * (fStack_6c - fVar3)) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
      *(undefined4 *)(param_1 + 8) = 1;
      return 1;
    }
  }
  if (*(int *)(iVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(iVar10 + 0x20),0,0);
  if (*(int *)(iVar10 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_ParticleSystem__Play_368e864(*(int *)(iVar10 + 0x24),1,0);
  if (*(int *)(iVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_ParticleSystem__Play_368e864(*(int *)(iVar10 + 0x28),1,0);
  if (*(int *)(iVar10 + 0x2c) != 0) {
    UnityEngine_ParticleSystem__Stop_368ea74(*(int *)(iVar10 + 0x2c),1,0);
    if (*(int *)(iVar10 + 0x30) != 0) {
      UnityEngine_ParticleSystem__Stop_368ea74(*(int *)(iVar10 + 0x30),1,0);
      uVar11 = UnityEngine_Component__get_gameObject_35fe360(iVar10,0);
      if (*(int *)(*piVar14 + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Object__Destroy_36096ec(uVar11,0x40000000,0);
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

