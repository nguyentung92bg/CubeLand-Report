/* IL2CPP: Rotatelab.Networking.AdvancedAssetReference$$LoadAssetAsync<object>
Cysharp_Threading_Tasks_UniTask_T__o Rotatelab_Networking_AdvancedAssetReference__LoadAssetAsync_object_ (Rotatelab_Networking_AdvancedAssetReference_o* __this, const MethodInfo_13A5404* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Networking.AdvancedAssetReference$$LoadAssetAsync<object>
   Cysharp_Threading_Tasks_UniTask_T__o
   Rotatelab_Networking_AdvancedAssetReference__LoadAssetAsync_object_
   (Rotatelab_Networking_AdvancedAssetReference_o* __this, const MethodInfo_13A5404* method); */

void Rotatelab_Networking_AdvancedAssetReference__LoadAssetAsync_object__13a5404
               (undefined8 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(int *)(param_3 + 0x1c) == 0) {
    FUN_00efd7c4(param_3);
  }
  uStack_1c = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_24 = 0;
  thunk_FUN_00ec5080((uint)&uStack_30 | 4);
  uStack_20 = param_2;
  thunk_FUN_00ec5080(&uStack_20,param_2);
  uStack_30 = 0xffffffff;
  iVar2 = *(int *)(*(int *)(param_3 + 0x1c) + 0x10);
  iVar1 = *(int *)(iVar2 + 0x1c);
  if (iVar1 == 0) {
    FUN_00efd7c4(iVar2);
    iVar1 = *(int *)(iVar2 + 0x1c);
  }
  Rotatelab_Networking_AdvancedAssetReference__LoadAssetAsync_d__2_object___MoveNext_1795e48
            (&uStack_30,*(undefined4 *)(iVar1 + 8));
  func_0x010808ac(&uStack_40,(uint)&uStack_30 | 4,*(undefined4 *)(*(int *)(param_3 + 0x1c) + 0x18));
  *(undefined4 *)(param_1 + 1) = uStack_38;
  *param_1 = uStack_40;
  return;
}

