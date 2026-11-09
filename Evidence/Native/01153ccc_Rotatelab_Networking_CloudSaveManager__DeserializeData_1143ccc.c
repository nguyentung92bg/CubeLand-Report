/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$DeserializeData
Rotatelab_Networking_CloudSaveData_o* Rotatelab_Networking_CloudSaveManager__DeserializeData (Rotatelab_Networking_CloudSaveManager_o* __this, System_String_o* json, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$DeserializeData
   Rotatelab_Networking_CloudSaveData_o* Rotatelab_Networking_CloudSaveManager__DeserializeData
   (Rotatelab_Networking_CloudSaveManager_o* __this, System_String_o* json, const MethodInfo*
   method); */

int Rotatelab_Networking_CloudSaveManager__DeserializeData_1143ccc
              (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  
  pcVar4 = (char *)(_UNK_01153d3c + 0x1153ce0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01153d40 + 0x1153cf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01153d44 + 0x1153d00));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01153d48 + 0x1153d14) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = **(int **)(_UNK_01153d4c + 0x1153d30);
  if ((*(int *)(iVar2 + 0x1c) == 0) &&
     (FUN_00ec37c0(*(undefined4 *)(_UNK_014b7040 + 0x14b6ff8)), *(int *)(iVar2 + 0x1c) == 0)) {
    FUN_00efd7c4(iVar2);
  }
  if (*(int *)(**(int **)(_UNK_014b7044 + 0x14b7018) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = **(int **)(iVar2 + 0x1c);
  puVar3 = *(undefined4 **)(iVar2 + 0x1c);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_014b7250 + 0x14b7178));
    puVar3 = *(undefined4 **)(iVar2 + 0x1c);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_00efd7c4(iVar2);
      puVar3 = *(undefined4 **)(iVar2 + 0x1c);
    }
  }
  uVar5 = *puVar3;
  if (*(int *)(*(int *)(*(int *)(_UNK_014b7254 + 0x14b719c) + 0x70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar5 = System_Type__GetTypeFromHandle_2b80928(uVar5,0);
  if (*(int *)(**(int **)(_UNK_014b7258 + 0x14b71cc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar6 = 0;
  iVar1 = Newtonsoft_Json_JsonConvert__DeserializeObject_2c340e4
                    (param_2,uVar5,0,0,unaff_r4,unaff_r5);
  iVar2 = *(int *)(*(int *)(iVar2 + 0x1c) + 4);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768(iVar2);
  }
  if ((iVar1 != 0) && (iVar6 = thunk_FUN_00f00bc8(iVar1,iVar2), iVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00ec3e28(iVar1,iVar2);
  }
  return iVar6;
}

