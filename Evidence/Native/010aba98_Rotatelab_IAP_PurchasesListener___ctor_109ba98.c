/* IL2CPP: Rotatelab.IAP.PurchasesListener$$.ctor
void Rotatelab_IAP_PurchasesListener___ctor (Rotatelab_IAP_PurchasesListener_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$.ctor
   void Rotatelab_IAP_PurchasesListener___ctor (Rotatelab_IAP_PurchasesListener_o* __this, const
   MethodInfo* method); */

int Rotatelab_IAP_PurchasesListener___ctor_109ba98(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_010abc38 + 0x10abab0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010abc3c + 0x10abac4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010abc40 + 0x10abad0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010abc44 + 0x10abadc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010abc48 + 0x10abae8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010abc4c + 0x10abaf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010abc50 + 0x10abb00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010abc54 + 0x10abb0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010abc58 + 0x10abb18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010abc5c + 0x10abb24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010abc60 + 0x10abb30));
    *pcVar3 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_010abc64 + 0x10abb4c);
  *(undefined4 *)(param_1 + 0x30) = 0xff800000;
  uVar2 = thunk_FUN_00f00cdc(*puVar1);
  Rotatelab_Save_SavedList_object____ctor_1a8a324
            (uVar2,**(undefined4 **)(_UNK_010abc68 + 0x10abb64),
             **(undefined4 **)(_UNK_010abc6c + 0x10abb70));
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x38),uVar2);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010abc70 + 0x10abb94));
  Rotatelab_Save_SavedList_ValueTuple_object__double__object_____ctor_1a89b40
            (uVar2,**(undefined4 **)(_UNK_010abc74 + 0x10abba8),
             **(undefined4 **)(_UNK_010abc78 + 0x10abbb4));
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x3c),uVar2);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010abc7c + 0x10abbd8));
  Rotatelab_Save_SavedGenericValue_object____ctor_1a890c8
            (uVar2,**(undefined4 **)(_UNK_010abc80 + 0x10abbf4),0,1,
             **(undefined4 **)(_UNK_010abc84 + 0x10abc00));
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x40),uVar2);
  pcVar3 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

