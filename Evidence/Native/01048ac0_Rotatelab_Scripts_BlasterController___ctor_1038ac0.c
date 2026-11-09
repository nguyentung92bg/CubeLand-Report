/* IL2CPP: Rotatelab.Scripts.BlasterController$$.ctor
void Rotatelab_Scripts_BlasterController___ctor (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$.ctor
   void Rotatelab_Scripts_BlasterController___ctor (Rotatelab_Scripts_BlasterController_o* __this,
   const MethodInfo* method); */

int Rotatelab_Scripts_BlasterController___ctor_1038ac0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  pcVar3 = (char *)(_UNK_01048c18 + 0x1048ad4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01048c1c + 0x1048ae8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01048c20 + 0x1048af4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01048c24 + 0x1048b00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01048c28 + 0x1048b0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01048c2c + 0x1048b18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01048c30 + 0x1048b24));
    *pcVar3 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_01048c34 + 0x1048b40);
  *(undefined4 *)(param_1 + 0x70) = 0x3dcccccd;
  uVar2 = thunk_FUN_00f00cdc(*puVar1);
  System_Collections_Generic_List_object____ctor_267d274
            (uVar2,**(undefined4 **)(_UNK_01048c38 + 0x1048b58));
  *(undefined4 *)(param_1 + 0x118) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x118),uVar2);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01048c3c + 0x1048b7c));
  System_Collections_Generic_List_object____ctor_267d274
            (uVar2,**(undefined4 **)(_UNK_01048c40 + 0x1048b90));
  *(undefined4 *)(param_1 + 0x11c) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x11c),uVar2);
  puVar1 = *(undefined4 **)(_UNK_01048c44 + 0x1048bb4);
  uVar2 = thunk_FUN_00f00cdc(*puVar1);
  puVar4 = *(undefined4 **)(_UNK_01048c48 + 0x1048bcc);
  System_Collections_Generic_List_object____ctor_267d2e8(uVar2,1,*puVar4);
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x120),uVar2);
  uVar2 = thunk_FUN_00f00cdc(*puVar1);
  System_Collections_Generic_List_object____ctor_267d2e8(uVar2,1,*puVar4);
  *(undefined4 *)(param_1 + 0x124) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x124),uVar2);
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

