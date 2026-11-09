/* IL2CPP: Rotatelab.Extensions.DictionaryValueConverter<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$EndInvoke
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Rotatelab_Extensions_DictionaryValueConverter___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___EndInvoke (Rotatelab_Extensions_DictionaryValueConverter_TKey__TInputValue__TOutputValue__o* __this, System_IAsyncResult_o* result, const MethodInfo_1F7464C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions.DictionaryValueConverter<__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$EndInvoke
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   Rotatelab_Extensions_DictionaryValueConverter___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___EndInvoke
   (Rotatelab_Extensions_DictionaryValueConverter_TKey__TInputValue__TOutputValue__o* __this,
   System_IAsyncResult_o* result, const MethodInfo_1F7464C* method); */

void Rotatelab_Extensions_DictionaryValueConverter___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___EndInvoke_1f7464c
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = **(int **)(_UNK_01f846fc + 0x1f8466c);
  uVar2 = thunk_FUN_00f1e360(param_2,0);
  iVar3 = func_0x00ec3ee4(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14));
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = FUN_00efd768(iVar3);
  }
  uVar4 = *(undefined4 *)(iVar3 + 0x84);
  uVar2 = func_0x00ec3948(uVar2);
  thunk_FUN_00f95db8(param_3,uVar2,uVar4);
  if (**(int **)(_UNK_01f84700 + 0x1f846e8) != iVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

