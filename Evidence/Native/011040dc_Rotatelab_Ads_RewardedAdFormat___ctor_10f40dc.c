/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$.ctor
void Rotatelab_Ads_RewardedAdFormat___ctor (Rotatelab_Ads_RewardedAdFormat_o* __this, System_String_o* adUnitId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$.ctor
   void Rotatelab_Ads_RewardedAdFormat___ctor (Rotatelab_Ads_RewardedAdFormat_o* __this,
   System_String_o* adUnitId, const MethodInfo* method); */

void Rotatelab_Ads_RewardedAdFormat___ctor_10f40dc(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_011043a4 + 0x11040f4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011043a8 + 0x1104108));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011043ac + 0x1104114));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011043b0 + 0x1104120));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011043b4 + 0x110412c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011043b8 + 0x1104138));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011043bc + 0x1104144));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011043c0 + 0x1104150));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011043c4 + 0x110415c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011043c8 + 0x1104168));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011043cc + 0x1104174));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011043d0 + 0x1104180));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011043d4 + 0x110418c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011043d8 + 0x1104198));
    *pcVar6 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x58) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x5c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x2c) = 0xff800000;
  System_Object___ctor_2bb93bc(param_1,0);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x14),param_2);
  puVar7 = *(undefined4 **)(_UNK_011043dc + 0x11041e4);
  uVar3 = thunk_FUN_00f00cdc(*puVar7);
  System_Action_object__object____ctor_1f18fcc
            (uVar3,param_1,**(undefined4 **)(_UNK_011043e0 + 0x1104200),0);
  MaxSdkCallbacks_Rewarded__add_OnAdLoadedEvent_29b7c8c(uVar3,0);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011043e4 + 0x1104220));
  System_Action_object__object____ctor_1f18fcc
            (uVar3,param_1,**(undefined4 **)(_UNK_011043e8 + 0x110423c),0);
  MaxSdkCallbacks_Rewarded__add_OnAdLoadFailedEvent_29b7edc(uVar3,0);
  uVar3 = thunk_FUN_00f00cdc(*puVar7);
  System_Action_object__object____ctor_1f18fcc
            (uVar3,param_1,**(undefined4 **)(_UNK_011043ec + 0x1104270),0);
  MaxSdkCallbacks_Rewarded__add_OnAdClickedEvent_29b856c(uVar3,0);
  uVar3 = thunk_FUN_00f00cdc(*puVar7);
  System_Action_object__object____ctor_1f18fcc
            (uVar3,param_1,**(undefined4 **)(_UNK_011043f0 + 0x11042a4),0);
  MaxSdkCallbacks_Rewarded__add_OnAdDisplayedEvent_29b810c(uVar3,0);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011043f4 + 0x11042c4));
  System_Action_object__object__object____ctor_1f1af9c
            (uVar3,param_1,**(undefined4 **)(_UNK_011043f8 + 0x11042e0),0);
  MaxSdkCallbacks_Rewarded__add_OnAdDisplayFailedEvent_29b833c(uVar3,0);
  uVar3 = thunk_FUN_00f00cdc(*puVar7);
  System_Action_object__object____ctor_1f18fcc
            (uVar3,param_1,**(undefined4 **)(_UNK_011043fc + 0x1104314),0);
  MaxSdkCallbacks_Rewarded__add_OnAdHiddenEvent_29b8e2c(uVar3,0);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01104400 + 0x1104334));
  System_Action_object__MaxSdkBase_Reward__object____ctor_1f1b0f4
            (uVar3,param_1,**(undefined4 **)(_UNK_01104404 + 0x1104350),0);
  MaxSdkCallbacks_Rewarded__add_OnAdReceivedRewardEvent_29b8bfc(uVar3,0);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01104408 + 0x1104370));
  System_Action_object__object__object____ctor_1f1af9c
            (uVar3,param_1,**(undefined4 **)(_UNK_0110440c + 0x110438c),0);
  pcVar6 = (char *)(_UNK_029c8acc + 0x29c89e0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c8ad0 + 0x29c89f4),0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c8ad4 + 0x29c8a00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c8ad8 + 0x29c8a0c));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_029c8adc + 0x29c8a2c);
  iVar4 = System_Delegate__Combine_2bbca94(*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x18),uVar3,0)
  ;
  if (iVar4 == 0) {
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0x18);
    *piVar8 = 0;
  }
  else {
    puVar7 = *(undefined4 **)(_UNK_029c8ae0 + 0x29c8a50);
    uVar3 = *puVar7;
    iVar5 = thunk_FUN_00f00bc8(iVar4,uVar3);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(iVar4,uVar3);
    }
    uVar3 = *puVar7;
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0x18);
    *piVar8 = iVar5;
    iVar5 = thunk_FUN_00f00bc8(iVar4,uVar3);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(iVar4,uVar3);
    }
  }
  if (*(int *)(_UNK_00f30580 + 0xf30540) == 0) {
    return;
  }
  puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar8 >> 0x11) * 4 + 0xf547cc);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = *puVar2 | 1 << (((uint)piVar8 & 0x1ffff) >> 0xc);
  return;
}

