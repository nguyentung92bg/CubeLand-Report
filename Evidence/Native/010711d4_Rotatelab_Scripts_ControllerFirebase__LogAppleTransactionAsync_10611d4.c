/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$LogAppleTransactionAsync
Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_Scripts_ControllerFirebase__LogAppleTransactionAsync (System_String_o* transactionId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$LogAppleTransactionAsync
   Cysharp_Threading_Tasks_UniTaskVoid_o
   Rotatelab_Scripts_ControllerFirebase__LogAppleTransactionAsync (System_String_o* transactionId,
   const MethodInfo* method); */

undefined4
Rotatelab_Scripts_ControllerFirebase__LogAppleTransactionAsync_10611d4(undefined4 param_1)

{
  char *pcVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_01071268 + 0x10711ec);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107126c + 0x1071200));
    *pcVar1 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_1c = uStack_2c;
  uStack_18 = uStack_28;
  uStack_14 = uStack_24;
  thunk_FUN_00ec5080((uint)&uStack_30 | 4,0);
  uStack_28 = param_1;
  thunk_FUN_00ec5080(&uStack_28,param_1);
  uStack_30 = 0xffffffff;
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start_ControllerFirebase__LogAppleTransactionAsync_d__26__13eb998
            ((uint)&uStack_30 | 4,&uStack_30,**(undefined4 **)(_UNK_01071270 + 0x107124c));
  return 0;
}

