/* IL2CPP: Rotatelab.Save.SaveManager$$SetDateTime
void Rotatelab_Save_SaveManager__SetDateTime (System_String_o* key, System_DateTime_o value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SaveManager$$SetDateTime
   void Rotatelab_Save_SaveManager__SetDateTime (System_String_o* key, System_DateTime_o value,
   const MethodInfo* method); */

void Rotatelab_Save_SaveManager__SetDateTime_1082d2c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01092df8 + 0x1092d48);
  uStack_18 = param_3;
  uStack_14 = param_4;
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01092dfc + 0x1092d60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01092e00 + 0x1092d6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01092e04 + 0x1092d78));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01092e08 + 0x1092d8c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
  if (*(int *)(**(int **)(_UNK_01092e0c + 0x1092db4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = System_DateTime__ToString_2b4b634
                    (&uStack_18,**(undefined4 **)(_UNK_01092e10 + 0x1092dd8),uVar1,0);
  UnityEngine_PlayerPrefs__SetString_35f7060(param_1,uVar1,0);
  return;
}

