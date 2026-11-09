/* IL2CPP: Rotatelab.UI.PreLevelStartController$$<MainMenuPlayButtonClicked>b__33_0
void Rotatelab_UI_PreLevelStartController___MainMenuPlayButtonClicked_b__33_0 (Rotatelab_UI_PreLevelStartController_o* __this, bool success, const MethodInfo* method);
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
/* IL2CPP: Rotatelab.UI.PreLevelStartController$$<MainMenuPlayButtonClicked>b__33_0
   void Rotatelab_UI_PreLevelStartController___MainMenuPlayButtonClicked_b__33_0
   (Rotatelab_UI_PreLevelStartController_o* __this, bool success, const MethodInfo* method); */

void Rotatelab_UI_PreLevelStartController___MainMenuPlayButtonClicked_b__33_0_1126dc0
               (int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  
  if (param_2 == 0) {
    return;
  }
  pcVar10 = (char *)(_UNK_011361cc + 0x1136030);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011361d0 + 0x1136044));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011361d4 + 0x1136050));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011361d8 + 0x113605c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011361dc + 0x1136068));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011361e0 + 0x1136074));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011361e4 + 0x1136080));
    *pcVar10 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Selectable__set_interactable_39c00c0(*(int *)(param_1 + 0x10),0,0);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_011361e8 + 0x11360b4));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = Rotatelab_Currency_HeartManager__get_Hearts_10837c4(iVar4,0);
  iVar4 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar5,0);
  if (0 < iVar4) {
    iVar11 = *(int *)(param_1 + 0x20);
    iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011361ec + 0x11360f0));
    System_Action___ctor_2b10bac(iVar4,param_1,**(undefined4 **)(_UNK_011361f0 + 0x1136110),0);
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_Shop_SuperHardOffer__get_Config_10d2554(iVar11,iVar4,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((*(char *)(iVar2 + 0x18) == '\0') ||
       (iVar2 = Rotatelab_Shop_SuperHardOffer__IsDue_10d2bd8(iVar11), iVar2 == 0)) {
      if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x010e2e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x14));
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar10 = (char *)(_UNK_010e2f98 + 0x10e2e6c);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010e2f9c + 0x10e2e80));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010e2fa0 + 0x10e2e8c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010e2fa4 + 0x10e2e98));
      *pcVar10 = '\x01';
    }
    *(int *)(iVar11 + 0x20) = iVar4;
    thunk_FUN_00ec5080((int *)(iVar11 + 0x20),iVar4);
    piVar3 = *(int **)(_UNK_010e2fa8 + 0x10e2ec0);
    uVar5 = *(undefined4 *)(iVar11 + 0x18);
    *(undefined1 *)(iVar11 + 0x1d) = 1;
    iVar4 = *(int *)(*piVar3 + 0x74);
    *(int *)(iVar11 + 0x2c) = *(int *)(iVar11 + 0x2c) + 1;
    if (iVar4 == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Extensions__SetVisibility_fc2a78(uVar5,1,0,0);
    piVar3 = *(int **)(_UNK_010e2fac + 0x10e2f04);
    iVar4 = *piVar3;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar3;
    }
    iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x104);
    if (iVar4 != 0) {
      puVar12 = *(undefined4 **)(_UNK_010e2fb0 + 0x10e2f40);
      Rotatelab_GameAction_bool___Raise_23a280c(iVar4,1,*puVar12);
      iVar4 = *(int *)(*(int *)(*piVar3 + 0x5c) + 0xfc);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_GameAction_bool___Raise_23a280c(iVar4,1,*puVar12);
      iVar4 = *(int *)(*(int *)(*piVar3 + 0x5c) + 0x114);
      if (iVar4 != 0) {
        iVar4 = *(int *)(iVar4 + 8);
        if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023b2824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar4 + 0x20),0,*(undefined4 *)(iVar4 + 0x14));
          return;
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Selectable__set_interactable_39c00c0(*(int *)(param_1 + 0x10),1,0);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_011361f4 + 0x1136164));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar3 = *(int **)(iVar4 + 0x20);
  iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011361f8 + 0x1136184));
  System_Action_bool____ctor_17aaff0(iVar4,param_1,**(undefined4 **)(_UNK_011361fc + 0x11361a4),0);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar10 = (char *)(_UNK_01095ee8 + 0x1095d88);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095eec + 0x1095d9c),iVar4,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095ef0 + 0x1095da8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095ef4 + 0x1095db4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095ef8 + 0x1095dc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095efc + 0x1095dcc));
    *pcVar10 = '\x01';
  }
  iVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01095f00 + 0x1095de0));
  System_Object___ctor_2bb93bc(iVar11,0);
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar15 = (int *)(iVar11 + 8);
  *piVar15 = iVar4;
  thunk_FUN_00ec5080(piVar15,iVar4);
  *(undefined4 *)(iVar11 + 0xc) = piVar3;
  thunk_FUN_00ec5080((undefined4 *)(iVar11 + 0xc),piVar3);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01095f04 + 0x1095e2c));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(*(undefined4 *)(iVar4 + 0x58),0);
  if (0 < iVar4) {
    piVar3[0x18] = *piVar15;
    thunk_FUN_00ec5080();
    pcVar10 = (char *)(_UNK_0113479c + 0x113474c);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_011347a0 + 0x1134760),0,0);
      *pcVar10 = '\x01';
    }
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_011347a4 + 0x1134774));
    if (iVar4 == 0) {
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
    uVar5 = *(undefined4 *)(iVar4 + 0x10);
    if (*(int *)(**(int **)(_UNK_01134920 + 0x1134820) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar11 = Rotatelab_Extensions__AddUnique_object__1484964
                       (uVar5,piVar3,**(undefined4 **)(_UNK_0113492c + 0x11348c8));
    if (iVar11 != 0) {
      if (*(int *)(iVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(iVar4 + 0x10) + 0xc) == 1) {
        pcVar10 = (char *)(_UNK_01134fac + 0x1134f14);
        if (*pcVar10 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_01134fb0 + 0x1134f28));
          *pcVar10 = '\x01';
        }
        if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar4 = *piVar3;
        uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar6 != 0) {
          piVar15 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar15[-1] == **(int **)(_UNK_01134fb4 + 0x1134f4c)) {
              puVar12 = (undefined4 *)(iVar4 + *piVar15 * 8 + 0xc0);
              goto LAB_01134f94;
            }
            uVar6 = uVar6 - 1;
            piVar15 = piVar15 + 2;
          } while (uVar6 != 0);
        }
        puVar12 = (undefined4 *)FUN_00efdb38(piVar3,**(int **)(_UNK_01134fb4 + 0x1134f4c),0);
