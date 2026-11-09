/* IL2CPP: Rotatelab.Networking.CloudSaveData$$MigrateToNewestVersion
void Rotatelab_Networking_CloudSaveData__MigrateToNewestVersion (Rotatelab_Networking_CloudSaveData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveData$$MigrateToNewestVersion
   void Rotatelab_Networking_CloudSaveData__MigrateToNewestVersion
   (Rotatelab_Networking_CloudSaveData_o* __this, const MethodInfo* method); */

void Rotatelab_Networking_CloudSaveData__MigrateToNewestVersion_1140d0c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_01150e40 + 0x1150d24);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01150e44 + 0x1150d38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01150e48 + 0x1150d44));
    *pcVar4 = '\x01';
  }
  puVar5 = (uint *)(param_1 + 8);
  uStack_20 = *puVar5;
  iStack_1c = *(int *)(param_1 + 0xc);
  if ((int)-(iStack_1c + (uint)(3 < uStack_20)) < 0 ==
      (SBORROW4(0,iStack_1c) != SBORROW4(-iStack_1c,(uint)(3 < uStack_20)))) {
    iVar6 = *(int *)(_UNK_01150e4c + 0x1150d70);
    uVar1 = FUN_00ec393c(*(undefined4 *)(iVar6 + 0x34),&uStack_20);
    uStack_24 = 0;
    uStack_28 = 4;
    uVar2 = FUN_00ec393c(*(undefined4 *)(iVar6 + 0x34),&uStack_28);
    uVar1 = System_String__Format_2a0c264
                      (**(undefined4 **)(_UNK_01150e50 + 0x1150db8),uVar1,uVar2,0);
    if (*(int *)(**(int **)(_UNK_01150e54 + 0x1150dcc) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Debug__LogWarning_35b0090(uVar1,0);
    uVar3 = *puVar5;
    iVar6 = *(int *)(param_1 + 0xc);
    if ((int)-(iVar6 + (uint)(1 < uVar3)) < 0 ==
        (SBORROW4(0,iVar6) != SBORROW4(-iVar6,(uint)(1 < uVar3)))) {
      Rotatelab_Networking_CloudSaveData__MigrateToV2_1140e58(param_1);
      uVar3 = *puVar5;
      iVar6 = *(int *)(param_1 + 0xc);
    }
    if ((int)-(iVar6 + (uint)(2 < uVar3)) < 0 ==
        (SBORROW4(0,iVar6) != SBORROW4(-iVar6,(uint)(2 < uVar3)))) {
      Rotatelab_Networking_CloudSaveData__MigrateToV3_1141094(param_1);
      uVar3 = *puVar5;
      iVar6 = *(int *)(param_1 + 0xc);
    }
    if ((int)-(iVar6 + (uint)(3 < uVar3)) < 0 ==
        (SBORROW4(0,iVar6) != SBORROW4(-iVar6,(uint)(3 < uVar3)))) {
      Rotatelab_Networking_CloudSaveData__MigrateToV4_1141188(param_1);
    }
    *puVar5 = 4;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

