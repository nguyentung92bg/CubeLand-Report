/* IL2CPP: Rotatelab.Scripts.BlasterDockController$$.cctor
void Rotatelab_Scripts_BlasterDockController___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterDockController$$.cctor
   void Rotatelab_Scripts_BlasterDockController___cctor (const MethodInfo* method); */

void Rotatelab_Scripts_BlasterDockController___cctor_100d1a4(void)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  pcVar4 = (char *)(_UNK_0101d3b8 + 0x101d1b4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101d3bc + 0x101d1c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101d3c0 + 0x101d1d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101d3c4 + 0x101d1e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101d3c8 + 0x101d1ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101d3cc + 0x101d1f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101d3d0 + 0x101d204));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101d3d4 + 0x101d210));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101d3d8 + 0x101d21c));
    *pcVar4 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_0101d3dc + 0x101d234);
  iVar3 = FUN_00ec388c(*puVar7,3);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = **(undefined4 **)(_UNK_0101d3e0 + 0x101d254);
  if (*(int *)(iVar3 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x10) = uVar5;
  thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x10),uVar5);
  uVar5 = **(undefined4 **)(_UNK_0101d3e4 + 0x101d28c);
  if (*(uint *)(iVar3 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x14) = uVar5;
  thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x14),uVar5);
  uVar5 = **(undefined4 **)(_UNK_0101d3e8 + 0x101d2bc);
  if (*(uint *)(iVar3 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x18) = uVar5;
  thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x18),uVar5);
  piVar6 = *(int **)(_UNK_0101d3ec + 0x101d2e4);
  **(int **)(*piVar6 + 0x5c) = iVar3;
  thunk_FUN_00ec5080(*(undefined4 *)(*piVar6 + 0x5c),iVar3);
  iVar3 = FUN_00ec388c(*puVar7,3);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = **(undefined4 **)(_UNK_0101d3f0 + 0x101d320);
  if (*(int *)(iVar3 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x10) = uVar5;
  thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x10),uVar5);
  uVar5 = **(undefined4 **)(_UNK_0101d3f4 + 0x101d358);
  if (1 < *(uint *)(iVar3 + 0xc)) {
    *(undefined4 *)(iVar3 + 0x14) = uVar5;
    thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x14),uVar5);
    uVar5 = **(undefined4 **)(_UNK_0101d3f8 + 0x101d388);
    if (*(uint *)(iVar3 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar3 + 0x18) = uVar5;
    thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x18),uVar5);
    piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 4);
    *piVar6 = iVar3;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar6 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)piVar6 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

