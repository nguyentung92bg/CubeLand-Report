/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$get_IsDailyQuestForcedShowed
bool Rotatelab_Shop_DailyQuestCanvasController__get_IsDailyQuestForcedShowed (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$get_IsDailyQuestForcedShowed
   bool Rotatelab_Shop_DailyQuestCanvasController__get_IsDailyQuestForcedShowed (const MethodInfo*
   method); */

bool Rotatelab_Shop_DailyQuestCanvasController__get_IsDailyQuestForcedShowed_10b9494(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  char *pcVar2;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(_UNK_010c94dc + 0x10c94a4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c94e0 + 0x10c94b8));
    *pcVar2 = '\x01';
    in_r3 = extraout_r3;
  }
  iVar1 = UnityEngine_PlayerPrefs__GetInt_35f6b70
                    (**(undefined4 **)(_UNK_010c94e4 + 0x10c94d4),0,0,in_r3,unaff_r4,unaff_lr);
  return 0 < iVar1;
}

