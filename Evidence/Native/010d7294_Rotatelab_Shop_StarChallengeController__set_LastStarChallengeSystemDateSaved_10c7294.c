/* IL2CPP: Rotatelab.Shop.StarChallengeController$$set_LastStarChallengeSystemDateSaved
void Rotatelab_Shop_StarChallengeController__set_LastStarChallengeSystemDateSaved (Rotatelab_Shop_StarChallengeController_o* __this, System_DateTime_o value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$set_LastStarChallengeSystemDateSaved
   void Rotatelab_Shop_StarChallengeController__set_LastStarChallengeSystemDateSaved
   (Rotatelab_Shop_StarChallengeController_o* __this, System_DateTime_o value, const MethodInfo*
   method); */

void Rotatelab_Shop_StarChallengeController__set_LastStarChallengeSystemDateSaved_10c7294
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pcVar2 = (char *)(_UNK_010d7370 + 0x10d72ac);
  uStack_10 = param_3;
  uStack_c = param_4;
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d7374 + 0x10d72c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d7378 + 0x10d72d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d737c + 0x10d72dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d7380 + 0x10d72e8));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010d7384 + 0x10d72fc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
  if (*(int *)(**(int **)(_UNK_010d7388 + 0x10d7324) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = System_DateTime__ToString_2b4b634
                    (&uStack_10,**(undefined4 **)(_UNK_010d738c + 0x10d7348),uVar1,0);
  Rotatelab_Save_SaveManager__SetString_10791b8
            (**(undefined4 **)(_UNK_010d7390 + 0x10d7364),uVar1,0);
  return;
}

