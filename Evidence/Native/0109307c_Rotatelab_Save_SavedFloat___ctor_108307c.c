/* IL2CPP: Rotatelab.Save.SavedFloat$$.ctor
void Rotatelab_Save_SavedFloat___ctor (Rotatelab_Save_SavedFloat_o* __this, System_String_o* key, float defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedFloat$$.ctor
   void Rotatelab_Save_SavedFloat___ctor (Rotatelab_Save_SavedFloat_o* __this, System_String_o* key,
   float defaultValue, const MethodInfo* method); */

void Rotatelab_Save_SavedFloat___ctor_108307c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar1;
  undefined4 unaff_lr;
  
  pcVar1 = (char *)(_UNK_010930d4 + 0x1093098);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010930d8 + 0x10930ac));
    *pcVar1 = '\x01';
  }
  Rotatelab_Save_SavedValue___ctor_1082f7c
            (param_1,0,param_3,**(undefined4 **)(_UNK_010930dc + 0x10930c8),unaff_r4,unaff_r5,
             unaff_r6,unaff_lr);
  *(undefined4 *)(param_1 + 8) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 8),param_2);
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}

