/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$ChooseBlaster
Rotatelab_Scripts_BlasterController_o* Rotatelab_Scripts_AutoPlayerBot__ChooseBlaster (Rotatelab_Scripts_AutoPlayerBot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$ChooseBlaster
   Rotatelab_Scripts_BlasterController_o* Rotatelab_Scripts_AutoPlayerBot__ChooseBlaster
   (Rotatelab_Scripts_AutoPlayerBot_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_AutoPlayerBot__ChooseBlaster_ff2304(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01002700 + 0x100231c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002704 + 0x1002330));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002708 + 0x100233c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100270c + 0x1002348));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002710 + 0x1002354));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002714 + 0x1002360));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002718 + 0x100236c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100271c + 0x1002378));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002720 + 0x1002384));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002724 + 0x1002390));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002728 + 0x100239c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100272c + 0x10023a8));
    *pcVar8 = '\x01';
  }
  iVar9 = *(int *)(param_1 + 0x30);
  uStack_28 = 0;
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(iVar9 + 0xc);
  *(undefined4 *)(iVar9 + 0xc) = 0;
  *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
  if (0 < iVar7) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar9 + 8),0,iVar7,0);
  }
  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = 0;
  uVar1 = **(undefined4 **)(_UNK_01002730 + 0x1002410);
  *(undefined4 *)(iVar9 + 0xc) = 0;
  *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
  iVar9 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(uVar1);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar9 = *(int *)(iVar9 + 0xb4);
  puVar10 = *(undefined4 **)(_UNK_01002734 + 0x1002444);
  do {
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar9 + 0xc) <= iVar7) {
      if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(param_1 + 0x30) + 0xc) == 0) {
        uVar1 = 0;
      }
      else {
        if (((0 < *(int *)(param_1 + 0x14)) && (-1 < *(int *)(param_1 + 0x4c))) &&
           (*(int *)(param_1 + 0x14) <= *(int *)(param_1 + 0x50))) {
          Rotatelab_Scripts_AutoPlayerBot__DropOverusedColumn_ff2750(param_1);
        }
        fVar4 = (float)UnityEngine_Random__get_value_35f8bbc(0);
        if (fVar4 <= *(float *)(param_1 + 0x10)) {
          uVar1 = Rotatelab_Scripts_AutoPlayerBot__PickHighestScoringIndex_ff28e4(param_1);
        }
        else {
          if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar1 = UnityEngine_Random__Range_35f8b14
                            (0,*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xc),0);
        }
        if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar5 = System_Collections_Generic_List_int___get_Item_261b65c
                          (*(int *)(param_1 + 0x34),uVar1,
                           **(undefined4 **)(_UNK_01002748 + 0x10026c4));
        *(undefined4 *)(param_1 + 0x54) = uVar5;
        if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar1 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0x30),uVar1,
                           **(undefined4 **)(_UNK_0100274c + 0x10026f0));
      }
      return uVar1;
    }
    iVar2 = System_Collections_Generic_List_object___get_Item_267d814(iVar9,iVar7,*puVar10);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(iVar2,0);
    if ((iVar3 == 0) &&
       (iVar3 = Rotatelab_Scripts_PlaceableManager__TryGetBlasterFromPlaceable_1046d14
                          (iVar2,&uStack_28,0), iVar3 != 0)) {
      iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01002738 + 0x10024b4));
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = Rotatelab_Scripts_DockManager__CanPlaceBlaster_100597c(iVar3,uStack_28,0);
      if (iVar3 != 0) {
        iVar3 = *(int *)(param_1 + 0x30);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar11 = *(int *)(iVar3 + 8);
        uVar12 = *(uint *)(iVar3 + 0xc);
        piVar6 = *(int **)(_UNK_0100273c + 0x1002518);
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
        if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar12 < *(uint *)(iVar11 + 0xc)) {
          *(uint *)(iVar3 + 0xc) = uVar12 + 1;
          puVar10 = (undefined4 *)(iVar11 + uVar12 * 4 + 0x10);
          *puVar10 = uStack_28;
          thunk_FUN_00ec5080(puVar10,uStack_28);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_267dae0
                    (iVar3,uStack_28,
                     *(undefined4 *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38));
        }
        iVar3 = *(int *)(param_1 + 0x34);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar1 = Rotatelab_Scripts_BasePlaceableController__get_Column_1030400(iVar2,0);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = *(int *)(iVar3 + 8);
        uVar12 = *(uint *)(iVar3 + 0xc);
        piVar6 = *(int **)(_UNK_01002740 + 0x10025b4);
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar12 < *(uint *)(iVar2 + 0xc)) {
          *(uint *)(iVar3 + 0xc) = uVar12 + 1;
          *(undefined4 *)(iVar2 + uVar12 * 4 + 0x10) = uVar1;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_261b948
                    (iVar3,uVar1,*(undefined4 *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38));
        }
        puVar10 = *(undefined4 **)(_UNK_01002744 + 0x1002608);
      }
    }
    iVar7 = iVar7 + 1;
  } while( true );
}

