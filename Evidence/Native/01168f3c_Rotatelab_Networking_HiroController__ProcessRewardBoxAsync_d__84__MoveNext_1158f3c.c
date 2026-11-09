/* IL2CPP: Rotatelab.Networking.HiroController.<ProcessRewardBoxAsync>d__84$$MoveNext
void Rotatelab_Networking_HiroController__ProcessRewardBoxAsync_d__84__MoveNext (Rotatelab_Networking_HiroController__ProcessRewardBoxAsync_d__84_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0116946c) */
/* WARNING: Removing unreachable block (ram,0x0116a048) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController.<ProcessRewardBoxAsync>d__84$$MoveNext
   void Rotatelab_Networking_HiroController__ProcessRewardBoxAsync_d__84__MoveNext
   (Rotatelab_Networking_HiroController__ProcessRewardBoxAsync_d__84_o __this, const MethodInfo*
   method); */

void Rotatelab_Networking_HiroController__ProcessRewardBoxAsync_d__84__MoveNext_1158f3c
               (uint *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  uint *puStack_4c;
  uint **ppuStack_48;
  undefined4 uStack_40;
  uint uStack_3c;
  int *piStack_38;
  uint uStack_34;
  uint uStack_2c;
  uint *puStack_28;
  
  pcVar6 = (char *)(_UNK_01169f10 + 0x1168f58);
  puStack_28 = param_1;
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01169f14 + 0x1168f6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01169f18 + 0x1168f78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01169f1c + 0x1168f84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01169f20 + 0x1168f90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01169f24 + 0x1168f9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01169f28 + 0x1168fa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01169f2c + 0x1168fb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01169f30 + 0x1168fc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01169f34 + 0x1168fcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01169f38 + 0x1168fd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01169f3c + 0x1168fe4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01169f40 + 0x1168ff0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01169f44 + 0x1168ffc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116a000 + 0x1169008));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116a004 + 0x1169014));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116a008 + 0x1169020));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116a00c + 0x116902c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116a010 + 0x1169038));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116a014 + 0x1169044));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116a018 + 0x1169050));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116a01c + 0x116905c));
    *pcVar6 = '\x01';
  }
  uStack_2c = *param_1;
  uStack_34 = 0;
  piStack_38 = (int *)0x0;
  uStack_3c = 0;
  uStack_40 = 0;
  uVar12 = param_1[3];
  pcVar6 = (char *)(_UNK_0116a020 + 0x116909c);
  if (uStack_2c - 2 < 2) goto LAB_0116972c;
  if (uStack_2c == 1) {
    uStack_3c = param_1[10];
    *param_1 = 0xffffffff;
    param_1[10] = 0;
    uStack_2c = 0xffffffff;
    goto LAB_01169600;
  }
  if (uStack_2c == 0) {
LAB_01169304:
    ppuStack_48 = &puStack_28;
    puStack_4c = &uStack_2c;
    uStack_50 = 0;
    piStack_38 = (int *)puStack_28[7];
    uStack_34 = puStack_28[8];
    puStack_28[7] = 0;
    puStack_28[8] = 0;
    uStack_2c = 0xffffffff;
    *puStack_28 = 0xffffffff;
  }
  else {
    puVar3 = *(undefined4 **)(_UNK_0116a0cc + 0x11690f4);
    uVar4 = thunk_FUN_00f00cdc(*puVar3);
    Rotatelab_Networking_StopwatchEvent___ctor_fe8d78
              (uVar4,**(undefined4 **)(_UNK_0116a0d0 + 0x1169108),0,1,0);
    puStack_28[4] = uVar4;
    thunk_FUN_00ec5080(puStack_28 + 4,uVar4);
    uVar8 = puStack_28[4];
    uVar4 = thunk_FUN_00f00cdc(*puVar3);
    Rotatelab_Networking_StopwatchEvent___ctor_fe8d78
              (uVar4,**(undefined4 **)(_UNK_0116a0d4 + 0x1169150),uVar8,1,0);
    puStack_28[6] = uVar4;
    thunk_FUN_00ec5080(puStack_28 + 6,uVar4);
    ppuStack_48 = &puStack_28;
    puStack_4c = &uStack_2c;
    uStack_50 = 0;
    if (uStack_2c == 0) goto LAB_01169304;
    uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0116a0d8 + 0x11691a8));
    System_Func_bool____ctor_23938dc(uVar7,uVar12,**(undefined4 **)(_UNK_0116a0dc + 0x11691bc),0);
    piVar9 = *(int **)(_UNK_0116a0e0 + 0x11691d8);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Cysharp_Threading_Tasks_UniTask__WaitUntil_3217d44(&piStack_58,uVar7,8,0,0,0);
    thunk_FUN_00ec5080(&piStack_58,0);
    uStack_34 = uStack_54;
    piStack_38 = piStack_58;
    if (*(char *)(_UNK_0116a224 + 0x116923c) == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0116a24c + 0x1169254));
      *(undefined1 *)(_UNK_0116a258 + 0x1169264) = 1;
    }
    if (*(int *)(*piVar9 + 0x74) == 0) {
      FUN_00ec3934();
    }
    if (*(char *)(_UNK_0116a27c + 0x1169284) == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0116a290 + 0x1169298));
      *(undefined1 *)(_UNK_0116a29c + 0x11692a8) = 1;
    }
    piVar9 = piStack_38;
    if (piStack_38 != (int *)0x0) {
      iVar11 = *piStack_38;
      uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
      iVar2 = (int)(short)uStack_34;
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_0116a2bc + 0x11692c4)) {
            puVar3 = (undefined4 *)(iVar11 + *piVar5 * 8 + 0xc0);
            goto LAB_011694ac;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_0116a2bc + 0x11692c4),0);
