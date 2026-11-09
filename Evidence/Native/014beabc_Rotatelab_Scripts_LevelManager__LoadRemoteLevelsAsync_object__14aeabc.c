/* IL2CPP: Rotatelab.Scripts.LevelManager$$LoadRemoteLevelsAsync<object>
Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_Scripts_LevelManager__LoadRemoteLevelsAsync_object_ (Rotatelab_Scripts_LevelManager_o* __this, Rotatelab_Networking_AdvancedAssetReference_T__o* assetReference, Rotatelab_Scripts_LevelManager_RemoteLevelCatalog_o* catalog, System_String_o* groupName, System_String_o* catalogURLFlag, const MethodInfo_14AEABC* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.LevelManager$$LoadRemoteLevelsAsync<object>
   Cysharp_Threading_Tasks_UniTaskVoid_o
   Rotatelab_Scripts_LevelManager__LoadRemoteLevelsAsync_object_ (Rotatelab_Scripts_LevelManager_o*
   __this, Rotatelab_Networking_AdvancedAssetReference_T__o* assetReference,
   Rotatelab_Scripts_LevelManager_RemoteLevelCatalog_o* catalog, System_String_o* groupName,
   System_String_o* catalogURLFlag, const MethodInfo_14AEABC* method); */

undefined4
Rotatelab_Scripts_LevelManager__LoadRemoteLevelsAsync_object__14aeabc
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,int param_6)

{
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*(int *)(param_6 + 0x1c) == 0) {
    FUN_00efd7c4(param_6);
  }
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_44 = uStack_54;
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  thunk_FUN_00ec5080((uint)&uStack_58 | 4);
  uStack_48 = param_2;
  thunk_FUN_00ec5080(&uStack_48,param_2);
  uStack_4c = param_3;
  thunk_FUN_00ec5080(&uStack_4c,param_3);
  uStack_44 = param_4;
  thunk_FUN_00ec5080(&uStack_44,param_4);
  uStack_50 = param_5;
  thunk_FUN_00ec5080(&uStack_50,param_5);
  uStack_58 = 0xffffffff;
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start_LevelManager__LoadRemoteLevelsAsync_d__49_object___13eb7e8
            ((uint)&uStack_58 | 4,&uStack_58,*(undefined4 *)(*(int *)(param_6 + 0x1c) + 8));
  return 0;
}

