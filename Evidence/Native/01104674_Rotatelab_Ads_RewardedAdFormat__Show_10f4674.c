/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$Show
void Rotatelab_Ads_RewardedAdFormat__Show (Rotatelab_Ads_RewardedAdFormat_o* __this, Rotatelab_Ads_RewardedAdFormat_CustomReward_o customReward, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$Show
   void Rotatelab_Ads_RewardedAdFormat__Show (Rotatelab_Ads_RewardedAdFormat_o* __this,
   Rotatelab_Ads_RewardedAdFormat_CustomReward_o customReward, const MethodInfo* method); */

void Rotatelab_Ads_RewardedAdFormat__Show_10f4674
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  pcVar2 = (char *)(_UNK_01104728 + 0x1104694);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110472c + 0x11046ac));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_Ads_RewardedAdFormat__IsAdReady_10f4734(param_1);
  if (iVar1 != 0) {
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_20 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_28 = 0;
    System_Nullable_RewardedAdFormat_CustomReward____ctor_17e3734
              (&iStack_28,param_2,param_3,param_4,**(undefined4 **)(_UNK_01104730 + 0x11046e4));
    param_1[0x11] = iStack_28;
    param_1[0x12] = iStack_24;
    param_1[0x13] = iStack_20;
    param_1[0x14] = iStack_1c;
    thunk_FUN_00ec5080(param_1 + 0x13,0);
    (**(code **)(*param_1 + 0xf8))(param_1,*(undefined4 *)(*param_1 + 0xfc));
  }
  return;
}

