/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$IsValidUnixTime
bool Rotatelab_Shop_SeasonalOfferButton__IsValidUnixTime (int64_t seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$IsValidUnixTime
   bool Rotatelab_Shop_SeasonalOfferButton__IsValidUnixTime (int64_t seconds, const MethodInfo*
   method); */

undefined8 Rotatelab_Shop_SeasonalOfferButton__IsValidUnixTime_10d07d8(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = param_2 - (uint)(param_1 == 0);
  bVar2 = 0xfff4417e < param_1 - 1U;
  return CONCAT44(uVar1 - (!bVar2 + 0x3a),(uint)(uVar1 < 0x3b && (uint)bVar2 <= uVar1 - 0x3a));
}

