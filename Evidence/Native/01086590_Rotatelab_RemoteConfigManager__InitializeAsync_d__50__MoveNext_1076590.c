/* IL2CPP: Rotatelab.RemoteConfigManager.<InitializeAsync>d__50$$MoveNext
void Rotatelab_RemoteConfigManager__InitializeAsync_d__50__MoveNext (Rotatelab_RemoteConfigManager__InitializeAsync_d__50_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager.<InitializeAsync>d__50$$MoveNext
   void Rotatelab_RemoteConfigManager__InitializeAsync_d__50__MoveNext
   (Rotatelab_RemoteConfigManager__InitializeAsync_d__50_o __this, const MethodInfo* method); */

void Rotatelab_RemoteConfigManager__InitializeAsync_d__50__MoveNext_1076590(uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  uint *puVar15;
  uint *puStack_80;
  uint uStack_7c;
  int *piStack_78;
  uint *puStack_74;
  uint **ppuStack_70;
  int iStack_68;
  uint *puStack_64;
  uint **ppuStack_60;
  uint auStack_5c [3];
  int *piStack_50;
  undefined4 uStack_4c;
  uint uStack_44;
  uint *puStack_40;
  uint uStack_3c;
  undefined4 uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  
  puStack_28 = param_1;
  pcVar11 = (char *)(_UNK_0108759c + 0x10865ac);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875a0 + 0x10865c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875a4 + 0x10865cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875a8 + 0x10865d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875ac + 0x10865e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875b0 + 0x10865f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875b4 + 0x10865fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875b8 + 0x1086608));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875bc + 0x1086614));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875c0 + 0x1086620));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875c4 + 0x108662c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875c8 + 0x1086638));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875cc + 0x1086644));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875d0 + 0x1086650));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875d4 + 0x108665c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875d8 + 0x1086668));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875dc + 0x1086674));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875e0 + 0x1086680));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875e4 + 0x108668c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875e8 + 0x1086698));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875ec + 0x10866a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875f0 + 0x10866b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875f4 + 0x10866bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875f8 + 0x10866c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010875fc + 0x10866d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01087600 + 0x10866e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01087604 + 0x10866ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01087608 + 0x10866f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108760c + 0x1086704));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01087610 + 0x1086710));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01087614 + 0x108671c));
    *pcVar11 = '\x01';
  }
  uStack_2c = *param_1;
  uVar12 = param_1[4];
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_3c = 0;
  puStack_40 = (uint *)0x0;
  uStack_44 = 0;
  uStack_4c = (uint *)0x0;
  piStack_50 = (int *)0x0;
  auStack_5c[2] = 0;
  if (uStack_2c == 0) {
    uStack_30 = param_1[6];
    *param_1 = 0xffffffff;
    param_1[6] = 0;
    uStack_2c = 0xffffffff;
    goto LAB_01087db4;
  }
  if (uStack_2c - 5 < 0xfffffffc) {
    if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(uVar12 + 0x9c) - 1U < 2) {
      while (*(int *)(uVar12 + 0x9c) == 1) {
        if (*(int *)(**(int **)(_UNK_01087fa0 + 0x1087d74) + 0x74) == 0) {
          FUN_00ec3934();
        }
        uStack_34 = Cysharp_Threading_Tasks_UniTask__Yield_3216554(0);
        uStack_30 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_321c1d4(&uStack_34,0);
        iVar1 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_321c1e4
                          (&uStack_30,0);
        if (iVar1 == 0) {
          uStack_2c = 0;
          *puStack_28 = 0;
          puVar3 = *(undefined4 **)(_UNK_01087fa4 + 0x1087eb4);
          puStack_28[6] = uStack_30;
          func_0x0109f93c(puStack_28 + 1,&uStack_30,puStack_28,*puVar3);
          return;
        }
LAB_01087db4:
        Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_321c1ec(&uStack_30,0);
        if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
      }
      param_1 = (uint *)(uint)(*(int *)(uVar12 + 0x9c) == 2);
      goto LAB_01087dec;
    }
    param_1 = (uint *)thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01087748 + 0x1086794));
    Rotatelab_Networking_StopwatchEvent___ctor_fe8d78
              (param_1,**(undefined4 **)(_UNK_0108774c + 0x10867a8),0,1,0);
    puStack_28[5] = (uint)param_1;
    thunk_FUN_00ec5080(puStack_28 + 5,param_1);
  }
  iStack_68 = 0;
  puStack_64 = &uStack_2c;
  ppuStack_60 = &puStack_28;
  if (uStack_2c - 4 < 0xfffffffd) {
    if (uStack_2c != 4) {
      if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(undefined4 *)(uVar12 + 0x9c) = 1;
      puStack_28[8] = 0;
      goto LAB_0108686c;
    }
    piStack_50 = (int *)puStack_28[0xd];
    uStack_4c = (uint *)puStack_28[0xe];
    puStack_28[0xd] = 0;
    puStack_28[0xe] = 0;
    uStack_2c = 0xffffffff;
    *puStack_28 = 0xffffffff;
LAB_01087510:
    piVar13 = piStack_50;
    if (piStack_50 != (int *)0x0) {
      iVar14 = (int)uStack_4c._2_2_;
      iVar1 = *(int *)(**(int **)(_UNK_01088004 + 0x1087524) + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0x14);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768(iVar1);
      }
      iVar2 = *piVar13;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar10[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
            goto LAB_01087624;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar13,iVar1,0);
LAB_01087624:
      (*(code *)*puVar3)(piVar13,iVar14,puVar3[1]);
    }
    goto LAB_01087638;
  }
