/* IL2CPP: Rotatelab.IAP.PurchasesListener.<>c__DisplayClass52_0.<<TrySendPurchaseToSatoriAsync>b__1>d$$MoveNext
void Rotatelab_IAP_PurchasesListener___c__DisplayClass52_0___TrySendPurchaseToSatoriAsync_b__1_d__MoveNext (Rotatelab_IAP_PurchasesListener___c__DisplayClass52_0___TrySendPurchaseToSatoriAsync_b__1_d_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.IAP.PurchasesListener.<>c__DisplayClass52_0.<<TrySendPurchaseToSatoriAsync>b__1>d$$MoveNext
   void 
   Rotatelab_IAP_PurchasesListener___c__DisplayClass52_0___TrySendPurchaseToSatoriAsync_b__1_d__MoveNext
   (Rotatelab_IAP_PurchasesListener___c__DisplayClass52_0___TrySendPurchaseToSatoriAsync_b__1_d_o
   __this, const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener___c__DisplayClass52_0___TrySendPurchaseToSatoriAsync_b__1_d__MoveNext_109c374
               (int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int iStack_14;
  
  pcVar6 = (char *)(_UNK_010ac64c + 0x10ac38c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ac650 + 0x10ac3a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ac654 + 0x10ac3ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ac658 + 0x10ac3b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ac65c + 0x10ac3c4));
    *pcVar6 = '\x01';
  }
  iVar7 = param_1[3];
  iStack_14 = 0;
  if (*param_1 == 0) {
    *param_1 = -1;
    iStack_14 = param_1[4];
    param_1[4] = 0;
  }
  else {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010ac660 + 0x10ac3f4));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = Hiro_SatoriSystem__LogEventAsync_296b910
                      (*(int *)(iVar1 + 0x24),**(undefined4 **)(_UNK_010ac668 + 0x10ac440),
                       *(undefined4 *)(iVar7 + 8),**(undefined4 **)(_UNK_010ac664 + 0x10ac434),0,0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iStack_14 = System_Threading_Tasks_Task__GetAwaiter_2bf1e70(iVar7,0);
    iVar7 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted_2a9339c(&iStack_14,0);
    if (iVar7 == 0) {
      *param_1 = 0;
      param_1[4] = iStack_14;
      thunk_FUN_00ec5080(param_1 + 4,0);
      func_0x010bd47c(param_1 + 1,&iStack_14,param_1,**(undefined4 **)(_UNK_010ac66c + 0x10ac4b4));
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult_2a93488(&iStack_14,0);
  iVar7 = _UNK_010ac670;
  *param_1 = -2;
  if (*(char *)(iVar7 + 0x10ac4fc) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ac674 + 0x10ac510));
    *(char *)(iVar7 + 0x10ac4fc) = '\x01';
  }
  piVar5 = (int *)param_1[1];
  if (piVar5 != (int *)0x0) {
    iVar7 = *piVar5;
    uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_010ac678 + 0x10ac534)) {
          puVar2 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xd0);
          goto LAB_010ac57c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar5,**(int **)(_UNK_010ac678 + 0x10ac534),2);
LAB_010ac57c:
    (*(code *)*puVar2)(piVar5,puVar2[1]);
  }
  return;
}

