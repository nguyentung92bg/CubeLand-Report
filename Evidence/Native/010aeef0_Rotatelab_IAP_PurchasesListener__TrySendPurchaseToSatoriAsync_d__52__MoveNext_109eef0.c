/* IL2CPP: Rotatelab.IAP.PurchasesListener.<TrySendPurchaseToSatoriAsync>d__52$$MoveNext
void Rotatelab_IAP_PurchasesListener__TrySendPurchaseToSatoriAsync_d__52__MoveNext (Rotatelab_IAP_PurchasesListener__TrySendPurchaseToSatoriAsync_d__52_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener.<TrySendPurchaseToSatoriAsync>d__52$$MoveNext
   void Rotatelab_IAP_PurchasesListener__TrySendPurchaseToSatoriAsync_d__52__MoveNext
   (Rotatelab_IAP_PurchasesListener__TrySendPurchaseToSatoriAsync_d__52_o __this, const MethodInfo*
   method); */

void Rotatelab_IAP_PurchasesListener__TrySendPurchaseToSatoriAsync_d__52__MoveNext_109eef0
               (int *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int *piStack_50;
  uint uStack_4c;
  undefined4 uStack_40;
  undefined1 uStack_39;
  int *piStack_38;
  uint uStack_34;
  int *piStack_30;
  uint uStack_2c;
  
  pcVar9 = (char *)(_UNK_010afc44 + 0x10aef08);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afc48 + 0x10aef1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afc4c + 0x10aef28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afc50 + 0x10aef34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afc54 + 0x10aef40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afc58 + 0x10aef4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afc5c + 0x10aef58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afc60 + 0x10aef64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afc64 + 0x10aef70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afc68 + 0x10aef7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afc6c + 0x10aef88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afc70 + 0x10aef94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afc74 + 0x10aefa0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afc78 + 0x10aefac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afc7c + 0x10aefb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afc80 + 0x10aefc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afc84 + 0x10aefd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afc88 + 0x10aefdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afc8c + 0x10aefe8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afc90 + 0x10aeff4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afc94 + 0x10af000));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afc98 + 0x10af00c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afc9c + 0x10af018));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afca0 + 0x10af024));
    *pcVar9 = '\x01';
  }
  iVar5 = *param_1;
  piVar8 = param_1 + 8;
  piVar11 = param_1 + 10;
  uStack_2c = 0;
  piStack_30 = (int *)0x0;
  uStack_34 = 0;
  piStack_38 = (int *)0x0;
  uStack_39 = 0;
  uStack_40 = 0;
  if (iVar5 == 0) {
    piStack_30 = (int *)*piVar8;
    uStack_2c = param_1[9];
    *param_1 = -1;
    *piVar8 = 0;
    param_1[9] = 0;
LAB_010af434:
    pcVar9 = (char *)(_UNK_010afcf4 + 0x10af440);
    if (*pcVar9 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010afcf8 + 0x10af454));
      *pcVar9 = '\x01';
    }
    piVar13 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      iVar5 = *piStack_30;
      uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
      iVar12 = (int)(short)uStack_2c;
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_010afcfc + 0x10af478)) {
            puVar4 = (undefined4 *)(iVar5 + *piVar7 * 8 + 0xd0);
            goto LAB_010af4c4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_010afcfc + 0x10af478),2);
