/* IL2CPP: Rotatelab.Networking.AdvancedAssetReference$$<>n__0<object>
UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_TObject__o Rotatelab_Networking_AdvancedAssetReference____n__0_object_ (Rotatelab_Networking_AdvancedAssetReference_o* __this, const MethodInfo_13A5274* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Networking.AdvancedAssetReference$$<>n__0<object>
   UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_TObject__o
   Rotatelab_Networking_AdvancedAssetReference____n__0_object_
   (Rotatelab_Networking_AdvancedAssetReference_o* __this, const MethodInfo_13A5274* method); */

void Rotatelab_Networking_AdvancedAssetReference____n__0_object__13a5274
               (undefined8 *param_1,int param_2,int param_3)

{
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  if (*(int *)(param_3 + 0x1c) == 0) {
    FUN_00efd7c4(param_3);
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_AddressableAssets_AssetReference__LoadAssetAsync_object__13dd200
            (&uStack_20,param_2,**(undefined4 **)(param_3 + 0x1c));
  *(undefined4 *)(param_1 + 1) = uStack_18;
  *param_1 = uStack_20;
  return;
}

