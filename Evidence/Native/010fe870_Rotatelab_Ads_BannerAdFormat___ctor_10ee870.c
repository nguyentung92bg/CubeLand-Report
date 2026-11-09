/* IL2CPP: Rotatelab.Ads.BannerAdFormat$$.ctor
void Rotatelab_Ads_BannerAdFormat___ctor (Rotatelab_Ads_BannerAdFormat_o* __this, System_String_o* adUnitId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.BannerAdFormat$$.ctor
   void Rotatelab_Ads_BannerAdFormat___ctor (Rotatelab_Ads_BannerAdFormat_o* __this,
   System_String_o* adUnitId, const MethodInfo* method); */

void Rotatelab_Ads_BannerAdFormat___ctor_10ee870(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  pcVar4 = (char *)(_UNK_010feb8c + 0x10fe888);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010feb90 + 0x10fe89c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010feb94 + 0x10fe8a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010feb98 + 0x10fe8b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010feb9c + 0x10fe8c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010feba0 + 0x10fe8cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010feba4 + 0x10fe8d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010feba8 + 0x10fe8e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010febac + 0x10fe8f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010febb0 + 0x10fe8fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010febb4 + 0x10fe908));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010febb8 + 0x10fe914));
    *pcVar4 = '\x01';
  }
  param_1[0xb] = -0x800000;
  System_Object___ctor_2bb93bc(param_1,0);
  param_1[5] = param_2;
  thunk_FUN_00ec5080(param_1 + 5,param_2);
  puVar5 = *(undefined4 **)(_UNK_010febbc + 0x10fe950);
  uVar1 = thunk_FUN_00f00cdc(*puVar5);
  System_Action_object__object____ctor_1f18fcc
            (uVar1,param_1,**(undefined4 **)(_UNK_010febc0 + 0x10fe96c),0);
  MaxSdkCallbacks_Banner__add_OnAdLoadedEvent_29b905c(uVar1,0);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010febc4 + 0x10fe98c));
  System_Action_object__object____ctor_1f18fcc
            (uVar1,param_1,**(undefined4 **)(_UNK_010febc8 + 0x10fe9a8),0);
  MaxSdkCallbacks_Banner__add_OnAdLoadFailedEvent_29b92ac(uVar1,0);
  uVar1 = thunk_FUN_00f00cdc(*puVar5);
  System_Action_object__object____ctor_1f18fcc
            (uVar1,param_1,**(undefined4 **)(_UNK_010febcc + 0x10fe9dc),0);
  MaxSdkCallbacks_Banner__add_OnAdClickedEvent_29b94dc(uVar1,0);
  uVar1 = thunk_FUN_00f00cdc(*puVar5);
  System_Action_object__object____ctor_1f18fcc
            (uVar1,param_1,**(undefined4 **)(_UNK_010febd0 + 0x10fea10),0);
  MaxSdkCallbacks_Banner__add_OnAdCollapsedEvent_29b9b6c(uVar1,0);
  uVar1 = thunk_FUN_00f00cdc(*puVar5);
  System_Action_object__object____ctor_1f18fcc
            (uVar1,param_1,**(undefined4 **)(_UNK_010febd4 + 0x10fea44),0);
  MaxSdkCallbacks_Banner__add_OnAdExpandedEvent_29b993c(uVar1,0);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010febd8 + 0x10fea64));
  MaxSdkBase_AdViewConfiguration___ctor_29b3828(uVar1,7,0);
  piVar6 = *(int **)(_UNK_010febdc + 0x10fea84);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  MaxSdkAndroid__CreateBanner_29afbd0(param_2,uVar1,0);
  puVar5 = *(undefined4 **)(_UNK_010febe0 + 0x10feab0);
  iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar5);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (0.0 < *(float *)(iVar2 + 0x44)) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    MaxSdkAndroid__StopBannerAutoRefresh_29b03f0(param_2,0);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010febe4 + 0x10feb00));
    iVar3 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar5);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = Rotatelab_Ads_BannerAdFormat__RefreshBannerRegularlyCoroutine_10eebe8
                      (param_1,*(undefined4 *)(iVar3 + 0x44));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_MonoBehaviour__StartCoroutine_36042a4(iVar2,uVar1,0);
  }
  iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar5);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(iVar2 + 0x42) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x010feb84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf8))(param_1,*(undefined4 *)(*param_1 + 0xfc));
    return;
  }
  return;
}

