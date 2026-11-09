/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$get_CloudRushIsEntryRewardReady
bool Rotatelab_CloudRush_CloudRushController__get_CloudRushIsEntryRewardReady (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$get_CloudRushIsEntryRewardReady
   bool Rotatelab_CloudRush_CloudRushController__get_CloudRushIsEntryRewardReady
   (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method); */

bool Rotatelab_CloudRush_CloudRushController__get_CloudRushIsEntryRewardReady_10dc034(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  char *pcVar2;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(_UNK_010ec07c + 0x10ec044);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ec080 + 0x10ec058));
    *pcVar2 = '\x01';
    in_r3 = extraout_r3;
  }
  iVar1 = UnityEngine_PlayerPrefs__GetInt_35f6b70
                    (**(undefined4 **)(_UNK_010ec084 + 0x10ec074),1,0,in_r3,unaff_r4,unaff_lr);
  return 0 < iVar1;
}

