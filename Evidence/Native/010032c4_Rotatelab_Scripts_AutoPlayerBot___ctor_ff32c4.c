/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$.ctor
void Rotatelab_Scripts_AutoPlayerBot___ctor (Rotatelab_Scripts_AutoPlayerBot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$.ctor
   void Rotatelab_Scripts_AutoPlayerBot___ctor (Rotatelab_Scripts_AutoPlayerBot_o* __this, const
   MethodInfo* method); */

int Rotatelab_Scripts_AutoPlayerBot___ctor_ff32c4(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  pcVar3 = (char *)(_UNK_010033f4 + 0x10032d8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010033f8 + 0x10032ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010033fc + 0x10032f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01003400 + 0x1003304));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01003404 + 0x1003310));
    *pcVar3 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_01003408 + 0x1003330);
  *(undefined4 *)(param_1 + 0x20) = 0x40000000;
  *(undefined4 *)(param_1 + 0x24) = 1;
  uVar2 = *puVar1;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 2;
  *(undefined4 *)(param_1 + 0x18) = 0x3f400000;
  uVar2 = thunk_FUN_00f00cdc(uVar2);
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar2,8,**(undefined4 **)(_UNK_0100340c + 0x1003364));
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x30),uVar2);
  puVar1 = *(undefined4 **)(_UNK_01003410 + 0x1003388);
  uVar2 = thunk_FUN_00f00cdc(*puVar1);
  puVar4 = *(undefined4 **)(_UNK_01003414 + 0x10033a0);
  System_Collections_Generic_List_int____ctor_261b130(uVar2,8,*puVar4);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x34),uVar2);
  uVar2 = thunk_FUN_00f00cdc(*puVar1);
  System_Collections_Generic_List_int____ctor_261b130(uVar2,8,*puVar4);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x38),uVar2);
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
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

