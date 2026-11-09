/* IL2CPP: Rotatelab.RotateConstants$$set_LastOfferResetDate
void Rotatelab_RotateConstants__set_LastOfferResetDate (System_DateTime_o value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RotateConstants$$set_LastOfferResetDate
   void Rotatelab_RotateConstants__set_LastOfferResetDate (System_DateTime_o value, const
   MethodInfo* method); */

void Rotatelab_RotateConstants__set_LastOfferResetDate_10790b8
               (undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pcVar2 = (char *)(_UNK_01089194 + 0x10890d0);
  uStack_10 = param_1;
  uStack_c = param_2;
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01089198 + 0x10890e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108919c + 0x10890f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010891a0 + 0x1089100));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010891a4 + 0x108910c));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010891a8 + 0x1089120) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
  if (*(int *)(**(int **)(_UNK_010891ac + 0x1089148) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = System_DateTime__ToString_2b4b634
                    (&uStack_10,**(undefined4 **)(_UNK_010891b0 + 0x108916c),uVar1,0);
  UnityEngine_PlayerPrefs__SetString_35f7060(**(undefined4 **)(_UNK_010891b4 + 0x1089188),uVar1,0);
  return;
}

