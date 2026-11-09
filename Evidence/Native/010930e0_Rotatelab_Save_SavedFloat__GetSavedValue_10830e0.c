/* IL2CPP: Rotatelab.Save.SavedFloat$$GetSavedValue
float Rotatelab_Save_SavedFloat__GetSavedValue (Rotatelab_Save_SavedFloat_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedFloat$$GetSavedValue
   float Rotatelab_Save_SavedFloat__GetSavedValue (Rotatelab_Save_SavedFloat_o* __this, const
   MethodInfo* method); */

undefined4 Rotatelab_Save_SavedFloat__GetSavedValue_10830e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_0109313c + 0x10930f4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01093140 + 0x1093108));
    *pcVar4 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 8);
  uVar1 = Rotatelab_Save_SavedValue_float___get_DefaultValue_1a8bd7c
                    (param_1,**(undefined4 **)(_UNK_01093144 + 0x109311c));
  pcVar4 = (char *)(_UNK_03606fe8 + 0x3606e38);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03606fec + 0x3606e4c),uVar1,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03606ff0 + 0x3606e58));
    *pcVar4 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  if (iVar5 == 0) {
    uStack_2c = 0;
    uStack_30 = 0;
  }
  else if (*(int *)(iVar5 + 8) == 0) {
    uVar2 = System_UIntPtr__op_Explicit_2bd42b0(1,0,0);
    uVar2 = System_UIntPtr__op_Explicit_2bd42dc(uVar2,0);
    uStack_1c = 0;
    uStack_20 = 0;
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_20,uVar2,0,0);
    uStack_30 = uStack_20;
    uStack_2c = uStack_1c;
  }
  else {
    pcVar4 = (char *)(_UNK_03606ff4 + 0x3606e94);
    if (*pcVar4 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03606ff8 + 0x3606ea8));
      *pcVar4 = '\x01';
    }
    uStack_28 = System_String__GetRawStringData_2a07d18(iVar5,0);
    uStack_24 = *(undefined4 *)(iVar5 + 8);
    uVar2 = System_ReadOnlySpan_char___GetPinnableReference_1a0c144
                      (&uStack_28,**(undefined4 **)(_UNK_03606ffc + 0x3606ec8));
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_30,uVar2,uStack_24,0);
  }
  pcVar3 = *(code **)(_UNK_03607000 + 0x3606f50);
  if (pcVar3 == (code *)0x0) {
    pcVar3 = (code *)thunk_FUN_00ec3774(_UNK_03607004 + 0x3606f60);
    *(code **)(_UNK_03607008 + 0x3606f70) = pcVar3;
  }
  uVar1 = (*pcVar3)(&uStack_30,uVar1);
  return uVar1;
}

