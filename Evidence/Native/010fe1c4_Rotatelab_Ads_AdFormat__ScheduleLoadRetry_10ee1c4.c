/* IL2CPP: Rotatelab.Ads.AdFormat$$ScheduleLoadRetry
void Rotatelab_Ads_AdFormat__ScheduleLoadRetry (Rotatelab_Ads_AdFormat_o* __this, System_String_o* adUnitId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdFormat$$ScheduleLoadRetry
   void Rotatelab_Ads_AdFormat__ScheduleLoadRetry (Rotatelab_Ads_AdFormat_o* __this,
   System_String_o* adUnitId, const MethodInfo* method); */

void Rotatelab_Ads_AdFormat__ScheduleLoadRetry_10ee1c4(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_010fe25c + 0x10fe1d8);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fe260 + 0x10fe1ec));
    *pcVar7 = '\x01';
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010fe264 + 0x10fe200));
  iVar5 = *(int *)(param_1 + 0x20);
  if (5 < iVar5) {
    iVar5 = 6;
  }
  uVar4 = ldexpf(0x3f800000,iVar5);
  uVar4 = Rotatelab_Ads_AdFormat___ScheduleLoadRetry_g__RetryCoroutine_43_0_10ee268(param_1,uVar4);
  if (iVar3 != 0) {
    uVar4 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(iVar3,uVar4,0);
    puVar6 = (undefined4 *)(param_1 + 0x28);
    *puVar6 = uVar4;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar6 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar6 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