LAB_010af4c4:
      (*(code *)*puVar4)(piVar13,iVar12,puVar4[1]);
    }
    iVar5 = param_1[7];
    uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010afd00 + 0x10af4e8));
    System_Func_UniTask____ctor_2395d44(uVar3,iVar5,**(undefined4 **)(_UNK_010afd04 + 0x10af4fc),0);
    if (*(int *)(**(int **)(_UNK_010afd08 + 0x10af518) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Networking_HiroController__ExecuteTask_114cc9c(&piStack_50,uVar3,3,0,0x40000000,0,0,0)
    ;
    uVar6 = uStack_4c;
    piVar13 = piStack_50;
    uStack_4c = 0;
    piStack_50 = (int *)0x0;
    if ((*(byte *)(*(int *)(**(int **)(_UNK_010afd0c + 0x10af564) + 0x10) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    piStack_50 = piVar13;
    uStack_4c = uVar6;
    thunk_FUN_00ec5080(&piStack_50,0);
    uVar1 = uStack_4c;
    piVar13 = piStack_50;
    uStack_34 = uStack_4c;
    piStack_38 = piStack_50;
    iVar5 = *(int *)(**(int **)(_UNK_010afd10 + 0x10af5a0) + 0x10);
    if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = FUN_00efd768();
    }
    uVar10 = uVar1 & 0xff;
    if (piVar13 == (int *)0x0) {
LAB_010af700:
      if (uVar10 == 0) {
        uVar2 = 0;
        goto LAB_010af9b4;
      }
    }
    else {
      iVar5 = *(int *)(*(int *)(*(int *)(iVar5 + 0x60) + 0xc) + 0x10);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = FUN_00efd768();
      }
      iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 4);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = FUN_00efd768(iVar5);
      }
      iVar12 = *piVar13;
      uVar6 = (uint)*(ushort *)(iVar12 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar5) {
            puVar4 = (undefined4 *)(iVar12 + *piVar7 * 8 + 200);
            goto LAB_010af658;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piVar13,iVar5,1);
LAB_010af658:
      uVar6 = (int)uVar1 >> 0x10;
      iVar5 = (*(code *)*puVar4)(piVar13,uVar6,puVar4[1]);
      if (iVar5 == 0) {
        *piVar11 = (int)piVar13;
        param_1[0xb] = uVar1;
        *param_1 = 1;
        thunk_FUN_00ec5080(piVar11,0);
        func_0x010bd908(param_1 + 1,&piStack_38,param_1,**(undefined4 **)(_UNK_010afd14 + 0x10af734)
                       );
        return;
      }
LAB_010af678:
      if (piVar13 == (int *)0x0) goto LAB_010af700;
      iVar5 = *(int *)(**(int **)(_UNK_010afd18 + 0x10af68c) + 0x10);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = FUN_00efd768();
      }
      iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 0x14);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = FUN_00efd768(iVar5);
      }
      iVar12 = *piVar13;
      uVar10 = (uint)*(ushort *)(iVar12 + 0xb6);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(int *)(iVar12 + 0x58) + 4);
        do {
          if (piVar11[-1] == iVar5) {
            puVar4 = (undefined4 *)(iVar12 + *piVar11 * 8 + 0xc0);
            goto LAB_010af754;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piVar13,iVar5,0);
LAB_010af754:
      iVar5 = (*(code *)*puVar4)(piVar13,(int)(short)uVar6,puVar4[1]);
      uVar2 = 0;
      if (iVar5 == 0) goto LAB_010af9b4;
    }
    piVar11 = *(int **)(_UNK_010afd1c + 0x10af784);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Cysharp_Threading_Tasks_UniTask__Delay_32169f8(&piStack_50,5000,0,8,0,0,0);
    thunk_FUN_00ec5080(&piStack_50,0);
    pcVar9 = (char *)(_UNK_010afd20 + 0x10af7e4);
    uStack_2c = uStack_4c;
    piStack_30 = piStack_50;
    if (*pcVar9 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010afd24 + 0x10af804));
      *pcVar9 = '\x01';
    }
    if (*(int *)(*piVar11 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar9 = (char *)(_UNK_010afd28 + 0x10af82c);
    if (*pcVar9 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010afd2c + 0x10af840));
      *pcVar9 = '\x01';
    }
    piVar11 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      iVar5 = *piStack_30;
      uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
      iVar12 = (int)(short)uStack_2c;
      if (uVar6 != 0) {
        piVar13 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar13[-1] == **(int **)(_UNK_010afd30 + 0x10af864)) {
            puVar4 = (undefined4 *)(iVar5 + *piVar13 * 8 + 0xc0);
            goto LAB_010af8b0;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_010afd30 + 0x10af864),0);
