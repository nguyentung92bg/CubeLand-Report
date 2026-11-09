/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$SpawnStopSign
void Rotatelab_Scripts_PlaceableManager__SpawnStopSign (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_BlasterData_o* data, UnityEngine_Vector3_o localPosition, UnityEngine_Vector2Int_o index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01056bf4) */
/* WARNING: Removing unreachable block (ram,0x01056c10) */
/* WARNING: Removing unreachable block (ram,0x01056c14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$SpawnStopSign
   void Rotatelab_Scripts_PlaceableManager__SpawnStopSign (Rotatelab_Scripts_PlaceableManager_o*
   __this, Rotatelab_BlasterData_o* data, UnityEngine_Vector3_o localPosition,
   UnityEngine_Vector2Int_o index, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__SpawnStopSign_1042ef4
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01052fac + 0x1052f14);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01052fb0 + 0x1052f34));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_Scripts_PlaceableManager__SpawnPrefab_object__1535370
                    (param_1,param_2,*(undefined4 *)(param_1 + 0x3c),param_3,param_4,param_5,param_6
                     ,param_7,**(undefined4 **)(_UNK_01052fb4 + 0x1052f50));
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(param_2 + 0x18);
  Rotatelab_Scripts_StopSignController__UpdateHealthText_104de4c(iVar1);
  pcVar2 = (char *)(_UNK_01056ce8 + 0x1056ba0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056cec + 0x1056bb4),1,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056cf0 + 0x1056bc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056cf4 + 0x1056bcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056cf8 + 0x1056bd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056cfc + 0x1056be4));
    *pcVar2 = '\x01';
  }
  if (*(int *)(iVar1 + 0x44) == 1) {
    return;
  }
  *(undefined4 *)(iVar1 + 0x44) = 1;
                    /* WARNING: Could not recover jumptable at 0x01056c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_01056c48 + _UNK_01056c48))();
  return;
}

