/* IL2CPP: Rotatelab.Scripts.LevelMovePathRecorder$$OnBoosterUsed
void Rotatelab_Scripts_LevelMovePathRecorder__OnBoosterUsed (int32_t boosterType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelMovePathRecorder$$OnBoosterUsed
   void Rotatelab_Scripts_LevelMovePathRecorder__OnBoosterUsed (int32_t boosterType, const
   MethodInfo* method); */

void Rotatelab_Scripts_LevelMovePathRecorder__OnBoosterUsed_1015064(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  
  pcVar5 = (char *)(_UNK_01025194 + 0x1025078);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025198 + 0x102508c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102519c + 0x1025098));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_010251a0 + 0x10250ac);
  iVar3 = *piVar6;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar6;
  }
  if (*(char *)(*(int *)(iVar3 + 0x5c) + 8) != '\0') {
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = Rotatelab_Scripts_LevelMovePathRecorder__ToBoosterToken_10151a8(param_1);
    if (iVar3 != 0) {
      iVar4 = *piVar6;
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        iVar4 = *piVar6;
      }
      iVar4 = **(int **)(iVar4 + 0x5c);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *(int *)(iVar4 + 8);
      uVar8 = *(uint *)(iVar4 + 0xc);
      piVar6 = *(int **)(_UNK_010251a4 + 0x1025140);
      *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar8 < *(uint *)(iVar7 + 0xc)) {
        *(uint *)(iVar4 + 0xc) = uVar8 + 1;
        piVar6 = (int *)(iVar7 + uVar8 * 4 + 0x10);
        *piVar6 = iVar3;
      }
      else {
        uVar8 = *(uint *)(iVar4 + 0xc);
        System_Collections_Generic_List_object___EnsureCapacity_267e0f0
                  (iVar4,uVar8 + 1,
                   *(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38) +
                                      0x10) + 0x60) + 0x3c));
        iVar7 = *(int *)(iVar4 + 8);
        *(uint *)(iVar4 + 0xc) = uVar8 + 1;
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar7 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        piVar6 = (int *)(iVar7 + uVar8 * 4 + 0x10);
        *piVar6 = iVar3;
      }
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
  }
  return;
}

