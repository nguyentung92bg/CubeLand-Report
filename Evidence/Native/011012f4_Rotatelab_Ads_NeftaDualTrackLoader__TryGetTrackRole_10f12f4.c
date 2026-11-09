/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$TryGetTrackRole
bool Rotatelab_Ads_NeftaDualTrackLoader__TryGetTrackRole (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, System_String_o* adUnitId, System_String_o** role, bool* isFloored, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$TryGetTrackRole
   bool Rotatelab_Ads_NeftaDualTrackLoader__TryGetTrackRole (Rotatelab_Ads_NeftaDualTrackLoader_o*
   __this, System_String_o* adUnitId, System_String_o** role, bool* isFloored, const MethodInfo*
   method); */

undefined4
Rotatelab_Ads_NeftaDualTrackLoader__TryGetTrackRole_10f12f4
          (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iStack_1c;
  
  uVar3 = 0;
  iStack_1c = 0;
  uVar1 = Rotatelab_Ads_NeftaDualTrackLoader__TryGetTrack_10f2ad0(param_1,param_2,&iStack_1c);
  uVar2 = 0;
  if (iStack_1c != 0) {
    uVar2 = *(undefined4 *)(iStack_1c + 0xc);
  }
  *param_3 = uVar2;
  thunk_FUN_00ec5080(param_3);
  if (iStack_1c != 0) {
    uVar3 = *(undefined1 *)(iStack_1c + 0x10);
  }
  *param_4 = uVar3;
  return uVar1;
}

