/* IL2CPP: Rotatelab.IAP.PurchasesListener$$InitializeUnityIAP
void Rotatelab_IAP_PurchasesListener__InitializeUnityIAP (Rotatelab_IAP_PurchasesListener_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$InitializeUnityIAP
   void Rotatelab_IAP_PurchasesListener__InitializeUnityIAP (Rotatelab_IAP_PurchasesListener_o*
   __this, const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__InitializeUnityIAP_10966c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar8 = (char *)(_UNK_010a6998 + 0x10a66d8);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a699c + 0x10a66ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a69a0 + 0x10a66f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a69a4 + 0x10a6704));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a69a8 + 0x10a6710));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a69ac + 0x10a671c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a69b0 + 0x10a6728));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a69b4 + 0x10a6734));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a69b8 + 0x10a6740));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a69bc + 0x10a674c));
    *pcVar8 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uVar1 = UnityEngine_Purchasing_StandardPurchasingModule__Instance_32ad0a0(0);
  iVar2 = UnityEngine_Purchasing_ConfigurationBuilder__Instance_32a7aac(uVar1,0);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_40,*(int *)(param_1 + 0x1c),**(undefined4 **)(_UNK_010a69c0 + 0x10a679c));
  uStack_30 = uStack_40;
  uStack_2c = puStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  uStack_40 = 0;
  puVar9 = *(undefined4 **)(_UNK_010a69c4 + 0x10a67bc);
  puStack_3c = &uStack_30;
  while (iVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                           (&uStack_30,*puVar9), uVar1 = uStack_24, iVar3 != 0) {
    uVar4 = Rotatelab_IAP_PurchasesListener__GetProductType_10969e4(uStack_24);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Purchasing_ConfigurationBuilder__AddProduct_32a7c50(iVar2,uVar1,uVar4,0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_30,**(undefined4 **)(_UNK_010a69c8 + 0x10a680c));
  iVar3 = UnityEngine_Purchasing_StandardPurchasingModule__Instance_32ad0a0(0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Purchasing_StandardPurchasingModule__get_appStore_32ad1f8(iVar3,0);
  if (iVar3 == 1) {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar5 = (int *)UnityEngine_Purchasing_ConfigurationBuilder__Configure_object__14435f8
                              (iVar2,**(undefined4 **)(_UNK_010a69d0 + 0x10a6858));
    uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a69d4 + 0x10a6870));
    System_Action_object____ctor_1f11414
              (uVar1,param_1,**(undefined4 **)(_UNK_010a69d8 + 0x10a688c),0);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *piVar5;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_010a69dc + 0x10a68b0)) {
          puVar9 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
          goto LAB_010a68f8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined4 *)FUN_00efdb38(piVar5,**(int **)(_UNK_010a69dc + 0x10a68b0),0);
LAB_010a68f8:
    (*(code *)*puVar9)(piVar5,uVar1,puVar9[1]);
  }
  if (*(int *)(**(int **)(_UNK_010a69e0 + 0x10a691c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Purchasing_UnityPurchasing__Initialize_32ad2fc(param_1,iVar2,0);
  return;
}

