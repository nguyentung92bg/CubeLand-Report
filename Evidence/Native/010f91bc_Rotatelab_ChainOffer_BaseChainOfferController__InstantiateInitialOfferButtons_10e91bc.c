/* IL2CPP: Rotatelab.ChainOffer.BaseChainOfferController$$InstantiateInitialOfferButtons
void Rotatelab_ChainOffer_BaseChainOfferController__InstantiateInitialOfferButtons (Rotatelab_ChainOffer_BaseChainOfferController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.BaseChainOfferController$$InstantiateInitialOfferButtons
   void Rotatelab_ChainOffer_BaseChainOfferController__InstantiateInitialOfferButtons
   (Rotatelab_ChainOffer_BaseChainOfferController_o* __this, const MethodInfo* method); */

void Rotatelab_ChainOffer_BaseChainOfferController__InstantiateInitialOfferButtons_10e91bc
               (int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 extraout_r1;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  bool bVar8;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_010f93b8 + 0x10f91d0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f93bc + 0x10f91e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f93c0 + 0x10f91f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f93c4 + 0x10f91fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f93c8 + 0x10f9208));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f93cc + 0x10f9214));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f93d0 + 0x10f9220));
    *pcVar3 = '\x01';
  }
  piVar7 = *(int **)(_UNK_010f93d4 + 0x10f9234);
  iVar4 = param_1[0xc];
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar5 = puVar2[1];
  if (iVar5 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar6 = *puVar2;
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f93d8 + 0x10f9280));
    System_Action_object____ctor_1f11414(iVar5,uVar6,**(undefined4 **)(_UNK_010f93dc + 0x10f92a0),0)
    ;
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
    *piVar7 = iVar5;
    thunk_FUN_00ec5080(piVar7,iVar5);
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___ForEach_267e6f0
            (iVar4,iVar5,**(undefined4 **)(_UNK_010f93e0 + 0x10f92d8));
  iVar1 = param_1[0xc];
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  iVar5 = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar4) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
  }
  while( true ) {
    if (param_1[9] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_1[9] + 0xc) <= iVar5) {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_010f93e4 + 0x10f9394));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(char *)(iVar1 + 0x28) != '\0') {
        pcVar3 = (char *)(_UNK_010a6fdc + 0x10a6eac);
        if (*pcVar3 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_010a6fe0 + 0x10a6ec0));
          FUN_00ec37c0(*(undefined4 *)(_UNK_010a6fe4 + 0x10a6ecc));
          FUN_00ec37c0(*(undefined4 *)(_UNK_010a6fe8 + 0x10a6ed8));
          FUN_00ec37c0(*(undefined4 *)(_UNK_010a6fec + 0x10a6ee4));
          *pcVar3 = '\x01';
        }
        uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uVar6 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        bVar8 = *(char *)(iVar1 + 0x28) != '\0';
        iVar4 = 0;
        if (bVar8) {
          iVar4 = *(int *)(iVar1 + 0x20);
        }
        uStack_20 = 0;
        if (bVar8 && iVar4 != 0) {
          if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          System_Collections_Generic_List_object___GetEnumerator_267e7a4
                    (&uStack_20,*(int *)(iVar1 + 0x10),**(undefined4 **)(_UNK_010a6ff0 + 0x10a6f2c))
          ;
          puVar2 = *(undefined4 **)(_UNK_010a6ff4 + 0x10a6f4c);
          while (iVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                                   (&uStack_20,*puVar2), iVar4 != 0) {
            Rotatelab_IAP_PurchasesListener__SetPriceText_109a3e8(iVar1,uVar6);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                    (&uStack_20,**(undefined4 **)(_UNK_010a6ff8 + 0x10a6f78));
        }
        return;
      }
      Rotatelab_IAP_PurchasesListener__RetryInitializationAsync_1096a48();
      Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&stack0xfffffff7,0);
      return;
    }
    if (param_1[7] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(param_1[7] + 0xc);
    if (iVar1 == 0) break;
    FUN_00f88884(iVar5 + param_1[0x12],*(undefined4 *)(iVar1 + 0xc));
    (**(code **)(*param_1 + 0x108))(param_1,iVar5,extraout_r1,*(undefined4 *)(*param_1 + 0x10c));
    iVar5 = iVar5 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

