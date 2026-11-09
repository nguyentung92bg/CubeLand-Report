/* IL2CPP: Rotatelab.Scripts.LevelManager$$GetLevelData
Rotatelab_SoLevelData_o* Rotatelab_Scripts_LevelManager__GetLevelData (Rotatelab_Scripts_LevelManager_o* __this, int32_t levelIndex, bool includeRemoteLevels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager$$GetLevelData
   Rotatelab_SoLevelData_o* Rotatelab_Scripts_LevelManager__GetLevelData
   (Rotatelab_Scripts_LevelManager_o* __this, int32_t levelIndex, bool includeRemoteLevels, const
   MethodInfo* method); */

undefined4
Rotatelab_Scripts_LevelManager__GetLevelData_106844c(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_0107857c + 0x1078468);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01078580 + 0x107847c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01078584 + 0x1078488));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01078588 + 0x1078494));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107858c + 0x10784a0));
    *pcVar6 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_01078590 + 0x10784b4);
  piVar8 = *(int **)(_UNK_01078594 + 0x10784bc);
  while( true ) {
    piVar2 = (int *)Rotatelab_Scripts_LevelManager__GetLevelDataAssetReference_10695f0
                              (param_1,param_2,param_3 & 1);
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    uVar3 = Rotatelab_Networking_AdvancedAssetReference_object___LoadAsset_1f1caec(piVar2,*puVar7);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar4 = UnityEngine_Object__op_Inequality_36018e4(uVar3,0,0);
    if (iVar4 != 0) break;
    (**(code **)(*piVar2 + 0x150))(piVar2,*(undefined4 *)(*piVar2 + 0x154));
    uVar1 = param_3 & 1;
    param_3 = 0;
    if (uVar1 == 0) {
      return 0;
    }
  }
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  if (*(int *)(**(int **)(_UNK_01078598 + 0x1078548) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__AddUnique_object__1484964
            (uVar5,piVar2,**(undefined4 **)(_UNK_0107859c + 0x107856c));
  return uVar3;
}

