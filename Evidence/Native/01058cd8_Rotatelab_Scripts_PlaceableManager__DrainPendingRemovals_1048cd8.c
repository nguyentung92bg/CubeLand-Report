/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$DrainPendingRemovals
void Rotatelab_Scripts_PlaceableManager__DrainPendingRemovals (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$DrainPendingRemovals
   void Rotatelab_Scripts_PlaceableManager__DrainPendingRemovals
   (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__DrainPendingRemovals_1048cd8(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01058d68 + 0x1058cec);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058d6c + 0x1058d00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058d70 + 0x1058d0c));
    *pcVar2 = '\x01';
  }
  while( true ) {
    if (*(int *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 200) + 0x14) < 1) break;
    if (*(int *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = System_Collections_Generic_Queue_object___Dequeue_18fcc0c
                      (*(int *)(param_1 + 200),**(undefined4 **)(_UNK_01058d74 + 0x1058d34));
    Rotatelab_Scripts_PlaceableManager__ProcessRemoval_1048bf8(param_1,uVar1);
  }
  return;
}

