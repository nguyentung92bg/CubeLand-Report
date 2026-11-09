/* IL2CPP: Rotatelab.Boosters.CannonRig$$AimAt
void Rotatelab_Boosters_CannonRig__AimAt (Rotatelab_Boosters_CannonRig_o* __this, UnityEngine_Vector3_o worldPoint, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonRig$$AimAt
   void Rotatelab_Boosters_CannonRig__AimAt (Rotatelab_Boosters_CannonRig_o* __this,
   UnityEngine_Vector3_o worldPoint, const MethodInfo* method); */

void Rotatelab_Boosters_CannonRig__AimAt_11344d0
               (int param_1,float param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  char *pcVar14;
  undefined4 uVar15;
  int *piVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_58;
  float fStack_54;
  undefined4 uStack_50;
  
  pcVar14 = (char *)(_UNK_01144884 + 0x11444f8);
  if (*pcVar14 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01144888 + 0x114450c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114488c + 0x1144518));
    *pcVar14 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = UnityEngine_Transform__get_parent_36148d8(*(int *)(param_1 + 0x10),0);
  piVar16 = *(int **)(_UNK_01144890 + 0x114454c);
  if (*(int *)(*piVar16 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar9 = UnityEngine_Object__op_Inequality_36018e4(iVar8,0,0);
  pcVar14 = (char *)(_UNK_01144894 + 0x114457c);
  if (iVar9 == 0) {
    if (*pcVar14 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01144898 + 0x1144600));
      *pcVar14 = '\x01';
    }
    pfVar11 = *(float **)(**(int **)(_UNK_0114489c + 0x1144614) + 0x5c);
    fVar12 = *pfVar11;
    fVar13 = pfVar11[2];
  }
  else {
    if (*pcVar14 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_011448a0 + 0x1144594));
      *pcVar14 = '\x01';
    }
    puVar10 = *(undefined4 **)(**(int **)(_UNK_011448a4 + 0x11445ac) + 0x5c);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__TransformPoint_3616968(&fStack_70,iVar8,*puVar10,puVar10[1],puVar10[2],0)
    ;
    fVar13 = fStack_68;
    fVar12 = fStack_70;
  }
  param_2 = param_2 - fVar12;
  param_4 = param_4 - fVar13;
  if (_UNK_01144868 <= param_2 * param_2 + param_4 * param_4) {
    fVar12 = (float)atan2f(param_2,param_4);
    fVar13 = _UNK_0114486c;
    if (*(int *)(*piVar16 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar9 = UnityEngine_Object__op_Inequality_36018e4(iVar8,0,0);
    fVar22 = _UNK_01144870;
    fVar23 = _UNK_01144870;
    if (iVar9 != 0) {
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__get_eulerAngles_3614c78(&fStack_70,iVar8,0);
      fVar23 = fStack_6c;
    }
    fVar1 = _UNK_01144874;
    fVar23 = fVar12 * fVar13 - fVar23;
    fVar13 = (float)FUN_01f4f1b4(fVar23 / _UNK_01144874);
    fVar23 = fVar23 + fVar13 * _UNK_01144878;
    fVar13 = *(float *)(param_1 + 0xa0);
    uStack_58 = 0;
    uStack_50 = 0;
    fStack_54 = fVar23;
    if (fVar1 < fVar23) {
      fStack_54 = fVar1;
    }
    fVar12 = *(float *)(param_1 + 0x9c);
    if (fVar23 < 0.0) {
      fStack_54 = fVar22;
    }
    fVar22 = *(float *)(param_1 + 0x94);
    if (_UNK_0114487c < fStack_54) {
      fStack_54 = fStack_54 + _UNK_01144878;
    }
    fStack_54 = fStack_54 * _UNK_01144880;
    fVar24 = *(float *)(param_1 + 0x98);
    UnityEngine_Quaternion__Internal_FromEulerRad_35ee008(&fStack_70,&uStack_58,0);
    fVar19 = fVar13 * fStack_64;
    fVar20 = fVar12 * fStack_64;
    fVar21 = fVar24 * fStack_64;
    fVar18 = fVar22 * fStack_64;
    fVar5 = fVar22 * fStack_70;
    fVar23 = fVar13 * fStack_68;
    fVar1 = fVar13 * fStack_6c;
    fVar13 = fVar13 * fStack_70;
    fVar6 = fVar24 * fStack_6c;
    fVar2 = fVar22 * fStack_6c;
    fVar3 = fVar12 * fStack_70;
    fVar4 = fVar24 * fStack_68;
    fVar7 = fVar12 * fStack_68;
    fVar24 = fVar24 * fStack_70;
    fVar22 = fVar22 * fStack_68;
    fVar12 = fVar12 * fStack_6c;
    if (*(int *)(**(int **)(_UNK_011448a8 + 0x11447b8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Stop_2ced694((undefined8 *)(param_1 + 0x60),0);
    uVar17 = *(undefined4 *)(param_1 + 0x10);
    uVar15 = *(undefined4 *)(param_1 + 0x48);
    PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_70,6,0);
    PrimeTween_Tween__LocalRotation_2ce631c
              (&fStack_70,uVar17,(fVar18 + fVar13 + fVar4) - fVar12,
               (fVar21 + fVar1 + fVar3) - fVar22,(fVar20 + fVar23 + fVar2) - fVar24,
               ((fVar19 - fVar5) - fVar6) - fVar7,uVar15,fStack_70,fStack_6c,fStack_68,fStack_64,
               uStack_60,1,0,0,0,0,0);
    *(undefined8 *)(param_1 + 0x60) = CONCAT44(fStack_6c,fStack_70);
    *(ulonglong *)(param_1 + 0x68) = CONCAT44(fStack_64,fStack_68);
    thunk_FUN_00ec5080(param_1 + 0x68,0);
  }
  return;
}