LAB_011694ac:
      iVar11 = (*(code *)*puVar3)(piVar9,iVar2,puVar3[1]);
      if (iVar11 == 0) {
        uStack_2c = 0;
        *puStack_28 = 0;
        puStack_28[7] = (uint)piStack_38;
        puStack_28[8] = uStack_34;
        thunk_FUN_00ec5080(puStack_28 + 7,0);
        iVar11 = 8;
        func_0x0117426c(puStack_28 + 1,&piStack_38,puStack_28,
                        **(undefined4 **)(_UNK_0116a3cc + 0x1169504));
        goto LAB_011693d8;
      }
    }
  }
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116a2c8 + 0x1169344));
    *pcVar6 = '\x01';
  }
  piVar9 = piStack_38;
  iVar11 = 9;
  if (piStack_38 != (int *)0x0) {
    iVar2 = *piStack_38;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    iVar10 = (int)(short)uStack_34;
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_0116a358 + 0x1169374)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xd0);
          goto LAB_011693c0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_0116a358 + 0x1169374),2);
LAB_011693c0:
    (*(code *)*puVar3)(piVar9,iVar10,puVar3[1]);
  }
LAB_011693d8:
  if ((0x7fffffff < uStack_2c) && (piVar9 = (int *)(*ppuStack_48)[6], piVar9 != (int *)0x0)) {
    iVar2 = *piVar9;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_0116a3d0 + 0x116940c)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
          goto LAB_01169454;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_0116a3d0 + 0x116940c),0);
