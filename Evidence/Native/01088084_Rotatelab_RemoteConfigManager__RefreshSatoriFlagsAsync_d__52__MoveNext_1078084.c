/* IL2CPP: Rotatelab.RemoteConfigManager.<RefreshSatoriFlagsAsync>d__52$$MoveNext
void Rotatelab_RemoteConfigManager__RefreshSatoriFlagsAsync_d__52__MoveNext (Rotatelab_RemoteConfigManager__RefreshSatoriFlagsAsync_d__52_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager.<RefreshSatoriFlagsAsync>d__52$$MoveNext
   void Rotatelab_RemoteConfigManager__RefreshSatoriFlagsAsync_d__52__MoveNext
   (Rotatelab_RemoteConfigManager__RefreshSatoriFlagsAsync_d__52_o __this, const MethodInfo*
   method); */

void Rotatelab_RemoteConfigManager__RefreshSatoriFlagsAsync_d__52__MoveNext_1078084(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  uint *puVar12;
  int *piVar13;
  uint *puVar14;
  int *piStack_60;
  uint uStack_5c;
  int *piStack_58;
  uint *puStack_54;
  uint *puStack_50;
  undefined4 uStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  int *piStack_38;
  uint *puStack_34;
  uint uStack_2c;
  uint uStack_28;
  
  pcVar9 = (char *)(_UNK_01088d94 + 0x108809c);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01088d98 + 0x10880b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01088d9c + 0x10880bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01088da0 + 0x10880c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01088da4 + 0x10880d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01088da8 + 0x10880e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01088dac + 0x10880ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01088db0 + 0x10880f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01088db4 + 0x1088104));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01088db8 + 0x1088110));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01088dbc + 0x108811c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01088dc0 + 0x1088128));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01088dc4 + 0x1088134));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01088dc8 + 0x1088140));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01088dcc + 0x108814c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01088dd0 + 0x1088158));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01088dd4 + 0x1088164));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01088dd8 + 0x1088170));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01088ddc + 0x108817c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01088de0 + 0x1088188));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01088de4 + 0x1088194));
    *pcVar9 = '\x01';
  }
  uStack_28 = *param_1;
  puVar12 = param_1 + 5;
  uStack_2c = param_1[3];
  puStack_34 = (uint *)0x0;
  piStack_38 = (int *)0x0;
  uStack_3c = 0;
  piStack_40 = (int *)0x0;
  uStack_44 = 0;
  if (uStack_28 == 0) {
    piVar13 = (int *)*puVar12;
    puVar14 = (uint *)param_1[6];
    *param_1 = 0xffffffff;
    *puVar12 = 0;
    param_1[6] = 0;
    uStack_28 = 0xffffffff;
    piStack_38 = piVar13;
    puStack_34 = puVar14;
LAB_010882cc:
    pcVar9 = (char *)(_UNK_01088e18 + 0x10882d8);
    if (*pcVar9 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01088e1c + 0x10882ec));
      *pcVar9 = '\x01';
    }
    if (piVar13 != (int *)0x0) {
      iVar2 = *piVar13;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_01088e20 + 0x108830c)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xd0);
            goto LAB_01088574;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piVar13,**(int **)(_UNK_01088e20 + 0x108830c),2);
LAB_01088574:
      (*(code *)*puVar4)(piVar13,(int)(short)puVar14,puVar4[1]);
    }
    goto LAB_01088a90;
  }
  puVar14 = param_1 + 7;
  if (uStack_28 == 1) {
LAB_010881fc:
    puStack_50 = &uStack_2c;
    puStack_54 = &uStack_28;
    piStack_58 = (int *)0x0;
    piStack_40 = (int *)*puVar14;
    uStack_3c = param_1[8];
    *param_1 = 0xffffffff;
    *puVar14 = 0;
    param_1[8] = 0;
    uStack_28 = 0xffffffff;
LAB_01088220:
    piVar13 = piStack_40;
    if (piStack_40 == (int *)0x0) goto LAB_01088790;
    iVar10 = (int)uStack_3c._2_2_;
    iVar2 = *(int *)(**(int **)(_UNK_01088e4c + 0x1088234) + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x14);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768(iVar2);
    }
    iVar3 = *piVar13;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar2) {
          puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
          goto LAB_010887b0;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar13,iVar2,0);
