/* IL2CPP: Rotatelab.Networking.HiroController.<MigrateIAPRevenueToSatoriAsync>d__66$$MoveNext
void Rotatelab_Networking_HiroController__MigrateIAPRevenueToSatoriAsync_d__66__MoveNext (Rotatelab_Networking_HiroController__MigrateIAPRevenueToSatoriAsync_d__66_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController.<MigrateIAPRevenueToSatoriAsync>d__66$$MoveNext
   void Rotatelab_Networking_HiroController__MigrateIAPRevenueToSatoriAsync_d__66__MoveNext
   (Rotatelab_Networking_HiroController__MigrateIAPRevenueToSatoriAsync_d__66_o __this, const
   MethodInfo* method); */

void Rotatelab_Networking_HiroController__MigrateIAPRevenueToSatoriAsync_d__66__MoveNext_1158370
               (int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uStack_50;
  undefined4 uStack_44;
  int *piStack_40;
  uint uStack_3c;
  int *piStack_38;
  int iStack_34;
  
  pcVar8 = (char *)(_UNK_01168e5c + 0x1168390);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01168e60 + 0x11683a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01168e64 + 0x11683b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01168e68 + 0x11683bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01168e6c + 0x11683c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01168e70 + 0x11683d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01168e74 + 0x11683e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01168e78 + 0x11683ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01168e7c + 0x11683f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01168e80 + 0x1168404));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01168e84 + 0x1168410));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01168e88 + 0x116841c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01168e8c + 0x1168428));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01168e90 + 0x1168434));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01168e94 + 0x1168440));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01168e98 + 0x116844c));
    *pcVar8 = '\x01';
  }
  iVar4 = *param_1;
  piVar12 = param_1 + 4;
  piVar7 = param_1 + 6;
  iStack_34 = 0;
  piStack_38 = (int *)0x0;
  uStack_3c = 0;
  piStack_40 = (int *)0x0;
  uStack_44 = 0;
  if (iVar4 == 0) {
    piStack_38 = (int *)*piVar12;
    iStack_34 = param_1[5];
    *param_1 = -1;
    *piVar12 = 0;
    param_1[5] = 0;
LAB_011686e4:
    pcVar8 = (char *)(_UNK_01168ec4 + 0x11686f0);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01168ec8 + 0x1168704));
      *pcVar8 = '\x01';
    }
    piVar10 = piStack_38;
    if (piStack_38 != (int *)0x0) {
      iVar4 = *piStack_38;
      uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
      iVar11 = (int)(short)iStack_34;
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_01168ecc + 0x1168728)) {
            puVar2 = (undefined4 *)(iVar4 + *piVar6 * 8 + 0xd0);
            goto LAB_01168774;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_01168ecc + 0x1168728),2);
LAB_01168774:
      (*(code *)*puVar2)(piVar10,iVar11,puVar2[1]);
    }
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01168ed0 + 0x1168798));
    piVar10 = *(int **)(_UNK_01168ed4 + 0x11687ac);
    uVar13 = *(undefined8 *)(param_1 + 2);
    iVar11 = *piVar10;
    if (*(int *)(iVar11 + 0x74) == 0) {
      FUN_00ec3934();
      iVar11 = *piVar10;
    }
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_IAP_PurchasesListener__TrySendPurchaseToSatoriAsync_109b090
              (&uStack_50,iVar4,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20),
               **(undefined4 **)(iVar11 + 0x5c),0);
    uVar13 = uStack_50;
    uStack_50 = 0;
    if ((*(byte *)(*(int *)(**(int **)(_UNK_01168ed8 + 0x1168804) + 0x10) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    uStack_50 = uVar13;
    thunk_FUN_00ec5080(&uStack_50,0);
    piVar10 = (int *)uStack_50;
    uVar1 = uStack_50._4_4_;
    uStack_3c = uStack_50._4_4_;
    piStack_40 = (int *)uStack_50;
    iVar4 = *(int *)(**(int **)(_UNK_01168edc + 0x1168840) + 0x10);
    if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = FUN_00efd768();
    }
    uVar9 = uVar1 & 0xff;
    if (piVar10 != (int *)0x0) {
      iVar4 = *(int *)(*(int *)(*(int *)(iVar4 + 0x60) + 0xc) + 0x10);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = FUN_00efd768();
      }
      iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 4);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = FUN_00efd768(iVar4);
      }
      iVar11 = *piVar10;
      uVar5 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar4) {
            puVar2 = (undefined4 *)(iVar11 + *piVar6 * 8 + 200);
            goto LAB_011688f8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piVar10,iVar4,1);
