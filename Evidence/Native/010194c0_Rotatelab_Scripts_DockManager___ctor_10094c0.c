/* IL2CPP: Rotatelab.Scripts.DockManager$$.ctor
void Rotatelab_Scripts_DockManager___ctor (Rotatelab_Scripts_DockManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$.ctor
   void Rotatelab_Scripts_DockManager___ctor (Rotatelab_Scripts_DockManager_o* __this, const
   MethodInfo* method); */

int Rotatelab_Scripts_DockManager___ctor_10094c0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01019600 + 0x10194d4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01019604 + 0x10194e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01019608 + 0x10194f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101960c + 0x1019500));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01019610 + 0x101950c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01019614 + 0x1019518));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01019618 + 0x1019524));
    *pcVar3 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_0101961c + 0x101954c);
  *(undefined4 *)(param_1 + 0x40) = 0x3f147ae1;
  *(undefined4 *)(param_1 + 0x38) = 0x3f400000;
  uVar2 = *puVar1;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f28f5c3;
  uVar2 = FUN_00ec388c(uVar2,0);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  thunk_FUN_00ec5080();
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01019620 + 0x101957c));
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar2,0x10,**(undefined4 **)(_UNK_01019624 + 0x1019594));
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x50),uVar2);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01019628 + 0x10195b8));
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar2,8,**(undefined4 **)(_UNK_0101962c + 0x10195d0));
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x54),uVar2);
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

