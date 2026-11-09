/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$RemovePlaceableFromQueue
void Rotatelab_Scripts_PlaceableManager__RemovePlaceableFromQueue (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_Scripts_BasePlaceableController_o* placeable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$RemovePlaceableFromQueue
   void Rotatelab_Scripts_PlaceableManager__RemovePlaceableFromQueue
   (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_Scripts_BasePlaceableController_o*
   placeable, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__RemovePlaceableFromQueue_10478e4
               (int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 unaff_r4;
  int iVar3;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_010579d4 + 0x10578fc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010579d8 + 0x1057910));
    *pcVar4 = '\x01';
  }
  if (*(char *)(param_1 + 0xc4) == '\0') {
    *(undefined1 *)(param_1 + 0xc4) = 1;
    Rotatelab_Scripts_PlaceableManager__ProcessRemoval_1048bf8(param_1,param_2);
    Rotatelab_Scripts_PlaceableManager__DrainPendingRemovals_1048cd8(param_1);
    *(undefined1 *)(param_1 + 0xc4) = 0;
    return;
  }
  iVar3 = *(int *)(param_1 + 200);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar3 + 8);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0x14) == *(int *)(iVar5 + 0xc)) {
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(iVar5 + 0xc);
    iVar5 = *(int *)(iVar5 + 0xc) + 4;
    if (iVar5 <= iVar2 * 2) {
      iVar5 = iVar2 << 1;
    }
    System_Collections_Generic_Queue_object___SetCapacity_18fcf90
              (iVar3,iVar5,
               *(undefined4 *)
                (*(int *)(*(int *)(**(int **)(_UNK_010579dc + 0x1057944) + 0x10) + 0x60) + 0x18),
               iVar2,unaff_r4,unaff_r5,unaff_r6);
    iVar5 = *(int *)(iVar3 + 8);
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar5 + 0xc) <= *(uint *)(iVar3 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  puVar1 = (undefined4 *)(iVar5 + *(uint *)(iVar3 + 0x10) * 4 + 0x10);
  *puVar1 = param_2;
  thunk_FUN_00ec5080(puVar1,param_2);
  if (*(int *)(iVar3 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar3 + 0x10) + 1;
  iVar5 = 0;
  if (iVar2 != *(int *)(*(int *)(iVar3 + 8) + 0xc)) {
    iVar5 = iVar2;
  }
  *(int *)(iVar3 + 0x10) = iVar5;
  *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
  *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
  return;
}