LAB_011688f8:
      uVar5 = (int)uVar1 >> 0x10;
      iVar4 = (*(code *)*puVar2)(piVar10,uVar5,puVar2[1]);
      if (iVar4 == 0) {
        *piVar7 = (int)piVar10;
        param_1[7] = uVar1;
        *param_1 = 1;
        thunk_FUN_00ec5080(piVar7,0);
        func_0x0117414c(param_1 + 1,&piStack_40,param_1,**(undefined4 **)(_UNK_01168ee0 + 0x11689d4)
                       );
        return;
      }
LAB_0116891c:
      if (piVar10 != (int *)0x0) {
        iVar4 = *(int *)(**(int **)(_UNK_01168ee4 + 0x1168930) + 0x10);
        if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
          iVar4 = FUN_00efd768();
        }
        iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 0x14);
        if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
          iVar4 = FUN_00efd768(iVar4);
        }
        iVar11 = *piVar10;
        uVar9 = (uint)*(ushort *)(iVar11 + 0xb6);
        if (uVar9 != 0) {
          piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
          do {
            if (piVar7[-1] == iVar4) {
              puVar2 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
              goto LAB_011689f4;
            }
            uVar9 = uVar9 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar9 != 0);
        }
        puVar2 = (undefined4 *)FUN_00efdb38(piVar10,iVar4,0);
LAB_011689f4:
        uVar9 = (*(code *)*puVar2)(piVar10,(int)(short)uVar5,puVar2[1]);
      }
    }
    if (uVar9 == 0) goto LAB_01168c2c;
    UnityEngine_PlayerPrefs__DeleteKey_35f76ec(**(undefined4 **)(_UNK_01168ee8 + 0x1168a20),0);
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01168eec + 0x1168a34));
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_RemoteConfigManager__RefreshSatoriFlagsAsync_10747f4(&uStack_50,iVar4,0);
    piVar7 = *(int **)(_UNK_01168ef0 + 0x1168a64);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    thunk_FUN_00ec5080(&uStack_50,0);
    pcVar8 = (char *)(_UNK_01168ef4 + 0x1168aa0);
    iStack_34 = uStack_50._4_4_;
    piStack_38 = (int *)uStack_50;
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01168ef8 + 0x1168ac0));
      *pcVar8 = '\x01';
    }
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar8 = (char *)(_UNK_01168efc + 0x1168ae8);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01168f00 + 0x1168afc));
      *pcVar8 = '\x01';
    }
    piVar7 = piStack_38;
    if (piStack_38 != (int *)0x0) {
      iVar4 = *piStack_38;
      uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
      iVar11 = (int)(short)iStack_34;
      if (uVar5 != 0) {
        piVar10 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_01168f04 + 0x1168b20)) {
            puVar2 = (undefined4 *)(iVar4 + *piVar10 * 8 + 0xc0);
            goto LAB_01168b6c;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_01168f04 + 0x1168b20),0);
