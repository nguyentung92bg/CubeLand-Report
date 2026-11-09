/* IL2CPP: Rotatelab.Scripts.LevelManager$$.ctor
void Rotatelab_Scripts_LevelManager___ctor (Rotatelab_Scripts_LevelManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager$$.ctor
   void Rotatelab_Scripts_LevelManager___ctor (Rotatelab_Scripts_LevelManager_o* __this, const
   MethodInfo* method); */

int Rotatelab_Scripts_LevelManager___ctor_106a65c(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  pcVar2 = (char *)(_UNK_0107a7a8 + 0x107a670);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a7ac + 0x107a684));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a7b0 + 0x107a690));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a7b4 + 0x107a69c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a7b8 + 0x107a6a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a7bc + 0x107a6b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a7c0 + 0x107a6c0));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0107a7c4 + 0x107a6d4));
  System_Collections_Generic_List_int____ctor_261b130
            (uVar1,0x400,**(undefined4 **)(_UNK_0107a7c8 + 0x107a6ec));
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x1c),uVar1);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0107a7cc + 0x107a710));
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar1,10,**(undefined4 **)(_UNK_0107a7d0 + 0x107a728));
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x20),uVar1);
  puVar3 = *(undefined4 **)(_UNK_0107a7d4 + 0x107a74c);
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  System_Object___ctor_2bb93bc(uVar1,0);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x28),uVar1);
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  System_Object___ctor_2bb93bc(uVar1,0);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x30),uVar1);
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

