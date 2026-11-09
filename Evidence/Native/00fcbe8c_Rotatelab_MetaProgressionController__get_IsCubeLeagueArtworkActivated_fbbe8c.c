/* IL2CPP: Rotatelab.MetaProgressionController$$get_IsCubeLeagueArtworkActivated
bool Rotatelab_MetaProgressionController__get_IsCubeLeagueArtworkActivated (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionController$$get_IsCubeLeagueArtworkActivated
   bool Rotatelab_MetaProgressionController__get_IsCubeLeagueArtworkActivated (const MethodInfo*
   method); */

bool Rotatelab_MetaProgressionController__get_IsCubeLeagueArtworkActivated_fbbe8c(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  char *pcVar2;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(_UNK_00fcbed4 + 0xfcbe9c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcbed8 + 0xfcbeb0));
    *pcVar2 = '\x01';
    in_r3 = extraout_r3;
  }
  iVar1 = UnityEngine_PlayerPrefs__GetInt_35f6b70
                    (**(undefined4 **)(_UNK_00fcbedc + 0xfcbecc),0,0,in_r3,unaff_r4,unaff_lr);
  return 0 < iVar1;
}