LAB_010af8b0:
      iVar5 = (*(code *)*puVar4)(piVar11,iVar12,puVar4[1]);
      if (iVar5 == 0) {
        *piVar8 = (int)piStack_30;
        param_1[9] = uStack_2c;
        *param_1 = 2;
        thunk_FUN_00ec5080(piVar8,0);
        func_0x010bd7dc(param_1 + 1,&piStack_30,param_1,**(undefined4 **)(_UNK_010afd34 + 0x10afab8)
                       );
        return;
      }
    }
  }
  else {
    if (iVar5 == 1) {
      piVar13 = (int *)*piVar11;
      uStack_34 = param_1[0xb];
      *param_1 = -1;
      uVar10 = uStack_34 & 0xff;
      uVar6 = uStack_34 >> 0x10;
      *piVar11 = 0;
      param_1[0xb] = 0;
      piStack_38 = piVar13;
      goto LAB_010af678;
    }
    if (iVar5 != 2) {
      iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010afca4 + 0x10af0e8));
      System_Object___ctor_2bb93bc(iVar5,0);
      piVar13 = param_1 + 7;
      *piVar13 = iVar5;
      thunk_FUN_00ec5080(piVar13,iVar5);
      iVar12 = *piVar13;
      iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010afca8 + 0x10af11c));
      System_Collections_Generic_Dictionary_object__object____ctor_20688f4
                (iVar5,**(undefined4 **)(_UNK_010afcac + 0x10af130));
      if (*(int *)(**(int **)(_UNK_010afcb0 + 0x10af144) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar3 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
      uVar3 = System_Double__ToString_2b51d18(param_1 + 4,uVar3,0);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar4 = *(undefined4 **)(_UNK_010afcb4 + 0x10af188);
      System_Collections_Generic_Dictionary_object__object___Add_206933c
                (iVar5,**(undefined4 **)(_UNK_010afcb8 + 0x10af194),uVar3,*puVar4);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_Dictionary_object__object___Add_206933c
                (iVar5,**(undefined4 **)(_UNK_010afcbc + 0x10af1c0),param_1[6],*puVar4);
      if (*(int *)(**(int **)(_UNK_010afcc0 + 0x10af1d8) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar2 = UnityEngine_Application__get_isEditor_35a9d10(0);
      piStack_50 = (int *)CONCAT31(piStack_50._1_3_,uVar2);
      uVar3 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_010afcc4 + 0x10af1fc) + 0x14),&piStack_50);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_Dictionary_object__object___Add_206933c
                (iVar5,**(undefined4 **)(_UNK_010afcc8 + 0x10af22c),uVar3,*puVar4);
      if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar13 = (int *)(iVar12 + 8);
      *piVar13 = iVar5;
      thunk_FUN_00ec5080(piVar13,iVar5);
      piVar13 = *(int **)(_UNK_010afccc + 0x10af260);
      iVar5 = *piVar13;
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        iVar5 = *piVar13;
      }
      puVar4 = *(undefined4 **)(iVar5 + 0x5c);
      iVar12 = puVar4[4];
      if (iVar12 == 0) {
        if (*(int *)(iVar5 + 0x74) == 0) {
          FUN_00ec3934();
          puVar4 = *(undefined4 **)(*piVar13 + 0x5c);
        }
        uVar3 = *puVar4;
        iVar12 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010afcd0 + 0x10af2ac));
        System_Func_bool____ctor_23938dc
                  (iVar12,uVar3,**(undefined4 **)(_UNK_010afcd4 + 0x10af2c0),0);
        piVar13 = (int *)(*(int *)(*piVar13 + 0x5c) + 0x10);
        *piVar13 = iVar12;
        thunk_FUN_00ec5080(piVar13,iVar12);
      }
      piVar13 = *(int **)(_UNK_010afcd8 + 0x10af2f0);
      if (*(int *)(*piVar13 + 0x74) == 0) {
        FUN_00ec3934();
      }
      Cysharp_Threading_Tasks_UniTask__WaitUntil_3217d44(&piStack_50,iVar12,8,0,0,0);
      thunk_FUN_00ec5080(&piStack_50,0);
      pcVar9 = (char *)(_UNK_010afcdc + 0x10af34c);
      uStack_2c = uStack_4c;
      piStack_30 = piStack_50;
      if (*pcVar9 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010afce0 + 0x10af36c));
        *pcVar9 = '\x01';
      }
      if (*(int *)(*piVar13 + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar9 = (char *)(_UNK_010afce4 + 0x10af394);
      if (*pcVar9 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010afce8 + 0x10af3a8));
        *pcVar9 = '\x01';
      }
      piVar13 = piStack_30;
      if (piStack_30 != (int *)0x0) {
        iVar5 = *piStack_30;
        uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
        iVar12 = (int)(short)uStack_2c;
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_010afcec + 0x10af3cc)) {
              puVar4 = (undefined4 *)(iVar5 + *piVar7 * 8 + 0xc0);
              goto LAB_010af418;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_010afcec + 0x10af3cc),0);
