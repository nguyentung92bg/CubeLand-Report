/* IL2CPP: Rotatelab.Currency.UI.UIParticleAnimController$$OnSingleRewardAnimStartHandler
void Rotatelab_Currency_UI_UIParticleAnimController__OnSingleRewardAnimStartHandler (Rotatelab_Currency_UI_UIParticleAnimController_o* __this, UnityEngine_RectTransform_o* insRect, Rotatelab_Shop_RewardBase_o* rewardBase, int32_t targetPos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.UIParticleAnimController$$OnSingleRewardAnimStartHandler
   void Rotatelab_Currency_UI_UIParticleAnimController__OnSingleRewardAnimStartHandler
   (Rotatelab_Currency_UI_UIParticleAnimController_o* __this, UnityEngine_RectTransform_o* insRect,
   Rotatelab_Shop_RewardBase_o* rewardBase, int32_t targetPos, const MethodInfo* method); */

void Rotatelab_Currency_UI_UIParticleAnimController__OnSingleRewardAnimStartHandler_108b6e0
               (int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_0109b964 + 0x109b704);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109b968 + 0x109b718));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109b96c + 0x109b724));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109b970 + 0x109b730));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109b974 + 0x109b73c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109b978 + 0x109b748));
    *pcVar9 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109b97c + 0x109b75c));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar1 + 0x24) = param_1;
  thunk_FUN_00ec5080((int *)(iVar1 + 0x24),param_1);
  *(undefined4 *)(iVar1 + 0x28) = param_4;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_30,param_2,0);
  pcVar9 = (char *)(_UNK_0109b980 + 0x109b7bc);
  *(undefined8 *)(iVar1 + 8) = uStack_30;
  *(undefined4 *)(iVar1 + 0x10) = uStack_28;
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  uVar8 = *(undefined4 *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109b984 + 0x109b7f4));
    *pcVar9 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_0109b988 + 0x109b80c) + 0x5c);
  uVar10 = *puVar2;
  uVar13 = puVar2[1];
  uVar12 = puVar2[2];
  uVar11 = puVar2[3];
  uVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (*(int *)(**(int **)(_UNK_0109b98c + 0x109b838) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = UnityEngine_Object__Instantiate_object__14d51e0
                    (uVar7,uVar8,uVar6,uStack_28,uVar10,uVar13,uVar12,uVar11,uVar3,
                     **(undefined4 **)(_UNK_0109b990 + 0x109b85c));
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Shop_RewardInfo__SetUI_10d354c
            (iVar4,*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0xc),0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = System_Collections_Generic_List_object___get_Item_267d814
                    (*(int *)(param_1 + 0x10),*(undefined4 *)(iVar1 + 0x28),
                     **(undefined4 **)(_UNK_0109b994 + 0x109b8dc));
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_40,iVar5,0);
  *(undefined4 *)(iVar1 + 0x1c) = uStack_38;
  *(undefined8 *)(iVar1 + 0x14) = uStack_40;
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = UnityEngine_Component__GetComponent_object__143f3b0
                    (iVar4,**(undefined4 **)(_UNK_0109b998 + 0x109b92c));
  *(undefined4 *)(iVar1 + 0x20) = uVar6;
  thunk_FUN_00ec5080();
  uVar6 = Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass18_0___OnSingleRewardAnimStartHandler_g__MoveRewardUIElement_0_108b9a4
                    (iVar1);
  UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar6,0);
  return;
}

