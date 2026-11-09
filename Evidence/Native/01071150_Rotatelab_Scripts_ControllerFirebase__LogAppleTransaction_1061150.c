/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$LogAppleTransaction
void Rotatelab_Scripts_ControllerFirebase__LogAppleTransaction (System_String_o* transactionId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$LogAppleTransaction
   void Rotatelab_Scripts_ControllerFirebase__LogAppleTransaction (System_String_o* transactionId,
   const MethodInfo* method); */

void Rotatelab_Scripts_ControllerFirebase__LogAppleTransaction_1061150(undefined4 param_1)

{
  char *pcVar1;
  undefined1 uStack_11;
  
  pcVar1 = (char *)(_UNK_010711c8 + 0x1071168);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010711cc + 0x107117c));
    *pcVar1 = '\x01';
  }
  uStack_11 = 0;
  if (*(int *)(**(int **)(_UNK_010711d0 + 0x1071194) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uStack_11 = Rotatelab_Scripts_ControllerFirebase__LogAppleTransactionAsync_10611d4(param_1);
  Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_11,0);
  return;
}

