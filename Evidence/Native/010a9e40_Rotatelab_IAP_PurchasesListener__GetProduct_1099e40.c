/* IL2CPP: Rotatelab.IAP.PurchasesListener$$GetProduct
UnityEngine_Purchasing_Product_o* Rotatelab_IAP_PurchasesListener__GetProduct (Rotatelab_IAP_PurchasesListener_o* __this, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$GetProduct
   UnityEngine_Purchasing_Product_o* Rotatelab_IAP_PurchasesListener__GetProduct
   (Rotatelab_IAP_PurchasesListener_o* __this, System_String_o* productId, const MethodInfo*
   method); */

undefined4 Rotatelab_IAP_PurchasesListener__GetProduct_1099e40(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined4 auStack_1c [3];
  
  pcVar6 = (char *)(_UNK_010a9f1c + 0x10a9e58);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9f20 + 0x10a9e6c));
    *pcVar6 = '\x01';
  }
  bVar9 = (char)param_1[10] != '\0';
  if (bVar9) {
    param_1 = (int *)param_1[8];
  }
  if (!bVar9 || param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_010a9f24 + 0x10a9ea0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
        goto LAB_010a9ee8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_1,**(int **)(_UNK_010a9f24 + 0x10a9ea0),0);
LAB_010a9ee8:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_032be580 + 0x32be444);
  if (*pcVar6 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_032be584 + 0x32be458),param_2,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_032be588 + 0x32be464));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_032be58c + 0x32be470));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_032be590 + 0x32be47c));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_032be594 + 0x32be488));
    *pcVar6 = '\x01';
  }
  auStack_1c[0] = 0;
  uVar3 = UnityEngine_Purchasing_ProductCollection__get_all_32ae350();
  piVar5 = *(int **)(_UNK_032be598 + 0x32be4ac);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar1 = *piVar5;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar7 = puVar2[1];
  if (iVar7 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      thunk_FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar5 + 0x5c);
    }
    uVar8 = *puVar2;
    iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_032be59c + 0x32be4f4));
    System_Func_object__object____ctor_239b630
              (iVar7,uVar8,**(undefined4 **)(_UNK_032be5a0 + 0x32be514),0);
    piVar5 = (int *)(*(int *)(*piVar5 + 0x5c) + 4);
    *piVar5 = iVar7;
    thunk_FUN_00ec5080(piVar5,iVar7);
  }
  iVar1 = System_Linq_Enumerable__ToDictionary_object__object__14770b8
                    (uVar3,iVar7,**(undefined4 **)(_UNK_032be5a4 + 0x32be540));
  if (iVar1 != 0) {
    System_Collections_Generic_Dictionary_object__object___TryGetValue_206b35c
              (iVar1,param_2,auStack_1c,**(undefined4 **)(_UNK_032be5a8 + 0x32be56c));
    return auStack_1c[0];
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

