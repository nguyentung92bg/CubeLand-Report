/* IL2CPP: Rotatelab.IAP.PurchasesListener$$OnInitialized
void Rotatelab_IAP_PurchasesListener__OnInitialized (Rotatelab_IAP_PurchasesListener_o* __this, UnityEngine_Purchasing_IStoreController_o* controller, UnityEngine_Purchasing_IExtensionProvider_o* extensions, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$OnInitialized
   void Rotatelab_IAP_PurchasesListener__OnInitialized (Rotatelab_IAP_PurchasesListener_o* __this,
   UnityEngine_Purchasing_IStoreController_o* controller,
   UnityEngine_Purchasing_IExtensionProvider_o* extensions, const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__OnInitialized_1096ae4
               (int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  
  pcVar7 = (char *)(_UNK_010a6e50 + 0x10a6b00);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a6e54 + 0x10a6b14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a6e58 + 0x10a6b20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a6e5c + 0x10a6b2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a6e60 + 0x10a6b38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a6e64 + 0x10a6b44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a6e68 + 0x10a6b50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a6e6c + 0x10a6b5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a6e70 + 0x10a6b68));
    *pcVar7 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010a6e74 + 0x10a6b7c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Debugging_CreativeCanvasController__LogMessage_110e8d8
            (iVar1,**(undefined4 **)(_UNK_010a6e78 + 0x10a6ba0),0);
  puVar9 = (undefined4 *)(param_1 + 0x20);
  *puVar9 = param_2;
  thunk_FUN_00ec5080(puVar9,param_2);
  *(undefined4 *)(param_1 + 0x24) = param_3;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x24),param_3);
  *(undefined1 *)(param_1 + 0x28) = 1;
  iVar1 = UnityEngine_Purchasing_StandardPurchasingModule__Instance_32ad0a0(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Purchasing_StandardPurchasingModule__get_appStore_32ad1f8(iVar1,0);
  if (iVar1 == 3) {
    if (param_3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = **(int **)(_UNK_010a6e7c + 0x10a6c1c);
    iVar1 = *param_3;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *(int *)(iVar8 + 0x10)) {
          iVar1 = iVar1 + (*piVar6 + (uint)*(ushort *)(iVar8 + 0x2c)) * 8 + 0xc0;
          goto LAB_010a6c70;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    iVar1 = FUN_00efdb38(param_3);
LAB_010a6c70:
    iVar1 = FUN_00ec3930(*(undefined4 *)(iVar1 + 4),iVar8);
    piVar6 = (int *)(**(code **)(iVar1 + 4))(param_3,iVar1);
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a6e80 + 0x10a6c9c));
    System_Action_object____ctor_1f11414
              (uVar2,param_1,**(undefined4 **)(_UNK_010a6e84 + 0x10a6cb8),0);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piVar6;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_010a6e88 + 0x10a6cdc)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 200);
          goto LAB_010a6d24;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar6,**(int **)(_UNK_010a6e88 + 0x10a6cdc),1);
LAB_010a6d24:
    (*(code *)*puVar3)(piVar6,uVar2,puVar3[1]);
  }
  piVar6 = (int *)*puVar9;
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar6;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_010a6e8c + 0x10a6d58)) {
        puVar9 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
        goto LAB_010a6da0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar9 = (undefined4 *)FUN_00efdb38(piVar6,**(int **)(_UNK_010a6e8c + 0x10a6d58),0);
LAB_010a6da0:
  iVar1 = (*(code *)*puVar9)(piVar6,puVar9[1]);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Purchasing_ProductCollection__get_all_32ae350(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0xc) != 0) {
    if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 0xc);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar6 = *(int **)(_UNK_010a6e90 + 0x10a6e14);
    uVar2 = *(undefined4 *)(iVar1 + 0x14);
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar6;
    }
    **(undefined4 **)(iVar1 + 0x5c) = uVar2;
    thunk_FUN_00ec5080(*(undefined4 *)(*piVar6 + 0x5c),uVar2);
  }
  pcVar7 = (char *)(_UNK_010a6fdc + 0x10a6eac);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a6fe0 + 0x10a6ec0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a6fe4 + 0x10a6ecc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a6fe8 + 0x10a6ed8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a6fec + 0x10a6ee4));
    *pcVar7 = '\x01';
  }
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  bVar10 = *(char *)(param_1 + 0x28) != '\0';
  iVar1 = 0;
  if (bVar10) {
    iVar1 = *(int *)(param_1 + 0x20);
  }
  if (bVar10 && iVar1 != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&stack0xffffffe0,*(int *)(param_1 + 0x10),
               **(undefined4 **)(_UNK_010a6ff0 + 0x10a6f2c));
    puVar9 = *(undefined4 **)(_UNK_010a6ff4 + 0x10a6f4c);
    while (iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                             (&stack0xffffffe0,*puVar9), iVar1 != 0) {
      Rotatelab_IAP_PurchasesListener__SetPriceText_109a3e8(param_1,uVar2);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (&stack0xffffffe0,**(undefined4 **)(_UNK_010a6ff8 + 0x10a6f78));
  }
  return;
}

