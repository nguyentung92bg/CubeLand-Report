/* IL2CPP: Rotatelab.Shop.StarChallengeController$$get_LastStarChallengeSystemDateSaved
System_DateTime_o Rotatelab_Shop_StarChallengeController__get_LastStarChallengeSystemDateSaved (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$get_LastStarChallengeSystemDateSaved
   System_DateTime_o Rotatelab_Shop_StarChallengeController__get_LastStarChallengeSystemDateSaved
   (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeController__get_LastStarChallengeSystemDateSaved_10c7150
               (undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_010d7270 + 0x10d7168);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d7274 + 0x10d717c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d7278 + 0x10d7188));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d727c + 0x10d7194));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d7280 + 0x10d71a0));
    *pcVar3 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  if (*(int *)(**(int **)(_UNK_010d7284 + 0x10d71b8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Now_2b4a124(&uStack_20,0);
  if (*(int *)(**(int **)(_UNK_010d7288 + 0x10d71ec) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
  puVar4 = *(undefined4 **)(_UNK_010d728c + 0x10d721c);
  uVar1 = System_DateTime__ToString_2b4b634(&uStack_20,*puVar4,uVar1,0);
  uVar1 = Rotatelab_Save_SaveManager__GetString_10790b0
                    (**(undefined4 **)(_UNK_010d7290 + 0x10d7234),uVar1,0);
  uVar2 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
  System_DateTime__ParseExact_2b4a968(&uStack_28,uVar1,*puVar4,uVar2,0);
  *param_1 = uStack_28;
  param_1[1] = uStack_24;
  return;
}

