/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$CompleteCurrentShiftPlaceablesAnimationImmediately
void Rotatelab_Scripts_PlaceableManager__CompleteCurrentShiftPlaceablesAnimationImmediately (Rotatelab_Scripts_PlaceableManager_o* __this, int32_t column, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0105423c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$CompleteCurrentShiftPlaceablesAnimationImmediately
   void Rotatelab_Scripts_PlaceableManager__CompleteCurrentShiftPlaceablesAnimationImmediately
   (Rotatelab_Scripts_PlaceableManager_o* __this, int32_t column, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__CompleteCurrentShiftPlaceablesAnimationImmediately_10441a0
               (int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0xc4);
  iVar2 = *(int *)(param_1 + 0xc0);
  *(undefined1 *)(param_1 + 0xc4) = 1;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (param_2 < *(uint *)(iVar2 + 0xc)) {
    PrimeTween_Sequence__Complete_2ceea60(iVar2 + param_2 * 0x10 + 0x10,0);
    if (cVar1 != '\x01') {
      Rotatelab_Scripts_PlaceableManager__DrainPendingRemovals_1048cd8(param_1);
      *(undefined1 *)(param_1 + 0xc4) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

