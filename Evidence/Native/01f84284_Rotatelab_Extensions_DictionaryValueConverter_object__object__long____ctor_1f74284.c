/* IL2CPP: Rotatelab.Extensions.DictionaryValueConverter<object, object, long>$$.ctor
void Rotatelab_Extensions_DictionaryValueConverter_object__object__long____ctor (Rotatelab_Extensions_DictionaryValueConverter_TKey__TInputValue__TOutputValue__o* __this, Il2CppObject* object, intptr_t method, const MethodInfo_1F74284* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions.DictionaryValueConverter<object, object, long>$$.ctor
   void Rotatelab_Extensions_DictionaryValueConverter_object__object__long____ctor
   (Rotatelab_Extensions_DictionaryValueConverter_TKey__TInputValue__TOutputValue__o* __this,
   Il2CppObject* object, intptr_t method, const MethodInfo_1F74284* method); */

void Rotatelab_Extensions_DictionaryValueConverter_object__object__long____ctor_1f74284
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
    if (cVar1 != '\x01') {
      if (param_2 == 0) {
        uVar4 = thunk_FUN_00f08324(0,_UNK_01f843b0 + 0x1f84334);
        func_0x00ec3920(uVar4,0);
      }
      goto LAB_01f8433c;
    }
    if (*(char *)(param_1 + 0x38) == '\0') {
      iVar2 = _UNK_01f843ac + 0x1f8435c;
    }
    else {
      iVar2 = thunk_FUN_00f0f330(param_3);
      iVar3 = FUN_00ec3ea0(param_3);
      if (iVar2 == 0) {
        if (iVar3 == 0) {
          iVar2 = _UNK_01f843a8 + 0x1f84388;
        }
        else {
          iVar2 = _UNK_01f843a4 + 0x1f84370;
        }
      }
      else if (iVar3 == 0) {
        iVar2 = _UNK_01f843a0 + 0x1f8437c;
      }
      else {
        iVar2 = _UNK_01f8439c + 0x1f8431c;
      }
    }
  }
  else {
    if (cVar1 != '\x02') {
LAB_01f8433c:
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x10);
      goto LAB_01f84388;
    }
    iVar2 = _UNK_01f84398 + 0x1f842d8;
  }
  *(int *)(param_1 + 0xc) = iVar2;
LAB_01f84388:
  *(int *)(param_1 + 0x1c) = _UNK_01f843b4 + 0x1f84394;
  return;
}

