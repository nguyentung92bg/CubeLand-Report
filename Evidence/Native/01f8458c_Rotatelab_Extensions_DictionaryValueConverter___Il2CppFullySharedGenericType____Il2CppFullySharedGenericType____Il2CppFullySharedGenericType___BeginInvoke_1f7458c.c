/* IL2CPP: Rotatelab.Extensions.DictionaryValueConverter<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$BeginInvoke
System_IAsyncResult_o* Rotatelab_Extensions_DictionaryValueConverter___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___BeginInvoke (Rotatelab_Extensions_DictionaryValueConverter_TKey__TInputValue__TOutputValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo_1F7458C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Extensions.DictionaryValueConverter<__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$BeginInvoke
   System_IAsyncResult_o*
   Rotatelab_Extensions_DictionaryValueConverter___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___BeginInvoke
   (Rotatelab_Extensions_DictionaryValueConverter_TKey__TInputValue__TOutputValue__o* __this,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, System_AsyncCallback_o* callback,
   Il2CppObject* object, const MethodInfo_1F7458C* method); */

void Rotatelab_Extensions_DictionaryValueConverter___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___BeginInvoke_1f7458c
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  iVar1 = func_0x00ec3ee4(**(undefined4 **)(*(int *)(param_1 + 0x14) + 0x18));
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  if (0x7fffffff < *(uint *)(iVar1 + 0x14)) {
    param_2 = FUN_00ec393c(iVar1,param_2);
  }
  uStack_28 = param_2;
  iVar1 = func_0x00ec3ee4(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x18) + 4));
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  if (0x7fffffff < *(uint *)(iVar1 + 0x14)) {
    param_3 = FUN_00ec393c(iVar1,param_3);
  }
  uStack_24 = param_3;
  thunk_FUN_00f1e2bc(param_1,&uStack_28,param_4,param_5);
  return;
}

