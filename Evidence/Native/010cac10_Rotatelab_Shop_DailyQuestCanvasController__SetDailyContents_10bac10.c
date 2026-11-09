/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$SetDailyContents
void Rotatelab_Shop_DailyQuestCanvasController__SetDailyContents (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$SetDailyContents
   void Rotatelab_Shop_DailyQuestCanvasController__SetDailyContents
   (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestCanvasController__SetDailyContents_10bac10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  
  pcVar9 = (char *)(_UNK_010cb67c + 0x10cac28);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb680 + 0x10cac3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb684 + 0x10cac48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb688 + 0x10cac54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb68c + 0x10cac60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb690 + 0x10cac6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb694 + 0x10cac78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb698 + 0x10cac84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb69c + 0x10cac90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb6a0 + 0x10cac9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb6a4 + 0x10caca8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb6a8 + 0x10cacb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb6ac + 0x10cacc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb6b0 + 0x10caccc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb6b4 + 0x10cacd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb6b8 + 0x10cace4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb6bc + 0x10cacf0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb6c0 + 0x10cacfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb6c4 + 0x10cad08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb6c8 + 0x10cad14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb6cc + 0x10cad20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb6d0 + 0x10cad2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb6d4 + 0x10cad38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb6d8 + 0x10cad44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb6dc + 0x10cad50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb6e0 + 0x10cad5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb6e4 + 0x10cad68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb6e8 + 0x10cad74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb6ec + 0x10cad80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cb6f0 + 0x10cad8c));
    *pcVar9 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010cb6f4 + 0x10cada0));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar1 + 8) = param_1;
  thunk_FUN_00ec5080((int *)(iVar1 + 8),param_1);
  iVar10 = *(int *)(param_1 + 0x70);
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(iVar10 + 0xc);
  *(undefined4 *)(iVar10 + 0xc) = 0;
  *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
  if (0 < iVar8) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar10 + 8),0,iVar8,0);
  }
  iVar10 = Rotatelab_Shop_DailyQuestCanvasController__get_SavedDailyQuests_10b93cc();
  if (iVar10 != 0) {
    uVar14 = 0;
    iVar8 = System_String__IsNullOrEmpty_2a0a844(iVar10,0);
    if (iVar8 == 0) {
      iVar1 = System_String__Split_2a0df50(iVar10,0x7c,0,0);
      while( true ) {
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar14) {
          return;
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar10 = *(int *)(iVar1 + 0x10 + uVar14 * 4);
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar10 = System_String__Split_2a0df50(iVar10,0x2d,0,0);
        iVar13 = *(int *)(param_1 + 0x70);
        iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010cb75c + 0x10cb51c));
        System_Object___ctor_2bb93bc(iVar8,0);
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar10 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        uVar2 = *(undefined4 *)(iVar10 + 0x10);
        if (*(int *)(**(int **)(_UNK_010cb760 + 0x10cb554) + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar2 = System_Convert__ToInt32_2b1ddb4(uVar2,0);
        if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar4 = *(uint *)(iVar10 + 0xc);
        *(undefined4 *)(iVar8 + 8) = uVar2;
        if (uVar4 < 2) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        uVar2 = System_Convert__ToInt32_2b1ddb4(*(undefined4 *)(iVar10 + 0x14),0);
        uVar4 = *(uint *)(iVar10 + 0xc);
        *(undefined4 *)(iVar8 + 0xc) = uVar2;
        if (uVar4 < 3) break;
        uVar2 = System_Convert__ToInt32_2b1ddb4(*(undefined4 *)(iVar10 + 0x18),0);
        uVar4 = *(uint *)(iVar10 + 0xc);
        *(undefined4 *)(iVar8 + 0x10) = uVar2;
        if (uVar4 < 4) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar10 = System_Convert__ToInt32_2b1ddb4(*(undefined4 *)(iVar10 + 0x1c),0);
        *(bool *)(iVar8 + 0x14) = iVar10 == 1;
        if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar10 = *(int *)(iVar13 + 8);
        uVar4 = *(uint *)(iVar13 + 0xc);
        piVar6 = *(int **)(_UNK_010cb764 + 0x10cb620);
        *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + 1;
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar4 < *(uint *)(iVar10 + 0xc)) {
          *(uint *)(iVar13 + 0xc) = uVar4 + 1;
          piVar6 = (int *)(iVar10 + uVar4 * 4 + 0x10);
          *piVar6 = iVar8;
          thunk_FUN_00ec5080(piVar6,iVar8);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_267dae0
                    (iVar13,iVar8,*(undefined4 *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38))
          ;
        }
        uVar14 = uVar14 + 1;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar10 = *(int *)(*(int *)(param_1 + 0x5c) + 0x18);
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar10 = *(int *)(iVar10 + 0xc);
  if (-1 < iVar10 + -1) {
    do {
      iVar8 = *(int *)(param_1 + 0x70);
      uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010cb6f8 + 0x10cae60));
      System_Object___ctor_2bb93bc(uVar2,0);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar13 = *(int *)(iVar8 + 8);
      uVar14 = *(uint *)(iVar8 + 0xc);
      piVar6 = *(int **)(_UNK_010cb6fc + 0x10caea0);
      *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar14 < *(uint *)(iVar13 + 0xc)) {
        *(uint *)(iVar8 + 0xc) = uVar14 + 1;
        puVar3 = (undefined4 *)(iVar13 + uVar14 * 4 + 0x10);
        *puVar3 = uVar2;
        thunk_FUN_00ec5080(puVar3,uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (iVar8,uVar2,*(undefined4 *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38));
      }
      iVar10 = iVar10 + -1;
    } while (0 < iVar10);
  }
  if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar11 = *(undefined4 *)(*(int *)(param_1 + 0x70) + 0xc);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010cb700 + 0x10caf14));
  System_Collections_Generic_List_Int32Enum____ctor_261dbf8
            (uVar2,uVar11,**(undefined4 **)(_UNK_010cb704 + 0x10caf30));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0xc),uVar2);
  iVar10 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x70) + 0xc) <= iVar10) {
      if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar11 = *(undefined4 *)(*(int *)(param_1 + 0x70) + 0xc);
      uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010cb72c + 0x10cb1b0));
      System_Collections_Generic_List_object____ctor_267d2e8
                (uVar2,uVar11,**(undefined4 **)(_UNK_010cb730 + 0x10cb1cc));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(undefined4 *)(iVar1 + 0x10) = uVar2;
      thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),uVar2);
      iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010cb734 + 0x10cb1fc));
      System_Object___ctor_2bb93bc(iVar10,0);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(int *)(iVar10 + 0xc) = iVar1;
      thunk_FUN_00ec5080((int *)(iVar10 + 0xc),iVar1);
      if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x70) + 0xc) + -1;
      *(int *)(iVar10 + 8) = iVar1;
      if (-1 < iVar1) {
        do {
          iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010cb738 + 0x10cb254));
          System_Object___ctor_2bb93bc(iVar1,0);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          piVar6 = (int *)(iVar1 + 0xc);
          *piVar6 = iVar10;
          thunk_FUN_00ec5080(piVar6,iVar10);
          if (*(int *)(param_1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar8 = *(int *)(*(int *)(param_1 + 0x5c) + 0x18);
          if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar2 = System_Collections_Generic_List_Int32Enum___get_Item_261e124
                            (iVar8,*(undefined4 *)(*piVar6 + 8),
                             **(undefined4 **)(_UNK_010cb73c + 0x10cb2c8));
          iVar8 = *(int *)(param_1 + 0x5c);
          *(undefined4 *)(iVar1 + 8) = uVar2;
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar11 = *(undefined4 *)(iVar8 + 0x10);
          uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010cb740 + 0x10cb2f0));
          System_Predicate_object____ctor_1876380
                    (uVar2,iVar1,**(undefined4 **)(_UNK_010cb744 + 0x10cb310),0);
          if (*(int *)(**(int **)(_UNK_010cb748 + 0x10cb324) + 0x74) == 0) {
            FUN_00ec3934();
          }
          uVar2 = Rotatelab_Extensions__PickRandom_object__1487d4c
                            (uVar11,uVar2,**(undefined4 **)(_UNK_010cb74c + 0x10cb344));
          if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar1 = *(int *)(*piVar6 + 0xc);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar8 = *(int *)(iVar1 + 8);
          uVar14 = *(uint *)(iVar1 + 0xc);
          piVar7 = *(int **)(_UNK_010cb750 + 0x10cb3a0);
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar14 < *(uint *)(iVar8 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar14 + 1;
            puVar3 = (undefined4 *)(iVar8 + uVar14 * 4 + 0x10);
            *puVar3 = uVar2;
            thunk_FUN_00ec5080(puVar3,uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_267dae0
                      (iVar1,uVar2,*(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38)
                      );
          }
          if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                            (*(int *)(param_1 + 0x70),*(undefined4 *)(*piVar6 + 8),
                             **(undefined4 **)(_UNK_010cb754 + 0x10cb420));
          if (*(int *)(param_1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar8 = *(int *)(*(int *)(param_1 + 0x5c) + 0x10);
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar2 = System_Collections_Generic_List_object___IndexOf_267e86c
                            (iVar8,uVar2,**(undefined4 **)(_UNK_010cb758 + 0x10cb45c));
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          *(undefined4 *)(iVar1 + 0xc) = uVar2;
          uVar14 = *(int *)(iVar10 + 8) - 1;
          *(uint *)(iVar10 + 8) = uVar14;
        } while (uVar14 < 0x80000000);
      }
      pcVar9 = (char *)(_UNK_010cc4cc + 0x10cc1c0);
      if (*pcVar9 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010cc4d0 + 0x10cc1d4));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010cc4d4 + 0x10cc1e0));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010cc4d8 + 0x10cc1ec));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010cc4dc + 0x10cc1f8));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010cc4e0 + 0x10cc204));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010cc4e4 + 0x10cc210));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010cc4e8 + 0x10cc21c));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010cc4ec + 0x10cc228));
        *pcVar9 = '\x01';
      }
      iVar1 = 0;
      uVar2 = **(undefined4 **)(_UNK_010cc4f0 + 0x10cc240);
      puVar15 = *(undefined4 **)(_UNK_010cc4f4 + 0x10cc24c);
      puVar3 = *(undefined4 **)(_UNK_010cc4f8 + 0x10cc254);
      while( true ) {
        if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(*(int *)(param_1 + 0x70) + 0xc) <= iVar1) {
          pcVar9 = (char *)(_UNK_010c9488 + 0x10c9450);
          if (*pcVar9 == '\0') {
            FUN_00ec37c0(*(undefined4 *)(_UNK_010c948c + 0x10c9464));
            *pcVar9 = '\x01';
          }
          iVar1 = UnityEngine_PlayerPrefs__TrySetSetString_35f67d0
                            (**(undefined4 **)(_UNK_010c9490 + 0x10c9480),uVar2,0);
          if (iVar1 != 0) {
            return;
          }
          thunk_FUN_00f23fd0(*(undefined4 *)(iRam036070b8 + 0x360707c));
          uVar2 = thunk_FUN_00f00cdc();
          uVar11 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam036070bc + 0x3607090));
          UnityEngine_PlayerPrefsException___ctor_35f62e8(uVar2,uVar11);
          uVar11 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam036070c0 + 0x36070a8));
          FUN_01f4fe28(uVar2,uVar11);
                    /* WARNING: Subroutine does not return */
          FUN_01f4fe2c();
        }
        if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar10 = System_Collections_Generic_List_object___get_Item_267d814
                           (*(int *)(param_1 + 0x70),iVar1,
                            **(undefined4 **)(_UNK_010cc4fc + 0x10cc28c));
        iVar8 = FUN_00ec388c(**(undefined4 **)(_UNK_010cc500 + 0x10cc2a8),9);
        if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar8 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(undefined4 *)(iVar8 + 0x10) = uVar2;
        thunk_FUN_00ec5080((undefined4 *)(iVar8 + 0x10),uVar2);
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar2 = System_Int32__ToString_2b6b9ec(iVar10 + 8,0);
        if (*(uint *)(iVar8 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(undefined4 *)(iVar8 + 0x14) = uVar2;
        thunk_FUN_00ec5080((undefined4 *)(iVar8 + 0x14),uVar2);
        uVar2 = *puVar15;
        if (*(uint *)(iVar8 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(undefined4 *)(iVar8 + 0x18) = uVar2;
        thunk_FUN_00ec5080((undefined4 *)(iVar8 + 0x18),uVar2);
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar2 = System_Int32__ToString_2b6b9ec(iVar10 + 0xc,0);
        if (*(uint *)(iVar8 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(undefined4 *)(iVar8 + 0x1c) = uVar2;
        thunk_FUN_00ec5080((undefined4 *)(iVar8 + 0x1c),uVar2);
        uVar2 = *puVar15;
        if (*(uint *)(iVar8 + 0xc) < 5) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(undefined4 *)(iVar8 + 0x20) = uVar2;
        thunk_FUN_00ec5080((undefined4 *)(iVar8 + 0x20),uVar2);
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar2 = System_Int32__ToString_2b6b9ec(iVar10 + 0x10,0);
        if (*(uint *)(iVar8 + 0xc) < 6) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(undefined4 *)(iVar8 + 0x24) = uVar2;
        thunk_FUN_00ec5080((undefined4 *)(iVar8 + 0x24),uVar2);
        uVar2 = *puVar15;
        if (*(uint *)(iVar8 + 0xc) < 7) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(undefined4 *)(iVar8 + 0x28) = uVar2;
        thunk_FUN_00ec5080((undefined4 *)(iVar8 + 0x28),uVar2);
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        puVar5 = *(undefined4 **)(_UNK_010cc504 + 0x10cc42c);
        if (*(char *)(iVar10 + 0x14) == '\0') {
          puVar5 = *(undefined4 **)(_UNK_010cc508 + 0x10cc434);
        }
        uVar2 = *puVar5;
        if (*(uint *)(iVar8 + 0xc) < 8) break;
        *(undefined4 *)(iVar8 + 0x2c) = uVar2;
        thunk_FUN_00ec5080((undefined4 *)(iVar8 + 0x2c),uVar2);
        if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        puVar5 = puVar3;
        if (iVar1 == *(int *)(*(int *)(param_1 + 0x70) + 0xc) + -1) {
          puVar5 = *(undefined4 **)(_UNK_010cc50c + 0x10cc484);
        }
        uVar2 = *puVar5;
        if (*(uint *)(iVar8 + 0xc) < 9) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(undefined4 *)(iVar8 + 0x30) = uVar2;
        thunk_FUN_00ec5080((undefined4 *)(iVar8 + 0x30),uVar2);
        uVar2 = System_String__Concat_2a0bee8(iVar8,0);
        iVar1 = iVar1 + 1;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010cb708 + 0x10caf80));
    System_Object___ctor_2bb93bc(iVar8,0);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar6 = (int *)(iVar8 + 0xc);
    *piVar6 = iVar1;
    thunk_FUN_00ec5080(piVar6,iVar1);
    if (*(int *)(param_1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar13 = *(int *)(*(int *)(param_1 + 0x5c) + 0x18);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = System_Collections_Generic_List_Int32Enum___get_Item_261e124
                      (iVar13,iVar10,**(undefined4 **)(_UNK_010cb70c + 0x10cafe0));
    iVar13 = *(int *)(param_1 + 0x5c);
    *(undefined4 *)(iVar8 + 8) = uVar2;
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar11 = *(undefined4 *)(iVar13 + 0xc);
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010cb710 + 0x10cb00c));
    System_Predicate_object____ctor_1876380
              (uVar2,iVar8,**(undefined4 **)(_UNK_010cb714 + 0x10cb02c),0);
    if (*(int *)(**(int **)(_UNK_010cb718 + 0x10cb040) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar8 = Rotatelab_Extensions__PickRandom_object__1487d4c
                      (uVar11,uVar2,**(undefined4 **)(_UNK_010cb71c + 0x10cb060));
    if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar13 = *(int *)(*piVar6 + 0xc);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = *(undefined4 *)(iVar8 + 0x10);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar12 = *(int *)(iVar13 + 8);
    uVar14 = *(uint *)(iVar13 + 0xc);
    piVar6 = *(int **)(_UNK_010cb720 + 0x10cb0c4);
    *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + 1;
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar14 < *(uint *)(iVar12 + 0xc)) {
      *(uint *)(iVar13 + 0xc) = uVar14 + 1;
      *(undefined4 *)(iVar12 + uVar14 * 4 + 0x10) = uVar2;
    }
    else {
      System_Collections_Generic_List_Int32Enum___AddWithResize_261e410
                (iVar13,uVar2,*(undefined4 *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38));
    }
    if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar13 = System_Collections_Generic_List_object___get_Item_267d814
                       (*(int *)(param_1 + 0x70),iVar10,**(undefined4 **)(_UNK_010cb724 + 0x10cb134)
                       );
    if (*(int *)(param_1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar12 = *(int *)(*(int *)(param_1 + 0x5c) + 0xc);
    if (iVar12 == 0) break;
    uVar2 = System_Collections_Generic_List_object___IndexOf_267e86c
                      (iVar12,iVar8,**(undefined4 **)(_UNK_010cb728 + 0x10cb170));
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar10 = iVar10 + 1;
    *(undefined4 *)(iVar13 + 8) = uVar2;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

