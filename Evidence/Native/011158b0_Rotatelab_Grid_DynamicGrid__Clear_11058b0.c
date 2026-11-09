/* IL2CPP: Rotatelab.Grid.DynamicGrid$$Clear
void Rotatelab_Grid_DynamicGrid__Clear (Rotatelab_Grid_DynamicGrid_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.DynamicGrid$$Clear
   void Rotatelab_Grid_DynamicGrid__Clear (Rotatelab_Grid_DynamicGrid_o* __this, const MethodInfo*
   method); */

void Rotatelab_Grid_DynamicGrid__Clear_11058b0(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_01115948 + 0x11158c4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111594c + 0x11158d8));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar4 + 0xc);
  *(undefined4 *)(iVar4 + 0xc) = 0;
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  if (0 < iVar2) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar4 + 8),0,iVar2,0);
  }
  uVar1 = _UNK_01115940;
  *(undefined8 *)(param_1 + 0xc) = _UNK_01115938;
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  return;
}

