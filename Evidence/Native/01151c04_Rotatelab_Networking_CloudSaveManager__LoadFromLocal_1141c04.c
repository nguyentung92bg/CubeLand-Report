/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$LoadFromLocal
Rotatelab_Networking_CloudSaveData_o* Rotatelab_Networking_CloudSaveManager__LoadFromLocal (Rotatelab_Networking_CloudSaveManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$LoadFromLocal
   Rotatelab_Networking_CloudSaveData_o* Rotatelab_Networking_CloudSaveManager__LoadFromLocal
   (Rotatelab_Networking_CloudSaveManager_o* __this, const MethodInfo* method); */

int Rotatelab_Networking_CloudSaveManager__LoadFromLocal_1141c04(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_01151d3c + 0x1151c14);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01151d40 + 0x1151c28));
    *pcVar3 = '\x01';
  }
  iVar1 = UnityEngine_PlayerPrefs__GetString_35f746c(**(undefined4 **)(_UNK_01151d44 + 0x1151c3c),0)
  ;
  iVar4 = 0;
  if (iVar1 != 0) {
    iVar2 = System_String__StartsWith_2a09bbc(iVar1,0x7b,0);
    iVar4 = 0;
    if ((iVar2 != 0) &&
       (iVar1 = Rotatelab_Networking_CloudSaveManager__DeserializeData_1143ccc(iVar2,iVar1),
       iVar1 != 0)) {
      Rotatelab_Networking_CloudSaveData__MigrateToNewestVersion_1140d0c(iVar1);
      iVar4 = iVar1;
    }
  }
  return iVar4;
}

