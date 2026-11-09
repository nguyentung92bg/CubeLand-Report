/* IL2CPP: Rotatelab.Scripts.LevelMovePathRecorder$$OnPlayOnComplete
void Rotatelab_Scripts_LevelMovePathRecorder__OnPlayOnComplete (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelMovePathRecorder$$OnPlayOnComplete
   void Rotatelab_Scripts_LevelMovePathRecorder__OnPlayOnComplete (const MethodInfo* method); */

void Rotatelab_Scripts_LevelMovePathRecorder__OnPlayOnComplete_1015b00(void)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  pcVar6 = (char *)(_UNK_01025c1c + 0x1025b10);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025c20 + 0x1025b24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025c24 + 0x1025b30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025c28 + 0x1025b3c));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(_UNK_01025c2c + 0x1025b50);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  piVar4 = *(int **)(iVar3 + 0x5c);
  if ((char)piVar4[2] == '\0') {
    return;
  }
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    piVar4 = *(int **)(*piVar7 + 0x5c);
  }
  iVar3 = *piVar4;
  if (iVar3 != 0) {
    iVar9 = *(int *)(iVar3 + 8);
    uVar10 = *(uint *)(iVar3 + 0xc);
    iVar11 = **(int **)(_UNK_01025c30 + 0x1025ba8);
    puVar5 = *(undefined4 **)(_UNK_01025c34 + 0x1025bc8);
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
    uVar8 = *puVar5;
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar10 < *(uint *)(iVar9 + 0xc)) {
      *(uint *)(iVar3 + 0xc) = uVar10 + 1;
      puVar5 = (undefined4 *)(iVar9 + uVar10 * 4 + 0x10);
      *puVar5 = uVar8;
    }
    else {
      uVar10 = *(uint *)(iVar3 + 0xc);
      System_Collections_Generic_List_object___EnsureCapacity_267e0f0
                (iVar3,uVar10 + 1,
                 *(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38) +
                                    0x10) + 0x60) + 0x3c));
      iVar9 = *(int *)(iVar3 + 8);
      *(uint *)(iVar3 + 0xc) = uVar10 + 1;
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar9 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      puVar5 = (undefined4 *)(iVar9 + uVar10 * 4 + 0x10);
      *puVar5 = uVar8;
    }
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

