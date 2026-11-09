/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$ProcessRemoval
void Rotatelab_Scripts_PlaceableManager__ProcessRemoval (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_Scripts_BasePlaceableController_o* placeable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$ProcessRemoval
   void Rotatelab_Scripts_PlaceableManager__ProcessRemoval (Rotatelab_Scripts_PlaceableManager_o*
   __this, Rotatelab_Scripts_BasePlaceableController_o* placeable, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__ProcessRemoval_1048bf8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01058cc4 + 0x1058c10);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058cc8 + 0x1058c24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058ccc + 0x1058c30));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Collections_Generic_List_object___Remove_267f138
                    (*(int *)(param_1 + 0xb4),param_2,**(undefined4 **)(_UNK_01058cd0 + 0x1058c58));
  if (iVar1 != 0) {
    Rotatelab_Scripts_PlaceableManager__ShiftPlaceablesBehind_1044bdc(param_1,param_2);
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    iVar2 = System_Collections_Generic_HashSet_object___Add_2420ac8
                      (*(int *)(param_1 + 0xb8),param_2,**(undefined4 **)(_UNK_01058cd4 + 0x1058c94)
                      );
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(param_1 + 0xbc);
    }
    if (iVar2 != 0 && iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01058cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))
                (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

