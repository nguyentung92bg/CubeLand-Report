/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer$$Initialize
void Rotatelab_Scripts_ColorBoxPlankLayer__Initialize (Rotatelab_Scripts_ColorBoxPlankLayer_o* __this, UnityEngine_Bounds_o bounds, int32_t colorType, int32_t maxHp, Rotatelab_HpTextData_array* hpTexts, float coverScale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer$$Initialize
   void Rotatelab_Scripts_ColorBoxPlankLayer__Initialize (Rotatelab_Scripts_ColorBoxPlankLayer_o*
   __this, UnityEngine_Bounds_o bounds, int32_t colorType, int32_t maxHp,
   Rotatelab_HpTextData_array* hpTexts, float coverScale, const MethodInfo* method); */

int * Rotatelab_Scripts_ColorBoxPlankLayer__Initialize_ffc820
                (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5,
                float param_6,float param_7,undefined4 param_8,undefined4 param_9,int param_10,
                undefined4 param_11)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  float *pfVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  bool bVar19;
  
  pcVar9 = (char *)(_UNK_0100d0fc + 0x100c858);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d100 + 0x100c884));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d104 + 0x100c890));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d108 + 0x100c89c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d10c + 0x100c8a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d110 + 0x100c8b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d114 + 0x100c8c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d118 + 0x100c8cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d11c + 0x100c8d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d120 + 0x100c8e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d124 + 0x100c8f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d128 + 0x100c8fc));
    *pcVar9 = '\x01';
  }
  puVar2 = *(undefined4 **)(_UNK_0100d12c + 0x100c910);
  *(undefined4 *)(param_1 + 0x40) = param_11;
  *(undefined4 *)(param_1 + 0x30) = param_8;
  iVar3 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar2);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = Rotatelab_Scripts_ColorBoxColorDataSO__GetDataByType_ff4f68(iVar3,param_8);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar3 + 0x10);
  thunk_FUN_00ec5080();
  puVar2 = *(undefined4 **)(_UNK_0100d130 + 0x100c97c);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar3 = FUN_00ec388c(*puVar2,6);
  piVar4 = (int *)(param_1 + 0x14);
  *piVar4 = iVar3;
  thunk_FUN_00ec5080();
  iVar18 = -6;
  iVar3 = 0x10;
  puVar2 = *(undefined4 **)(_UNK_0100d134 + 0x100c9b4);
  puVar13 = *(undefined4 **)(_UNK_0100d138 + 0x100c9bc);
  do {
    piVar11 = (int *)*piVar4;
    iVar5 = thunk_FUN_00f00cdc(*puVar2);
    System_Collections_Generic_List_object____ctor_267d274(iVar5,*puVar13);
    if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((iVar5 != 0) &&
       (iVar6 = thunk_FUN_00f00bc8(iVar5,*(undefined4 *)(*piVar11 + 0x20)), iVar6 == 0)) {
      uVar7 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar7,0);
    }
    if ((uint)piVar11[3] <= iVar18 + 6U) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(int *)((int)piVar11 + iVar3) = iVar5;
    thunk_FUN_00ec5080((int *)((int)piVar11 + iVar3),iVar5);
    iVar3 = iVar3 + 4;
    bVar19 = iVar18 != -1;
    iVar18 = iVar18 + 1;
  } while (bVar19);
  uVar7 = thunk_FUN_00f00cdc(*puVar2);
  System_Collections_Generic_List_object____ctor_267d274(uVar7,*puVar13);
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  *puVar2 = uVar7;
  thunk_FUN_00ec5080(puVar2,uVar7);
  Rotatelab_Scripts_ColorBoxPlankLayer__BuildCoverage_ffec90
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  uVar7 = FUN_00ec388c(**(undefined4 **)(_UNK_0100d13c + 0x100ca98),6);
  *(undefined4 *)(param_1 + 0x18) = uVar7;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x18),uVar7);
  puVar13 = *(undefined4 **)(_UNK_0100d140 + 0x100cac0);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar3 = FUN_00ec388c(*puVar13,6);
  pcVar9 = (char *)(_UNK_0100d144 + 0x100cae0);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d148 + 0x100caf4));
    *pcVar9 = '\x01';
  }
  iVar18 = _UNK_0100d150;
  piVar11 = *(int **)(_UNK_0100d14c + 0x100cb0c);
  iVar5 = *(int *)(*piVar11 + 0x5c);
  uVar12 = *(undefined4 *)(iVar5 + 0x1c);
  uVar7 = *(undefined4 *)(iVar5 + 0x20);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar5 + 0x18);
  *(undefined4 *)(iVar3 + 0x14) = uVar12;
  *(undefined4 *)(iVar3 + 0x18) = uVar7;
  if (*(char *)(iVar18 + 0x100cb48) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d154 + 0x100cb64));
    *(char *)(iVar18 + 0x100cb48) = '\x01';
  }
  iVar18 = _UNK_0100d158;
  iVar5 = *(int *)(*piVar11 + 0x5c);
  uVar12 = *(undefined4 *)(iVar5 + 0x28);
  uVar7 = *(undefined4 *)(iVar5 + 0x2c);
  if (*(uint *)(iVar3 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar5 + 0x24);
  *(undefined4 *)(iVar3 + 0x20) = uVar12;
  *(undefined4 *)(iVar3 + 0x24) = uVar7;
  if (*(char *)(iVar18 + 0x100cba0) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d15c + 0x100cbbc));
    *(char *)(iVar18 + 0x100cba0) = '\x01';
  }
  iVar18 = _UNK_0100d160;
  iVar5 = *(int *)(*piVar11 + 0x5c);
  uVar12 = *(undefined4 *)(iVar5 + 0x40);
  uVar7 = *(undefined4 *)(iVar5 + 0x44);
  if (*(uint *)(iVar3 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(iVar5 + 0x3c);
  *(undefined4 *)(iVar3 + 0x2c) = uVar12;
  *(undefined4 *)(iVar3 + 0x30) = uVar7;
  if (*(char *)(iVar18 + 0x100cbf8) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d164 + 0x100cc14));
    *(char *)(iVar18 + 0x100cbf8) = '\x01';
  }
  iVar18 = _UNK_0100d168;
  iVar5 = *(int *)(*piVar11 + 0x5c);
  uVar12 = *(undefined4 *)(iVar5 + 0x34);
  uVar7 = *(undefined4 *)(iVar5 + 0x38);
  if (*(uint *)(iVar3 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(iVar5 + 0x30);
  *(undefined4 *)(iVar3 + 0x38) = uVar12;
  *(undefined4 *)(iVar3 + 0x3c) = uVar7;
  if (*(char *)(iVar18 + 0x100cc50) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d16c + 0x100cc6c));
    *(char *)(iVar18 + 0x100cc50) = '\x01';
  }
  iVar18 = _UNK_0100d170;
  iVar5 = *(int *)(*piVar11 + 0x5c);
  uVar12 = *(undefined4 *)(iVar5 + 0x4c);
  uVar7 = *(undefined4 *)(iVar5 + 0x50);
  if (*(uint *)(iVar3 + 0xc) < 5) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(iVar5 + 0x48);
  *(undefined4 *)(iVar3 + 0x44) = uVar12;
  *(undefined4 *)(iVar3 + 0x48) = uVar7;
  if (*(char *)(iVar18 + 0x100cca8) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d174 + 0x100ccc4));
    *(char *)(iVar18 + 0x100cca8) = '\x01';
  }
  iVar18 = *(int *)(*piVar11 + 0x5c);
  uVar7 = *(undefined4 *)(iVar18 + 0x58);
  uVar12 = *(undefined4 *)(iVar18 + 0x5c);
  if (*(uint *)(iVar3 + 0xc) < 6) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(iVar18 + 0x54);
  *(undefined4 *)(iVar3 + 0x50) = uVar7;
  *(undefined4 *)(iVar3 + 0x54) = uVar12;
  iVar18 = FUN_00ec388c(**(undefined4 **)(_UNK_0100d178 + 0x100cd04),6);
  if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar8 = *(uint *)(iVar18 + 0xc);
  if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar18 + 0x10) = 0;
  *(float *)(iVar18 + 0x14) = param_6;
  *(undefined4 *)(iVar18 + 0x18) = 0;
  if (uVar8 < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar18 + 0x24) = 0;
  *(float *)(iVar18 + 0x20) = -param_6;
  *(undefined4 *)(iVar18 + 0x1c) = 0;
  if (uVar8 < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(float *)(iVar18 + 0x28) = param_5;
  *(undefined4 *)(iVar18 + 0x2c) = 0;
  *(undefined4 *)(iVar18 + 0x30) = 0;
  if (uVar8 < 4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar18 + 0x38) = 0;
  *(undefined4 *)(iVar18 + 0x3c) = 0;
  *(float *)(iVar18 + 0x34) = -param_5;
  if (uVar8 < 5) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar18 + 0x40) = 0;
  *(undefined4 *)(iVar18 + 0x44) = 0;
  *(float *)(iVar18 + 0x48) = param_7;
  if (uVar8 < 6) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(float *)(iVar18 + 0x54) = -param_7;
  *(undefined4 *)(iVar18 + 0x4c) = 0;
  *(undefined4 *)(iVar18 + 0x50) = 0;
  iVar5 = FUN_00ec388c(**(undefined4 **)(_UNK_0100d17c + 0x100cdf8),6);
  fVar1 = _UNK_0100d0f8;
  if ((param_10 != 0) && (uVar8 = *(uint *)(param_10 + 0xc), 0 < (int)uVar8)) {
    uVar14 = 0;
    do {
      if (uVar8 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar6 = *(int *)(param_10 + uVar14 * 4 + 0x10);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar8 = 0;
      pfVar10 = (float *)(iVar3 + 0x10);
      do {
        if (*(uint *)(iVar3 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        if (fVar1 < *(float *)(iVar6 + 0x18) * pfVar10[1] + *(float *)(iVar6 + 0x14) * *pfVar10 +
                    *(float *)(iVar6 + 0x1c) * pfVar10[2]) {
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar5 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          *(undefined1 *)(iVar5 + 0x10 + uVar8) = 1;
          break;
        }
        uVar8 = uVar8 + 1;
        pfVar10 = pfVar10 + 3;
      } while (uVar8 != 6);
      uVar8 = *(uint *)(param_10 + 0xc);
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar8);
  }
  uVar8 = 0;
  puVar13 = (undefined4 *)(iVar18 + 0x18);
  while( true ) {
    iVar3 = *(int *)(param_1 + 0x14);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar3 = *(int *)(iVar3 + uVar8 * 4 + 0x10);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(int *)(param_1 + 0x2c) = *(int *)(iVar3 + 0xc) + *(int *)(param_1 + 0x2c);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar3 = *piVar4;
    if (*(char *)(iVar5 + 0x10 + uVar8) != '\0') {
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar3 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar7 = *(undefined4 *)(iVar3 + uVar8 * 4 + 0x10);
      if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar18 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar15 = puVar13[-2];
      uVar17 = *puVar2;
      uVar16 = *puVar13;
      uVar12 = puVar13[-1];
      if (*(int *)(**(int **)(_UNK_0100d180 + 0x100cfbc) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Scripts_ColorBoxPlankLayer__ExtractCenterPlanksTo_fff580
                (uVar7,uVar15,uVar12,uVar16,uVar17);
      iVar3 = *piVar4;
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar7 = *(undefined4 *)(iVar3 + uVar8 * 4 + 0x10);
    if (*(int *)(**(int **)(_UNK_0100d184 + 0x100d034) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Extensions__Shuffle_object__1488a20
              (uVar7,**(undefined4 **)(_UNK_0100d188 + 0x100d054));
    iVar3 = *(int *)(param_1 + 0x14);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar3 = *(int *)(iVar3 + uVar8 * 4 + 0x10);
    if (iVar3 == 0) break;
    uVar8 = uVar8 + 1;
    puVar13 = puVar13 + 3;
    *(int *)(param_1 + 0x24) = *(int *)(iVar3 + 0xc) + *(int *)(param_1 + 0x24);
    if (uVar8 == 6) {
      piVar4 = (int *)*puVar2;
      if (*(int *)(**(int **)(_UNK_0100d18c + 0x100d0bc) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar3 = **(int **)(_UNK_0100d190 + 0x100d0e0);
      if ((*(int *)(iVar3 + 0x1c) == 0) &&
         (FUN_00ec37c0(*(undefined4 *)(_UNK_01498adc + 0x1498a44)), *(int *)(iVar3 + 0x1c) == 0)) {
        FUN_00efd7c4(iVar3);
      }
      if (*(int *)(**(int **)(_UNK_01498ae0 + 0x1498a64) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Extensions__Shuffle_object__14886b0
                (piVar4,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 4));
      iVar3 = **(int **)(iVar3 + 0x1c);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = FUN_00efd768();
      }
      piVar11 = (int *)0x0;
      if (piVar4 != (int *)0x0) {
        if (((uint)*(byte *)(iVar3 + 0xb8) <= (uint)*(byte *)(*piVar4 + 0xb8)) &&
           (piVar11 = piVar4,
           *(int *)(*(int *)(*piVar4 + 100) + (uint)*(byte *)(iVar3 + 0xb8) * 4 + -4) != iVar3)) {
          piVar11 = (int *)0x0;
        }
      }
      return piVar11;
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