LAB_01134f94:
                    /* WARNING: Could not recover jumptable at 0x01134fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar12)(piVar3,1,puVar12[1]);
        return;
      }
    }
    return;
  }
  iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01095f08 + 0x1095e98));
  System_Action___ctor_2b10bac(iVar4,iVar11,**(undefined4 **)(_UNK_01095f0c + 0x1095eb4),0);
  if (*(int *)(**(int **)(_UNK_01095f10 + 0x1095ec8) + 0x74) == 0) {
    FUN_00ec3934();
  }
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
  iVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108be38 + 0x108b868));
  System_Object___ctor_2bb93bc(iVar11,0);
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar12 = *(undefined4 **)(_UNK_0108be3c + 0x108b894);
  *(undefined4 *)(iVar11 + 8) = 1;
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar12);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(iVar2 + 0x14) + 0x10) == 0) {
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar12);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_UI_UIManager__get_ActivePageType_1127178(iVar2,0);
    if (iVar2 != 1) goto LAB_0108bca0;
  }
  piVar3 = *(int **)(_UNK_0108be40 + 0x108b900);
  iVar2 = *piVar3;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar3;
  }
  iVar13 = *(int *)(iVar11 + 0xc);
  uVar5 = **(undefined4 **)(iVar2 + 0x5c);
  if (iVar13 == 0) {
    iVar13 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108be44 + 0x108b93c));
    System_Func_object__bool____ctor_239b120
              (iVar13,iVar11,**(undefined4 **)(_UNK_0108be48 + 0x108b958),0);
    *(int *)(iVar11 + 0xc) = iVar13;
    thunk_FUN_00ec5080((int *)(iVar11 + 0xc),iVar13);
  }
  uVar5 = System_Linq_Enumerable__Where_object__1479294
                    (uVar5,iVar13,**(undefined4 **)(_UNK_0108be4c + 0x108b980));
  piVar15 = *(int **)(_UNK_0108be50 + 0x108b998);
  iVar2 = *piVar15;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar15;
  }
  puVar12 = *(undefined4 **)(iVar2 + 0x5c);
  iVar13 = puVar12[1];
  if (iVar13 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar12 = *(undefined4 **)(*piVar15 + 0x5c);
    }
    uVar9 = *puVar12;
    iVar13 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108be54 + 0x108b9e0));
    System_Func_object__Int32Enum____ctor_239b3a8
              (iVar13,uVar9,**(undefined4 **)(_UNK_0108be58 + 0x108ba00),0);
    piVar15 = (int *)(*(int *)(*piVar15 + 0x5c) + 4);
    *piVar15 = iVar13;
    thunk_FUN_00ec5080(piVar15,iVar13);
  }
  piVar15 = (int *)System_Linq_Enumerable__OrderBy_object__Int32Enum__146d818
                             (uVar5,iVar13,**(undefined4 **)(_UNK_0108be5c + 0x108ba2c));
  if (piVar15 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *piVar15;
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_0108be60 + 0x108ba54)) {
        puVar12 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
        goto LAB_0108ba9c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar12 = (undefined4 *)FUN_00efdb38(piVar15,**(int **)(_UNK_0108be60 + 0x108ba54),0);
LAB_0108ba9c:
  piVar15 = (int *)(*(code *)*puVar12)(piVar15,puVar12[1]);
  piVar14 = *(int **)(_UNK_0108be64 + 0x108bacc);
  piVar7 = *(int **)(_UNK_0108be68 + 0x108bad4);
  puVar12 = *(undefined4 **)(_UNK_0108be6c + 0x108badc);
  do {
    if (piVar15 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *piVar15;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar14) {
          puVar1 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_0108bb38;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined4 *)FUN_00efdb38(piVar15,*piVar14,0);
LAB_0108bb38:
    iVar2 = (*(code *)*puVar1)(piVar15,puVar1[1]);
    if (iVar2 == 0) {
      if (piVar15 == (int *)0x0) goto LAB_0108bca0;
      iVar2 = *piVar15;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 == 0) goto LAB_0108bc54;
      piVar3 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      break;
    }
    if (piVar15 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *piVar15;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar7) {
          puVar1 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_0108bbb0;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined4 *)FUN_00efdb38(piVar15,*piVar7,0);
LAB_0108bbb0:
    uVar5 = (*(code *)*puVar1)(piVar15,puVar1[1]);
    iVar2 = *piVar3;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar3;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 4);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Queue_object___Enqueue_18fca70(iVar2,uVar5,*puVar12);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar3 = piVar3 + 2;
    if (uVar6 == 0) break;
    if (piVar3[-1] == **(int **)(_UNK_0108be70 + 0x108bc28)) {
      puVar12 = (undefined4 *)(iVar2 + *piVar3 * 8 + 0xc0);
      goto LAB_0108bc70;
    }
  }
LAB_0108bc54:
  puVar12 = (undefined4 *)FUN_00efdb38(piVar15,**(int **)(_UNK_0108be70 + 0x108bc28),0);
LAB_0108bc70:
  (*(code *)*puVar12)(piVar15,puVar12[1]);
LAB_0108bca0:
  piVar3 = *(int **)(_UNK_0108be74 + 0x108bcac);
  iVar2 = *piVar3;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar3;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 4);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x14) == 0) {
    if (iVar4 != 0) {
      (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x14));
    }
  }
  else {
    iVar2 = *piVar3;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar3;
    }
    piVar15 = (int *)(*(int *)(iVar2 + 0x5c) + 0xc);
    *piVar15 = iVar4;
    thunk_FUN_00ec5080(piVar15,iVar4);
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0108be78 + 0x108bd14));
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar12 = *(undefined4 **)(_UNK_0108be7c + 0x108bd38);
    *(undefined1 *)(iVar4 + 0x1d) = 1;
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar12);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_LevelStateManager__TrySetGamePaused_1017b2c
              (iVar4,1,*(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8),0);
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_TriggeredOfferPresenter__ShowNext_107be88(*(undefined4 *)(iVar11 + 8));
  }
  return;
}

