/* IL2CPP: Rotatelab.Pool.LargeVoxelBreakParticlePool$$CreateInstance
UnityEngine_ParticleSystem_o* Rotatelab_Pool_LargeVoxelBreakParticlePool__CreateInstance (Rotatelab_Pool_LargeVoxelBreakParticlePool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.LargeVoxelBreakParticlePool$$CreateInstance
   UnityEngine_ParticleSystem_o* Rotatelab_Pool_LargeVoxelBreakParticlePool__CreateInstance
   (Rotatelab_Pool_LargeVoxelBreakParticlePool_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Pool_LargeVoxelBreakParticlePool__CreateInstance_1101174(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 auStack_4c [5];
  
  pcVar12 = (char *)(_UNK_01111694 + 0x1111194);
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01111698 + 0x11111a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111169c + 0x11111b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011116a0 + 0x11111c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011116a4 + 0x11111cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011116a8 + 0x11111d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011116ac + 0x11111e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011116b0 + 0x11111f0));
    *pcVar12 = '\x01';
  }
  auStack_4c[0] = 0;
  uStack_50 = 0;
  uVar13 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  piVar15 = *(int **)(_UNK_011116b4 + 0x1111224);
  if (*(int *)(*piVar15 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar8 = UnityEngine_Object__Instantiate_object__14d4dd0
                    (uVar13,uVar7,**(undefined4 **)(_UNK_011116b8 + 0x1111244));
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar9 = UnityEngine_GameObject__get_transform_3601c90(iVar8,0);
  pcVar12 = (char *)(_UNK_011116bc + 0x1111278);
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011116c0 + 0x111128c));
    *pcVar12 = '\x01';
  }
  puVar10 = *(undefined4 **)(**(int **)(_UNK_011116c4 + 0x11112a4) + 0x5c);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localPosition_3613c6c(iVar9,*puVar10,puVar10[1],puVar10[2],0);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar9 = UnityEngine_GameObject__get_transform_3601c90(iVar8,0);
  pcVar12 = (char *)(_UNK_011116c8 + 0x11112f8);
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011116cc + 0x111130c));
    *pcVar12 = '\x01';
  }
  puVar10 = *(undefined4 **)(**(int **)(_UNK_011116d0 + 0x1111324) + 0x5c);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localRotation_361507c
            (iVar9,*puVar10,puVar10[1],puVar10[2],puVar10[3],0);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar9 = UnityEngine_GameObject__GetComponentInChildren_object__14908b0
                    (iVar8,1,**(undefined4 **)(_UNK_011116d4 + 0x1111378));
  iVar11 = UnityEngine_Object__op_Inequality_36018e4(iVar9,0,0);
  if (iVar11 != 0) {
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(int *)(iVar9 + 0x18) = param_1;
    thunk_FUN_00ec5080((int *)(iVar9 + 0x18),param_1);
  }
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__1491068
                    (iVar8,1,**(undefined4 **)(_UNK_011116d8 + 0x11113d4));
  uVar14 = 0;
  while( true ) {
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar8 + 0xc) <= (int)uVar14) break;
    if (*(uint *)(iVar8 + 0xc) <= uVar14) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar11 = ((undefined4 *)(iVar8 + 0x10))[uVar14];
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    auStack_4c[0] = UnityEngine_ParticleSystem__get_main_368ecf8(iVar11,0);
    UnityEngine_ParticleSystem_MainModule__set_simulationSpace_368f4a0(auStack_4c,1,0);
    UnityEngine_ParticleSystem_MainModule__set_playOnAwake_368f4f4(auStack_4c,0,0);
    uVar14 = uVar14 + 1;
  }
  if (*(int *)(*piVar15 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar7 = 0;
  iVar11 = UnityEngine_Object__op_Inequality_36018e4(iVar9,0,0);
  if (iVar11 == 0) {
LAB_011114c4:
    puVar10 = (undefined4 *)(iVar8 + 0x10);
    if (*(int *)(iVar8 + 0xc) == 0) goto LAB_011114d8;
  }
  else {
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar13 = *(undefined4 *)(iVar9 + 0x10);
    if (*(int *)(*piVar15 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar11 = UnityEngine_Object__op_Inequality_36018e4(uVar13,0,0);
    puVar10 = (undefined4 *)(iVar9 + 0x10);
    if (iVar11 == 0) goto LAB_011114c4;
  }
  uVar7 = *puVar10;
LAB_011114d8:
  if (*(int *)(*piVar15 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar9 = UnityEngine_Object__op_Inequality_36018e4(uVar7,0,0);
  if (iVar9 != 0) {
    iVar9 = FUN_00ec388c(**(undefined4 **)(_UNK_011116dc + 0x1111514),*(undefined4 *)(iVar8 + 0xc));
    uVar14 = *(uint *)(iVar8 + 0xc);
    if (0 < (int)uVar14) {
      uVar13 = 0;
      uVar17 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uVar18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uVar19 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      puVar10 = (undefined4 *)(iVar9 + 0x20);
      uVar16 = 0;
      do {
        if (uVar14 <= uVar16) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar11 = *(int *)(iVar8 + 0x10 + uVar16 * 4);
        if (uVar14 <= uVar16) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uStack_50 = UnityEngine_ParticleSystem__get_main_368ecf8(iVar11,0);
        UnityEngine_ParticleSystem_MainModule__get_startSize_368f014(&uStack_70,&uStack_50,0);
        uVar6 = uStack_5c;
        uVar5 = uStack_60;
        uVar4 = uStack_64;
        uVar3 = uStack_68;
        uVar2 = uStack_6c;
        uVar1 = uStack_70;
        uStack_70 = uVar13;
        uStack_6c = uVar17;
        uStack_68 = uVar18;
        uStack_64 = uVar13;
        uStack_60 = uVar17;
        uStack_5c = uVar18;
        uStack_58 = uVar19;
        System_ValueTuple_object__ParticleSystem_MinMaxCurve____ctor_1d56444
                  (&uStack_70,iVar11,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,
                   **(undefined4 **)(_UNK_011116e0 + 0x11115cc));
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar9 + 0xc) <= uVar16) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *puVar10 = uStack_60;
        puVar10[1] = uStack_5c;
        puVar10[2] = uStack_58;
        *(ulonglong *)(puVar10 + -4) = CONCAT44(uStack_6c,uStack_70);
        *(ulonglong *)(puVar10 + -2) = CONCAT44(uStack_64,uStack_68);
        thunk_FUN_00ec5080(puVar10 + -4,0);
        uVar14 = *(uint *)(iVar8 + 0xc);
        uVar16 = uVar16 + 1;
        puVar10 = puVar10 + 7;
      } while ((int)uVar16 < (int)uVar14);
    }
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item_2069314
              (*(int *)(param_1 + 0x20),uVar7,iVar9,**(undefined4 **)(_UNK_011116e4 + 0x111166c));
  }
  return uVar7;
}

