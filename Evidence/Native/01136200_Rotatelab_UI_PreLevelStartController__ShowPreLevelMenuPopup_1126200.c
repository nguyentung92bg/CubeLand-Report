/* IL2CPP: Rotatelab.UI.PreLevelStartController$$ShowPreLevelMenuPopup
void Rotatelab_UI_PreLevelStartController__ShowPreLevelMenuPopup (Rotatelab_UI_PreLevelStartController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PreLevelStartController$$ShowPreLevelMenuPopup
   void Rotatelab_UI_PreLevelStartController__ShowPreLevelMenuPopup
   (Rotatelab_UI_PreLevelStartController_o* __this, const MethodInfo* method); */

void Rotatelab_UI_PreLevelStartController__ShowPreLevelMenuPopup_1126200(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  char *pcVar12;
  int *piVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar12 = (char *)(_UNK_011366e0 + 0x1136218);
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011366e4 + 0x113622c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011366e8 + 0x1136238));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011366ec + 0x1136244));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011366f0 + 0x1136250));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011366f4 + 0x113625c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011366f8 + 0x1136268));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011366fc + 0x1136274));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136700 + 0x1136280));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136704 + 0x113628c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136708 + 0x1136298));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113670c + 0x11362a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136710 + 0x11362b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136714 + 0x11362bc));
    *pcVar12 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01136718 + 0x11362d8));
  System_Object___ctor_2bb93bc(iVar5,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar5 + 0x10) = param_1;
  thunk_FUN_00ec5080((int *)(iVar5 + 0x10),param_1);
  if (**(char **)(**(int **)(_UNK_0113671c + 0x1136314) + 0x5c) != '\0') {
    pcVar12 = (char *)(_UNK_01136874 + 0x1136778);
    if (*pcVar12 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01136878 + 0x113678c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0113687c + 0x1136798));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01136880 + 0x11367a4));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01136884 + 0x11367b0));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01136888 + 0x11367bc));
      *pcVar12 = '\x01';
    }
    iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0113688c + 0x11367d0));
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar5,4,0);
    iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01136890 + 0x1136800));
    uVar8 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01136894 + 0x1136814));
    uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01136898 + 0x1136828));
    System_Action___ctor_2b10bac(uVar9,uVar8,**(undefined4 **)(_UNK_0113689c + 0x1136844),0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_UI_UIManager__SetMainCanvas_1126b6c(iVar5,1,1,uVar9);
    return;
  }
  piVar13 = *(int **)(_UNK_01136720 + 0x1136340);
  iVar6 = *piVar13;
  iVar11 = *(int *)(iVar6 + 0x74);
  *(undefined1 *)(param_1 + 0x56) = 1;
  if (iVar11 == 0) {
    FUN_00ec3934();
    iVar6 = *piVar13;
  }
  iVar6 = *(int *)(*(int *)(iVar6 + 0x5c) + 0x114);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar6,0,**(undefined4 **)(_UNK_01136724 + 0x113637c));
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x14),0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar6,1,0);
  piVar13 = *(int **)(_UNK_01136728 + 0x11363cc);
  uVar8 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(*piVar13 + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__SetVisibility_fc2a78(uVar8,1,0,0);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x10);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar15 = *(int **)(_UNK_0113672c + 0x1136420);
  uVar8 = *(undefined4 *)(iVar6 + 0xc);
  iVar6 = *piVar15;
  if (*(int *)(iVar6 + 0x74) == 0) {
    FUN_00ec3934();
    iVar6 = *piVar15;
  }
  puVar10 = *(undefined4 **)(iVar6 + 0x5c);
  iVar11 = puVar10[1];
  if (iVar11 == 0) {
    if (*(int *)(iVar6 + 0x74) == 0) {
      FUN_00ec3934();
      puVar10 = *(undefined4 **)(*piVar15 + 0x5c);
    }
    uVar9 = *puVar10;
    iVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01136730 + 0x113646c));
    System_Predicate_object____ctor_1876380
              (iVar11,uVar9,**(undefined4 **)(_UNK_01136734 + 0x113648c),0);
    piVar15 = (int *)(*(int *)(*piVar15 + 0x5c) + 4);
    *piVar15 = iVar11;
    thunk_FUN_00ec5080(piVar15,iVar11);
  }
  if (*(int *)(*piVar13 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = Rotatelab_Extensions__TryFind_object__14899b0
                    (uVar8,iVar11,iVar5 + 0xc,**(undefined4 **)(_UNK_01136738 + 0x11364d4));
  *(undefined1 *)(iVar5 + 8) = uVar4;
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_58,&uStack_38,0x3dcccccd,0);
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113673c + 0x1136540));
  System_Action___ctor_2b10bac(uVar8,iVar5,**(undefined4 **)(_UNK_01136740 + 0x1136560),0);
  PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_68,&uStack_38,uVar8,0,0);
  uVar8 = *(undefined4 *)(param_1 + 0x18);
  pcVar12 = (char *)(_UNK_01136744 + 0x1136594);
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136748 + 0x11365b4));
    *pcVar12 = '\x01';
  }
  puVar10 = *(undefined4 **)(**(int **)(_UNK_0113674c + 0x11365d0) + 0x5c);
  uVar14 = *puVar10;
  uVar7 = puVar10[1];
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_80,0x1b,0);
  uVar3 = uStack_74;
  uVar2 = uStack_78;
  uVar1 = uStack_7c;
  uVar9 = uStack_80;
  if (*(int *)(**(int **)(_UNK_01136750 + 0x11365f4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__UIAnchoredPosition_2ce6e40
            (&uStack_80,uVar8,uVar14,uVar7,0x3e4ccccd,uVar9,uVar1,uVar2,uVar3,uStack_70,1,0,0,0,0,0)
  ;
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_80,&uStack_38,uStack_80,uStack_7c,uStack_78,uStack_74,0);
  uStack_38 = uStack_80;
  uStack_34 = uStack_7c;
  uStack_30 = uStack_78;
  uStack_2c = uStack_74;
  uVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01136754 + 0x1136698));
  System_Action___ctor_2b10bac(uVar8,iVar5,**(undefined4 **)(_UNK_01136758 + 0x11366b8),0);
  PrimeTween_Sequence__OnComplete_2cf16e0(auStack_90,&uStack_38,uVar8,0,0);
  return;
}

