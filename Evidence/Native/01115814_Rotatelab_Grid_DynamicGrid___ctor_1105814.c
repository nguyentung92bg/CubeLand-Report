/* IL2CPP: Rotatelab.Grid.DynamicGrid$$.ctor
void Rotatelab_Grid_DynamicGrid___ctor (Rotatelab_Grid_DynamicGrid_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.DynamicGrid$$.ctor
   void Rotatelab_Grid_DynamicGrid___ctor (Rotatelab_Grid_DynamicGrid_o* __this, const MethodInfo*
   method); */

int Rotatelab_Grid_DynamicGrid___ctor_1105814(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0111589c + 0x1115828);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011158a0 + 0x111583c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011158a4 + 0x1115848));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011158a8 + 0x111585c));
  System_Collections_Generic_List_ValueTuple_object__object_____ctor_25b63d4
            (uVar1,0x100,**(undefined4 **)(_UNK_011158ac + 0x1115874));
  *(undefined4 *)(param_1 + 8) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 8),uVar1);
  return param_1;
}

