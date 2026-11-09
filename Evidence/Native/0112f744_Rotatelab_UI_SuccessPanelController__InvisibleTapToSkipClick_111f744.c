/* IL2CPP: Rotatelab.UI.SuccessPanelController$$InvisibleTapToSkipClick
void Rotatelab_UI_SuccessPanelController__InvisibleTapToSkipClick (Rotatelab_UI_SuccessPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SuccessPanelController$$InvisibleTapToSkipClick
   void Rotatelab_UI_SuccessPanelController__InvisibleTapToSkipClick
   (Rotatelab_UI_SuccessPanelController_o* __this, const MethodInfo* method); */

int Rotatelab_UI_SuccessPanelController__InvisibleTapToSkipClick_111f744(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_0112f974 + 0x112f75c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112f978 + 0x112f770));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112f97c + 0x112f77c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112f980 + 0x112f788));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112f984 + 0x112f794));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112f988 + 0x112f7a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112f98c + 0x112f7ac));
    *pcVar6 = '\x01';
  }
  DG_Tweening_TweenExtensions__Kill_1168b64(*(undefined4 *)(param_1 + 0x90),0,0);
  if (*(int *)(param_1 + 0x8c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x8c),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar2,0,0);
  if (*(int *)(param_1 + 0x5c) != 0) {
    uVar3 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x5c),0);
    DG_Tweening_ShortcutExtensions__DOScale_116ba14(uVar3,0,0x3e4ccccd,0);
    uVar3 = *(undefined4 *)(param_1 + 100);
    pcVar6 = (char *)(_UNK_0112f990 + 0x112f844);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0112f994 + 0x112f858));
      *pcVar6 = '\x01';
    }
    puVar4 = *(undefined4 **)(**(int **)(_UNK_0112f998 + 0x112f874) + 0x5c);
    uVar3 = DG_Tweening_DOTweenModuleUI__DOAnchorPos_f9e864(uVar3,*puVar4,puVar4[1],0x3e99999a,0,0);
    uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                      (uVar3,0x1c,**(undefined4 **)(_UNK_0112f99c + 0x112f8a0));
    iVar2 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__15d9f0c
                      (uVar3,0x3dcccccd,**(undefined4 **)(_UNK_0112f9a0 + 0x112f8b4));
    piVar8 = *(int **)(_UNK_0112f9a4 + 0x112f8d0);
    iVar5 = *piVar8;
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      iVar5 = *piVar8;
    }
    puVar4 = *(undefined4 **)(iVar5 + 0x5c);
    iVar7 = puVar4[1];
    if (iVar7 == 0) {
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        puVar4 = *(undefined4 **)(*piVar8 + 0x5c);
      }
      uVar3 = *puVar4;
      iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112f9a8 + 0x112f918));
      DG_Tweening_TweenCallback___ctor_11657e8
                (iVar7,uVar3,**(undefined4 **)(_UNK_0112f9ac + 0x112f938),0);
      piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
      *piVar8 = iVar7;
      thunk_FUN_00ec5080(piVar8,iVar7);
    }
    uVar3 = **(undefined4 **)(_UNK_0112f9b0 + 0x112f964);
    cVar1 = '\0';
    if (iVar2 != 0) {
      cVar1 = *(char *)(iVar2 + 0x94);
    }
    if (iVar2 != 0 && cVar1 != '\0') {
      *(int *)(iVar2 + 0x14) = iVar7;
      thunk_FUN_00ec5080((int *)(iVar2 + 0x14),iVar7,uVar3);
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

