/* IL2CPP: Rotatelab.UI.ProfileManager$$HideProfilePopup
void Rotatelab_UI_ProfileManager__HideProfilePopup (Rotatelab_UI_ProfileManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.ProfileManager$$HideProfilePopup
   void Rotatelab_UI_ProfileManager__HideProfilePopup (Rotatelab_UI_ProfileManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_UI_ProfileManager__HideProfilePopup_1114468(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int extraout_r1;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
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
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01124710 + 0x1124480);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01124714 + 0x1124494));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01124718 + 0x11244a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112471c + 0x11244ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01124720 + 0x11244b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01124724 + 0x11244c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01124728 + 0x11244d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112472c + 0x11244dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01124730 + 0x11244e8));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar4 = *(int **)(_UNK_01124734 + 0x1124504);
  uStack_30 = 0;
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x114);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar1,1,**(undefined4 **)(_UNK_01124738 + 0x1124544));
  PrimeTween_Sequence__Create_2cef1e0(&uStack_40,1,0,1,0,0,0);
  uVar6 = *(undefined4 *)(param_1 + 0x44);
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  if (*(int *)(**(int **)(_UNK_0112473c + 0x1124580) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Alpha_2ce7b44(&uStack_50,uVar6,0,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_50,&uStack_30,uStack_50,uStack_4c,uStack_48,uStack_44,0);
  piVar4 = *(int **)(_UNK_01124740 + 0x1124610);
  uVar6 = *(undefined4 *)(param_1 + 0x44);
  iVar1 = *piVar4;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_28 = uStack_48;
  uStack_24 = uStack_44;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar5 = puVar2[2];
  if (iVar5 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar4 + 0x5c);
    }
    uVar7 = *puVar2;
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01124744 + 0x1124664));
    System_Action_object____ctor_1f11414(iVar5,uVar7,**(undefined4 **)(_UNK_01124748 + 0x1124684),0)
    ;
    piVar4 = (int *)(*(int *)(*piVar4 + 0x5c) + 8);
    *piVar4 = iVar5;
    thunk_FUN_00ec5080(piVar4,iVar5);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_40,&uStack_30,uVar6,iVar5,0,**(undefined4 **)(_UNK_0112474c + 0x11246bc));
  iVar1 = *(int *)(**(int **)(_UNK_01124750 + 0x11246d8) + 0x74);
  if (iVar1 == 0) {
    FUN_00ec3934();
    iVar1 = extraout_r1;
  }
  Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
            (&uStack_40,iVar1,uStack_40,uStack_3c,uStack_38,uStack_34,0);
  return;
}

