/* IL2CPP: Rotatelab.Shop.StarChallengeChestViewer$$.ctor
void Rotatelab_Shop_StarChallengeChestViewer___ctor (Rotatelab_Shop_StarChallengeChestViewer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeChestViewer$$.ctor
   void Rotatelab_Shop_StarChallengeChestViewer___ctor (Rotatelab_Shop_StarChallengeChestViewer_o*
   __this, const MethodInfo* method); */

int Rotatelab_Shop_StarChallengeChestViewer___ctor_10c6db0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_010d6e48 + 0x10d6dc4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6e4c + 0x10d6dd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6e50 + 0x10d6de4));
    *pcVar3 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_010d6e54 + 0x10d6e04);
  *(undefined4 *)(param_1 + 0x1c) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x20) = 0x435c0000;
  uVar2 = thunk_FUN_00f00cdc(*puVar1);
  System_Collections_Generic_List_object____ctor_267d274
            (uVar2,**(undefined4 **)(_UNK_010d6e58 + 0x10d6e20));
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x24),uVar2);
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

