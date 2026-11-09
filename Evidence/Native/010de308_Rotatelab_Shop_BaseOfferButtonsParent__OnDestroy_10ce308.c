/* IL2CPP: Rotatelab.Shop.BaseOfferButtonsParent$$OnDestroy
void Rotatelab_Shop_BaseOfferButtonsParent__OnDestroy (Rotatelab_Shop_BaseOfferButtonsParent_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01178c50) */
/* WARNING: Removing unreachable block (ram,0x01178c68) */
/* WARNING: Removing unreachable block (ram,0x01178c6c) */
/* WARNING: Removing unreachable block (ram,0x01178c8c) */
/* WARNING: Removing unreachable block (ram,0x01178c94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.BaseOfferButtonsParent$$OnDestroy
   void Rotatelab_Shop_BaseOfferButtonsParent__OnDestroy (Rotatelab_Shop_BaseOfferButtonsParent_o*
   __this, const MethodInfo* method); */

void Rotatelab_Shop_BaseOfferButtonsParent__OnDestroy_10ce308(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar8;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar9;
  undefined4 unaff_r6;
  char *pcVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  bool bVar15;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    DG_Tweening_TweenExtensions__Kill_1168b64(*(int *)(param_1 + 0x28),0,0);
  }
  piVar2 = *(int **)(param_1 + 0x2c);
  if (piVar2 == (int *)0x0) {
    return;
  }
  pcVar10 = (char *)(_UNK_01178cf8 + 0x1178b7c);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178cfc + 0x1178b90),0,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178d00 + 0x1178b9c));
    *pcVar10 = '\x01';
  }
  piVar11 = *(int **)(_UNK_01178d04 + 0x1178bb0);
  iVar3 = *piVar11;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar11;
  }
  if (piVar2 == (int *)0x0) {
    return;
  }
  bVar15 = *(char *)(*(int *)(iVar3 + 0x5c) + 0x7c) != '\0';
  cVar1 = '\0';
  if (bVar15) {
    cVar1 = (char)piVar2[0x25];
  }
  if (!bVar15 || cVar1 == '\0') {
    return;
  }
  if (*(char *)((int)piVar2 + 0x95) != '\0') {
    pcVar10 = (char *)(_UNK_01178d08 + 0x1178c00);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01178d0c + 0x1178c14));
      *pcVar10 = '\x01';
    }
    if (**(int **)(**(int **)(_UNK_01178d10 + 0x1178c28) + 0x5c) < 2) {
      return;
    }
    pcVar10 = (char *)(_UNK_0118e21c + 0x118e1e8);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0118e220 + 0x118e1fc),0);
      *pcVar10 = '\x01';
    }
    piVar11 = (int *)**(undefined4 **)(_UNK_0118e224 + 0x118e214);
    pcVar10 = (char *)(_UNK_0118da34 + 0x118d898);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0118da38 + 0x118d8ac));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0118da3c + 0x118d8b8));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0118da40 + 0x118d8c4));
      *pcVar10 = '\x01';
    }
    piVar14 = *(int **)(_UNK_0118da44 + 0x118d8d8);
    iVar3 = *piVar14;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar14;
    }
    if (*(char *)(*(int *)(iVar3 + 0x5c) + 0x31) == '\0') {
      uVar4 = **(undefined4 **)(_UNK_0118da4c + 0x118d948);
      if (piVar11 == (int *)0x0) {
        uVar12 = 0;
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)(*piVar11 + 0xd8);
        uVar12 = *(undefined4 *)(*piVar11 + 0xdc);
        uVar12 = (*UNRECOVERED_JUMPTABLE)
                           (piVar11,uVar12,UNRECOVERED_JUMPTABLE,uVar12,unaff_r4,unaff_r5,unaff_r6);
      }
      uVar4 = System_String__Concat_29fee38(uVar4,uVar12,0);
    }
    else {
      uVar4 = DG_Tweening_Core_Debugger__GetDebugDataMessage_117da54(piVar2);
      uVar12 = **(undefined4 **)(_UNK_0118da48 + 0x118d918);
      if (piVar11 == (int *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*piVar11 + 0xd8))(piVar11,*(undefined4 *)(*piVar11 + 0xdc));
      }
      uVar4 = System_String__Concat_2a0b574(uVar12,uVar4,uVar5,0);
    }
    iVar3 = *piVar14;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar14;
    }
    iVar7 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x2c);
    if (iVar7 != 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        iVar7 = *(int *)(*(int *)(*piVar14 + 0x5c) + 0x2c);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
      }
      iVar3 = (**(code **)(iVar7 + 0xc))
                        (*(undefined4 *)(iVar7 + 0x20),2,uVar4,*(undefined4 *)(iVar7 + 0x14));
      if (iVar3 == 0) {
        return;
      }
    }
    if (*(int *)(**(int **)(_UNK_0118da50 + 0x118da0c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar10 = (char *)(_UNK_035c01b0 + 0x35c00a4);
    if (*pcVar10 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01b4 + 0x35c00b8),0);
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01b8 + 0x35c00c4));
      *pcVar10 = '\x01';
    }
    piVar2 = *(int **)(_UNK_035c01bc + 0x35c00d8);
    if (*(int *)(*piVar2 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    pcVar10 = (char *)(_UNK_035c01c0 + 0x35c00f4);
    if (*pcVar10 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01c4 + 0x35c0108));
      *pcVar10 = '\x01';
    }
    iVar3 = *piVar2;
    if (*(int *)(iVar3 + 0x74) == 0) {
      thunk_FUN_00ec3934();
      iVar3 = *piVar2;
    }
    piVar2 = *(int **)(*(int *)(iVar3 + 0x5c) + 4);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *piVar2;
    uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_035c01c8 + 0x35c014c)) {
          puVar6 = (undefined4 *)(iVar3 + *piVar11 * 8 + 0xd8);
          goto LAB_035c0194;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined4 *)thunk_FUN_00efdb38(piVar2,**(int **)(_UNK_035c01c8 + 0x35c014c),3);