LAB_010887b0:
    iVar2 = (*(code *)*puVar4)(piVar13,iVar10,puVar4[1]);
    uVar6 = 5;
    if (iVar2 != 0) goto LAB_010887d0;
  }
  else {
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01088de8 + 0x1088354));
    uVar6 = uStack_2c;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(*(int *)(iVar2 + 0x24) + 0x1c) == '\0') goto LAB_01088a90;
    if (uStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(uStack_2c + 0x90) != '\0') {
      piVar13 = *(int **)(_UNK_01088dec + 0x10883b0);
      iVar2 = *piVar13;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar13;
      }
      puVar4 = *(undefined4 **)(iVar2 + 0x5c);
      iVar10 = puVar4[4];
      if (iVar10 == 0) {
        if (*(int *)(iVar2 + 0x74) == 0) {
          FUN_00ec3934();
          puVar4 = *(undefined4 **)(*piVar13 + 0x5c);
        }
        uVar5 = *puVar4;
        iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01088df0 + 0x10883fc));
        System_Func_object__bool____ctor_239b120
                  (iVar10,uVar5,**(undefined4 **)(_UNK_01088df4 + 0x1088410),0);
        piVar13 = (int *)(*(int *)(*piVar13 + 0x5c) + 0x10);
        *piVar13 = iVar10;
        thunk_FUN_00ec5080(piVar13,iVar10);
      }
      piVar8 = *(int **)(_UNK_01088df8 + 0x1088440);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        FUN_00ec3934();
      }
      Cysharp_Threading_Tasks_UniTask__WaitWhile_object__164eb9c
                (&piStack_58,uVar6,iVar10,8,0,0,**(undefined4 **)(_UNK_01088dfc + 0x108845c));
      thunk_FUN_00ec5080(&piStack_58,0);
      puVar1 = puStack_54;
      piVar13 = piStack_58;
      pcVar9 = (char *)(_UNK_01088e00 + 0x10884ac);
      puStack_34 = puStack_54;
      piStack_38 = piStack_58;
      if (*pcVar9 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01088e04 + 0x10884cc));
        *pcVar9 = '\x01';
      }
      if (*(int *)(*piVar8 + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar9 = (char *)(_UNK_01088e08 + 0x10884f4);
      if (*pcVar9 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01088e0c + 0x1088508));
        *pcVar9 = '\x01';
      }
      puVar14 = (uint *)(int)(short)puVar1;
      if (piVar13 == (int *)0x0) {
        piVar13 = (int *)0x0;
      }
      else {
        iVar2 = *piVar13;
        uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar8[-1] == **(int **)(_UNK_01088e10 + 0x108852c)) {
              puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
              goto LAB_01088b50;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined4 *)FUN_00efdb38(piVar13,**(int **)(_UNK_01088e10 + 0x108852c),0);
LAB_01088b50:
        iVar2 = (*(code *)*puVar4)(piVar13,puVar14,puVar4[1]);
        if (iVar2 == 0) {
          *puVar12 = (uint)piVar13;
          *param_1 = 0;
          param_1[6] = (uint)puVar1;
          uStack_28 = 0;
          thunk_FUN_00ec5080(puVar12,0);
          func_0x0109fdec(param_1 + 1,&piStack_38,param_1,
                          **(undefined4 **)(_UNK_01088e14 + 0x1088b98));
          return;
        }
      }
      goto LAB_010882cc;
    }
    if (uStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined1 *)(uStack_2c + 0x90) = 1;
    puStack_50 = &uStack_2c;
    puStack_54 = &uStack_28;
    piStack_58 = (int *)0x0;
    if (uStack_28 == 1) goto LAB_010881fc;
    uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01088e30 + 0x10885d0));
    System_Object___ctor_2bb93bc(uVar6,0);
    puVar12 = param_1 + 4;
    *puVar12 = uVar6;
    thunk_FUN_00ec5080(puVar12,uVar6);
    if (*puVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar4 = (undefined4 *)(*puVar12 + 8);
    *puVar4 = 0;
    thunk_FUN_00ec5080(puVar4,0);
    uVar6 = *puVar12;
    uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01088e34 + 0x1088628));
    System_Func_UniTask____ctor_2395d44(uVar5,uVar6,**(undefined4 **)(_UNK_01088e38 + 0x108863c),0);
    if (*(int *)(**(int **)(_UNK_01088e3c + 0x1088658) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Networking_HiroController__ExecuteTask_114cc9c(&piStack_60,uVar5,3,0,0x40000000,0,0,0)
    ;
    uVar6 = uStack_5c;
    piVar13 = piStack_60;
    uStack_5c = 0;
    piStack_60 = (int *)0x0;
    if ((*(byte *)(*(int *)(**(int **)(_UNK_01088e40 + 0x10886a4) + 0x10) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    piStack_60 = piVar13;
    uStack_5c = uVar6;
    thunk_FUN_00ec5080(&piStack_60,0);
    uStack_3c = uStack_5c;
    piStack_40 = piStack_60;
    iVar2 = *(int *)(**(int **)(_UNK_01088e44 + 0x10886e0) + 0x10);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    piVar13 = piStack_40;
    if (piStack_40 != (int *)0x0) {
      iVar10 = (int)uStack_3c._2_2_;
      iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0x60) + 0xc) + 0x10);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = FUN_00efd768();
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 4);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = FUN_00efd768(iVar2);
      }
      iVar3 = *piVar13;
      uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar2) {
            puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 200);
            goto LAB_01088bb8;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piVar13,iVar2,1);
