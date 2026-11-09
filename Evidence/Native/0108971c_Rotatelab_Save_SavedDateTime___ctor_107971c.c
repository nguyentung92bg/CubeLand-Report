/* IL2CPP: Rotatelab.Save.SavedDateTime$$.ctor
void Rotatelab_Save_SavedDateTime___ctor (Rotatelab_Save_SavedDateTime_o* __this, System_String_o* key, System_DateTime_o defaultValue, bool useDateTimeNowAsDefault, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedDateTime$$.ctor
   void Rotatelab_Save_SavedDateTime___ctor (Rotatelab_Save_SavedDateTime_o* __this,
   System_String_o* key, System_DateTime_o defaultValue, bool useDateTimeNowAsDefault, const
   MethodInfo* method); */

void Rotatelab_Save_SavedDateTime___ctor_107971c
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined1 param_5)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01089790 + 0x108973c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01089794 + 0x1089758));
    *pcVar1 = '\x01';
  }
  Rotatelab_Save_SavedValue_DateTime____ctor_1a8b4e4
            (param_1,param_2,param_3,param_4,**(undefined4 **)(_UNK_01089798 + 0x1089778));
  *(undefined1 *)(param_1 + 0x30) = param_5;
  return;
}

