/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$TrySpawnRainbowBlasterAtFront
bool Rotatelab_Scripts_PlaceableManager__TrySpawnRainbowBlasterAtFront (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010539d8) */
/* WARNING: Removing unreachable block (ram,0x010539e4) */
/* WARNING: Removing unreachable block (ram,0x010539e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$TrySpawnRainbowBlasterAtFront
   bool Rotatelab_Scripts_PlaceableManager__TrySpawnRainbowBlasterAtFront
   (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_PlaceableManager__TrySpawnRainbowBlasterAtFront_1043544(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int *piStack_64;
  int iStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar5 = (char *)(_UNK_01053d40 + 0x1053564);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053d44 + 0x1053578));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053d48 + 0x1053584));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053d4c + 0x1053590));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053d50 + 0x105359c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053d54 + 0x10535a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053d58 + 0x10535b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053d5c + 0x10535c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053d60 + 0x10535cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053d64 + 0x10535d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053d68 + 0x10535e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053d6c + 0x10535f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053d70 + 0x10535fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053d74 + 0x1053608));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053d78 + 0x1053614));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053d7c + 0x1053620));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053d80 + 0x105362c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053d84 + 0x1053638));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053d88 + 0x1053644));
    *pcVar5 = '\x01';
  }
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_4c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_3c = 0;
  uStack_40 = 0;
  iStack_44 = 0;
  uStack_58 = 0;
  if (*(int *)(**(int **)(_UNK_01053d8c + 0x1053664) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Pool_ListPool_int___Get_257b518
            (&uStack_70,&iStack_44,**(undefined4 **)(_UNK_01053d90 + 0x1053694));
  uStack_40 = uStack_70;
  puStack_5c = &uStack_40;
  uStack_3c = uStack_6c;
  iStack_60 = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    iVar4 = 0x7fffffff;
    iVar6 = 0;
    do {
      iVar1 = Rotatelab_Scripts_PlaceableManager__IsColumnEligibleForRainbowBlaster_1043dc8
                        (param_1,iVar6);
      if ((iVar1 != 0) &&
         (iVar1 = Rotatelab_Scripts_PlaceableManager__GetRainbowBlasterCount_1043fc8(param_1,iVar6),
         iVar1 <= iVar4)) {
        if (iVar1 < iVar4) {
          if (iStack_44 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          *(undefined4 *)(iStack_44 + 0xc) = 0;
          *(int *)(iStack_44 + 0x10) = *(int *)(iStack_44 + 0x10) + 1;
          iVar4 = iVar1;
        }
        if (iStack_44 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = *(int *)(iStack_44 + 8);
        uVar9 = *(uint *)(iStack_44 + 0xc);
        piVar3 = *(int **)(_UNK_01053d94 + 0x105375c);
        *(int *)(iStack_44 + 0x10) = *(int *)(iStack_44 + 0x10) + 1;
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar9 < *(uint *)(iVar1 + 0xc)) {
          *(uint *)(iStack_44 + 0xc) = uVar9 + 1;
          *(int *)(iVar1 + uVar9 * 4 + 0x10) = iVar6;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_261b948
                    (iStack_44,iVar6,
                     *(undefined4 *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x38));
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x50));
  }
  iVar4 = iStack_44;
  if (iStack_44 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iStack_44 + 0xc) == 0) {
    uVar2 = 0;
  }
  else {
    if (iStack_44 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_Random__Range_35f8b14(0,*(undefined4 *)(iStack_44 + 0xc),0);
    iVar4 = System_Collections_Generic_List_int___get_Item_261b65c
                      (iVar4,uVar2,**(undefined4 **)(_UNK_01053d98 + 0x1053804));
    Rotatelab_Scripts_PlaceableManager__CompleteCurrentShiftPlaceablesAnimationImmediately_10441a0
              (param_1,iVar4);
    if (*(int *)(param_1 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_70,*(int *)(param_1 + 0xb4),**(undefined4 **)(_UNK_01053d9c + 0x1053838));
    fVar12 = _UNK_01053c64;
    uStack_58 = uStack_70;
    uStack_54 = uStack_6c;
    uStack_50 = uStack_68;
    piStack_4c = piStack_64;
    puVar7 = *(undefined4 **)(_UNK_01053da0 + 0x1053870);
    while (iVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                             (&uStack_58,*puVar7), piVar3 = piStack_4c, iVar6 != 0) {
      if (piStack_4c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar6 = Rotatelab_Scripts_BasePlaceableController__get_Column_1030400(piStack_4c,0);
      if (iVar6 == iVar4) {
        if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(piVar3,0);
        if (iVar6 == 0) {
          if (piVar3 == (int *)0x0) goto LAB_01053948;
          iVar6 = *piVar3;
          uVar9 = (uint)*(byte *)(**(int **)(_UNK_01053da4 + 0x10538e4) + 0xb8);
          if (((uVar9 <= *(byte *)(iVar6 + 0xb8)) &&
              (*(int *)(*(int *)(iVar6 + 100) + uVar9 * 4 + -4) ==
               **(int **)(_UNK_01053da4 + 0x10538e4))) &&
             ((**(code **)(iVar6 + 0x150))(piVar3,2,*(undefined4 *)(iVar6 + 0x154)),
             *(char *)((int)piVar3 + 0xc2) == '\0')) {
            (**(code **)(*piVar3 + 0x110))(piVar3,0,*(undefined4 *)(*piVar3 + 0x114));
          }
        }
        else if (piVar3 == (int *)0x0) {
LAB_01053948:
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = piVar3[8];
        fVar10 = (float)VectorSignedToFloat(piVar3[7],(byte)(in_fpscr >> 0x16) & 3);
        piVar3[8] = iVar6 + 1;
        fVar11 = (float)VectorSignedToFloat(iVar6 + 1,(byte)(in_fpscr >> 0x16) & 3);
        Rotatelab_Scripts_BasePlaceableController__LocalMove_10306f0
                  (&uStack_70,piVar3,
                   *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x48) * fVar10,
                   *(float *)(param_1 + 0x58) + fVar12,
                   *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x4c) * fVar11,0x3ec00000,0,0,0
                   ,0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (&uStack_58,**(undefined4 **)(_UNK_01053da8 + 0x10539c8));
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01053dac + 0x10539fc));
    Rotatelab_BlasterData___ctor_1070e88(iVar6,0);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar6 + 0xc) = 0;
    *(undefined4 *)(iVar6 + 0x10) = 0x16;
    uVar2 = Rotatelab_Scripts_PlaceableManager__get_RainbowBlasterBulletCount_1040eec();
    puVar7 = *(undefined4 **)(_UNK_01053db0 + 0x1053a34);
    *(undefined4 *)(iVar6 + 0x18) = uVar2;
    uVar2 = thunk_FUN_00f00cdc(*puVar7);
    puVar8 = *(undefined4 **)(_UNK_01053db4 + 0x1053a50);
    System_Collections_Generic_List_object____ctor_267d274(uVar2,*puVar8);
    *(undefined4 *)(iVar6 + 0x34) = uVar2;
    thunk_FUN_00ec5080((undefined4 *)(iVar6 + 0x34),uVar2);
    uVar2 = thunk_FUN_00f00cdc(*puVar7);
    System_Collections_Generic_List_object____ctor_267d274(uVar2,*puVar8);
    *(undefined4 *)(iVar6 + 0x38) = uVar2;
    thunk_FUN_00ec5080((undefined4 *)(iVar6 + 0x38),uVar2);
    fVar10 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
    fVar11 = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x4c) * fVar12;
    fVar12 = *(float *)(param_1 + 0x58) + fVar12;
    fVar10 = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x48) * fVar10;
    iVar4 = Rotatelab_Scripts_PlaceableManager__SpawnBlaster_10429b0
                      (param_1,iVar6,fVar10,fVar12,fVar11,iVar4,0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar4 + 0x24) = **(undefined4 **)(_UNK_01053db8 + 0x1053af8);
    thunk_FUN_00ec5080();
    iVar6 = *(int *)(param_1 + 0x90);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(iVar6 + 8);
    uVar9 = *(uint *)(iVar6 + 0xc);
    piVar3 = *(int **)(_UNK_01053dbc + 0x1053b34);
    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar9 < *(uint *)(iVar1 + 0xc)) {
      *(uint *)(iVar6 + 0xc) = uVar9 + 1;
      piVar3 = (int *)(iVar1 + uVar9 * 4 + 0x10);
      *piVar3 = iVar4;
      thunk_FUN_00ec5080(piVar3,iVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar6,iVar4,*(undefined4 *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x38));
    }
    Rotatelab_Scripts_BlasterController__RefreshAllConnectedBlasters_103252c(iVar4,0);
    Rotatelab_Scripts_BlasterController__RefreshAllChainedBlasters_1032790(iVar4,0);
    Rotatelab_Scripts_PlaceableManager__AnimateRainbowBlasterEntrance_104427c
              (param_1,iVar4,fVar10,fVar12,fVar11,*(undefined4 *)(param_1 + 0xa0),
               *(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8));
    piVar3 = *(int **)(_UNK_01053dc0 + 0x1053bd0);
    iVar4 = *piVar3;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar3;
    }
    iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x48);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = 1;
    Rotatelab_GameAction__Raise_fc08b8(iVar4,0);
  }
  Rotatelab_Pool_PooledObject_object___Dispose_186ffc8
            (puStack_5c,**(undefined4 **)(_UNK_01053dc4 + 0x1053c14));
  if (iStack_60 != 0) {
    FUN_00ec3a6c();
  }
  return uVar2;
}