LAB_01169454:
    (*(code *)*puVar3)(piVar9,puVar3[1]);
  }
  if (iVar11 == 9 || iVar11 == 0) {
    uVar7 = 0;
    puStack_28[6] = 0;
    thunk_FUN_00ec5080(puStack_28 + 6,0);
    puStack_28[5] = 0;
    do {
      if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(uVar12 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar11 = Hiro_RewardMailboxSystem__ListAsync_296b040(*(int *)(uVar12 + 0x28),100,uVar7,0,0);
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uStack_3c = System_Threading_Tasks_Task_object___GetAwaiter_1b58780
                            (iVar11,**(undefined4 **)(_UNK_0116a3d4 + 0x11695d8));
      iVar11 = System_Runtime_CompilerServices_TaskAwaiter_object___get_IsCompleted_1b45ac8
                         (&uStack_3c,**(undefined4 **)(_UNK_0116a3d8 + 0x11695ec));
      if (iVar11 == 0) {
        uStack_2c = 1;
        *puStack_28 = 1;
        puStack_28[10] = uStack_3c;
        thunk_FUN_00ec5080(puStack_28 + 10,0);
        func_0x0117438c(puStack_28 + 1,&uStack_3c,puStack_28,
                        **(undefined4 **)(_UNK_0116a3dc + 0x11697d4));
        return;
      }
LAB_01169600:
      uVar4 = System_Runtime_CompilerServices_TaskAwaiter_object___GetResult_1b45b3c
                        (&uStack_3c,**(undefined4 **)(_UNK_0116a3e0 + 0x116960c));
      puStack_28[9] = uVar4;
      thunk_FUN_00ec5080();
      piVar9 = (int *)puStack_28[9];
      if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar11 = *piVar9;
      uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_0116a3e4 + 0x1169648)) {
            puVar3 = (undefined4 *)(iVar11 + *piVar5 * 8 + 0xc0);
            goto LAB_01169690;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_0116a3e4 + 0x1169648),0);
LAB_01169690:
      piVar9 = (int *)(*(code *)*puVar3)(piVar9,puVar3[1]);
      if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar11 = *piVar9;
      uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_0116a3e8 + 0x11696c0)) {
            puVar3 = (undefined4 *)(iVar11 + *piVar5 * 8 + 0xc0);
            goto LAB_01169708;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_0116a3e8 + 0x11696c0),0);
LAB_01169708:
      uVar4 = (*(code *)*puVar3)(piVar9,puVar3[1]);
      puStack_28[0xb] = uVar4;
      thunk_FUN_00ec5080();
LAB_0116972c:
      puStack_4c = &uStack_2c;
      ppuStack_48 = &puStack_28;
      uStack_50 = 0;
      if (uStack_2c == 2) {
        piStack_38 = (int *)puStack_28[7];
        uStack_34 = puStack_28[8];
        puStack_28[7] = 0;
        puStack_28[8] = 0;
        uStack_2c = 0xffffffff;
        *puStack_28 = 0xffffffff;
        goto LAB_01169bf0;
      }
      if (uStack_2c != 3) goto LAB_011699e0;
      piStack_38 = (int *)puStack_28[7];
      uStack_34 = puStack_28[8];
      puStack_28[7] = 0;
      puStack_28[8] = 0;
      uStack_2c = 0xffffffff;
      *puStack_28 = 0xffffffff;
      do {
        do {
          if (*pcVar6 == '\0') {
            FUN_00ec37c0(*(undefined4 *)(_UNK_0116a3ec + 0x1169834));
            *pcVar6 = '\x01';
          }
          piVar9 = piStack_38;
          if (piStack_38 != (int *)0x0) {
            iVar11 = *piStack_38;
            uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
            iVar2 = (int)(short)uStack_34;
            if (uVar4 != 0) {
              piVar5 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar5[-1] == **(int **)(_UNK_0116a3f0 + 0x1169858)) {
                  puVar3 = (undefined4 *)(iVar11 + *piVar5 * 8 + 0xd0);
                  goto LAB_011698a4;
                }
                uVar4 = uVar4 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar4 != 0);
            }
            puVar3 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_0116a3f0 + 0x1169858),2);
