/* IL2CPP: Rotatelab.Grid.DynamicGrid$$Get
Rotatelab_Grid_DynamicGrid_o* Rotatelab_Grid_DynamicGrid__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.DynamicGrid$$Get
   Rotatelab_Grid_DynamicGrid_o* Rotatelab_Grid_DynamicGrid__Get (const MethodInfo* method); */

undefined4 Rotatelab_Grid_DynamicGrid__Get_1105764(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01115808 + 0x1115774);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111580c + 0x1115788));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01115810 + 0x111579c);
  if (**(int **)(*piVar3 + 0x5c) == 0) {
    uVar1 = thunk_FUN_00f00cdc(*piVar3);
    Rotatelab_Grid_DynamicGrid___ctor_1105814();
    **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
    thunk_FUN_00ec5080(*(undefined4 *)(*piVar3 + 0x5c),uVar1);
    if (**(int **)(*piVar3 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  Rotatelab_Grid_DynamicGrid__Clear_11058b0();
  return **(undefined4 **)(*piVar3 + 0x5c);
}

