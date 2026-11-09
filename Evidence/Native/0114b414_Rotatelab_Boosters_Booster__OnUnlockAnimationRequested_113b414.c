/* IL2CPP: Rotatelab.Boosters.Booster$$OnUnlockAnimationRequested
void Rotatelab_Boosters_Booster__OnUnlockAnimationRequested (Rotatelab_Boosters_Booster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.Booster$$OnUnlockAnimationRequested
   void Rotatelab_Boosters_Booster__OnUnlockAnimationRequested (Rotatelab_Boosters_Booster_o*
   __this, const MethodInfo* method); */

void Rotatelab_Boosters_Booster__OnUnlockAnimationRequested_113b414(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int extraout_r1;
  char *pcVar6;
  int iVar7;
  int *piVar8;
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
  
  pcVar6 = (char *)(_UNK_0114b8a4 + 0x114b42c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b8a8 + 0x114b440));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b8ac + 0x114b44c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b8b0 + 0x114b458));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b8b4 + 0x114b464));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b8b8 + 0x114b470));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b8bc + 0x114b47c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b8c0 + 0x114b488));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b8c4 + 0x114b494));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b8c8 + 0x114b4a0));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (*(int *)(**(int **)(_UNK_0114b8cc + 0x114b4bc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar2 == *(int *)(*(int *)(param_1 + 0x10) + 0x24)) {
    PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_58,&uStack_38,0x3fe00000,0);
    piVar8 = *(int **)(_UNK_0114b8d0 + 0x114b558);
    iVar2 = *piVar8;
    uStack_38 = uStack_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar8;
    }
    puVar4 = *(undefined4 **)(iVar2 + 0x5c);
    iVar7 = puVar4[1];
    if (iVar7 == 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        puVar4 = *(undefined4 **)(*piVar8 + 0x5c);
      }
      uVar1 = *puVar4;
      iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0114b8d4 + 0x114b5a8));
      System_Action_object____ctor_1f11414
                (iVar7,uVar1,**(undefined4 **)(_UNK_0114b8d8 + 0x114b5c8),0);
      piVar3 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
      *piVar3 = iVar7;
      thunk_FUN_00ec5080(piVar3,iVar7);
    }
    puVar4 = *(undefined4 **)(_UNK_0114b8dc + 0x114b5fc);
    PrimeTween_Sequence__ChainCallback_object__15b4c64
              (&uStack_48,&uStack_38,param_1,iVar7,0,*puVar4);
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_58,&uStack_38,0x3f400000,0);
    iVar2 = *piVar8;
    uStack_38 = uStack_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar8;
    }
    puVar5 = *(undefined4 **)(iVar2 + 0x5c);
    iVar7 = puVar5[2];
    if (iVar7 == 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        puVar5 = *(undefined4 **)(*piVar8 + 0x5c);
      }
      uVar1 = *puVar5;
      iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0114b8e0 + 0x114b67c));
      System_Action_object____ctor_1f11414
                (iVar7,uVar1,**(undefined4 **)(_UNK_0114b8e4 + 0x114b69c),0);
      piVar3 = (int *)(*(int *)(*piVar8 + 0x5c) + 8);
      *piVar3 = iVar7;
      thunk_FUN_00ec5080(piVar3,iVar7);
    }
    PrimeTween_Sequence__ChainCallback_object__15b4c64
              (&uStack_48,&uStack_38,param_1,iVar7,0,*puVar4);
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x18),0);
    if (*(int *)(**(int **)(_UNK_0114b8e8 + 0x114b710) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Scale_2ce4684(&uStack_58,uVar1,0x3f800000,0x3e19999a,0,0,0,0,0,1,0,0,0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_58,&uStack_38,uStack_58,uStack_54,uStack_50,uStack_4c,0);
    iVar2 = *piVar8;
    uStack_38 = uStack_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar8;
    }
    puVar5 = *(undefined4 **)(iVar2 + 0x5c);
    iVar7 = puVar5[3];
    if (iVar7 == 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        puVar5 = *(undefined4 **)(*piVar8 + 0x5c);
      }
      uVar1 = *puVar5;
      iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0114b8ec + 0x114b7e0));
      System_Action_object____ctor_1f11414
                (iVar7,uVar1,**(undefined4 **)(_UNK_0114b8f0 + 0x114b800),0);
      piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0xc);
      *piVar8 = iVar7;
      thunk_FUN_00ec5080(piVar8,iVar7);
    }
    PrimeTween_Sequence__ChainCallback_object__15b4c64
              (&uStack_48,&uStack_38,param_1,iVar7,0,*puVar4);
    Rotatelab_GameExtensions__PauseGameDuringAnimation_fb5188
              (&uStack_48,uStack_3c,uStack_48,uStack_44,uStack_40,uStack_3c,0);
    iVar2 = *(int *)(**(int **)(_UNK_0114b8f4 + 0x114b86c) + 0x74);
    if (iVar2 == 0) {
      FUN_00ec3934();
      iVar2 = extraout_r1;
    }
    Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
              (&uStack_48,iVar2,uStack_48,uStack_44,uStack_40,uStack_3c,0);
  }
  return;
}

