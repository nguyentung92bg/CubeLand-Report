/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$SpawnLock
void Rotatelab_Scripts_PlaceableManager__SpawnLock (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_BlasterData_o* data, UnityEngine_Vector3_o localPosition, UnityEngine_Vector2Int_o index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$SpawnLock
   void Rotatelab_Scripts_PlaceableManager__SpawnLock (Rotatelab_Scripts_PlaceableManager_o* __this,
   Rotatelab_BlasterData_o* data, UnityEngine_Vector3_o localPosition, UnityEngine_Vector2Int_o
   index, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__SpawnLock_1042b2c
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01052bb0 + 0x1052b4c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01052bb4 + 0x1052b70));
    *pcVar1 = '\x01';
  }
  Rotatelab_Scripts_PlaceableManager__SpawnPrefab_object__1535370
            (param_1,param_2,*(undefined4 *)(param_1 + 0x28),param_3,param_4,param_5,param_6,param_7
             ,**(undefined4 **)(_UNK_01052bb8 + 0x1052b8c));
  return;
}

