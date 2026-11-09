/* IL2CPP: Rotatelab.Ads.RewardedAdFormat.CustomReward$$.ctor
void Rotatelab_Ads_RewardedAdFormat_CustomReward___ctor (Rotatelab_Ads_RewardedAdFormat_CustomReward_o __this, int32_t id, System_String_o* label, System_String_o* amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.RewardedAdFormat.CustomReward$$.ctor
   void Rotatelab_Ads_RewardedAdFormat_CustomReward___ctor
   (Rotatelab_Ads_RewardedAdFormat_CustomReward_o __this, int32_t id, System_String_o* label,
   System_String_o* amount, const MethodInfo* method); */

void Rotatelab_Ads_RewardedAdFormat_CustomReward___ctor_10f54d4
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint *puVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  thunk_FUN_00ec5080(param_1 + 1,param_3);
  param_1 = param_1 + 2;
  *param_1 = param_4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)param_1 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)param_1 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

