/* IL2CPP: Rotatelab.Networking.CloudSaveManager.<>c$$<TryMigrateFromHiroInventorySystem>b__47_1
int64_t Rotatelab_Networking_CloudSaveManager___c___TryMigrateFromHiroInventorySystem_b__47_1 (Rotatelab_Networking_CloudSaveManager___c_o* __this, Hiro_InventoryItem_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager.<>c$$<TryMigrateFromHiroInventorySystem>b__47_1
   int64_t Rotatelab_Networking_CloudSaveManager___c___TryMigrateFromHiroInventorySystem_b__47_1
   (Rotatelab_Networking_CloudSaveManager___c_o* __this, Hiro_InventoryItem_o* e, const MethodInfo*
   method); */

undefined8
Rotatelab_Networking_CloudSaveManager___c___TryMigrateFromHiroInventorySystem_b__47_1_1146eb4
          (undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_String__IsNullOrEmpty_2a0a844(*(undefined4 *)(param_2 + 0x1c),0);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  uVar3 = 0;
  pcVar5 = (char *)(_UNK_02b7d954 + 0x2b7d890);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_02b7d958 + 0x2b7d8a4),0);
    *pcVar5 = '\x01';
    uVar3 = extraout_r1;
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException_2b8422c(0x30,0);
  }
  pcVar5 = (char *)(_UNK_02b7d95c + 0x2b7d8cc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_02b7d960 + 0x2b7d8e0),uVar3);
    *pcVar5 = '\x01';
  }
  if (iVar1 == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = System_String__GetRawStringData_2a07d18(iVar1,0);
    uVar4 = *(undefined4 *)(iVar1 + 8);
  }
  uVar2 = System_Globalization_NumberFormatInfo__get_CurrentInfo_2acd830(0);
  if (*(int *)(**(int **)(_UNK_02b7d964 + 0x2b7d928) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar6 = System_Number__ParseInt64_2b6d968(uVar3,uVar4,7,uVar2);
  return uVar6;
}

