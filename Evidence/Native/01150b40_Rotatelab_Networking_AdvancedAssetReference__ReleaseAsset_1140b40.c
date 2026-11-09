/* IL2CPP: Rotatelab.Networking.AdvancedAssetReference$$ReleaseAsset
void Rotatelab_Networking_AdvancedAssetReference__ReleaseAsset (Rotatelab_Networking_AdvancedAssetReference_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Networking.AdvancedAssetReference$$ReleaseAsset
   void Rotatelab_Networking_AdvancedAssetReference__ReleaseAsset
   (Rotatelab_Networking_AdvancedAssetReference_o* __this, const MethodInfo* method); */

void Rotatelab_Networking_AdvancedAssetReference__ReleaseAsset_1140b40(int param_1)

{
  int iVar1;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  uStack_18 = *(undefined8 *)(param_1 + 0x14);
  uStack_10 = *(undefined4 *)(param_1 + 0x1c);
  iVar1 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__IsValid_34bfcc0
                    (&uStack_18,0);
  if (iVar1 != 0) {
    UnityEngine_AddressableAssets_AssetReference__ReleaseAsset_3249ce4(param_1,0);
  }
  return;
}

