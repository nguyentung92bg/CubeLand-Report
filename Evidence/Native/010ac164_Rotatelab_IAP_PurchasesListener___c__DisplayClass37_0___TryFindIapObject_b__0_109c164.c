/* IL2CPP: Rotatelab.IAP.PurchasesListener.<>c__DisplayClass37_0$$<TryFindIapObject>b__0
bool Rotatelab_IAP_PurchasesListener___c__DisplayClass37_0___TryFindIapObject_b__0 (Rotatelab_IAP_PurchasesListener___c__DisplayClass37_0_o* __this, Rotatelab_IAP_IapObject_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.IAP.PurchasesListener.<>c__DisplayClass37_0$$<TryFindIapObject>b__0
   bool Rotatelab_IAP_PurchasesListener___c__DisplayClass37_0___TryFindIapObject_b__0
   (Rotatelab_IAP_PurchasesListener___c__DisplayClass37_0_o* __this, Rotatelab_IAP_IapObject_o* e,
   const MethodInfo* method); */

undefined4
Rotatelab_IAP_PurchasesListener___c__DisplayClass37_0___TryFindIapObject_b__0_109c164
          (int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_String__op_Equality_2a0975c
                    (*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 8),0);
  if (iVar1 != 0) {
    piVar4 = *(int **)(param_2 + 0x10);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = (**(code **)(*piVar4 + 0xe0))(piVar4,*(undefined4 *)(*piVar4 + 0xe4));
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar1 == iVar2) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
      if ((iVar1 != 0 && iVar2 != 0) &&
         (uVar5 = *(uint *)(iVar1 + 8), uVar5 == *(uint *)(iVar2 + 8))) {
        uVar3 = System_SpanHelpers__SequenceEqual_2b865c4
                          (iVar1 + 0xc,iVar2 + 0xc,uVar5 << 1,
                           ((int)uVar5 >> 0x1f) << 1 | uVar5 >> 0x1f,0);
        return uVar3;
      }
    }
    return uVar3;
  }
  return 0;
}

