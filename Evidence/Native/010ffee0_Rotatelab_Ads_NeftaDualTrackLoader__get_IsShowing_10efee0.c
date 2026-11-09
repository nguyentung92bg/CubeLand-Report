/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$get_IsShowing
bool Rotatelab_Ads_NeftaDualTrackLoader__get_IsShowing (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$get_IsShowing
   bool Rotatelab_Ads_NeftaDualTrackLoader__get_IsShowing (Rotatelab_Ads_NeftaDualTrackLoader_o*
   __this, const MethodInfo* method); */

bool Rotatelab_Ads_NeftaDualTrackLoader__get_IsShowing_10efee0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar5 = (char *)(_UNK_010fffe4 + 0x10ffef4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fffe8 + 0x10fff08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fffec + 0x10fff14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ffff0 + 0x10fff20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ffff4 + 0x10fff2c));
    *pcVar5 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010ffff8 + 0x10fff40);
  uVar4 = *(undefined4 *)(param_1 + 8);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar2[1];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar7 = *puVar2;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ffffc + 0x10fff8c));
    System_Predicate_object____ctor_1876380
              (iVar6,uVar7,**(undefined4 **)(_UNK_01100000 + 0x10fffac),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
    *piVar8 = iVar6;
    thunk_FUN_00ec5080(piVar8,iVar6);
  }
  iVar3 = **(int **)(_UNK_01100004 + 0x10fffd8);
  iVar1 = *(int *)(iVar3 + 0x1c);
  if (iVar1 == 0) {
    FUN_00efd7c4(iVar3);
    iVar1 = *(int *)(iVar3 + 0x1c);
  }
  iVar1 = System_Array__FindIndex_object__163c5c8(uVar4,iVar6,*(undefined4 *)(iVar1 + 8));
  return iVar1 != -1;
}

