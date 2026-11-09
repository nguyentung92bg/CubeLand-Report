/* IL2CPP: Rotatelab.IAP.PurchasesListener.<>c__DisplayClass49_0$$<VerifyPurchaseWithAdjust>b__2
void Rotatelab_IAP_PurchasesListener___c__DisplayClass49_0___VerifyPurchaseWithAdjust_b__2 (Rotatelab_IAP_PurchasesListener___c__DisplayClass49_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener.<>c__DisplayClass49_0$$<VerifyPurchaseWithAdjust>b__2
   void Rotatelab_IAP_PurchasesListener___c__DisplayClass49_0___VerifyPurchaseWithAdjust_b__2
   (Rotatelab_IAP_PurchasesListener___c__DisplayClass49_0_o* __this, const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener___c__DisplayClass49_0___VerifyPurchaseWithAdjust_b__2_109c27c
               (int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar2 = *(int *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar1 = (char *)(_UNK_010aaa64 + 0x10aa9a8);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aaa68 + 0x10aa9bc));
    *pcVar1 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_24 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create_2a93b18(&uStack_58);
  puVar3 = (undefined4 *)((uint)&uStack_48 | 4);
  *puVar3 = uStack_58;
  puVar3[1] = uStack_54;
  puVar3[2] = uStack_50;
  puVar3[3] = uStack_4c;
  thunk_FUN_00ec5080(puVar3,0);
  puVar3[4] = iVar2;
  thunk_FUN_00ec5080(puVar3 + 4,iVar2);
  uStack_30 = uVar4;
  thunk_FUN_00ec5080(&uStack_30,uVar4);
  uStack_2c = uVar5;
  thunk_FUN_00ec5080(&uStack_2c,uVar5);
  uStack_48 = 0xffffffff;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_PurchasesListener__PurchaseComplete_d__51__13f0158
            (puVar3,&uStack_48,**(undefined4 **)(_UNK_010aaa6c + 0x10aaa4c));
  return;
}