LAB_010af418:
        iVar5 = (*(code *)*puVar4)(piVar13,iVar12,puVar4[1]);
        if (iVar5 == 0) {
          *piVar8 = (int)piStack_30;
          param_1[9] = uStack_2c;
          *param_1 = 0;
          thunk_FUN_00ec5080(piVar8,0);
          func_0x010bd7dc(param_1 + 1,&piStack_30,param_1,
                          **(undefined4 **)(_UNK_010afcf0 + 0x10afaf8));
          return;
        }
      }
      goto LAB_010af434;
    }
    piStack_30 = (int *)*piVar8;
    uStack_2c = param_1[9];
    *param_1 = -1;
    *piVar8 = 0;
    param_1[9] = 0;
  }
  pcVar9 = (char *)(_UNK_010afd38 + 0x10af8dc);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010afd3c + 0x10af8f0));
    *pcVar9 = '\x01';
  }
  piVar11 = piStack_30;
  if (piStack_30 != (int *)0x0) {
    iVar5 = *piStack_30;
    uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
    iVar12 = (int)(short)uStack_2c;
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_010afd40 + 0x10af914)) {
          puVar4 = (undefined4 *)(iVar5 + *piVar8 * 8 + 0xd0);
          goto LAB_010af960;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_010afd40 + 0x10af914),2);
LAB_010af960:
    (*(code *)*puVar4)(piVar11,iVar12,puVar4[1]);
  }
  iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010afd44 + 0x10af980));
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_39 = Rotatelab_Networking_HiroController__ProcessSatoriExperimentsAsync_114b9cc(iVar5,0);
  uVar2 = 1;
  Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_39,0);
LAB_010af9b4:
  *param_1 = -2;
  param_1[7] = 0;
  thunk_FUN_00ec5080();
  piVar11 = (int *)param_1[1];
  if (piVar11 == (int *)0x0) {
    *(undefined1 *)(param_1 + 3) = uVar2;
  }
  else {
    iVar5 = *(int *)(**(int **)(_UNK_010afd50 + 0x10af9e4) + 0x10);
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = FUN_00efd768();
    }
    iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 4);
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = FUN_00efd768(iVar5);
    }
    iVar12 = *piVar11;
    uVar6 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar5) {
          puVar4 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xd0);
          goto LAB_010afa6c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar11,iVar5,2);
LAB_010afa6c:
    (*(code *)*puVar4)(piVar11,uVar2,puVar4[1]);
  }
  return;
}