LAB_01168b6c:
      iVar4 = (*(code *)*puVar2)(piVar7,iVar11,puVar2[1]);
      if (iVar4 == 0) {
        *piVar12 = (int)piStack_38;
        param_1[5] = iStack_34;
        *param_1 = 2;
        thunk_FUN_00ec5080(piVar12,0);
        func_0x0117402c(param_1 + 1,&piStack_38,param_1,**(undefined4 **)(_UNK_01168f08 + 0x1168d08)
                       );
        return;
      }
    }
  }
  else {
    if (iVar4 == 1) {
      piVar10 = (int *)*piVar7;
      uStack_3c = param_1[7];
      *param_1 = -1;
      uVar9 = uStack_3c & 0xff;
      uVar5 = uStack_3c >> 0x10;
      *piVar7 = 0;
      param_1[7] = 0;
      piStack_40 = piVar10;
      goto LAB_0116891c;
    }
    if (iVar4 != 2) {
      piVar10 = *(int **)(_UNK_01168e9c + 0x116850c);
      iVar4 = *piVar10;
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        iVar4 = *piVar10;
      }
      puVar2 = *(undefined4 **)(iVar4 + 0x5c);
      iVar11 = puVar2[3];
      if (iVar11 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          FUN_00ec3934();
          puVar2 = *(undefined4 **)(*piVar10 + 0x5c);
        }
        uVar3 = *puVar2;
        iVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01168ea0 + 0x1168558));
        System_Func_bool____ctor_23938dc
                  (iVar11,uVar3,**(undefined4 **)(_UNK_01168ea4 + 0x116856c),0);
        piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 0xc);
        *piVar10 = iVar11;
        thunk_FUN_00ec5080(piVar10,iVar11);
      }
      piVar10 = *(int **)(_UNK_01168ea8 + 0x116859c);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        FUN_00ec3934();
      }
      Cysharp_Threading_Tasks_UniTask__WaitUntil_3217d44(&uStack_50,iVar11,8,0,0,0);
      thunk_FUN_00ec5080(&uStack_50,0);
      pcVar8 = (char *)(_UNK_01168eac + 0x11685f8);
      iStack_34 = uStack_50._4_4_;
      piStack_38 = (int *)uStack_50;
      if (*pcVar8 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01168eb0 + 0x1168618));
        *pcVar8 = '\x01';
      }
      if (*(int *)(*piVar10 + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar8 = (char *)(_UNK_01168eb4 + 0x1168640);
      if (*pcVar8 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01168eb8 + 0x1168654));
        *pcVar8 = '\x01';
      }
      piVar10 = piStack_38;
      if (piStack_38 != (int *)0x0) {
        iVar4 = *piStack_38;
        uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
        iVar11 = (int)(short)iStack_34;
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_01168ebc + 0x1168678)) {
              puVar2 = (undefined4 *)(iVar4 + *piVar6 * 8 + 0xc0);
              goto LAB_011686c4;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_01168ebc + 0x1168678),0);
LAB_011686c4:
        iVar4 = (*(code *)*puVar2)(piVar10,iVar11,puVar2[1]);
        if (iVar4 == 0) {
          *piVar12 = (int)piStack_38;
          param_1[5] = iStack_34;
          *param_1 = 0;
          thunk_FUN_00ec5080(piVar12,0);
          func_0x0117402c(param_1 + 1,&piStack_38,param_1,
                          **(undefined4 **)(_UNK_01168ec0 + 0x1168d48));
          return;
        }
      }
      goto LAB_011686e4;
    }
    piStack_38 = (int *)*piVar12;
    iStack_34 = param_1[5];
    *param_1 = -1;
    *piVar12 = 0;
    param_1[5] = 0;
  }
  pcVar8 = (char *)(_UNK_01168f0c + 0x1168b94);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01168f10 + 0x1168ba8));
    *pcVar8 = '\x01';
  }
  piVar12 = piStack_38;
  if (piStack_38 != (int *)0x0) {
    iVar4 = *piStack_38;
    uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
    iVar11 = (int)(short)iStack_34;
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01168f14 + 0x1168bcc)) {
          puVar2 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xd0);
          goto LAB_01168c18;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_01168f14 + 0x1168bcc),2);
LAB_01168c18:
    (*(code *)*puVar2)(piVar12,iVar11,puVar2[1]);
  }
LAB_01168c2c:
  uStack_50 = *(undefined8 *)(param_1 + 2);
  uVar3 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_01168f18 + 0x1168c3c) + 0x40),&uStack_50);
  piVar12 = *(int **)(_UNK_01168f1c + 0x1168c58);
  iVar4 = *piVar12;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar12;
  }
  uVar3 = System_String__Format_2a0c264
                    (**(undefined4 **)(_UNK_01168f20 + 0x1168c7c),uVar3,
                     **(undefined4 **)(iVar4 + 0x5c),0);
  if (*(int *)(**(int **)(_UNK_01168f24 + 0x1168c9c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Debug__Log_35b1c44(uVar3,0);
  *param_1 = -2;
  func_0x00fcef34(param_1 + 1,0);
  return;
}

