/* IL2CPP: Rotatelab.Save.SaveManager$$GetFloat
float Rotatelab_Save_SaveManager__GetFloat (System_String_o* key, float defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SaveManager$$GetFloat
   float Rotatelab_Save_SaveManager__GetFloat (System_String_o* key, float defaultValue, const
   MethodInfo* method); */

undefined4 Rotatelab_Save_SaveManager__GetFloat_1082d24(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  char *pcVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_03606fe8 + 0x3606e38);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03606fec + 0x3606e4c),param_2,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03606ff0 + 0x3606e58));
    *pcVar3 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  if (param_1 == 0) {
    uStack_2c = 0;
    uStack_30 = 0;
  }
  else if (*(int *)(param_1 + 8) == 0) {
    uVar1 = System_UIntPtr__op_Explicit_2bd42b0(1,0,0);
    uVar1 = System_UIntPtr__op_Explicit_2bd42dc(uVar1,0);
    uStack_1c = 0;
    uStack_20 = 0;
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_20,uVar1,0,0);
    uStack_30 = uStack_20;
    uStack_2c = uStack_1c;
  }
  else {
    pcVar3 = (char *)(_UNK_03606ff4 + 0x3606e94);
    if (*pcVar3 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03606ff8 + 0x3606ea8));
      *pcVar3 = '\x01';
    }
    uStack_28 = System_String__GetRawStringData_2a07d18(param_1,0);
    uStack_24 = *(undefined4 *)(param_1 + 8);
    uVar1 = System_ReadOnlySpan_char___GetPinnableReference_1a0c144
                      (&uStack_28,**(undefined4 **)(_UNK_03606ffc + 0x3606ec8));
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_30,uVar1,uStack_24,0);
  }
  pcVar2 = *(code **)(_UNK_03607000 + 0x3606f50);
  if (pcVar2 == (code *)0x0) {
    pcVar2 = (code *)thunk_FUN_00ec3774(_UNK_03607004 + 0x3606f60);
    *(code **)(_UNK_03607008 + 0x3606f70) = pcVar2;
  }
  uVar1 = (*pcVar2)(&uStack_30,param_2);
  return uVar1;
}

