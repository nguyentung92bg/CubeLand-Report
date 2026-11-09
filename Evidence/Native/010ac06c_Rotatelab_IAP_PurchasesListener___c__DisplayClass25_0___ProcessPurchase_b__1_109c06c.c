/* IL2CPP: Rotatelab.IAP.PurchasesListener.<>c__DisplayClass25_0$$<ProcessPurchase>b__1
void Rotatelab_IAP_PurchasesListener___c__DisplayClass25_0___ProcessPurchase_b__1 (Rotatelab_IAP_PurchasesListener___c__DisplayClass25_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener.<>c__DisplayClass25_0$$<ProcessPurchase>b__1
   void Rotatelab_IAP_PurchasesListener___c__DisplayClass25_0___ProcessPurchase_b__1
   (Rotatelab_IAP_PurchasesListener___c__DisplayClass25_0_o* __this, const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener___c__DisplayClass25_0___ProcessPurchase_b__1_109c06c
               (int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  
  pcVar6 = (char *)(_UNK_010ac158 + 0x10ac080);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ac15c + 0x10ac094));
    *pcVar6 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_IAP_PurchasesListener__ProcessPurchase_1097170
                    (*(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != 0) {
    return;
  }
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar7 = *(int **)(*(int *)(param_1 + 8) + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar7;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_010ac160 + 0x10ac0f8)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
        goto LAB_010ac140;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(piVar7,**(int **)(_UNK_010ac160 + 0x10ac0f8),2);
LAB_010ac140:
                    /* WARNING: Could not recover jumptable at 0x010ac154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar7,uVar5,puVar2[1]);
  return;
}