LAB_011698a4:
            (*(code *)*puVar3)(piVar9,iVar2,puVar3[1]);
          }
          do {
            puStack_28[0xc] = 0;
            thunk_FUN_00ec5080();
LAB_011699e0:
            piVar9 = (int *)puStack_28[0xb];
            if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar11 = *piVar9;
            uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar4 != 0) {
              piVar5 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar5[-1] == **(int **)(_UNK_0116a458 + 0x1169a04)) {
                  puVar3 = (undefined4 *)(iVar11 + *piVar5 * 8 + 0xc0);
                  goto LAB_01169a4c;
                }
                uVar4 = uVar4 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar4 != 0);
            }
            puVar3 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_0116a458 + 0x1169a04),0);
LAB_01169a4c:
            iVar11 = (*(code *)*puVar3)(piVar9,puVar3[1]);
            if (iVar11 == 0) {
              iVar11 = 0x17;
              goto LAB_01169f94;
            }
            piVar9 = (int *)puStack_28[0xb];
            if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar11 = *piVar9;
            uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar4 != 0) {
              piVar5 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar5[-1] == **(int **)(_UNK_0116a3f4 + 0x11698e4)) {
                  puVar3 = (undefined4 *)(iVar11 + *piVar5 * 8 + 0xc0);
                  goto LAB_0116992c;
                }
                uVar4 = uVar4 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar4 != 0);
            }
            puVar3 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_0116a3f4 + 0x11698e4),0);
LAB_0116992c:
            uVar4 = (*(code *)*puVar3)(piVar9,puVar3[1]);
            puStack_28[0xc] = uVar4;
            thunk_FUN_00ec5080();
            piVar9 = (int *)puStack_28[0xc];
            if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar11 = *piVar9;
            uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar4 != 0) {
              piVar5 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar5[-1] == **(int **)(_UNK_0116a3f8 + 0x1169970)) {
                  puVar3 = (undefined4 *)(iVar11 + *piVar5 * 8 + 0xd0);
                  goto LAB_011699b8;
                }
                uVar4 = uVar4 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar4 != 0);
            }
            puVar3 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_0116a3f8 + 0x1169970),2);
