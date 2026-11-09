/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$TryReadHiroCache<object>
bool Rotatelab_Networking_CloudSaveManager__TryReadHiroCache_object_ (Rotatelab_Networking_CloudSaveManager_o* __this, System_String_o* key, Il2CppObject** value, const MethodInfo_143AB6C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$TryReadHiroCache<object>
   bool Rotatelab_Networking_CloudSaveManager__TryReadHiroCache_object_
   (Rotatelab_Networking_CloudSaveManager_o* __this, System_String_o* key, Il2CppObject** value,
   const MethodInfo_143AB6C* method); */

undefined4
Rotatelab_Networking_CloudSaveManager__TryReadHiroCache_object__143ab6c
          (undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_4 + 0x1c) == 0) {
    FUN_00efd7c4(param_4);
  }
  uVar1 = UnityEngine_PlayerPrefs__GetString_35f746c(param_2,0);
  iVar2 = System_String__IsNullOrWhiteSpace_2a0a85c(uVar1,0);
  if (iVar2 == 0) {
    iVar2 = Nakama_TinyJson_JsonParser__FromJson_object__14a855c
                      (uVar1,*(undefined4 *)(*(int *)(param_4 + 0x1c) + 8));
    *param_3 = iVar2;
    thunk_FUN_00ec5080(param_3);
    uVar1 = 0;
    if (*param_3 != 0) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
    *param_3 = 0;
  }
  return uVar1;
}

