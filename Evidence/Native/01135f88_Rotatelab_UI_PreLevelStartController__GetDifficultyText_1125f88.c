/* IL2CPP: Rotatelab.UI.PreLevelStartController$$GetDifficultyText
System_String_o* Rotatelab_UI_PreLevelStartController__GetDifficultyText (int32_t difficultyIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PreLevelStartController$$GetDifficultyText
   System_String_o* Rotatelab_UI_PreLevelStartController__GetDifficultyText (int32_t
   difficultyIndex, const MethodInfo* method); */

undefined4 Rotatelab_UI_PreLevelStartController__GetDifficultyText_1125f88(int param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01136004 + 0x1135f9c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136008 + 0x1135fb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113600c + 0x1135fbc));
    *pcVar2 = '\x01';
  }
  if (param_1 == 1) {
    puVar1 = *(undefined4 **)(_UNK_01136010 + 0x1135fec);
  }
  else if (param_1 == 2) {
    puVar1 = *(undefined4 **)(_UNK_01136018 + 0x1135fe0);
  }
  else {
    puVar1 = *(undefined4 **)(*(int *)(*(int *)(_UNK_01136014 + 0x1135ff8) + 0x48) + 0x5c);
  }
  return *puVar1;
}

