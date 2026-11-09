/* IL2CPP: Rotatelab.Save.SavedInt$$.ctor
void Rotatelab_Save_SavedInt___ctor (Rotatelab_Save_SavedInt_o* __this, System_String_o* key, int32_t defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedInt$$.ctor
   void Rotatelab_Save_SavedInt___ctor (Rotatelab_Save_SavedInt_o* __this, System_String_o* key,
   int32_t defaultValue, const MethodInfo* method); */

void Rotatelab_Save_SavedInt___ctor_10796b8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar1;
  undefined4 unaff_lr;
  
  pcVar1 = (char *)(_UNK_01089710 + 0x10896d4);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01089714 + 0x10896e8));
    *pcVar1 = '\x01';
  }
  Rotatelab_Save_SavedValue___ctor_1082f7c
            (param_1,0,param_3,**(undefined4 **)(_UNK_01089718 + 0x1089704),unaff_r4,unaff_r5,
             unaff_r6,unaff_lr);
  *(undefined4 *)(param_1 + 8) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 8),param_2);
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}

