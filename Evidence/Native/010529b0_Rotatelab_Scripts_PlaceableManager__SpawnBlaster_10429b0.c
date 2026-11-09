/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$SpawnBlaster
Rotatelab_Scripts_BlasterController_o* Rotatelab_Scripts_PlaceableManager__SpawnBlaster (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_BlasterData_o* data, UnityEngine_Vector3_o localPosition, UnityEngine_Vector2Int_o index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$SpawnBlaster
   Rotatelab_Scripts_BlasterController_o* Rotatelab_Scripts_PlaceableManager__SpawnBlaster
   (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_BlasterData_o* data,
   UnityEngine_Vector3_o localPosition, UnityEngine_Vector2Int_o index, const MethodInfo* method);
    */

int * Rotatelab_Scripts_PlaceableManager__SpawnBlaster_10429b0
                (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01052a90 + 0x10529d0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01052a94 + 0x10529e8));
    *pcVar3 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = 0x1c;
  if (*(char *)(param_2 + 0x24) == '\0') {
    iVar2 = 0x18;
  }
  piVar1 = (int *)Rotatelab_Scripts_PlaceableManager__SpawnPrefab_object__1535370
                            (param_1,param_2,*(undefined4 *)(param_1 + iVar2),param_3,param_4,
                             param_5,param_6,param_7,**(undefined4 **)(_UNK_01052a98 + 0x1052a1c));
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar1 + 0x108))
            (piVar1,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(*piVar1 + 0x10c));
  *(int *)(param_1 + 0xb0) = piVar1[0x45] + *(int *)(param_1 + 0xb0);
  return piVar1;
}

