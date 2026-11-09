/* IL2CPP: Rotatelab.Extensions.DictionaryValueConverter<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.ctor
void Rotatelab_Extensions_DictionaryValueConverter___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor (Rotatelab_Extensions_DictionaryValueConverter_TKey__TInputValue__TOutputValue__o* __this, Il2CppObject* object, intptr_t method, const MethodInfo_1F74428* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions.DictionaryValueConverter<__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.ctor
   void 
   Rotatelab_Extensions_DictionaryValueConverter___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
   (Rotatelab_Extensions_DictionaryValueConverter_TKey__TInputValue__TOutputValue__o* __this,
   Il2CppObject* object, intptr_t method, const MethodInfo_1F74428* method); */

void Rotatelab_Extensions_DictionaryValueConverter___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_1f74428
               (int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 4);
  *(int *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0x14) = param_3;
  thunk_FUN_00ec5080();
  cVar1 = *(char *)(param_3 + 0x2e);
  *(int *)(param_1 + 0x20) = param_1;
  iVar2 = FUN_00ec38a0(param_3);
  if (iVar2 == 0) {
    if (cVar1 == '\x01') {
      if (*(char *)(param_1 + 0x38) == '\0') {
        iVar2 = _UNK_01f84558 + 0x1f84504;
      }
      else {
        iVar2 = thunk_FUN_00f0f330(param_3);
        iVar3 = FUN_00ec3ea0(param_3);
        if (iVar2 == 0) {
          if (iVar3 == 0) {
            iVar2 = _UNK_01f84554 + 0x1f84530;
          }
          else {
            iVar2 = _UNK_01f84550 + 0x1f84518;
          }
        }
        else if (iVar3 == 0) {
          iVar2 = _UNK_01f8454c + 0x1f84524;
        }
        else {
          iVar2 = _UNK_01f84548 + 0x1f844c0;
        }
      }
    }
    else {
      if (param_2 == 0) {
        uVar4 = thunk_FUN_00f08324(0,_UNK_01f8455c + 0x1f844e4);
        func_0x00ec3920(uVar4,0);
      }
      iVar2 = _UNK_01f84560 + 0x1f844f8;
    }
  }
  else if (cVar1 == '\x02') {
    iVar2 = _UNK_01f84540 + 0x1f8447c;
  }
  else {
    iVar2 = _UNK_01f84544 + 0x1f844cc;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  *(int *)(param_1 + 0x1c) = _UNK_01f84564 + 0x1f8453c;
  return;
}

