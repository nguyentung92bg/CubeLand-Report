/* IL2CPP: Rotatelab.Save.SaveManager$$HasKey
bool Rotatelab_Save_SaveManager__HasKey (System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SaveManager$$HasKey
   bool Rotatelab_Save_SaveManager__HasKey (System_String_o* key, const MethodInfo* method); */

undefined4 Rotatelab_Save_SaveManager__HasKey_1082f48(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  code *pcVar2;
  char *pcVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar1 = 0;
  pcVar3 = (char *)(_UNK_0360767c + 0x36074d8);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03607680 + 0x36074ec),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03607684 + 0x36074f8));
    *pcVar3 = '\x01';
    uVar1 = extraout_r1;
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
    pcVar3 = (char *)(_UNK_03607688 + 0x3607534);
    if (*pcVar3 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360768c + 0x3607548),uVar1);
      *pcVar3 = '\x01';
    }
    uStack_20 = System_String__GetRawStringData_2a07d18(param_1,0);
    uStack_1c = *(undefined4 *)(param_1 + 8);
    uVar1 = System_ReadOnlySpan_char___GetPinnableReference_1a0c144
                      (&uStack_20,**(undefined4 **)(_UNK_03607690 + 0x3607568));
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_28,uVar1,uStack_1c,0);
  }
  pcVar2 = *(code **)(_UNK_03607694 + 0x36075f0);
  if (pcVar2 == (code *)0x0) {
    pcVar2 = (code *)thunk_FUN_00ec3774(_UNK_03607698 + 0x3607600);
    *(code **)(_UNK_0360769c + 0x3607610) = pcVar2;
  }
  uVar1 = (*pcVar2)(&uStack_28);
  return uVar1;
}

