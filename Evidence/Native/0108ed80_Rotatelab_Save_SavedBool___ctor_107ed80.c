/* IL2CPP: Rotatelab.Save.SavedBool$$.ctor
void Rotatelab_Save_SavedBool___ctor (Rotatelab_Save_SavedBool_o* __this, System_String_o* key, bool defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedBool$$.ctor
   void Rotatelab_Save_SavedBool___ctor (Rotatelab_Save_SavedBool_o* __this, System_String_o* key,
   bool defaultValue, const MethodInfo* method); */

void Rotatelab_Save_SavedBool___ctor_107ed80(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar1;
  undefined4 unaff_lr;
  
  pcVar1 = (char *)(_UNK_0108edd8 + 0x108ed9c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108eddc + 0x108edb0));
    *pcVar1 = '\x01';
  }
  Rotatelab_Save_SavedValue___ctor_1082f7c
            (param_1,0,param_3,**(undefined4 **)(_UNK_0108ede0 + 0x108edcc),unaff_r4,unaff_r5,
             unaff_r6,unaff_lr);
  *(undefined4 *)(param_1 + 8) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 8),param_2);
  *(char *)(param_1 + 0xc) = (char)param_3;
  return;
}