LAB_035c0194:
                    /* WARNING: Could not recover jumptable at 0x035c01ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar6)(piVar2,2,uVar4,puVar6[1]);
    return;
  }
  piVar11 = *(int **)(_UNK_01178d18 + 0x1178ca4);
  iVar3 = *piVar11;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar11;
  }
  if (*(char *)(*(int *)(iVar3 + 0x5c) + 0x44) != '\0') {
    *(undefined1 *)(piVar2 + 0x25) = 0;
    return;
  }
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar10 = (char *)(_UNK_0119306c + 0x1192a5c);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01193070 + 0x1192a70),1,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01193074 + 0x1192a7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01193078 + 0x1192a88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0119307c + 0x1192a94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01193080 + 0x1192aa0));
    *pcVar10 = '\x01';
  }
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (piVar2[0x14] != 0) {
    DG_Tweening_Tween__OnTweenCallback_116b034(piVar2[0x14],piVar2,0);
  }
  if (*(int *)(**(int **)(_UNK_01193084 + 0x1192ae0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  DG_Tweening_Core_TweenManager__RemoveActiveTween_1182508(piVar2);
  iVar3 = piVar2[2];
  if (*(char *)((int)piVar2 + 0x5a) == '\0') {
    if (iVar3 == 0) {
      piVar11 = *(int **)(_UNK_011930a8 + 0x1192e78);
      iVar3 = *piVar11;
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        iVar3 = *piVar11;
      }
      *(int *)(*(int *)(iVar3 + 0x5c) + 0x3c) = *(int *)(*(int *)(iVar3 + 0x5c) + 0x3c) + -1;
      goto LAB_01193048;
    }
    if (iVar3 != 1) goto LAB_01193048;
    piVar11 = *(int **)(_UNK_0119309c + 0x1192c50);
    iVar3 = *piVar11;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar11;
    }
    piVar14 = *(int **)(_UNK_011930a0 + 0x1192c80);
    *(int *)(*(int *)(iVar3 + 0x5c) + 0x40) = *(int *)(*(int *)(iVar3 + 0x5c) + 0x40) + -1;
    iVar3 = *piVar2;
    iVar7 = *piVar14;
    if (iVar3 != iVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(piVar2,iVar7);
    }
    if (piVar2[0x31] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *(int *)(piVar2[0x31] + 0xc);
    if (iVar9 < 1) goto LAB_01193048;
    iVar13 = 0;
    puVar6 = *(undefined4 **)(_UNK_011930a4 + 0x1192cd4);
    do {
      if (iVar3 != iVar7) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (piVar2[0x31] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = System_Collections_Generic_List_object___get_Item_267d814(piVar2[0x31],iVar13,*puVar6)
      ;
      if (*(int *)(*piVar11 + 0x74) == 0) {
        FUN_00ec3934();
      }
      DG_Tweening_Core_TweenManager__Despawn_1182a40(uVar4,0);
      iVar13 = iVar13 + 1;
    } while (iVar9 != iVar13);
  }
  else if (iVar3 == 0) {
    piVar11 = *(int **)(_UNK_01193098 + 0x1192d3c);
    iVar3 = *piVar11;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar11;
    }
    iVar7 = *(int *)(iVar3 + 0x5c);
    if (*(int *)(iVar7 + 0x70) == -1) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        iVar3 = *piVar11;
        iVar7 = *(int *)(iVar3 + 0x5c);
      }
      iVar9 = *(int *)(iVar7 + 8) + -1;
      *(int *)(iVar7 + 0x6c) = iVar9;
      *(int *)(iVar7 + 0x70) = iVar9;
    }
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar11;
    }
    iVar7 = *(int *)(iVar3 + 0x5c);
    uVar8 = *(uint *)(iVar7 + 0x70);
    if ((int)uVar8 < *(int *)(iVar7 + 8) + -1) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        iVar7 = *(int *)(*piVar11 + 0x5c);
        uVar8 = *(uint *)(iVar7 + 0x70);
      }
      piVar14 = *(int **)(iVar7 + 0x4c);
      if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = thunk_FUN_00f00bc8(piVar2,*(undefined4 *)(*piVar14 + 0x20));
      if (iVar3 == 0) {
        uVar4 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar4,0);
      }
      if ((uint)piVar14[3] <= uVar8 + 1) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar14[uVar8 + 5] = (int)piVar2;
      thunk_FUN_00ec5080(piVar14 + uVar8 + 5,piVar2);
      iVar3 = *piVar11;
      iVar7 = *(int *)(iVar3 + 0x5c);
      iVar9 = *(int *)(iVar7 + 0x70) + 1;
      *(int *)(iVar7 + 0x70) = iVar9;
      if (iVar9 < *(int *)(iVar7 + 0x6c)) {
        if (*(int *)(iVar3 + 0x74) == 0) {
          FUN_00ec3934();
          iVar3 = *piVar11;
          iVar7 = *(int *)(iVar3 + 0x5c);
          iVar9 = *(int *)(iVar7 + 0x70);
        }
        *(int *)(iVar7 + 0x6c) = iVar9;
      }
    }
    else {
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        iVar3 = *piVar11;
        uVar8 = *(uint *)(*(int *)(iVar3 + 0x5c) + 0x70);
      }
      if (-1 < (int)uVar8) {
        do {
          iVar3 = *piVar11;
          if (*(int *)(iVar3 + 0x74) == 0) {
            FUN_00ec3934();
            iVar3 = *piVar11;
          }
          iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x4c);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar3 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          if (*(int *)(iVar3 + uVar8 * 4 + 0x10) == 0) {
            iVar3 = *piVar11;
            if (*(int *)(iVar3 + 0x74) == 0) {
              FUN_00ec3934();
              iVar3 = *piVar11;
            }
            piVar14 = *(int **)(*(int *)(iVar3 + 0x5c) + 0x4c);
            if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if ((piVar2 != (int *)0x0) &&
               (iVar3 = thunk_FUN_00f00bc8(piVar2,*(undefined4 *)(*piVar14 + 0x20)), iVar3 == 0)) {
              uVar4 = thunk_FUN_00f08b98();
              func_0x00ec3920(uVar4,0);
            }
            if ((uint)piVar14[3] <= uVar8) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f07924();
            }
            piVar14[uVar8 + 4] = (int)piVar2;
            thunk_FUN_00ec5080(piVar14 + uVar8 + 4,piVar2);
            iVar3 = *piVar11;
            iVar7 = *(int *)(iVar3 + 0x5c);
            if ((int)uVar8 < *(int *)(iVar7 + 0x6c)) {
              if (*(int *)(iVar3 + 0x74) == 0) {
                FUN_00ec3934();
                iVar3 = *piVar11;
                iVar7 = *(int *)(iVar3 + 0x5c);
              }
              *(uint *)(iVar7 + 0x6c) = uVar8;
            }
            if (*(int *)(iVar3 + 0x74) == 0) {
              FUN_00ec3934();
              iVar3 = *piVar11;
            }
            iVar7 = *(int *)(iVar3 + 0x5c);
            iVar9 = *(int *)(iVar7 + 0x6c);
            if (*(int *)(iVar7 + 0x70) < iVar9) {
              if (*(int *)(iVar3 + 0x74) == 0) {
                FUN_00ec3934();
                iVar3 = *piVar11;
                iVar7 = *(int *)(iVar3 + 0x5c);
                iVar9 = *(int *)(iVar7 + 0x6c);
              }
              *(int *)(iVar7 + 0x70) = iVar9;
            }
            goto LAB_01193010;
          }
          bVar15 = 0 < (int)uVar8;
          uVar8 = uVar8 - 1;
        } while (bVar15);
        iVar3 = *piVar11;
      }
    }
LAB_01193010:
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar11;
    }
    *(int *)(*(int *)(iVar3 + 0x5c) + 0x34) = *(int *)(*(int *)(iVar3 + 0x5c) + 0x34) + 1;
  }
  else {
    if (iVar3 != 1) goto LAB_01193048;
    piVar11 = *(int **)(_UNK_01193088 + 0x1192b24);
    iVar3 = *piVar11;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar11;
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x50);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Stack_object___Push_1b04f08
              (iVar3,piVar2,**(undefined4 **)(_UNK_0119308c + 0x1192b5c));
    piVar14 = *(int **)(_UNK_01193090 + 0x1192b84);
    *(int *)(*(int *)(*piVar11 + 0x5c) + 0x38) = *(int *)(*(int *)(*piVar11 + 0x5c) + 0x38) + 1;
    iVar3 = *piVar2;
    iVar7 = *piVar14;
    if (iVar3 != iVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(piVar2,iVar7);
    }
    if (piVar2[0x31] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *(int *)(piVar2[0x31] + 0xc);
    if (iVar9 < 1) goto LAB_01193048;
    iVar13 = 0;
    puVar6 = *(undefined4 **)(_UNK_01193094 + 0x1192bd8);
    do {
      if (iVar3 != iVar7) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (piVar2[0x31] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = System_Collections_Generic_List_object___get_Item_267d814(piVar2[0x31],iVar13,*puVar6)
      ;
      if (*(int *)(*piVar11 + 0x74) == 0) {
        FUN_00ec3934();
      }
      DG_Tweening_Core_TweenManager__Despawn_1182a40(uVar4,0);
      iVar13 = iVar13 + 1;
    } while (iVar9 != iVar13);
  }
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
LAB_01193048:
  UNRECOVERED_JUMPTABLE = *(code **)(*piVar2 + 0xe0);
  uVar4 = *(undefined4 *)(*piVar2 + 0xe4);
  *(undefined1 *)(piVar2 + 0x25) = 0;
                    /* WARNING: Could not recover jumptable at 0x01193068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(piVar2,uVar4);
  return;
}

