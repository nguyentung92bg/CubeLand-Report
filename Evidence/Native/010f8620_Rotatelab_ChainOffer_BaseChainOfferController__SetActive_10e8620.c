/* IL2CPP: Rotatelab.ChainOffer.BaseChainOfferController$$SetActive
void Rotatelab_ChainOffer_BaseChainOfferController__SetActive (Rotatelab_ChainOffer_BaseChainOfferController_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.BaseChainOfferController$$SetActive
   void Rotatelab_ChainOffer_BaseChainOfferController__SetActive
   (Rotatelab_ChainOffer_BaseChainOfferController_o* __this, bool isActive, const MethodInfo*
   method); */

uint Rotatelab_ChainOffer_BaseChainOfferController__SetActive_10e8620(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 extraout_r1;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar6 = (char *)(_UNK_010f86e4 + 0x10f8638);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f86e8 + 0x10f864c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f86ec + 0x10f8658));
    *pcVar6 = '\x01';
  }
  *(char *)(param_1 + 0x11) = (char)param_2;
  if (param_2 != 0) {
    iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = *(undefined4 *)(iVar2 + 0x94);
    if (*(int *)(**(int **)(_UNK_010f86f0 + 0x10f8694) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = Rotatelab_Utilities__TryChangeValue_int__1663db8
                      (param_1 + 0x12,uVar7,**(undefined4 **)(_UNK_010f86f4 + 0x10f86b8));
    if (iVar2 == 0) {
      return 0;
    }
    pcVar6 = (char *)(_UNK_010f93b8 + 0x10f91d0);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010f93bc + 0x10f91e4));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010f93c0 + 0x10f91f0));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010f93c4 + 0x10f91fc));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010f93c8 + 0x10f9208));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010f93cc + 0x10f9214));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010f93d0 + 0x10f9220));
      *pcVar6 = '\x01';
    }
    piVar9 = *(int **)(_UNK_010f93d4 + 0x10f9234);
    iVar5 = param_1[0xc];
    iVar2 = *piVar9;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar9;
    }
    puVar3 = *(undefined4 **)(iVar2 + 0x5c);
    iVar8 = puVar3[1];
    if (iVar8 == 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        puVar3 = *(undefined4 **)(*piVar9 + 0x5c);
      }
      uVar7 = *puVar3;
      iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f93d8 + 0x10f9280));
      System_Action_object____ctor_1f11414
                (iVar8,uVar7,**(undefined4 **)(_UNK_010f93dc + 0x10f92a0),0);
      piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 4);
      *piVar9 = iVar8;
      thunk_FUN_00ec5080(piVar9,iVar8);
    }
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___ForEach_267e6f0
              (iVar5,iVar8,**(undefined4 **)(_UNK_010f93e0 + 0x10f92d8));
    iVar2 = param_1[0xc];
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *(int *)(iVar2 + 0xc);
    iVar8 = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (0 < iVar5) {
      System_Array__Clear_2b96cdc(*(undefined4 *)(iVar2 + 8),0,iVar5,0);
    }
    while( true ) {
      if (param_1[9] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(param_1[9] + 0xc) <= iVar8) {
        iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_010f93e4 + 0x10f9394));
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(char *)(iVar2 + 0x28) == '\0') {
          Rotatelab_IAP_PurchasesListener__RetryInitializationAsync_1096a48();
          uVar1 = Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&stack0xfffffff7,0);
          return uVar1;
        }
        pcVar6 = (char *)(_UNK_010a6fdc + 0x10a6eac);
        if (*pcVar6 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_010a6fe0 + 0x10a6ec0));
          FUN_00ec37c0(*(undefined4 *)(_UNK_010a6fe4 + 0x10a6ecc));
          FUN_00ec37c0(*(undefined4 *)(_UNK_010a6fe8 + 0x10a6ed8));
          FUN_00ec37c0(*(undefined4 *)(_UNK_010a6fec + 0x10a6ee4));
          *pcVar6 = '\x01';
        }
        uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        bVar10 = *(char *)(iVar2 + 0x28) != '\0';
        uVar1 = 0;
        if (bVar10) {
          uVar1 = *(uint *)(iVar2 + 0x20);
        }
        uStack_20 = 0;
        if (bVar10 && uVar1 != 0) {
          if (*(int *)(iVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          System_Collections_Generic_List_object___GetEnumerator_267e7a4
                    (&uStack_20,*(int *)(iVar2 + 0x10),**(undefined4 **)(_UNK_010a6ff0 + 0x10a6f2c))
          ;
          puVar3 = *(undefined4 **)(_UNK_010a6ff4 + 0x10a6f4c);
          while (iVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                                   (&uStack_20,*puVar3), iVar5 != 0) {
            Rotatelab_IAP_PurchasesListener__SetPriceText_109a3e8(iVar2,uStack_14);
          }
          uVar1 = System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                            (&uStack_20,**(undefined4 **)(_UNK_010a6ff8 + 0x10a6f78));
        }
        return uVar1;
      }
      if (param_1[7] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(param_1[7] + 0xc);
      if (iVar2 == 0) break;
      FUN_00f88884(iVar8 + param_1[0x12],*(undefined4 *)(iVar2 + 0xc));
      (**(code **)(*param_1 + 0x108))(param_1,iVar8,extraout_r1,*(undefined4 *)(*param_1 + 0x10c));
      iVar8 = iVar8 + 1;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_01134990 + 0x1134944);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134994 + 0x1134958),0);
    *pcVar6 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01134998 + 0x113496c));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_01134b28 + 0x11349b4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134b2c + 0x11349c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134b30 + 0x11349d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134b34 + 0x11349e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134b38 + 0x11349ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134b3c + 0x11349f8));
    *pcVar6 = '\x01';
  }
  if (*(int *)(iVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = 0;
  if (*(int *)(*(int *)(iVar2 + 0x10) + 0xc) != 0) {
    if (*(int *)(iVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar3 = *(undefined4 **)(_UNK_01134b40 + 0x1134a40);
    uVar7 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(iVar2 + 0x10),0,*puVar3);
    if (*(int *)(**(int **)(_UNK_01134b44 + 0x1134a54) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar5 = UnityEngine_Object__op_Inequality_36018e4(uVar7,param_1,0);
    iVar8 = *(int *)(iVar2 + 0x10);
    if (iVar5 != 0) {
      if (iVar8 != 0) {
        uStack_18 = *(undefined4 *)
                     (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(**(int **)(_UNK_01134b48 +
                                                                             0x1134a9c) + 0x10) +
                                                         0x60) + 100) + 0x10) + 0x60) + 0xa4);
        uVar1 = System_Array__IndexOf_object__16445f0
                          (*(undefined4 *)(iVar8 + 8),param_1,0,*(undefined4 *)(iVar8 + 0xc));
        if (-1 < (int)uVar1) {
          System_Collections_Generic_List_object___RemoveAt_267f3f8(iVar8,uVar1);
        }
        return ~uVar1 >> 0x1f;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = System_Collections_Generic_List_object___RemoveAt_267f3f8
                      (iVar8,0,**(undefined4 **)(_UNK_01134b4c + 0x1134ac4));
    Rotatelab_UI_PopupManager__SetPopupVisible_1124efc(uVar7,param_1,0);
    if (*(int *)(iVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = *(uint *)(*(int *)(iVar2 + 0x10) + 0xc);
    if (0 < (int)uVar1) {
      if (*(int *)(iVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar9 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                                (*(int *)(iVar2 + 0x10),0,*puVar3);
      pcVar6 = (char *)(_UNK_01134fac + 0x1134f14);
      if (*pcVar6 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01134fb0 + 0x1134f28));
        *pcVar6 = '\x01';
      }
      if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *piVar9;
      uVar1 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar1 != 0) {
        piVar4 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01134fb4 + 0x1134f4c)) {
            puVar3 = (undefined4 *)(iVar2 + *piVar4 * 8 + 0xc0);
            goto LAB_01134f94;
          }
          uVar1 = uVar1 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_01134fb4 + 0x1134f4c),0);
LAB_01134f94:
                    /* WARNING: Could not recover jumptable at 0x01134fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)*puVar3)(piVar9,1,puVar3[1]);
      return uVar1;
    }
  }
  return uVar1;
}

