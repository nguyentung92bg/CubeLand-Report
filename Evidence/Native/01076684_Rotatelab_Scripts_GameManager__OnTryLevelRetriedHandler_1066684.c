/* IL2CPP: Rotatelab.Scripts.GameManager$$OnTryLevelRetriedHandler
void Rotatelab_Scripts_GameManager__OnTryLevelRetriedHandler (Rotatelab_Scripts_GameManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0108bc88) */
/* WARNING: Removing unreachable block (ram,0x0108bc98) */
/* WARNING: Removing unreachable block (ram,0x0113482c) */
/* WARNING: Removing unreachable block (ram,0x01134834) */
/* WARNING: Removing unreachable block (ram,0x01134838) */
/* WARNING: Removing unreachable block (ram,0x01134858) */
/* WARNING: Removing unreachable block (ram,0x01134864) */
/* WARNING: Removing unreachable block (ram,0x01134868) */
/* WARNING: Removing unreachable block (ram,0x01134874) */
/* WARNING: Removing unreachable block (ram,0x01134880) */
/* WARNING: Removing unreachable block (ram,0x01134884) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.GameManager$$OnTryLevelRetriedHandler
   void Rotatelab_Scripts_GameManager__OnTryLevelRetriedHandler (Rotatelab_Scripts_GameManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_GameManager__OnTryLevelRetriedHandler_1066684(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 unaff_r4;
  char *pcVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pcVar10 = (char *)(_UNK_0107679c + 0x1076698);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010767a0 + 0x10766ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010767a4 + 0x10766b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010767a8 + 0x10766c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010767ac + 0x10766d0));
    *pcVar10 = '\x01';
  }
  iVar1 = Rotatelab_Scripts_GameManager__get_IsMainMenuActive_1065c48();
  if (iVar1 != 0) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010767b0 + 0x10766f0));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = Rotatelab_Currency_HeartManager__get_Hearts_10837c4(iVar1,0);
    iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
    if (iVar1 < 1) {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_010767b4 + 0x1076734));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar11 = *(int **)(iVar1 + 0x20);
      iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010767b8 + 0x1076754));
      System_Action_bool____ctor_17aaff0
                (iVar1,param_1,**(undefined4 **)(_UNK_010767bc + 0x1076774),0);
      if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      pcVar10 = (char *)(_UNK_01095ee8 + 0x1095d88);
      uStack_18 = unaff_r4;
      if (*pcVar10 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01095eec + 0x1095d9c),iVar1,0);
        FUN_00ec37c0(*(undefined4 *)(_UNK_01095ef0 + 0x1095da8));
        FUN_00ec37c0(*(undefined4 *)(_UNK_01095ef4 + 0x1095db4));
        FUN_00ec37c0(*(undefined4 *)(_UNK_01095ef8 + 0x1095dc0));
        FUN_00ec37c0(*(undefined4 *)(_UNK_01095efc + 0x1095dcc));
        *pcVar10 = '\x01';
      }
      iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01095f00 + 0x1095de0));
      System_Object___ctor_2bb93bc(iVar3,0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar15 = (int *)(iVar3 + 8);
      *piVar15 = iVar1;
      thunk_FUN_00ec5080(piVar15,iVar1);
      *(undefined4 *)(iVar3 + 0xc) = piVar11;
      thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0xc),piVar11);
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01095f04 + 0x1095e2c));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(*(undefined4 *)(iVar1 + 0x58),0);
      if (0 < iVar1) {
        piVar11[0x18] = *piVar15;
        thunk_FUN_00ec5080();
        pcVar10 = (char *)(_UNK_0113479c + 0x113474c);
        if (*pcVar10 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_011347a0 + 0x1134760),0,0);
          *pcVar10 = '\x01';
        }
        iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_011347a4 + 0x1134774));
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        pcVar10 = (char *)(_UNK_01134908 + 0x11347c4);
        if (*pcVar10 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_0113490c + 0x11347d8));
          FUN_00ec37c0(*(undefined4 *)(_UNK_01134910 + 0x11347e4));
          FUN_00ec37c0(*(undefined4 *)(_UNK_01134914 + 0x11347f0));
          FUN_00ec37c0(*(undefined4 *)(_UNK_01134918 + 0x11347fc));
          FUN_00ec37c0(*(undefined4 *)(_UNK_0113491c + 0x1134808));
          *pcVar10 = '\x01';
        }
        uVar2 = *(undefined4 *)(iVar1 + 0x10);
        if (*(int *)(**(int **)(_UNK_01134920 + 0x1134820) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar3 = Rotatelab_Extensions__AddUnique_object__1484964
                          (uVar2,piVar11,**(undefined4 **)(_UNK_0113492c + 0x11348c8));
        if (iVar3 != 0) {
          if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(int *)(*(int *)(iVar1 + 0x10) + 0xc) == 1) {
            pcVar10 = (char *)(_UNK_01134fac + 0x1134f14);
            if (*pcVar10 == '\0') {
              FUN_00ec37c0(*(undefined4 *)(_UNK_01134fb0 + 0x1134f28));
              *pcVar10 = '\x01';
            }
            if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar1 = *piVar11;
            uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar7 != 0) {
              piVar15 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar15[-1] == **(int **)(_UNK_01134fb4 + 0x1134f4c)) {
                  puVar12 = (undefined4 *)(iVar1 + *piVar15 * 8 + 0xc0);
                  goto LAB_01134f94;
                }
                uVar7 = uVar7 - 1;
                piVar15 = piVar15 + 2;
              } while (uVar7 != 0);
            }
            puVar12 = (undefined4 *)FUN_00efdb38(piVar11,**(int **)(_UNK_01134fb4 + 0x1134f4c),0);
LAB_01134f94:
                    /* WARNING: Could not recover jumptable at 0x01134fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar12)(piVar11,1,puVar12[1]);
            return;
          }
        }
        return;
      }
      iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01095f08 + 0x1095e98));
      System_Action___ctor_2b10bac(iVar1,iVar3,**(undefined4 **)(_UNK_01095f0c + 0x1095eb4),0);
      if (*(int *)(**(int **)(_UNK_01095f10 + 0x1095ec8) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uStack_24 = uStack_18;
      pcVar10 = (char *)(_UNK_0108bdec + 0x108b770);
      if (*pcVar10 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108bdf0 + 0x108b784));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108bdf4 + 0x108b790));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108bdf8 + 0x108b79c));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108bdfc + 0x108b7a8));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108be00 + 0x108b7b4));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108be04 + 0x108b7c0));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108be08 + 0x108b7cc));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108be0c + 0x108b7d8));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108be10 + 0x108b7e4));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108be14 + 0x108b7f0));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108be18 + 0x108b7fc));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108be1c + 0x108b808));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108be20 + 0x108b814));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108be24 + 0x108b820));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108be28 + 0x108b82c));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108be2c + 0x108b838));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108be30 + 0x108b844));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108be34 + 0x108b850));
        *pcVar10 = '\x01';
      }
      iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108be38 + 0x108b868));
      System_Object___ctor_2bb93bc(iVar3,0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar12 = *(undefined4 **)(_UNK_0108be3c + 0x108b894);
      *(undefined4 *)(iVar3 + 8) = 1;
      iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar12);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar5 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(iVar5 + 0x14) + 0x10) == 0) {
        iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar12);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar5 = Rotatelab_UI_UIManager__get_ActivePageType_1127178(iVar5,0);
        if (iVar5 != 1) goto LAB_0108bca0;
      }
      piVar11 = *(int **)(_UNK_0108be40 + 0x108b900);
      iVar5 = *piVar11;
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        iVar5 = *piVar11;
      }
      iVar13 = *(int *)(iVar3 + 0xc);
      uVar2 = **(undefined4 **)(iVar5 + 0x5c);
      if (iVar13 == 0) {
        iVar13 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108be44 + 0x108b93c));
        System_Func_object__bool____ctor_239b120
                  (iVar13,iVar3,**(undefined4 **)(_UNK_0108be48 + 0x108b958),0);
        *(int *)(iVar3 + 0xc) = iVar13;
        thunk_FUN_00ec5080((int *)(iVar3 + 0xc),iVar13);
      }
      uVar2 = System_Linq_Enumerable__Where_object__1479294
                        (uVar2,iVar13,**(undefined4 **)(_UNK_0108be4c + 0x108b980));
      piVar15 = *(int **)(_UNK_0108be50 + 0x108b998);
      iVar5 = *piVar15;
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        iVar5 = *piVar15;
      }
      puVar12 = *(undefined4 **)(iVar5 + 0x5c);
      iVar13 = puVar12[1];
      if (iVar13 == 0) {
        if (*(int *)(iVar5 + 0x74) == 0) {
          FUN_00ec3934();
          puVar12 = *(undefined4 **)(*piVar15 + 0x5c);
        }
        uVar4 = *puVar12;
        iVar13 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108be54 + 0x108b9e0));
        System_Func_object__Int32Enum____ctor_239b3a8
                  (iVar13,uVar4,**(undefined4 **)(_UNK_0108be58 + 0x108ba00),0);
        piVar15 = (int *)(*(int *)(*piVar15 + 0x5c) + 4);
        *piVar15 = iVar13;
        thunk_FUN_00ec5080(piVar15,iVar13);
      }
      piVar15 = (int *)System_Linq_Enumerable__OrderBy_object__Int32Enum__146d818
                                 (uVar2,iVar13,**(undefined4 **)(_UNK_0108be5c + 0x108ba2c));
      if (piVar15 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = *piVar15;
      uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_0108be60 + 0x108ba54)) {
            puVar12 = (undefined4 *)(iVar5 + *piVar8 * 8 + 0xc0);
            goto LAB_0108ba9c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar12 = (undefined4 *)FUN_00efdb38(piVar15,**(int **)(_UNK_0108be60 + 0x108ba54),0);
LAB_0108ba9c:
      piVar15 = (int *)(*(code *)*puVar12)(piVar15,puVar12[1]);
      piVar14 = *(int **)(_UNK_0108be64 + 0x108bacc);
      piVar8 = *(int **)(_UNK_0108be68 + 0x108bad4);
      puVar12 = *(undefined4 **)(_UNK_0108be6c + 0x108badc);
      do {
        if (piVar15 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar5 = *piVar15;
        uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar9[-1] == *piVar14) {
              puVar6 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0xc0);
              goto LAB_0108bb38;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined4 *)FUN_00efdb38(piVar15,*piVar14,0);
LAB_0108bb38:
        iVar5 = (*(code *)*puVar6)(piVar15,puVar6[1]);
        if (iVar5 == 0) {
          if (piVar15 == (int *)0x0) goto LAB_0108bca0;
          iVar5 = *piVar15;
          uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
          if (uVar7 == 0) goto LAB_0108bc54;
          piVar11 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          goto LAB_0108bc3c;
        }
        if (piVar15 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar5 = *piVar15;
        uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar9[-1] == *piVar8) {
              puVar6 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0xc0);
              goto LAB_0108bbb0;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined4 *)FUN_00efdb38(piVar15,*piVar8,0);
LAB_0108bbb0:
        uVar2 = (*(code *)*puVar6)(piVar15,puVar6[1]);
        iVar5 = *piVar11;
        if (*(int *)(iVar5 + 0x74) == 0) {
          FUN_00ec3934();
          iVar5 = *piVar11;
        }
        iVar5 = *(int *)(*(int *)(iVar5 + 0x5c) + 4);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Collections_Generic_Queue_object___Enqueue_18fca70(iVar5,uVar2,*puVar12);
      } while( true );
    }
  }
  pcVar10 = (char *)(_UNK_0107694c + 0x10767d4);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076950 + 0x10767e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076954 + 0x10767f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076958 + 0x1076800));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107695c + 0x107680c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076960 + 0x1076818));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076964 + 0x1076824));
    *pcVar10 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01076968 + 0x1076838));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Networking_CloudSaveManager__ApplyPendingRemoteData_1142ac0(iVar1,0);
  if (iVar1 != 0) {
    puVar12 = *(undefined4 **)(_UNK_0107696c + 0x107686c);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar12);
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar12);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = Rotatelab_Scripts_LevelManager__get_CurrentLevelIndex_106645c();
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_LevelManager__LoadLevelDataAsync_1066564(&uStack_24,iVar1,uVar2,1);
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget_object__16504f0
              (uStack_24,uStack_20,uStack_1c,**(undefined4 **)(_UNK_01076970 + 0x10768c0));
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01076974 + 0x10768d0));
  uVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01076978 + 0x10768e4));
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0107697c + 0x10768f8));
  System_Action___ctor_2b10bac(uVar4,uVar2,**(undefined4 **)(_UNK_01076980 + 0x1076918),0);
  if (iVar1 != 0) {
    Rotatelab_UI_UIManager__SetMainCanvas_1126b6c(iVar1,1,1,uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar11 = piVar11 + 2;
    if (uVar7 == 0) break;
LAB_0108bc3c:
    if (piVar11[-1] == **(int **)(_UNK_0108be70 + 0x108bc28)) {
      puVar12 = (undefined4 *)(iVar5 + *piVar11 * 8 + 0xc0);
      goto LAB_0108bc70;
    }
  }
LAB_0108bc54:
  puVar12 = (undefined4 *)FUN_00efdb38(piVar15,**(int **)(_UNK_0108be70 + 0x108bc28),0);
LAB_0108bc70:
  (*(code *)*puVar12)(piVar15,puVar12[1]);
LAB_0108bca0:
  piVar11 = *(int **)(_UNK_0108be74 + 0x108bcac);
  iVar5 = *piVar11;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar11;
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x5c) + 4);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar5 + 0x14) == 0) {
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    }
  }
  else {
    iVar5 = *piVar11;
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      iVar5 = *piVar11;
    }
    piVar15 = (int *)(*(int *)(iVar5 + 0x5c) + 0xc);
    *piVar15 = iVar1;
    thunk_FUN_00ec5080(piVar15,iVar1);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0108be78 + 0x108bd14));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar12 = *(undefined4 **)(_UNK_0108be7c + 0x108bd38);
    *(undefined1 *)(iVar1 + 0x1d) = 1;
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar12);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_LevelStateManager__TrySetGamePaused_1017b2c
              (iVar1,1,*(undefined4 *)(*(int *)(*piVar11 + 0x5c) + 8),0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_TriggeredOfferPresenter__ShowNext_107be88(*(undefined4 *)(iVar3 + 8));
  }
  return;
}

