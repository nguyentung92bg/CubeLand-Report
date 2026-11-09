/* IL2CPP: Rotatelab.Utilities$$Postfix
System_String_o* Rotatelab_Utilities__Postfix (int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Utilities$$Postfix
   System_String_o* Rotatelab_Utilities__Postfix (int32_t index, const MethodInfo* method); */

undefined4 Rotatelab_Utilities__Postfix_107df08(uint param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0108df84 + 0x108df1c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108df88 + 0x108df30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108df8c + 0x108df3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108df90 + 0x108df48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108df94 + 0x108df54));
    *pcVar2 = '\x01';
  }
  if (param_1 < 3) {
    puVar1 = *(undefined4 **)(_UNK_0108df9c + 0x108df70 + param_1 * 4);
  }
  else {
    puVar1 = *(undefined4 **)(_UNK_0108df98 + 0x108df80);
  }
  return *puVar1;
}

