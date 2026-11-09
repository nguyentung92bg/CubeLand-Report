/* IL2CPP: Rotatelab.Grid.GridManager$$.cctor
void Rotatelab_Grid_GridManager___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridManager$$.cctor
   void Rotatelab_Grid_GridManager___cctor (const MethodInfo* method); */

void Rotatelab_Grid_GridManager___cctor_1108b8c(void)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_01118cdc + 0x1118b9c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118ce0 + 0x1118bb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01118ce4 + 0x1118bbc));
    *pcVar6 = '\x01';
  }
  iVar3 = FUN_00ec388c(**(undefined4 **)(_UNK_01118ce8 + 0x1118bd4),6);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = *(uint *)(iVar3 + 0xc);
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  if (uVar4 < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x1c) = 1;
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  if (uVar4 < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x2c) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x30) = 0;
  if (uVar4 < 4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x34) = 0;
  *(undefined4 *)(iVar3 + 0x38) = 1;
  *(undefined4 *)(iVar3 + 0x3c) = 0;
  if (uVar4 < 5) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x40) = 0;
  *(undefined4 *)(iVar3 + 0x44) = 0;
  *(undefined4 *)(iVar3 + 0x48) = 0xffffffff;
  if (5 < uVar4) {
    *(undefined4 *)(iVar3 + 0x4c) = 0;
    *(undefined4 *)(iVar3 + 0x50) = 0;
    *(undefined4 *)(iVar3 + 0x54) = 1;
    piVar5 = *(int **)(_UNK_01118cec + 0x1118cc0);
    **(int **)(*piVar5 + 0x5c) = iVar3;
    uVar4 = *(uint *)(*piVar5 + 0x5c);
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + (uVar4 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << ((uVar4 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

