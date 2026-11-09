/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$ShiftPlaceablesBehind
void Rotatelab_Scripts_PlaceableManager__ShiftPlaceablesBehind (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_Scripts_BasePlaceableController_o* leavingPlaceable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$ShiftPlaceablesBehind
   void Rotatelab_Scripts_PlaceableManager__ShiftPlaceablesBehind
   (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_Scripts_BasePlaceableController_o*
   leavingPlaceable, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__ShiftPlaceablesBehind_1044bdc(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_64;
  undefined4 *puStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar6 = (char *)(_UNK_0105518c + 0x1054c00);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01055190 + 0x1054c14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01055194 + 0x1054c20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01055198 + 0x1054c2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105519c + 0x1054c38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010551a0 + 0x1054c44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010551a4 + 0x1054c50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010551a8 + 0x1054c5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010551ac + 0x1054c68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010551b0 + 0x1054c74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010551b4 + 0x1054c80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010551b8 + 0x1054c8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010551bc + 0x1054c98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010551c0 + 0x1054ca4));
    *pcVar6 = '\x01';
  }
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_3c = 0;
  uStack_40 = 0;
  iStack_44 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = Rotatelab_Scripts_BasePlaceableController__get_Column_1030400(param_2,0);
  Rotatelab_Scripts_PlaceableManager__CompleteCurrentShiftPlaceablesAnimationImmediately_10441a0
            (param_1,uVar1);
  if (*(int *)(**(int **)(_UNK_010551c4 + 0x1054d00) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Pool_ListPool_object___Get_257b7b0
            (&uStack_78,&iStack_44,**(undefined4 **)(_UNK_010551c8 + 0x1054d20));
  uStack_40 = uStack_78;
  puStack_60 = &uStack_40;
  uStack_3c = uStack_74;
  uStack_64 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  while( true ) {
    iVar4 = iVar4 + 1;
    uVar10 = *(undefined4 *)(param_1 + 0xb4);
    iVar2 = **(int **)(_UNK_010551cc + 0x1054d6c);
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = **(int **)(_UNK_010551d0 + 0x1054d8c);
    }
    puVar5 = *(undefined4 **)(iVar2 + 0x5c);
    iVar7 = puVar5[2];
    if (iVar7 == 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        puVar5 = *(undefined4 **)(**(int **)(_UNK_010551d4 + 0x1054db8) + 0x5c);
      }
      uVar8 = *puVar5;
      iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010551d8 + 0x1054dcc));
      System_Func_object__Vector2Int__bool____ctor_239f388
                (iVar7,uVar8,**(undefined4 **)(_UNK_010551dc + 0x1054de0),0);
      piVar3 = (int *)(*(int *)(**(int **)(_UNK_010551e0 + 0x1054dfc) + 0x5c) + 8);
      *piVar3 = iVar7;
      thunk_FUN_00ec5080(piVar3,iVar7);
    }
    if (*(int *)(**(int **)(_UNK_010551e4 + 0x1054e18) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = Rotatelab_Extensions__TryFind_object__Vector2Int__1489cf0
                      (uVar10,uVar1,iVar4,iVar7,&uStack_5c,
                       **(undefined4 **)(_UNK_010551e8 + 0x1054e34));
    if (iVar2 == 0) break;
    if (iStack_44 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(iStack_44 + 8);
    uVar9 = *(uint *)(iStack_44 + 0xc);
    piVar3 = *(int **)(_UNK_010551ec + 0x1054e8c);
    *(int *)(iStack_44 + 0x10) = *(int *)(iStack_44 + 0x10) + 1;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar9 < *(uint *)(iVar2 + 0xc)) {
      *(uint *)(iStack_44 + 0xc) = uVar9 + 1;
      puVar5 = (undefined4 *)(iVar2 + uVar9 * 4 + 0x10);
      *puVar5 = uStack_5c;
      thunk_FUN_00ec5080(puVar5,uStack_5c);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iStack_44,uStack_5c,
                 *(undefined4 *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x38));
    }
  }
  PrimeTween_Sequence__Create_2cef1e0(&uStack_78,1,0,1,0,0,0);
  uStack_58 = uStack_78;
  uStack_54 = uStack_74;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  if (iStack_44 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iStack_44 + 0xc);
  if (-1 < iVar4 + -1) {
    puVar5 = *(undefined4 **)(_UNK_010551f0 + 0x1054f48);
    do {
      if (iStack_44 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = iVar4 + -1;
      uVar1 = System_Collections_Generic_List_object___get_Item_267d814(iStack_44,iVar4,*puVar5);
      Rotatelab_Scripts_PlaceableManager__ShiftRearPlaceableForwards_1045214
                (&uStack_78,param_1,uVar1,param_2);
      PrimeTween_Sequence__Group_2cf164c
                (&uStack_78,&uStack_58,uStack_78,uStack_74,uStack_70,uStack_6c,0);
    } while (0 < iVar4);
  }
  iVar4 = **(int **)(_UNK_010551f4 + 0x1054fac);
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = **(int **)(_UNK_010551f8 + 0x1054fd4);
  }
  puVar5 = *(undefined4 **)(iVar4 + 0x5c);
  iVar2 = puVar5[3];
  if (iVar2 == 0) {
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      puVar5 = *(undefined4 **)(**(int **)(_UNK_010551fc + 0x1055000) + 0x5c);
    }
    uVar1 = *puVar5;
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01055200 + 0x1055014));
    System_Action___ctor_2b10bac(iVar2,uVar1,**(undefined4 **)(_UNK_01055204 + 0x1055028),0);
    piVar3 = (int *)(*(int *)(**(int **)(_UNK_01055208 + 0x1055044) + 0x5c) + 0xc);
    *piVar3 = iVar2;
    thunk_FUN_00ec5080(piVar3,iVar2);
  }
  PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_78,&uStack_58,iVar2,0,0);
  iVar4 = *(int *)(param_1 + 0xc0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar9 = Rotatelab_Scripts_BasePlaceableController__get_Column_1030400(param_2,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar9 < *(uint *)(iVar4 + 0xc)) {
    iVar4 = iVar4 + uVar9 * 0x10;
    *(ulonglong *)(iVar4 + 0x10) = CONCAT44(uStack_54,uStack_58);
    *(ulonglong *)(iVar4 + 0x18) = CONCAT44(uStack_4c,uStack_50);
    thunk_FUN_00ec5080(iVar4 + 0x18,0);
    Rotatelab_Pool_PooledObject_object___Dispose_186ffc8
              (&uStack_40,**(undefined4 **)(_UNK_0105520c + 0x10550d8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

