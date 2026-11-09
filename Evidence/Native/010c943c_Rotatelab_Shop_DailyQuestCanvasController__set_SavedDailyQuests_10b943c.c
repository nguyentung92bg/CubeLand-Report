/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$set_SavedDailyQuests
void Rotatelab_Shop_DailyQuestCanvasController__set_SavedDailyQuests (System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$set_SavedDailyQuests
   void Rotatelab_Shop_DailyQuestCanvasController__set_SavedDailyQuests (System_String_o* value,
   const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestCanvasController__set_SavedDailyQuests_10b943c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  char *pcVar4;
  undefined4 unaff_lr;
  
  pcVar4 = (char *)(_UNK_010c9488 + 0x10c9450);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c948c + 0x10c9464));
    *pcVar4 = '\x01';
    param_4 = extraout_r3;
  }
  iVar1 = UnityEngine_PlayerPrefs__TrySetSetString_35f67d0
                    (**(undefined4 **)(_UNK_010c9490 + 0x10c9480),param_1,0,param_4,unaff_r4,
                     unaff_lr);
  if (iVar1 != 0) {
    return;
  }
  thunk_FUN_00f23fd0(*(undefined4 *)(iRam036070b8 + 0x360707c));
  uVar2 = thunk_FUN_00f00cdc();
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam036070bc + 0x3607090));
  UnityEngine_PlayerPrefsException___ctor_35f62e8(uVar2,uVar3);
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam036070c0 + 0x36070a8));
  FUN_01f4fe28(uVar2,uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

