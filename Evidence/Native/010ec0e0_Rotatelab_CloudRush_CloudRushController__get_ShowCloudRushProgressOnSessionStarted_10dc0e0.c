/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$get_ShowCloudRushProgressOnSessionStarted
bool Rotatelab_CloudRush_CloudRushController__get_ShowCloudRushProgressOnSessionStarted (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$get_ShowCloudRushProgressOnSessionStarted
   bool Rotatelab_CloudRush_CloudRushController__get_ShowCloudRushProgressOnSessionStarted
   (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method); */

bool Rotatelab_CloudRush_CloudRushController__get_ShowCloudRushProgressOnSessionStarted_10dc0e0
               (void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  char *pcVar2;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(_UNK_010ec128 + 0x10ec0f0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ec12c + 0x10ec104));
    *pcVar2 = '\x01';
    in_r3 = extraout_r3;
  }
  iVar1 = UnityEngine_PlayerPrefs__GetInt_35f6b70
                    (**(undefined4 **)(_UNK_010ec130 + 0x10ec120),0,0,in_r3,unaff_r4,unaff_lr);
  return 0 < iVar1;
}

