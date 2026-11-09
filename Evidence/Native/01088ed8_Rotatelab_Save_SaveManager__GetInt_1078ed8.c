/* IL2CPP: Rotatelab.Save.SaveManager$$GetInt
int32_t Rotatelab_Save_SaveManager__GetInt (System_String_o* key, int32_t defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SaveManager$$GetInt
   int32_t Rotatelab_Save_SaveManager__GetInt (System_String_o* key, int32_t defaultValue, const
   MethodInfo* method); */

undefined4 Rotatelab_Save_SaveManager__GetInt_1078ed8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  char *pcVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_03606d34 + 0x3606b8c);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03606d38 + 0x3606ba0),param_2,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03606d3c + 0x3606bac));
    *pcVar3 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  if (param_1 == 0) {
    uStack_24 = 0;
    uStack_28 = 0;
  }
  else if (*(int *)(param_1 + 8) == 0) {
    uVar1 = System_UIntPtr__op_Explicit_2bd42b0(1,0,0);
    uVar1 = System_UIntPtr__op_Explicit_2bd42dc(uVar1,0);
    uStack_14 = 0;
    uStack_18 = 0;
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_18,uVar1,0,0);
    uStack_28 = uStack_18;
    uStack_24 = uStack_14;
  }
  else {
    pcVar3 = (char *)(_UNK_03606d40 + 0x3606be8);
    if (*pcVar3 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03606d44 + 0x3606bfc));
      *pcVar3 = '\x01';
    }
    uStack_20 = System_String__GetRawStringData_2a07d18(param_1,0);
    uStack_1c = *(undefined4 *)(param_1 + 8);
    uVar1 = System_ReadOnlySpan_char___GetPinnableReference_1a0c144
                      (&uStack_20,**(undefined4 **)(_UNK_03606d48 + 0x3606c1c));
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_28,uVar1,uStack_1c,0);
  }
  pcVar2 = *(code **)(_UNK_03606d4c + 0x3606ca4);
  if (pcVar2 == (code *)0x0) {
    pcVar2 = (code *)thunk_FUN_00ec3774(_UNK_03606d50 + 0x3606cb4);
    *(code **)(_UNK_03606d54 + 0x3606cc4) = pcVar2;
  }
  uVar1 = (*pcVar2)(&uStack_28,param_2);
  return uVar1;
}

