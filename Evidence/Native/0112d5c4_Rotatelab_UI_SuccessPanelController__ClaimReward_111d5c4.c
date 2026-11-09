/* IL2CPP: Rotatelab.UI.SuccessPanelController$$ClaimReward
void Rotatelab_UI_SuccessPanelController__ClaimReward (Rotatelab_UI_SuccessPanelController_o* __this, int32_t rewardMultiplier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SuccessPanelController$$ClaimReward
   void Rotatelab_UI_SuccessPanelController__ClaimReward (Rotatelab_UI_SuccessPanelController_o*
   __this, int32_t rewardMultiplier, const MethodInfo* method); */

void Rotatelab_UI_SuccessPanelController__ClaimReward_111d5c4(int param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar8 = (char *)(_UNK_0112d990 + 0x112d5e8);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d994 + 0x112d5fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d998 + 0x112d608));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d99c + 0x112d614));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d9a0 + 0x112d620));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d9a4 + 0x112d62c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d9a8 + 0x112d638));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d9ac + 0x112d644));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d9b0 + 0x112d650));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d9b4 + 0x112d65c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d9b8 + 0x112d668));
    *pcVar8 = '\x01';
  }
  if (*(int *)(param_1 + 0x94) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x94),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar3,1,0);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112d9bc + 0x112d6b8));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = Rotatelab_Scripts_GameManager__get_IsMainMenuActive_1065c48(iVar3,0);
  if (iVar3 == 0) {
    piVar7 = *(int **)(_UNK_0112d9c0 + 0x112d780);
    iVar4 = *piVar7;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar7;
    }
    iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x11c);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_Int32Enum__bool__bool___Raise_23a5cbc
              (iVar4,0,1,0,**(undefined4 **)(_UNK_0112d9c4 + 0x112d7c0));
    Rotatelab_UI_SuccessPanelController__CoinParticle_111db10(param_1);
  }
  else {
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0112d9c8 + 0x112d6f0));
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c(iVar4,0);
    bVar11 = iVar4 - 1U < 2;
    *(bool *)(param_1 + 0x9f) = bVar11;
    if (!bVar11) {
      uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112d9cc + 0x112d734));
      DG_Tweening_TweenCallback___ctor_11657e8
                (uVar5,param_1,**(undefined4 **)(_UNK_0112d9d0 + 0x112d750),0);
      DG_Tweening_DOVirtual__DelayedCall_11685c0(0x3fd9999a,uVar5,1,0);
    }
  }
  if (*(int *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Selectable__set_interactable_39c00c0(*(int *)(param_1 + 0x50),0,0);
  if (*(int *)(param_1 + 0x54) != 0) {
    UnityEngine_UI_Selectable__set_interactable_39c00c0(*(int *)(param_1 + 0x54),0,0);
    if (iVar3 == 0) {
      uVar5 = 0x3f800000;
    }
    else {
      cVar1 = *(char *)(param_1 + 0x9d);
      bVar11 = cVar1 == '\0';
      if (bVar11) {
        cVar1 = *(char *)(param_1 + 0x9c);
      }
      uVar5 = 0x40400000;
      if ((bVar11 && cVar1 == '\0') && (*(char *)(param_1 + 0x9e) == '\0')) {
        uVar5 = _UNK_0112d988;
      }
    }
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0112d9d4 + 0x112d85c));
    uVar10 = *(uint *)(param_1 + 0x28);
    iVar9 = *(int *)(param_1 + 0x2c);
    uStack_34 = 0;
    uStack_38 = 0;
    System_Nullable_float____ctor_17dea40
              (&uStack_38,uVar5,**(undefined4 **)(_UNK_0112d9d8 + 0x112d874));
    if (iVar4 != 0) {
      lVar2 = (ulonglong)param_2 * (ulonglong)uVar10;
      Rotatelab_Currency_CurrencyManager__IncreaseCurrency_10839a0
                (iVar4,0,(int)lVar2,
                 iVar9 * param_2 + uVar10 * ((int)param_2 >> 0x1f) + (int)((ulonglong)lVar2 >> 0x20)
                 ,uStack_38,uStack_34,0);
      piVar7 = *(int **)(_UNK_0112d9dc + 0x112d8d0);
      iVar4 = *piVar7;
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        iVar4 = *piVar7;
      }
      iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x184);
      if (iVar4 != 0) {
        Rotatelab_GameAction_int___Raise_23a2a74
                  (iVar4,*(undefined4 *)(param_1 + 0x34),
                   **(undefined4 **)(_UNK_0112d9e0 + 0x112d90c));
        uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112d9e4 + 0x112d920));
        DG_Tweening_TweenCallback___ctor_11657e8
                  (uVar6,param_1,**(undefined4 **)(_UNK_0112d9e8 + 0x112d93c),0);
        uVar5 = 0x3fa00000;
        if (iVar3 != 0) {
          uVar5 = _UNK_0112d98c;
        }
        uVar5 = DG_Tweening_DOVirtual__DelayedCall_11685c0(uVar5,uVar6,1,0);
        *(undefined4 *)(param_1 + 0x98) = uVar5;
        thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x98),uVar5);
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