LAB_011699b8:
            iVar11 = (*(code *)*puVar3)(piVar9,puVar3[1]);
          } while (iVar11 == 0);
          while( true ) {
            puVar3 = *(undefined4 **)(_UNK_0116a428 + 0x1169c9c);
            uVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
            if (*(int *)(**(int **)(_UNK_0116a42c + 0x1169cb0) + 0x74) == 0) {
              FUN_00ec3934();
            }
            iVar11 = UnityEngine_Object__op_Inequality_36018e4(uVar7,0,0);
            if (iVar11 == 0) break;
            iVar11 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
            if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar11 = Rotatelab_UI_PopupManager__get_IsAnyPopupVisible_1124e44(iVar11,0);
            if (iVar11 == 0) break;
            piVar9 = *(int **)(_UNK_0116a3fc + 0x1169a94);
            if (*(int *)(*piVar9 + 0x74) == 0) {
              FUN_00ec3934();
            }
            Cysharp_Threading_Tasks_UniTask__Delay_32169f8(&piStack_58,100,0,8,0,0,0);
            thunk_FUN_00ec5080(&piStack_58,0);
            uStack_34 = uStack_54;
            piStack_38 = piStack_58;
            if (*(char *)(_UNK_0116a400 + 0x1169afc) == '\0') {
              FUN_00ec37c0(*(undefined4 *)(_UNK_0116a404 + 0x1169b14));
              *(undefined1 *)(_UNK_0116a408 + 0x1169b24) = 1;
            }
            if (*(int *)(*piVar9 + 0x74) == 0) {
              FUN_00ec3934();
            }
            if (*(char *)(_UNK_0116a40c + 0x1169b44) == '\0') {
              FUN_00ec37c0(*(undefined4 *)(_UNK_0116a410 + 0x1169b58));
              *(undefined1 *)(_UNK_0116a414 + 0x1169b68) = 1;
            }
            piVar9 = piStack_38;
            if (piStack_38 != (int *)0x0) {
              iVar11 = *piStack_38;
              uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
              iVar2 = (int)(short)uStack_34;
              if (uVar4 != 0) {
                piVar5 = (int *)(*(int *)(iVar11 + 0x58) + 4);
                do {
                  if (piVar5[-1] == **(int **)(_UNK_0116a418 + 0x1169b84)) {
                    puVar3 = (undefined4 *)(iVar11 + *piVar5 * 8 + 0xc0);
                    goto LAB_01169bd0;
                  }
                  uVar4 = uVar4 - 1;
                  piVar5 = piVar5 + 2;
                } while (uVar4 != 0);
              }
              puVar3 = (undefined4 *)
                       FUN_00efdb38(piStack_38,**(int **)(_UNK_0116a418 + 0x1169b84),0);
LAB_01169bd0:
              iVar11 = (*(code *)*puVar3)(piVar9,iVar2,puVar3[1]);
              if (iVar11 == 0) {
                uStack_2c = 2;
                *puStack_28 = 2;
                puStack_28[7] = (uint)piStack_38;
                puStack_28[8] = uStack_34;
                thunk_FUN_00ec5080(puStack_28 + 7,0);
                iVar11 = 8;
                func_0x0117426c(puStack_28 + 1,&piStack_38,puStack_28,
                                **(undefined4 **)(_UNK_0116a41c + 0x1169f84));
                goto LAB_01169f94;
              }
            }
LAB_01169bf0:
            if (*pcVar6 == '\0') {
              FUN_00ec37c0(*(undefined4 *)(_UNK_0116a420 + 0x1169c08));
              *pcVar6 = '\x01';
            }
            piVar9 = piStack_38;
            if (piStack_38 != (int *)0x0) {
              iVar11 = *piStack_38;
              uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
              iVar2 = (int)(short)uStack_34;
              if (uVar4 != 0) {
                piVar5 = (int *)(*(int *)(iVar11 + 0x58) + 4);
                do {
                  if (piVar5[-1] == **(int **)(_UNK_0116a424 + 0x1169c2c)) {
                    puVar3 = (undefined4 *)(iVar11 + *piVar5 * 8 + 0xd0);
                    goto LAB_01169c78;
                  }
                  uVar4 = uVar4 - 1;
                  piVar5 = piVar5 + 2;
                } while (uVar4 != 0);
              }
              puVar3 = (undefined4 *)
                       FUN_00efdb38(piStack_38,**(int **)(_UNK_0116a424 + 0x1169c2c),2);
LAB_01169c78:
              (*(code *)*puVar3)(piVar9,iVar2,puVar3[1]);
            }
          }
          uVar4 = puStack_28[5];
          puStack_28[5] = uVar4 + 1;
          if (uVar4 == 0) {
            if (puStack_28[4] == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            Rotatelab_Networking_StopwatchEvent__AddTimestamp_fe9c6c
                      (puStack_28[4],**(undefined4 **)(_UNK_0116a430 + 0x1169d38),0);
          }
          if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(int *)(uVar12 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          Rotatelab_Networking_UI_HiroRewardDialog__ShowAsync_fe9ef0
                    (&piStack_58,*(int *)(uVar12 + 0x5c),puStack_28[0xc],0);
          piVar9 = *(int **)(_UNK_0116a434 + 0x1169d88);
          if (*(int *)(*piVar9 + 0x74) == 0) {
            FUN_00ec3934();
          }
          thunk_FUN_00ec5080(&piStack_58,0);
          uStack_34 = uStack_54;
          piStack_38 = piStack_58;
          if (*(char *)(_UNK_0116a438 + 0x1169dcc) == '\0') {
            FUN_00ec37c0(*(undefined4 *)(_UNK_0116a43c + 0x1169de4));
            *(undefined1 *)(_UNK_0116a440 + 0x1169df4) = 1;
          }
          if (*(int *)(*piVar9 + 0x74) == 0) {
            FUN_00ec3934();
          }
          if (*(char *)(_UNK_0116a444 + 0x1169e14) == '\0') {
            FUN_00ec37c0(*(undefined4 *)(_UNK_0116a448 + 0x1169e28));
            *(undefined1 *)(_UNK_0116a44c + 0x1169e38) = 1;
          }
          piVar9 = piStack_38;
        } while (piStack_38 == (int *)0x0);
        iVar11 = *piStack_38;
        uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
        iVar2 = (int)(short)uStack_34;
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar11 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_0116a450 + 0x1169e54)) {
              puVar3 = (undefined4 *)(iVar11 + *piVar5 * 8 + 0xc0);
              goto LAB_01169ea0;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_0116a450 + 0x1169e54),0);