LAB_0108686c:
  if (uStack_2c == 1) {
LAB_0108697c:
    piStack_78 = (int *)0x0;
    puStack_40 = (uint *)puStack_28[10];
    uStack_3c = puStack_28[0xb];
    puStack_28[10] = 0;
    puStack_28[0xb] = 0;
    uStack_2c = 0xffffffff;
    *puStack_28 = 0xffffffff;
    puStack_74 = &uStack_2c;
    ppuStack_70 = &puStack_28;
    goto LAB_010869a4;
  }
  if (uStack_2c == 3) {
    piStack_50 = (int *)puStack_28[0xd];
    uStack_4c = (uint *)puStack_28[0xe];
    puStack_28[0xd] = 0;
    puStack_28[0xe] = 0;
    uStack_2c = 0xffffffff;
    *puStack_28 = 0xffffffff;
LAB_01087110:
    piVar13 = piStack_50;
    if (piStack_50 == (int *)0x0) {
LAB_0108719c:
      uVar9 = (uint)uStack_4c & 0xff;
    }
    else {
      iVar14 = (int)uStack_4c._2_2_;
      iVar1 = *(int *)(**(int **)(_UNK_01087fd4 + 0x1087124) + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0x14);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768(iVar1);
      }
      iVar2 = *piVar13;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar10[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
            goto LAB_01087200;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar13,iVar1,0);
LAB_01087200:
      uVar9 = (*(code *)*puVar3)(piVar13,iVar14,puVar3[1]);
    }
    if (uVar9 != 0) {
      if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(undefined4 *)(uVar12 + 0x9c) = 2;
    }
    if (puStack_28[8] == 1) {
      piVar10 = (int *)puStack_28[7];
      piVar13 = (int *)0x0;
      if (piVar10 != (int *)0x0) {
        uVar9 = (uint)*(byte *)(**(int **)(_UNK_01087fdc + 0x108725c) + 0xb8);
        if ((*(byte *)(*piVar10 + 0xb8) < uVar9) ||
           (piVar13 = piVar10,
           *(int *)(*(int *)(*piVar10 + 100) + uVar9 * 4 + -4) !=
           **(int **)(_UNK_01087fdc + 0x108725c))) {
                    /* WARNING: Subroutine does not return */
          FUN_00ec3e28();
        }
      }
      if (*(int *)(**(int **)(_UNK_01087fe0 + 0x1087294) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Utilities__ProcessException_1076464(piVar13,0);
      uVar9 = puStack_28[5];
      if (*(int *)(**(int **)(_UNK_01087fe4 + 0x10872c0) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar1 = Firebase_RemoteConfig_FirebaseRemoteConfig__get_DefaultInstance_120ee10(0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = Firebase_RemoteConfig_FirebaseRemoteConfig__get_Info_120fc28(iVar1,0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      ppuStack_70 = *(uint ***)(iVar1 + 0x24);
      puStack_74 = (uint *)0xffffffff;
      piStack_78 = (int *)**(undefined4 **)(_UNK_01087fe8 + 0x1087318);
      uVar4 = System_Enum__ToString_2bab8c0(&piStack_78,0);
      if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Networking_StopwatchEvent__AddParameter_fe9ae8
                (uVar9,**(undefined4 **)(_UNK_01087fec + 0x1087350),uVar4,0);
      if ((piVar13 != (int *)0x0) && (*piVar13 == **(int **)(_UNK_01087ff0 + 0x1087374))) {
        if (puStack_28[5] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Networking_StopwatchEvent__AddParameter_fe9ca8
                  (puStack_28[5],**(undefined4 **)(_UNK_01087ff4 + 0x10873a4),piVar13[0x12],
                   piVar13[0x12] >> 0x1f,0);
      }
      if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_RemoteConfigManager__ActivateRemoteConfigAsync_10746d8
                (&piStack_78,uVar12,puStack_28[5]);
      puVar15 = puStack_74;
      piVar13 = piStack_78;
      puStack_74 = (uint *)0x0;
      piStack_78 = (int *)0x0;
      if ((*(byte *)(*(int *)(**(int **)(_UNK_01087ff8 + 0x10873f8) + 0x10) + 0xbd) & 1) == 0) {
        FUN_00efd768();
      }
      piStack_78 = piVar13;
      puStack_74 = puVar15;
      thunk_FUN_00ec5080(&piStack_78,0);
      uStack_4c = puStack_74;
      piStack_50 = piStack_78;
      iVar1 = *(int *)(**(int **)(_UNK_01087ffc + 0x1087434) + 0x10);
      if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      piVar13 = piStack_50;
      if (piStack_50 != (int *)0x0) {
        iVar14 = (int)uStack_4c._2_2_;
        iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 0xc) + 0x10);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = FUN_00efd768();
        }
        iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 4);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = FUN_00efd768(iVar1);
        }
        iVar2 = *piVar13;
        uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar1) {
              puVar3 = (undefined4 *)(iVar2 + *piVar10 * 8 + 200);
              goto LAB_010874f0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined4 *)FUN_00efdb38(piVar13,iVar1,1);
LAB_010874f0:
        iVar1 = (*(code *)*puVar3)(piVar13,iVar14,puVar3[1]);
        if (iVar1 != 0) goto LAB_01087510;
        uStack_2c = 4;
        *puStack_28 = 4;
        puStack_28[0xd] = (uint)piStack_50;
        puStack_28[0xe] = (uint)uStack_4c;
        param_1 = (uint *)0x0;
        thunk_FUN_00ec5080(puStack_28 + 0xd,0);
        iVar1 = 8;
        func_0x0109fcc0(puStack_28 + 1,&piStack_50,puStack_28,
                        **(undefined4 **)(_UNK_01088000 + 0x10878c0));
        goto LAB_010876d8;
      }
    }
LAB_01087638:
    puStack_28[7] = 0;
    thunk_FUN_00ec5080();
    if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    ppuStack_70 = (uint **)0x2;
    if (*(int *)(uVar12 + 0x9c) != 2) {
      ppuStack_70 = (uint **)0x3;
      *(undefined4 *)(uVar12 + 0x9c) = 3;
    }
    uVar9 = puStack_28[5];
    puStack_74 = (uint *)0xffffffff;
    piStack_78 = (int *)**(undefined4 **)(_UNK_01088008 + 0x108767c);
    uVar4 = System_Enum__ToString_2bab8c0(&piStack_78,0);
    if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Networking_StopwatchEvent__AddParameter_fe9ae8
              (uVar9,**(undefined4 **)(_UNK_0108800c + 0x10876b4),uVar4,0);
    iVar1 = 9;
    param_1 = (uint *)(uint)(*(int *)(uVar12 + 0x9c) == 2);
  }
  else if (uStack_2c == 2) {
LAB_01086d30:
    piStack_78 = (int *)0x0;
    uStack_44 = puStack_28[0xc];
    puStack_28[0xc] = 0;
    uStack_2c = 0xffffffff;
    *puStack_28 = 0xffffffff;
    puStack_74 = &uStack_2c;
    ppuStack_70 = &puStack_28;
LAB_01086d50:
    iVar1 = 0x18;
    System_Runtime_CompilerServices_TaskAwaiter__GetResult_2a93488(&uStack_44,0);
LAB_01086d60:
    if ((0x7fffffff < *puStack_74) && (param_1 = (uint *)(*ppuStack_70)[9], param_1 != (uint *)0x0))
    {
      uVar9 = *param_1;
      uVar8 = (uint)*(ushort *)(uVar9 + 0xb6);
      if (uVar8 != 0) {
        piVar13 = (int *)(*(int *)(uVar9 + 0x58) + 4);
        do {
          if (piVar13[-1] == **(int **)(_UNK_01087d4c + 0x1086d94)) {
            puVar3 = (undefined4 *)(uVar9 + *piVar13 * 8 + 0xc0);
            goto LAB_01086f20;
          }
          uVar8 = uVar8 - 1;
          piVar13 = piVar13 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(param_1,**(int **)(_UNK_01087d4c + 0x1086d94),0);
LAB_01086f20:
      (*(code *)*puVar3)(param_1,puVar3[1]);
    }
    if (piStack_78 != (int *)0x0) {
      FUN_00ec3a6c();
    }
    if (iVar1 != 0x18) {
      param_1 = (uint *)0x0;
    }
    if (iVar1 == 0x18 || iVar1 == 0) {
      puStack_28[9] = 0;
      thunk_FUN_00ec5080();
      if (*(int *)(**(int **)(_UNK_01087f14 + 0x1086f6c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar1 = Firebase_RemoteConfig_FirebaseRemoteConfig__get_DefaultInstance_120ee10(0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = Firebase_RemoteConfig_FirebaseRemoteConfig__get_Info_120fc28(iVar1,0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar1 + 0x20) != 0) {
        iVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01087fac + 0x1087984));
        if (*(int *)(iVar1 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar1 = Firebase_RemoteConfig_FirebaseRemoteConfig__get_DefaultInstance_120ee10(0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = Firebase_RemoteConfig_FirebaseRemoteConfig__get_Info_120fc28(iVar1,0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piStack_78 = *(int **)(iVar1 + 0x20);
        uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01087fb0 + 0x10879dc));
        uVar4 = FUN_00ec393c(uVar4,&piStack_78);
        iVar1 = Firebase_RemoteConfig_FirebaseRemoteConfig__get_DefaultInstance_120ee10(0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = Firebase_RemoteConfig_FirebaseRemoteConfig__get_Info_120fc28(iVar1,0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        puStack_80 = *(uint **)(iVar1 + 0x24);
        uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01087fb4 + 0x1087a30));
        uVar5 = FUN_00ec393c(uVar5,&puStack_80);
        uVar6 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01087fb8 + 0x1087a48));
        uVar7 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01087fbc + 0x1087a58));
        uVar4 = System_String__Format_2a0c2b4(uVar6,uVar7,uVar4,uVar5,0);
        thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01087fc0 + 0x1087a84));
        uVar5 = thunk_FUN_00f00cdc();
        System_Exception___ctor_2bad064(uVar5,uVar4,0);
        uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01087fc4 + 0x1087aa4));
        func_0x00ec3920(uVar5,uVar4);
                    /* WARNING: Subroutine does not return */
        FUN_00ec3760();
      }
      if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_RemoteConfigManager__ActivateRemoteConfigAsync_10746d8
                (&piStack_78,uVar12,puStack_28[5]);
      puVar15 = puStack_74;
      piVar13 = piStack_78;
      puStack_74 = (uint *)0x0;
      piStack_78 = (int *)0x0;
      if ((*(byte *)(*(int *)(**(int **)(_UNK_01087fc8 + 0x1086ff8) + 0x10) + 0xbd) & 1) == 0) {
        FUN_00efd768();
      }
      piStack_78 = piVar13;
      puStack_74 = puVar15;
      thunk_FUN_00ec5080(&piStack_78,0);
      uStack_4c = puStack_74;
      piStack_50 = piStack_78;
      iVar1 = *(int *)(**(int **)(_UNK_01087fcc + 0x1087034) + 0x10);
      if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      piVar13 = piStack_50;
      if (piStack_50 == (int *)0x0) goto LAB_0108719c;
      iVar14 = (int)uStack_4c._2_2_;
      iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 0xc) + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768(iVar1);
      }
      iVar2 = *piVar13;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar10[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar2 + *piVar10 * 8 + 200);
            goto LAB_010870f0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar13,iVar1,1);
