/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$SpawnHammer
void Rotatelab_Scripts_PlaceableManager__SpawnHammer (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_BlasterData_o* data, UnityEngine_Vector3_o localPosition, UnityEngine_Vector2Int_o index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$SpawnHammer
   void Rotatelab_Scripts_PlaceableManager__SpawnHammer (Rotatelab_Scripts_PlaceableManager_o*
   __this, Rotatelab_BlasterData_o* data, UnityEngine_Vector3_o localPosition,
   UnityEngine_Vector2Int_o index, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__SpawnHammer_1042d20
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01052dc8 + 0x1052d40);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01052dcc + 0x1052d64));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_Scripts_PlaceableManager__SpawnPrefab_object__1535370
                    (param_1,param_2,*(undefined4 *)(param_1 + 0x30),param_3,param_4,param_5,param_6
                     ,param_7,**(undefined4 **)(_UNK_01052dd0 + 0x1052d80));
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(param_2 + 0x18);
  return;
}

