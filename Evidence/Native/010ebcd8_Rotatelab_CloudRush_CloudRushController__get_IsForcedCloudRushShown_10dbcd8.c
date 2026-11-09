/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$get_IsForcedCloudRushShown
bool Rotatelab_CloudRush_CloudRushController__get_IsForcedCloudRushShown (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$get_IsForcedCloudRushShown
   bool Rotatelab_CloudRush_CloudRushController__get_IsForcedCloudRushShown (const MethodInfo*
   method); */

bool Rotatelab_CloudRush_CloudRushController__get_IsForcedCloudRushShown_10dbcd8(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  char *pcVar2;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(_UNK_010ebd20 + 0x10ebce8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ebd24 + 0x10ebcfc));
    *pcVar2 = '\x01';
    in_r3 = extraout_r3;
  }
  iVar1 = UnityEngine_PlayerPrefs__GetInt_35f6b70
                    (**(undefined4 **)(_UNK_010ebd28 + 0x10ebd18),0,0,in_r3,unaff_r4,unaff_lr);
  return 0 < iVar1;
}

