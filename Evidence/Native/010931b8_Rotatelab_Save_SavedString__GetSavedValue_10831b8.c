/* IL2CPP: Rotatelab.Save.SavedString$$GetSavedValue
System_String_o* Rotatelab_Save_SavedString__GetSavedValue (Rotatelab_Save_SavedString_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03607370) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedString$$GetSavedValue
   System_String_o* Rotatelab_Save_SavedString__GetSavedValue (Rotatelab_Save_SavedString_o* __this,
   const MethodInfo* method); */

undefined4 Rotatelab_Save_SavedString__GetSavedValue_10831b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  char *pcVar4;
  int iVar5;
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
  
  pcVar4 = (char *)(_UNK_01093214 + 0x10931cc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01093218 + 0x10931e0));
    *pcVar4 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 8);
  iVar1 = Rotatelab_Save_SavedValue_object___get_DefaultValue_1a8ba3c
                    (param_1,**(undefined4 **)(_UNK_0109321c + 0x10931f4));
  pcVar4 = (char *)(_UNK_036073e0 + 0x36070e0);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_036073e4 + 0x36070f4),iVar1,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_036073e8 + 0x3607100));
    *pcVar4 = '\x01';
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
  if (iVar5 == 0) {
    uStack_3c = 0;
    uStack_40 = 0;
  }
  else if (*(int *)(iVar5 + 8) == 0) {
    uVar2 = System_UIntPtr__op_Explicit_2bd42b0(1,0,0);
    uVar2 = System_UIntPtr__op_Explicit_2bd42dc(uVar2,0);
    uStack_24 = 0;
    uStack_28 = 0;
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_28,uVar2,0,0);
    uStack_3c = uStack_24;
    uStack_40 = uStack_28;
  }
  else {
    pcVar4 = (char *)(_UNK_036073ec + 0x3607180);
    if (*pcVar4 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_036073f0 + 0x3607194));
      *pcVar4 = '\x01';
    }
    uStack_30 = System_String__GetRawStringData_2a07d18(iVar5,0);
    uStack_2c = *(undefined4 *)(iVar5 + 8);
    uStack_34 = System_ReadOnlySpan_char___GetPinnableReference_1a0c144
                          (&uStack_30,**(undefined4 **)(_UNK_036073f4 + 0x36071b4));
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_40,uStack_34,uStack_2c,0);
  }
  if (iVar1 == 0) {
    uStack_58 = 0;
    uStack_54 = 0;
  }
  else if (*(int *)(iVar1 + 8) == 0) {
    uVar2 = System_UIntPtr__op_Explicit_2bd42b0(1,0,0);
    uVar2 = System_UIntPtr__op_Explicit_2bd42dc(uVar2,0);
    uStack_24 = 0;
    uStack_28 = 0;
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_28,uVar2,0,0);
    uStack_54 = uStack_24;
    uStack_58 = uStack_28;
  }
  else {
    pcVar4 = (char *)(_UNK_036073f8 + 0x3607254);
    if (*pcVar4 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_036073fc + 0x3607268));
      *pcVar4 = '\x01';
    }
    uStack_48 = System_String__GetRawStringData_2a07d18(iVar1,0);
    uStack_44 = *(undefined4 *)(iVar1 + 8);
    uStack_4c = System_ReadOnlySpan_char___GetPinnableReference_1a0c144
                          (&uStack_48,**(undefined4 **)(_UNK_03607400 + 0x3607288));
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_58,uStack_4c,uStack_44,0);
  }
  pcVar3 = *(code **)(_UNK_03607404 + 0x3607318);
  if (pcVar3 == (code *)0x0) {
    pcVar3 = (code *)thunk_FUN_00ec3774(_UNK_03607408 + 0x3607328);
    *(code **)(_UNK_0360740c + 0x3607338) = pcVar3;
  }
  (*pcVar3)(&uStack_40,&uStack_58,&uStack_60);
  uStack_34 = 0;
  uStack_4c = 0;
  uVar2 = UnityEngine_Bindings_OutStringMarshaller__GetStringAndDispose_361b96c
                    (uStack_60,uStack_5c,0);
  return uVar2;
}

