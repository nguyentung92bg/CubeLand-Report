/* IL2CPP: Rotatelab.Shop.StarChallengeController$$CheckStarChallengeActive
void Rotatelab_Shop_StarChallengeController__CheckStarChallengeActive (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$CheckStarChallengeActive
   void Rotatelab_Shop_StarChallengeController__CheckStarChallengeActive
   (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeController__CheckStarChallengeActive_10c79b8(int param_1)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar14;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int *piVar15;
  undefined4 unaff_r8;
  undefined4 *puVar16;
  undefined4 *puVar17;
  
  pcVar14 = (char *)(_UNK_010d81c4 + 0x10d79d0);
  if (*pcVar14 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d81c8 + 0x10d79e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d81cc + 0x10d79f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d81d0 + 0x10d79fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d81d4 + 0x10d7a08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d81d8 + 0x10d7a14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d81dc + 0x10d7a20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d81e0 + 0x10d7a2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d81e4 + 0x10d7a38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d81e8 + 0x10d7a44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d81ec + 0x10d7a50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d81f0 + 0x10d7a5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d81f4 + 0x10d7a68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d81f8 + 0x10d7a74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d81fc + 0x10d7a80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8200 + 0x10d7a8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8204 + 0x10d7a98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8208 + 0x10d7aa4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d820c + 0x10d7ab0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8210 + 0x10d7abc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8214 + 0x10d7ac8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8218 + 0x10d7ad4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d821c + 0x10d7ae0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8220 + 0x10d7aec));
    *pcVar14 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010d8224 + 0x10d7b00) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar5 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar4,0);
  puVar16 = *(undefined4 **)(_UNK_010d8228 + 0x10d7b30);
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar16);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar6 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar15 = *(int **)(_UNK_010d822c + 0x10d7b60);
  iVar7 = *piVar15;
  cVar1 = *(int *)(*(int *)(iVar6 + 0x80) + 0x10) <= iVar5;
  *(char *)(param_1 + 0x61) = cVar1;
  if (*(int *)(iVar7 + 0x74) == 0) {
    FUN_00ec3934();
    cVar1 = *(char *)(param_1 + 0x61);
    iVar7 = *piVar15;
  }
  iVar5 = *(int *)(*(int *)(iVar7 + 0x5c) + 0x15c);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c
            (iVar5,cVar1 != '\0',**(undefined4 **)(_UNK_010d8230 + 0x10d7bb8));
  uVar4 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar5 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar4,0);
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar16);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar6 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(iVar6 + 0x80) + 0xc);
  *(bool *)(param_1 + 0x60) = iVar6 <= iVar5;
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x28),iVar5 < iVar6,0);
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038
            (*(int *)(param_1 + 0x24),*(char *)(param_1 + 0x60) == '\0',0);
  iVar5 = *(int *)(param_1 + 0x20);
  puVar16 = *(undefined4 **)(_UNK_010d8234 + 0x10d7c70);
  uVar4 = thunk_FUN_00f00cdc(*puVar16);
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_010d8238 + 0x10d7c8c),0)
  ;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar17 = *(undefined4 **)(_UNK_010d823c + 0x10d7cb4);
  System_Collections_Generic_List_object___ForEach_267e6f0(iVar5,uVar4,*puVar17);
  piVar15 = *(int **)(_UNK_010d8240 + 0x10d7cc4);
  iVar5 = *piVar15;
  if (*(char *)(param_1 + 0x60) != '\0') {
    iVar6 = *(int *)(param_1 + 0x2c);
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      iVar5 = *piVar15;
    }
    puVar11 = *(undefined4 **)(iVar5 + 0x5c);
    iVar7 = puVar11[1];
    if (iVar7 == 0) {
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        puVar11 = *(undefined4 **)(*piVar15 + 0x5c);
      }
      uVar4 = *puVar11;
      iVar7 = thunk_FUN_00f00cdc(*puVar16);
      System_Action_object____ctor_1f11414
                (iVar7,uVar4,**(undefined4 **)(_UNK_010d8244 + 0x10d7d34),0);
      piVar8 = (int *)(*(int *)(*piVar15 + 0x5c) + 4);
      *piVar8 = iVar7;
      thunk_FUN_00ec5080(piVar8,iVar7);
    }
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___ForEach_267e6f0(iVar6,iVar7,*puVar17);
    iVar5 = *piVar15;
    iVar6 = *(int *)(param_1 + 0x30);
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      iVar5 = *piVar15;
    }
    puVar11 = *(undefined4 **)(iVar5 + 0x5c);
    iVar7 = puVar11[2];
    if (iVar7 == 0) {
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        puVar11 = *(undefined4 **)(*piVar15 + 0x5c);
      }
      uVar4 = *puVar11;
      iVar7 = thunk_FUN_00f00cdc(*puVar16);
      System_Action_object____ctor_1f11414
                (iVar7,uVar4,**(undefined4 **)(_UNK_010d8248 + 0x10d7dd4),0);
      piVar15 = (int *)(*(int *)(*piVar15 + 0x5c) + 8);
      *piVar15 = iVar7;
      thunk_FUN_00ec5080(piVar15,iVar7);
    }
    if (iVar6 != 0) {
      System_Collections_Generic_List_object___ForEach_267e6f0(iVar6,iVar7,*puVar17);
      piVar15 = *(int **)(param_1 + 0x48);
      if (piVar15 != (int *)0x0) {
        uVar13 = (uint)*(byte *)(**(int **)(_UNK_010d824c + 0x10d7e24) + 0xb8);
        if ((uVar13 <= *(byte *)(*piVar15 + 0xb8)) &&
           (*(int *)(*(int *)(*piVar15 + 100) + uVar13 * 4 + -4) ==
            **(int **)(_UNK_010d824c + 0x10d7e24))) {
          uVar4 = Rotatelab_Shop_StarChallengeController__get_JewelSo_10c6e5c(param_1);
          if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar5 = System_Collections_Generic_List_object___get_Item_267d814
                            (*(int *)(param_1 + 0x20),0,**(undefined4 **)(_UNK_010d8250 + 0x10d7e78)
                            );
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar9 = UnityEngine_Component__GetComponent_object__143f3b0
                            (iVar5,**(undefined4 **)(_UNK_010d8254 + 0x10d7e9c));
          Rotatelab_Shop_StarChallengePopup__Init_10c84a8(piVar15,uVar4,uVar9);
        }
      }
      iVar5 = UnityEngine_PlayerPrefs__HasKey_35f74c0
                        (**(undefined4 **)(_UNK_010d8258 + 0x10d7ec4),0);
      if (iVar5 == 0) {
        Rotatelab_Shop_StarChallengeController__ResetStarChallenges_10c8618(param_1);
      }
      Rotatelab_Shop_StarChallengeController__TimeInit_10c8814(param_1);
      Rotatelab_Shop_StarChallengeController__SetTarget_10c89b4(param_1);
      piVar15 = (int *)(param_1 + 0x5c);
      if (*piVar15 == 0) {
        uVar4 = Rotatelab_Shop_StarChallengeController__TimerRoutine_10c8e80(param_1);
        uVar4 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar4,0);
        *(undefined4 *)(param_1 + 0x5c) = uVar4;
        if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
          puVar3 = (uint *)(_UNK_00f30584 + ((uint)piVar15 >> 0x11) * 4 + 0xf547cc);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar3);
          } while (!bVar2);
          *puVar3 = *puVar3 | 1 << (((uint)piVar15 & 0x1ffff) >> 0xc);
          return;
        }
        return;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(param_1 + 0x10);
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar15;
  }
  puVar11 = *(undefined4 **)(iVar5 + 0x5c);
  iVar7 = puVar11[3];
  if (iVar7 == 0) {
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      puVar11 = *(undefined4 **)(*piVar15 + 0x5c);
    }
    uVar4 = *puVar11;
    iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d825c + 0x10d7f44));
    System_Action_object____ctor_1f11414(iVar7,uVar4,**(undefined4 **)(_UNK_010d8260 + 0x10d7f64),0)
    ;
    piVar8 = (int *)(*(int *)(*piVar15 + 0x5c) + 0xc);
    *piVar8 = iVar7;
    thunk_FUN_00ec5080(piVar8,iVar7);
  }
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar11 = *(undefined4 **)(_UNK_010d8264 + 0x10d7fa0);
  System_Collections_Generic_List_object___ForEach_267e6f0(iVar6,iVar7,*puVar11);
  iVar5 = *piVar15;
  iVar6 = *(int *)(param_1 + 0x14);
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar15;
  }
  puVar12 = *(undefined4 **)(iVar5 + 0x5c);
  iVar7 = puVar12[4];
  if (iVar7 == 0) {
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      puVar12 = *(undefined4 **)(*piVar15 + 0x5c);
    }
    uVar4 = *puVar12;
    iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d8268 + 0x10d7ff4));
    System_Action_object____ctor_1f11414(iVar7,uVar4,**(undefined4 **)(_UNK_010d826c + 0x10d8014),0)
    ;
    piVar8 = (int *)(*(int *)(*piVar15 + 0x5c) + 0x10);
    *piVar8 = iVar7;
    thunk_FUN_00ec5080(piVar8,iVar7);
  }
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___ForEach_267e6f0(iVar6,iVar7,*puVar11);
  iVar5 = *piVar15;
  iVar6 = *(int *)(param_1 + 0x1c);
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar15;
  }
  puVar11 = *(undefined4 **)(iVar5 + 0x5c);
  iVar7 = puVar11[5];
  if (iVar7 == 0) {
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      puVar11 = *(undefined4 **)(*piVar15 + 0x5c);
    }
    uVar4 = *puVar11;
    iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d8270 + 0x10d809c));
    System_Action_object____ctor_1f11414(iVar7,uVar4,**(undefined4 **)(_UNK_010d8274 + 0x10d80bc),0)
    ;
    piVar15 = (int *)(*(int *)(*piVar15 + 0x5c) + 0x14);
    *piVar15 = iVar7;
    thunk_FUN_00ec5080(piVar15,iVar7);
  }
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___ForEach_267e6f0
            (iVar6,iVar7,**(undefined4 **)(_UNK_010d8278 + 0x10d80f4));
  iVar5 = *(int *)(param_1 + 0x2c);
  uVar4 = thunk_FUN_00f00cdc(*puVar16);
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_010d827c + 0x10d8120),0)
  ;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___ForEach_267e6f0(iVar5,uVar4,*puVar17);
  iVar6 = *(int *)(param_1 + 0x30);
  iVar5 = thunk_FUN_00f00cdc(*puVar16);
  System_Action_object____ctor_1f11414(iVar5,param_1,**(undefined4 **)(_UNK_010d8280 + 0x10d8168),0)
  ;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException_2b8422c(0x21,0,*puVar17);
  }
  if (0 < *(int *)(iVar6 + 0xc)) {
    iVar7 = *(int *)(iVar6 + 0x10);
    uVar13 = 0;
    do {
      iVar10 = *(int *)(iVar6 + 0x10);
      if (iVar7 != iVar10) goto LAB_0268e78c;
      iVar10 = *(int *)(iVar6 + 8);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar10 + 0xc) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(iVar5 + 0xc))
                (*(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar10 + uVar13 * 4 + 0x10),
                 *(undefined4 *)(iVar5 + 0x14),*(code **)(iVar5 + 0xc),unaff_r4,unaff_r5,unaff_r6,
                 unaff_r7,unaff_r8);
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < *(int *)(iVar6 + 0xc));
    iVar10 = *(int *)(iVar6 + 0x10);
LAB_0268e78c:
    if (iVar7 != iVar10) {
      thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba53d4 + 0x2ba5394));
      uVar4 = thunk_FUN_00f00cdc();
      uVar9 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba53d8 + 0x2ba53a8));
      System_InvalidOperationException___ctor_2b6e948(uVar4,uVar9,0);
      uVar9 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba53dc + 0x2ba53c4));
      func_0x00ec3920(uVar4,uVar9);
                    /* WARNING: Subroutine does not return */
      FUN_00ec3760();
    }
  }
  return;
}