LAB_010870f0:
      iVar1 = (*(code *)*puVar3)(piVar13,iVar14,puVar3[1]);
      if (iVar1 != 0) goto LAB_01087110;
      uStack_2c = 3;
      *puStack_28 = 3;
      puStack_28[0xd] = (uint)piStack_50;
      puStack_28[0xe] = (uint)uStack_4c;
      param_1 = (uint *)0x0;
      thunk_FUN_00ec5080(puStack_28 + 0xd,0);
      iVar1 = 8;
      func_0x0109fcc0(puStack_28 + 1,&piStack_50,puStack_28,
                      **(undefined4 **)(_UNK_01087fd0 + 0x10871e0));
    }
  }
  else {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010878dc + 0x10868e4));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Debugging_CreativeCanvasController__LogMessage_110e8d8
              (iVar1,**(undefined4 **)(_UNK_010878e0 + 0x1086904),0);
    uVar8 = puStack_28[5];
    uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010878e4 + 0x1086924));
    Rotatelab_Networking_StopwatchEvent___ctor_fe8d78
              (uVar9,**(undefined4 **)(_UNK_010878e8 + 0x1086938),uVar8,1,0);
    puStack_28[9] = uVar9;
    thunk_FUN_00ec5080(puStack_28 + 9,uVar9);
    piStack_78 = (int *)0x0;
    if (uStack_2c == 1) goto LAB_0108697c;
    piVar13 = *(int **)(_UNK_0108796c + 0x1086a38);
    iVar1 = *piVar13;
    puStack_74 = &uStack_2c;
    ppuStack_70 = &puStack_28;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar13;
    }
    puVar3 = *(undefined4 **)(iVar1 + 0x5c);
    iVar14 = puVar3[3];
    if (iVar14 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        puVar3 = *(undefined4 **)(*piVar13 + 0x5c);
      }
      uVar4 = *puVar3;
      iVar14 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01087970 + 0x1086a84));
      System_Func_bool____ctor_23938dc(iVar14,uVar4,**(undefined4 **)(_UNK_01087974 + 0x1086a98),0);
      piVar13 = (int *)(*(int *)(*piVar13 + 0x5c) + 0xc);
      *piVar13 = iVar14;
      thunk_FUN_00ec5080(piVar13,iVar14);
    }
    piVar13 = *(int **)(_UNK_01087ac0 + 0x1086ac8);
    if (*(int *)(*piVar13 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Cysharp_Threading_Tasks_UniTask__WaitUntil_3217d44(&puStack_80,iVar14,8,0,0,0);
    thunk_FUN_00ec5080(&puStack_80,0);
    pcVar11 = (char *)(_UNK_01087b18 + 0x1086b24);
    uStack_3c = uStack_7c;
    puStack_40 = puStack_80;
    if (*pcVar11 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01087b3c + 0x1086b44));
      *pcVar11 = '\x01';
    }
    if (*(int *)(*piVar13 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar11 = (char *)(_UNK_01087b64 + 0x1086b6c);
    if (*pcVar11 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01087b78 + 0x1086b80));
      *pcVar11 = '\x01';
    }
    param_1 = puStack_40;
    if (puStack_40 == (uint *)0x0) {
LAB_010869a4:
      pcVar11 = (char *)(_UNK_01087960 + 0x10869b0);
      if (*pcVar11 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01087964 + 0x10869c4));
        *pcVar11 = '\x01';
      }
      param_1 = puStack_40;
      iVar1 = 0x13;
      if (puStack_40 != (uint *)0x0) {
        uVar9 = *puStack_40;
        uVar8 = (uint)*(ushort *)(uVar9 + 0xb6);
        iVar14 = (int)(short)uStack_3c;
        if (uVar8 != 0) {
          piVar13 = (int *)(*(int *)(uVar9 + 0x58) + 4);
          do {
            if (piVar13[-1] == **(int **)(_UNK_01087968 + 0x10869ec)) {
              puVar3 = (undefined4 *)(uVar9 + *piVar13 * 8 + 0xd0);
              goto LAB_01086bf0;
            }
            uVar8 = uVar8 - 1;
            piVar13 = piVar13 + 2;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined4 *)FUN_00efdb38(puStack_40,**(int **)(_UNK_01087968 + 0x10869ec),2);
LAB_01086bf0:
        (*(code *)*puVar3)(param_1,iVar14,puVar3[1]);
      }
    }
    else {
      uVar9 = *puStack_40;
      uVar8 = (uint)*(ushort *)(uVar9 + 0xb6);
      iVar1 = (int)(short)uStack_3c;
      if (uVar8 != 0) {
        piVar13 = (int *)(*(int *)(uVar9 + 0x58) + 4);
        do {
          if (piVar13[-1] == **(int **)(_UNK_01087b9c + 0x1086ba4)) {
            puVar3 = (undefined4 *)(uVar9 + *piVar13 * 8 + 0xc0);
            goto LAB_010878f8;
          }
          uVar8 = uVar8 - 1;
          piVar13 = piVar13 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(puStack_40,**(int **)(_UNK_01087b9c + 0x1086ba4),0);
LAB_010878f8:
      iVar1 = (*(code *)*puVar3)(param_1,iVar1,puVar3[1]);
      if (iVar1 != 0) goto LAB_010869a4;
      uStack_2c = 1;
      *puStack_28 = 1;
      puStack_28[10] = (uint)puStack_40;
      puStack_28[0xb] = uStack_3c;
      thunk_FUN_00ec5080(puStack_28 + 10,0);
      iVar1 = 8;
      func_0x0109fa68(puStack_28 + 1,&puStack_40,puStack_28,
                      **(undefined4 **)(_UNK_01087fa8 + 0x108794c));
    }
    if ((0x7fffffff < *puStack_74) && (param_1 = (uint *)(*ppuStack_70)[9], param_1 != (uint *)0x0))
    {
      uVar9 = *param_1;
      uVar8 = (uint)*(ushort *)(uVar9 + 0xb6);
      if (uVar8 != 0) {
        piVar13 = (int *)(*(int *)(uVar9 + 0x58) + 4);
        do {
          if (piVar13[-1] == **(int **)(_UNK_01087c34 + 0x1086c3c)) {
            puVar3 = (undefined4 *)(uVar9 + *piVar13 * 8 + 0xc0);
            goto LAB_01086c84;
          }
          uVar8 = uVar8 - 1;
          piVar13 = piVar13 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(param_1,**(int **)(_UNK_01087c34 + 0x1086c3c),0);
LAB_01086c84:
      (*(code *)*puVar3)(param_1,puVar3[1]);
    }
    if (piStack_78 != (int *)0x0) {
      FUN_00ec3a6c();
    }
    if (iVar1 != 0x13) {
      param_1 = (uint *)0x0;
    }
    if (iVar1 == 0x13 || iVar1 == 0) {
      puStack_28[9] = 0;
      thunk_FUN_00ec5080();
      uVar9 = puStack_28[5];
      param_1 = (uint *)thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01087cbc + 0x1086cd8));
      Rotatelab_Networking_StopwatchEvent___ctor_fe8d78
                (param_1,**(undefined4 **)(_UNK_01087ce4 + 0x1086cec),uVar9,1,0);
      puStack_28[9] = (uint)param_1;
      thunk_FUN_00ec5080(puStack_28 + 9,param_1);
      piStack_78 = (int *)0x0;
      if (uStack_2c == 2) goto LAB_01086d30;
      piVar13 = *(int **)(_UNK_01087d50 + 0x1086ddc);
      puStack_74 = &uStack_2c;
      ppuStack_70 = &puStack_28;
      if (*(int *)(*piVar13 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar1 = Firebase_RemoteConfig_FirebaseRemoteConfig__get_DefaultInstance_120ee10(0);
      if (*(int *)(**(int **)(_UNK_01087d54 + 0x1086e04) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar14 = UnityEngine_Application__get_isEditor_35a9d10(0);
      if (iVar14 == 0) {
        if (*(int *)(*piVar13 + 0x74) == 0) {
          FUN_00ec3934();
        }
        Firebase_RemoteConfig_FirebaseRemoteConfig__get_DefaultCacheExpiration_120fdd0
                  (&puStack_80,0);
        iVar14 = extraout_r1_00;
      }
      else {
        piVar13 = *(int **)(_UNK_01087d58 + 0x1086e30);
        iVar2 = *piVar13;
        iVar14 = *(int *)(iVar2 + 0x74);
        if (iVar14 == 0) {
          FUN_00ec3934();
          iVar2 = *piVar13;
          iVar14 = extraout_r1;
        }
        puStack_80 = (uint *)**(undefined4 **)(iVar2 + 0x5c);
        uStack_7c = (*(undefined4 **)(iVar2 + 0x5c))[1];
      }
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      param_1 = (uint *)Firebase_RemoteConfig_FirebaseRemoteConfig__FetchAsync_120f01c
                                  (iVar1,iVar14,puStack_80,uStack_7c,0);
      if (param_1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uStack_44 = System_Threading_Tasks_Task__GetAwaiter_2bf1e70(param_1,0);
      iVar1 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted_2a9339c(&uStack_44,0);
      if (iVar1 != 0) goto LAB_01086d50;
      uStack_2c = 2;
      *puStack_28 = 2;
      puStack_28[0xc] = uStack_44;
      thunk_FUN_00ec5080(puStack_28 + 0xc,0);
      iVar1 = 8;
      func_0x0109fb94(puStack_28 + 1,&uStack_44,puStack_28,
                      **(undefined4 **)(_UNK_01087ed0 + 0x1086f00));
      goto LAB_01086d60;
    }
  }
LAB_010876d8:
  if ((0x7fffffff < *puStack_64) && (piVar13 = (int *)(*ppuStack_60)[5], piVar13 != (int *)0x0)) {
    iVar14 = *piVar13;
    uVar12 = (uint)*(ushort *)(iVar14 + 0xb6);
    if (uVar12 != 0) {
      piVar10 = (int *)(*(int *)(iVar14 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01088010 + 0x108770c)) {
          puVar3 = (undefined4 *)(iVar14 + *piVar10 * 8 + 0xc0);
          goto LAB_0108775c;
        }
        uVar12 = uVar12 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar12 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar13,**(int **)(_UNK_01088010 + 0x108770c),0);
LAB_0108775c:
    (*(code *)*puVar3)(piVar13,puVar3[1]);
  }
  if (iStack_68 != 0) {
    FUN_00ec3a6c();
  }
  if (iVar1 != 9) {
    if (iVar1 != 0) {
      return;
    }
    uVar12 = auStack_5c[auStack_5c[2] + -1];
    *puStack_28 = 0xfffffffe;
    puStack_28[5] = 0;
    thunk_FUN_00ec5080();
    puVar15 = puStack_28;
    iVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01088014 + 0x10877c4));
    piVar13 = (int *)puVar15[1];
    if (piVar13 == (int *)0x0) {
      puVar15 = puVar15 + 2;
      *puVar15 = uVar12;
      thunk_FUN_00ec5080(puVar15,uVar12);
      return;
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 4);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768(iVar1);
    }
    iVar14 = *piVar13;
    uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(int *)(iVar14 + 0x58) + 4);
      do {
        if (piVar10[-1] == iVar1) {
          puVar3 = (undefined4 *)(iVar14 + *piVar10 * 8 + 0xd8);
          goto LAB_01087864;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar13,iVar1,3);
LAB_01087864:
    (*(code *)*puVar3)(piVar13,uVar12,puVar3[1]);
    return;
  }
LAB_01087dec:
  *puStack_28 = 0xfffffffe;
  puStack_28[5] = 0;
  thunk_FUN_00ec5080();
  piVar13 = (int *)puStack_28[1];
  if (piVar13 == (int *)0x0) {
    *(char *)(puStack_28 + 3) = (char)param_1;
  }
  else {
    iVar1 = *(int *)(**(int **)(_UNK_01088020 + 0x1087e20) + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 4);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768(iVar1);
    }
    iVar14 = *piVar13;
    uVar12 = (uint)*(ushort *)(iVar14 + 0xb6);
    if (uVar12 != 0) {
      piVar10 = (int *)(*(int *)(iVar14 + 0x58) + 4);
      do {
        if (piVar10[-1] == iVar1) {
          puVar3 = (undefined4 *)(iVar14 + *piVar10 * 8 + 0xd0);
          goto LAB_01087ee0;
        }
        uVar12 = uVar12 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar12 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar13,iVar1,2);
LAB_01087ee0:
    (*(code *)*puVar3)(piVar13,param_1,puVar3[1]);
  }
  return;
}

