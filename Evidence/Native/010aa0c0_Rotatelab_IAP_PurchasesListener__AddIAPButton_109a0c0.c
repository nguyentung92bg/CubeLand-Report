/* IL2CPP: Rotatelab.IAP.PurchasesListener$$AddIAPButton
void Rotatelab_IAP_PurchasesListener__AddIAPButton (Rotatelab_IAP_PurchasesListener_o* __this, PurchaseButtonBase_o* iapButton, IAPData_o iapData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$AddIAPButton
   void Rotatelab_IAP_PurchasesListener__AddIAPButton (Rotatelab_IAP_PurchasesListener_o* __this,
   PurchaseButtonBase_o* iapButton, IAPData_o iapData, const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__AddIAPButton_109a0c0
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar3 = (char *)(_UNK_010aa3a8 + 0x10aa0e4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa3ac + 0x10aa0f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa3b0 + 0x10aa104));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa3b4 + 0x10aa110));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa3b8 + 0x10aa11c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa3bc + 0x10aa128));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa3c0 + 0x10aa134));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa3c4 + 0x10aa140));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_48,*(int *)(param_1 + 0x10),**(undefined4 **)(_UNK_010aa3c8 + 0x10aa178));
  uStack_38 = uStack_48;
  uStack_34 = puStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  uStack_48 = 0;
  puVar6 = *(undefined4 **)(_UNK_010aa3cc + 0x10aa1a0);
  piVar8 = *(int **)(_UNK_010aa3d0 + 0x10aa1a8);
  puStack_44 = &uStack_38;
  do {
    iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720(&uStack_38,*puVar6)
    ;
    iVar2 = iStack_2c;
    if (iVar1 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_38,**(undefined4 **)(_UNK_010aa3dc + 0x10aa248));
      iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010aa3e0 + 0x10aa25c));
      System_Object___ctor_2bb93bc(iVar2,0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(undefined4 *)(iVar2 + 0x10) = param_2;
      thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x10),param_2);
      *(undefined4 *)(iVar2 + 8) = param_3;
      thunk_FUN_00ec5080((undefined4 *)(iVar2 + 8),param_3);
      *(undefined4 *)(iVar2 + 0xc) = param_4;
      thunk_FUN_00ec5080();
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 != 0) {
        iVar5 = *(int *)(iVar1 + 8);
        uVar7 = *(uint *)(iVar1 + 0xc);
        piVar8 = *(int **)(_UNK_010aa3e4 + 0x10aa2d8);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        if (iVar5 != 0) {
          if (uVar7 < *(uint *)(iVar5 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar7 + 1;
            piVar8 = (int *)(iVar5 + uVar7 * 4 + 0x10);
            *piVar8 = iVar2;
            thunk_FUN_00ec5080(piVar8,iVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_267dae0
                      (iVar1,iVar2,*(undefined4 *)(*(int *)(*(int *)(*piVar8 + 0x10) + 0x60) + 0x38)
                      );
          }
          Rotatelab_IAP_IapObject__Initialize_1095c88(iVar2);
          Rotatelab_IAP_PurchasesListener__SetPriceText_109a3e8(param_1,iVar2);
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = *(undefined4 *)(iStack_2c + 0x10);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar4,param_2,0);
  } while (iVar1 == 0);
  *(undefined4 *)(iVar2 + 8) = param_3;
  thunk_FUN_00ec5080((undefined4 *)(iVar2 + 8),param_3);
  *(undefined4 *)(iVar2 + 0xc) = param_4;
  thunk_FUN_00ec5080();
  Rotatelab_IAP_PurchasesListener__SetPriceText_109a3e8(param_1,iVar2);
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_38,**(undefined4 **)(_UNK_010aa3d4 + 0x10aa230));
  return;
}

