/* IL2CPP: Rotatelab.Ads.AdFormat$$set_ShownAdInfo
void Rotatelab_Ads_AdFormat__set_ShownAdInfo (Rotatelab_Ads_AdFormat_o* __this, MaxSdkBase_AdInfo_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdFormat$$set_ShownAdInfo
   void Rotatelab_Ads_AdFormat__set_ShownAdInfo (Rotatelab_Ads_AdFormat_o* __this,
   MaxSdkBase_AdInfo_o* value, const MethodInfo* method); */

void Rotatelab_Ads_AdFormat__set_ShownAdInfo_10edd88(int param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x1c);
  if (*piVar3 == param_2) {
    return;
  }
  *piVar3 = param_2;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar3 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

