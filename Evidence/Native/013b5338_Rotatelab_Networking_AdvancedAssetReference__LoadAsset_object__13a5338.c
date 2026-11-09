/* IL2CPP: Rotatelab.Networking.AdvancedAssetReference$$LoadAsset<object>
Il2CppObject* Rotatelab_Networking_AdvancedAssetReference__LoadAsset_object_ (Rotatelab_Networking_AdvancedAssetReference_o* __this, const MethodInfo_13A5338* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Networking.AdvancedAssetReference$$LoadAsset<object>
   Il2CppObject* Rotatelab_Networking_AdvancedAssetReference__LoadAsset_object_
   (Rotatelab_Networking_AdvancedAssetReference_o* __this, const MethodInfo_13A5338* method); */

void Rotatelab_Networking_AdvancedAssetReference__LoadAsset_object__13a5338(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_2c [12];
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  if (*(int *)(param_2 + 0x1c) == 0) {
    FUN_00efd7c4(param_2);
  }
  uStack_20 = 0;
  uStack_18 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_18 = *(undefined4 *)(param_1 + 0x1c);
  uStack_20 = *(undefined8 *)(param_1 + 0x14);
  iVar1 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__IsValid_34bfcc0
                    (&uStack_20,0);
  if (iVar1 == 0) {
    UnityEngine_AddressableAssets_AssetReference__LoadAssetAsync_object__13dd200
              (auStack_2c,param_1,**(undefined4 **)(param_2 + 0x1c));
  }
  uStack_18 = *(undefined4 *)(param_1 + 0x1c);
  uStack_20 = *(undefined8 *)(param_1 + 0x14);
  uVar2 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__WaitForCompletion_34c0744
                    (&uStack_20,0);
  iVar1 = *(int *)(*(int *)(param_2 + 0x1c) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768(iVar1);
  }
  thunk_FUN_00f00bc8(uVar2,iVar1);
  return;
}

