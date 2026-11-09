/* IL2CPP: Rotatelab.RainbowShooter.RainbowShooterManager$$ShowPopup
void Rotatelab_RainbowShooter_RainbowShooterManager__ShowPopup (Rotatelab_RainbowShooter_RainbowShooterManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RainbowShooter.RainbowShooterManager$$ShowPopup
   void Rotatelab_RainbowShooter_RainbowShooterManager__ShowPopup
   (Rotatelab_RainbowShooter_RainbowShooterManager_o* __this, const MethodInfo* method); */

void Rotatelab_RainbowShooter_RainbowShooterManager__ShowPopup_10adce0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int extraout_r1;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
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
  
  piVar6 = *(int **)(param_1 + 0x40);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar6 + 0x188))(piVar6,1,*(undefined4 *)(*piVar6 + 0x18c));
  Rotatelab_RainbowShooter_RainbowShooterManager__UpdateProgression_10add28(param_1);
  pcVar7 = (char *)(_UNK_010dcbc4 + 0x10dc838);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dcbc8 + 0x10dc84c),0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dcbcc + 0x10dc858));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dcbd0 + 0x10dc864));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dcbd4 + 0x10dc870));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dcbd8 + 0x10dc87c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dcbdc + 0x10dc888));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dcbe0 + 0x10dc894));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dcbe4 + 0x10dc8a0));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined1 *)(param_1 + 0x1d) = 1;
  uStack_38 = 0;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    iVar4 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar4,1,0);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_CanvasGroup__set_alpha_39a3758(*(int *)(param_1 + 0x18),0,0);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_CanvasGroup__set_blocksRaycasts_39a3b28(*(int *)(param_1 + 0x18),1,0);
  PrimeTween_Sequence__Stop_2cf07bc((undefined4 *)(param_1 + 0x20),0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uVar9 = *(undefined4 *)(param_1 + 0x18);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  if (*(int *)(**(int **)(_UNK_010dcbe8 + 0x10dc97c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Alpha_2ce7b44(&uStack_58,uVar9,0x3f800000,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_58,&uStack_38,uStack_58,uStack_54,uStack_50,uStack_4c,0);
  piVar6 = *(int **)(_UNK_010dcbec + 0x10dca10);
  iVar4 = *piVar6;
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar6;
  }
  puVar5 = *(undefined4 **)(iVar4 + 0x5c);
  iVar8 = puVar5[1];
  if (iVar8 == 0) {
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      puVar5 = *(undefined4 **)(*piVar6 + 0x5c);
    }
    uVar9 = *puVar5;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010dcbf0 + 0x10dca60));
    System_Action_object____ctor_1f11414(iVar8,uVar9,**(undefined4 **)(_UNK_010dcbf4 + 0x10dca80),0)
    ;
    piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 4);
    *piVar6 = iVar8;
    thunk_FUN_00ec5080(piVar6,iVar8);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_48,&uStack_38,param_1,iVar8,0,**(undefined4 **)(_UNK_010dcbf8 + 0x10dcab8));
  uVar3 = uStack_3c;
  uVar2 = uStack_40;
  uVar1 = uStack_44;
  uVar9 = uStack_48;
  iVar4 = *(int *)(**(int **)(_UNK_010dcbfc + 0x10dcad8) + 0x74);
  if (iVar4 == 0) {
    FUN_00ec3934();
    iVar4 = extraout_r1;
  }
  Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14(&uStack_48,iVar4,uVar9,uVar1,uVar2,uVar3,0)
  ;
  *(undefined4 *)(param_1 + 0x20) = uStack_48;
  *(undefined4 *)(param_1 + 0x24) = uStack_44;
  *(undefined4 *)(param_1 + 0x28) = uStack_40;
  *(undefined4 *)(param_1 + 0x2c) = uStack_3c;
  thunk_FUN_00ec5080(param_1 + 0x28,0);
  piVar6 = *(int **)(_UNK_010dcc00 + 0x10dcb2c);
  iVar4 = *piVar6;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar6;
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x104);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar5 = *(undefined4 **)(_UNK_010dcc04 + 0x10dcb68);
  Rotatelab_GameAction_bool___Raise_23a280c(iVar4,1,*puVar5);
  iVar4 = *(int *)(*(int *)(*piVar6 + 0x5c) + 0xfc);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar4,1,*puVar5);
  iVar4 = *(int *)(*(int *)(*piVar6 + 0x5c) + 0x114);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar4,0,*puVar5);
  return;
}