LAB_01169ea0:
        iVar11 = (*(code *)*puVar3)(piVar9,iVar2,puVar3[1]);
      } while (iVar11 != 0);
      uStack_2c = 3;
      *puStack_28 = 3;
      puStack_28[7] = (uint)piStack_38;
      puStack_28[8] = uStack_34;
      thunk_FUN_00ec5080(puStack_28 + 7,0);
      iVar11 = 8;
      func_0x0117426c(puStack_28 + 1,&piStack_38,puStack_28,
                      **(undefined4 **)(_UNK_0116a454 + 0x1169efc));
LAB_01169f94:
      if ((0x7fffffff < uStack_2c) && (piVar9 = (int *)(*ppuStack_48)[0xb], piVar9 != (int *)0x0)) {
        iVar2 = *piVar9;
        uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_0116a45c + 0x1169fc4)) {
              puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
              goto LAB_0116a030;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_0116a45c + 0x1169fc4),0);
LAB_0116a030:
        (*(code *)*puVar3)(piVar9,puVar3[1]);
      }
      if (iVar11 != 0x17 && iVar11 != 0) {
        return;
      }
      puStack_28[0xb] = 0;
      thunk_FUN_00ec5080();
      piVar9 = (int *)puStack_28[9];
      if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar11 = *piVar9;
      uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_0116a460 + 0x116a090)) {
            puVar3 = (undefined4 *)(iVar11 + *piVar5 * 8 + 200);
            goto LAB_0116a0f0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_0116a460 + 0x116a090),1);
LAB_0116a0f0:
      uVar7 = (*(code *)*puVar3)(piVar9,puVar3[1]);
      puStack_28[9] = 0;
      thunk_FUN_00ec5080();
      iVar11 = System_String__IsNullOrEmpty_2a0a844(uVar7,0);
    } while (iVar11 == 0);
    if (0 < (int)puStack_28[5]) {
      if (puStack_28[4] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar11 = Rotatelab_Networking_StopwatchEvent__AddParameter_fe9ca8
                         (puStack_28[4],**(undefined4 **)(_UNK_0116a464 + 0x116a154),puStack_28[5],0
                          ,0);
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Networking_StopwatchEvent__Complete_fe9014(iVar11,0);
    }
    *puStack_28 = 0xfffffffe;
    puStack_28[4] = 0;
    thunk_FUN_00ec5080();
    puVar1 = puStack_28;
    pcVar6 = (char *)(_UNK_0116a468 + 0x116a1b0);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0116a46c + 0x116a1c4));
      *pcVar6 = '\x01';
    }
    piVar9 = (int *)puVar1[1];
    if (piVar9 != (int *)0x0) {
      iVar11 = *piVar9;
      uVar12 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar12 != 0) {
        piVar5 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_0116a470 + 0x116a1e8)) {
            puVar3 = (undefined4 *)(iVar11 + *piVar5 * 8 + 0xd0);
            goto LAB_0116a234;
          }
          uVar12 = uVar12 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar12 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_0116a470 + 0x116a1e8),2);
LAB_0116a234:
      (*(code *)*puVar3)(piVar9,puVar3[1]);
    }
  }
  return;
}

