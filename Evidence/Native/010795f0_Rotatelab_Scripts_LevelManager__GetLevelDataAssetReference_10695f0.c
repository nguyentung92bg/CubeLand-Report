/* IL2CPP: Rotatelab.Scripts.LevelManager$$GetLevelDataAssetReference
Rotatelab_SoLevelDataAssetReference_o* Rotatelab_Scripts_LevelManager__GetLevelDataAssetReference (Rotatelab_Scripts_LevelManager_o* __this, int32_t levelIndex, bool includeRemoteLevels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager$$GetLevelDataAssetReference
   Rotatelab_SoLevelDataAssetReference_o* Rotatelab_Scripts_LevelManager__GetLevelDataAssetReference
   (Rotatelab_Scripts_LevelManager_o* __this, int32_t levelIndex, bool includeRemoteLevels, const
   MethodInfo* method); */

undefined4
Rotatelab_Scripts_LevelManager__GetLevelDataAssetReference_10695f0
          (int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01079844 + 0x1079610);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079848 + 0x1079624));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107984c + 0x1079630));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079850 + 0x107963c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079854 + 0x1079648));
    *pcVar4 = '\x01';
  }
  uVar1 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  if (-1 < param_2) {
    Rotatelab_Scripts_LevelManager__RefreshLevelsData_1067ff8(param_1);
    uVar2 = Rotatelab_Scripts_LevelManager__GetLoopedLevelIndex_106986c(param_1,param_2);
    if (param_3 != 0) {
      if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar5 = *(undefined4 **)(_UNK_01079858 + 0x10796a4);
      uVar1 = Rotatelab_Networking_AdvancedAssetReference_object___get_Asset_1f1ca8c
                        (*(int *)(param_1 + 0x24),*puVar5);
      piVar6 = *(int **)(_UNK_0107985c + 0x10796b8);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar3 = UnityEngine_Object__op_Inequality_36018e4(uVar1,0,0);
      if (iVar3 != 0) {
        if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = Rotatelab_Networking_AdvancedAssetReference_object___get_Asset_1f1ca8c
                          (*(int *)(param_1 + 0x24),*puVar5);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = System_Collections_Generic_Dictionary_int__object___TryGetValue_1fd19dc
                          (*(int *)(iVar3 + 0x10),uVar2,&uStack_1c,
                           **(undefined4 **)(_UNK_01079860 + 0x1079730));
        if (iVar3 != 0) {
          return uStack_1c;
        }
      }
      if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar5 = *(undefined4 **)(_UNK_01079864 + 0x1079768);
      uVar1 = Rotatelab_Networking_AdvancedAssetReference_object___get_Asset_1f1ca8c
                        (*(int *)(param_1 + 0x2c),*puVar5);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar3 = UnityEngine_Object__op_Inequality_36018e4(uVar1,0,0);
      if (iVar3 != 0) {
        if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = Rotatelab_Networking_AdvancedAssetReference_object___get_Asset_1f1ca8c
                          (*(int *)(param_1 + 0x2c),*puVar5);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = System_Collections_Generic_Dictionary_int__object___TryGetValue_1fd19dc
                          (*(int *)(iVar3 + 0x10),uVar2,&uStack_20,
                           **(undefined4 **)(_UNK_01079868 + 0x10797ec));
        if (iVar3 != 0) {
          return uStack_20;
        }
      }
    }
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0xc);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar1 = *(undefined4 *)(iVar3 + uVar2 * 4 + 0x10);
  }
  return uVar1;
}