LAB_01088bb8:
      iVar2 = (*(code *)*puVar4)(piVar13,iVar10,puVar4[1]);
      if (iVar2 != 0) goto LAB_01088220;
      *puVar14 = (uint)piStack_40;
      param_1[8] = uStack_3c;
      *param_1 = 1;
      uStack_28 = 1;
      thunk_FUN_00ec5080(puVar14,0);
      uVar6 = 9;
      func_0x0109ff0c(param_1 + 1,&piStack_40,param_1,**(undefined4 **)(_UNK_01088e48 + 0x1088c10));
      goto LAB_01088a3c;
    }
LAB_01088790:
    if ((uStack_3c & 0xff) == 0) {
      uVar6 = 5;
    }
    else {
LAB_010887d0:
      uVar6 = uStack_2c;
      puVar12 = param_1 + 4;
      if (*puVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar13 = *(int **)(*puVar12 + 8);
      if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *piVar13;
      uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_01088e50 + 0x1088808)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
            goto LAB_01088850;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piVar13,**(int **)(_UNK_01088e50 + 0x1088808),0);
LAB_01088850:
      uVar5 = (*(code *)*puVar4)(piVar13,puVar4[1]);
      piVar13 = *(int **)(_UNK_01088e54 + 0x1088870);
      iVar2 = *piVar13;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar13;
      }
      puVar4 = *(undefined4 **)(iVar2 + 0x5c);
      iVar10 = puVar4[5];
      if (iVar10 == 0) {
        if (*(int *)(iVar2 + 0x74) == 0) {
          FUN_00ec3934();
          puVar4 = *(undefined4 **)(*piVar13 + 0x5c);
        }
        uVar11 = *puVar4;
        iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01088e58 + 0x10888bc));
        System_Func_object__object____ctor_239b630
                  (iVar10,uVar11,**(undefined4 **)(_UNK_01088e5c + 0x10888d0),0);
        piVar8 = (int *)(*(int *)(*piVar13 + 0x5c) + 0x14);
        *piVar8 = iVar10;
        thunk_FUN_00ec5080(piVar8,iVar10);
        iVar2 = *piVar13;
      }
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar13;
      }
      puVar4 = *(undefined4 **)(iVar2 + 0x5c);
      iVar3 = puVar4[6];
      if (iVar3 == 0) {
        if (*(int *)(iVar2 + 0x74) == 0) {
          FUN_00ec3934();
          puVar4 = *(undefined4 **)(*piVar13 + 0x5c);
        }
        uVar11 = *puVar4;
        iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01088e60 + 0x1088944));
        System_Func_object__object____ctor_239b630
                  (iVar3,uVar11,**(undefined4 **)(_UNK_01088e64 + 0x1088958),0);
        piVar13 = (int *)(*(int *)(*piVar13 + 0x5c) + 0x18);
        *piVar13 = iVar3;
        thunk_FUN_00ec5080(piVar13,iVar3);
      }
      uVar5 = System_Linq_Enumerable__ToDictionary_object__object__object__1477274
                        (uVar5,iVar10,iVar3,**(undefined4 **)(_UNK_01088e68 + 0x1088988));
      if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar4 = (undefined4 *)(uVar6 + 0x14);
      *puVar4 = uVar5;
      thunk_FUN_00ec5080(puVar4,uVar5);
      if (uStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar4 = *(undefined4 **)(_UNK_01088e6c + 0x10889d8);
      *(undefined1 *)(uStack_2c + 0x91) = 1;
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar2 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Hiro_SatoriSystem__Save_296c390(*(int *)(iVar2 + 0x24),0);
      if (uStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_RemoteConfigManager__OnSatoriFlagsRefreshedSuccessfully_1074554(uStack_2c);
      uVar6 = 0xf;
      *puVar12 = 0;
      thunk_FUN_00ec5080(puVar12,0);
    }
  }
LAB_01088a3c:
  if (0x7fffffff < *puStack_54) {
    if (*puStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined1 *)(*puStack_50 + 0x90) = 0;
  }
  if (piStack_58 != (int *)0x0) {
    FUN_00ec3a6c();
  }
  if (0xf < uVar6) {
    return;
  }
  if ((1 << uVar6 & 0x8021U) == 0) {
    return;
  }
LAB_01088a90:
  iVar2 = _UNK_01088e24;
  *param_1 = 0xfffffffe;
  if (*(char *)(iVar2 + 0x1088aa4) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01088e28 + 0x1088ab8));
    *(char *)(iVar2 + 0x1088aa4) = '\x01';
  }
  piVar13 = (int *)param_1[1];
  if (piVar13 != (int *)0x0) {
    iVar2 = *piVar13;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_01088e2c + 0x1088adc)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xd0);
          goto LAB_01088b24;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar13,**(int **)(_UNK_01088e2c + 0x1088adc),2);
LAB_01088b24:
    (*(code *)*puVar4)(piVar13,puVar4[1]);
  }
  return;
}

