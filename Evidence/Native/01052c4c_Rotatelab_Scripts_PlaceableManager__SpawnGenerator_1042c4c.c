/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$SpawnGenerator
void Rotatelab_Scripts_PlaceableManager__SpawnGenerator (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_BlasterData_o* data, UnityEngine_Vector3_o localPosition, UnityEngine_Vector2Int_o index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$SpawnGenerator
   void Rotatelab_Scripts_PlaceableManager__SpawnGenerator (Rotatelab_Scripts_PlaceableManager_o*
   __this, Rotatelab_BlasterData_o* data, UnityEngine_Vector3_o localPosition,
   UnityEngine_Vector2Int_o index, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__SpawnGenerator_1042c4c
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01052d14 + 0x1052c6c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01052d18 + 0x1052c90));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_Scripts_PlaceableManager__SpawnPrefab_object__1535370
                    (param_1,param_2,*(undefined4 *)(param_1 + 0x20),param_3,param_4,param_5,param_6
                     ,param_7,**(undefined4 **)(_UNK_01052d1c + 0x1052cac));
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_BlasterGeneratorController__Initialize_103aebc
            (iVar1,*(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_1 + 0x18),
             *(undefined4 *)(param_1 + 0x10),0);
  return;
}

