/* IL2CPP: Rotatelab.ChainOffer.SequentialChainOfferController$$.ctor
void Rotatelab_ChainOffer_SequentialChainOfferController___ctor (Rotatelab_ChainOffer_SequentialChainOfferController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.SequentialChainOfferController$$.ctor
   void Rotatelab_ChainOffer_SequentialChainOfferController___ctor
   (Rotatelab_ChainOffer_SequentialChainOfferController_o* __this, const MethodInfo* method); */

int Rotatelab_ChainOffer_SequentialChainOfferController___ctor_10eb5ac(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010fb038 + 0x10faf68);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fb03c + 0x10faf7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fb040 + 0x10faf88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fb044 + 0x10faf94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fb048 + 0x10fafa0));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010fb04c + 0x10fafb4));
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar1,8,**(undefined4 **)(_UNK_010fb050 + 0x10fafcc));
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x30),uVar1);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010fb054 + 0x10faff0));
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar1,4,**(undefined4 **)(_UNK_010fb058 + 0x10fb008));
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x40),uVar1);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  pcVar2 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

