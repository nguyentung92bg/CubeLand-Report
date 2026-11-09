/* IL2CPP: Rotatelab.Grid.GridManager$$.ctor
void Rotatelab_Grid_GridManager___ctor (Rotatelab_Grid_GridManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridManager$$.ctor
   void Rotatelab_Grid_GridManager___ctor (Rotatelab_Grid_GridManager_o* __this, const MethodInfo*
   method); */

int Rotatelab_Grid_GridManager___ctor_1108ad4(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01118b70 + 0x1118ae8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118b74 + 0x1118afc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118b78 + 0x1118b08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118b7c + 0x1118b14));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01118b80 + 0x1118b28));
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar1,0x80,**(undefined4 **)(_UNK_01118b84 + 0x1118b40));
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x14),uVar1);
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

