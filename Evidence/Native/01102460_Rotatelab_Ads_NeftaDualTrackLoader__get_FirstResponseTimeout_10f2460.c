/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$get_FirstResponseTimeout
float Rotatelab_Ads_NeftaDualTrackLoader__get_FirstResponseTimeout (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$get_FirstResponseTimeout
   float Rotatelab_Ads_NeftaDualTrackLoader__get_FirstResponseTimeout
   (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Ads_NeftaDualTrackLoader__get_FirstResponseTimeout_10f2460(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_011024e8 + 0x1102474);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011024ec + 0x1102488));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_011024f0 + 0x110249c);
  iVar1 = *piVar4;
  if (*(int *)(param_1 + 0xc) == 2) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar4;
    }
    puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x18);
  }
  else {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar4;
    }
    puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x1c);
  }
  return *puVar2;
}

