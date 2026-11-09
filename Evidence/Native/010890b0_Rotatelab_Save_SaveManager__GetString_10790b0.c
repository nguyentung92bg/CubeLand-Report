/* IL2CPP: Rotatelab.Save.SaveManager$$GetString
System_String_o* Rotatelab_Save_SaveManager__GetString (System_String_o* key, System_String_o* defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03607370) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SaveManager$$GetString
   System_String_o* Rotatelab_Save_SaveManager__GetString (System_String_o* key, System_String_o*
   defaultValue, const MethodInfo* method); */

undefined4 Rotatelab_Save_SaveManager__GetString_10790b0(int param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  char *pcVar3;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_036073e0 + 0x36070e0);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_036073e4 + 0x36070f4),param_2,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_036073e8 + 0x3607100));
    *pcVar3 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  if (param_1 == 0) {
    uStack_3c = 0;
    uStack_40 = 0;
  }
  else if (*(int *)(param_1 + 8) == 0) {
    uVar1 = System_UIntPtr__op_Explicit_2bd42b0(1,0,0);
    uVar1 = System_UIntPtr__op_Explicit_2bd42dc(uVar1,0);
    uStack_24 = 0;
    uStack_28 = 0;
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_28,uVar1,0,0);
    uStack_3c = uStack_24;
    uStack_40 = uStack_28;
  }
  else {
    pcVar3 = (char *)(_UNK_036073ec + 0x3607180);
    if (*pcVar3 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_036073f0 + 0x3607194));
      *pcVar3 = '\x01';
    }
    uStack_30 = System_String__GetRawStringData_2a07d18(param_1,0);
    uStack_2c = *(undefined4 *)(param_1 + 8);
    uStack_34 = System_ReadOnlySpan_char___GetPinnableReference_1a0c144
                          (&uStack_30,**(undefined4 **)(_UNK_036073f4 + 0x36071b4));
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_40,uStack_34,uStack_2c,0);
  }
  if (param_2 == 0) {
    uStack_58 = 0;
    uStack_54 = 0;
  }
  else if (*(int *)(param_2 + 8) == 0) {
    uVar1 = System_UIntPtr__op_Explicit_2bd42b0(1,0,0);
    uVar1 = System_UIntPtr__op_Explicit_2bd42dc(uVar1,0);
    uStack_24 = 0;
    uStack_28 = 0;
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_28,uVar1,0,0);
    uStack_54 = uStack_24;
    uStack_58 = uStack_28;
  }
  else {
    pcVar3 = (char *)(_UNK_036073f8 + 0x3607254);
    if (*pcVar3 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_036073fc + 0x3607268));
      *pcVar3 = '\x01';
    }
    uStack_48 = System_String__GetRawStringData_2a07d18(param_2,0);
    uStack_44 = *(undefined4 *)(param_2 + 8);
    uStack_4c = System_ReadOnlySpan_char___GetPinnableReference_1a0c144
                          (&uStack_48,**(undefined4 **)(_UNK_03607400 + 0x3607288));
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_58,uStack_4c,uStack_44,0);
  }
  pcVar2 = *(code **)(_UNK_03607404 + 0x3607318);
  if (pcVar2 == (code *)0x0) {
    pcVar2 = (code *)thunk_FUN_00ec3774(_UNK_03607408 + 0x3607328);
    *(code **)(_UNK_0360740c + 0x3607338) = pcVar2;
  }
  (*pcVar2)(&uStack_40,&uStack_58,&uStack_60);
  uStack_34 = 0;
  uStack_4c = 0;
  uVar1 = UnityEngine_Bindings_OutStringMarshaller__GetStringAndDispose_361b96c
                    (uStack_60,uStack_5c,0);
  return uVar1;
}

