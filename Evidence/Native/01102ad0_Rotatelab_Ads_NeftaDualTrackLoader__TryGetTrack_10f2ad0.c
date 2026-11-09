/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$TryGetTrack
bool Rotatelab_Ads_NeftaDualTrackLoader__TryGetTrack (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, System_String_o* adUnitId, Rotatelab_Ads_NeftaDualTrackLoader_Track_o** track, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$TryGetTrack
   bool Rotatelab_Ads_NeftaDualTrackLoader__TryGetTrack (Rotatelab_Ads_NeftaDualTrackLoader_o*
   __this, System_String_o* adUnitId, Rotatelab_Ads_NeftaDualTrackLoader_Track_o** track, const
   MethodInfo* method); */

bool Rotatelab_Ads_NeftaDualTrackLoader__TryGetTrack_10f2ad0
               (int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01102bd0 + 0x1102aec);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01102bd4 + 0x1102b00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01102bd8 + 0x1102b0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01102bdc + 0x1102b18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01102be0 + 0x1102b24));
    *pcVar4 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01102be4 + 0x1102b38));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 8) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 8),param_2);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01102be8 + 0x1102b74));
  System_Predicate_object____ctor_1876380
            (uVar2,iVar1,**(undefined4 **)(_UNK_01102bec + 0x1102b90),0);
  iVar1 = System_Array__Find_object__163bca0
                    (uVar3,uVar2,**(undefined4 **)(_UNK_01102bf0 + 0x1102ba8));
  *param_3 = iVar1;
  thunk_FUN_00ec5080(param_3,iVar1);
  return *param_3 != 0;
}

