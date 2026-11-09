/* IL2CPP: Rotatelab.PreBoosters.PreBooster$$OnPreBoosterUnlockAnimationRequestedHandler
void Rotatelab_PreBoosters_PreBooster__OnPreBoosterUnlockAnimationRequestedHandler (Rotatelab_PreBoosters_PreBooster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.PreBoosters.PreBooster$$OnPreBoosterUnlockAnimationRequestedHandler
   void Rotatelab_PreBoosters_PreBooster__OnPreBoosterUnlockAnimationRequestedHandler
   (Rotatelab_PreBoosters_PreBooster_o* __this, const MethodInfo* method); */

void Rotatelab_PreBoosters_PreBooster__OnPreBoosterUnlockAnimationRequestedHandler_10ecae8
               (int param_1)

{
  int iVar1;
  undefined4 uVar2;
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
  
  pcVar6 = (char *)(_UNK_010fca8c + 0x10fc5e4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fca90 + 0x10fc5f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fca94 + 0x10fc604));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fca98 + 0x10fc610));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fca9c + 0x10fc61c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fcaa0 + 0x10fc628));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fcaa4 + 0x10fc634));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fcaa8 + 0x10fc640));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fcaac + 0x10fc64c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fcab0 + 0x10fc658));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fcab4 + 0x10fc664));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010fcab8 + 0x10fc680));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(iVar1 + 0x14) + 0x10) == 0) {
    if (*(int *)(**(int **)(_UNK_010fcabc + 0x10fc6c0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar2 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
    iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar1 == *(int *)(*(int *)(param_1 + 0x10) + 0x24)) {
      *(undefined1 *)(param_1 + 0x49) = 1;
      PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_58,&uStack_38,0x3e800000,0);
      piVar8 = *(int **)(_UNK_010fcac0 + 0x10fc75c);
      iVar1 = *piVar8;
      uStack_38 = uStack_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar8;
      }
      puVar4 = *(undefined4 **)(iVar1 + 0x5c);
      iVar7 = puVar4[1];
      if (iVar7 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          FUN_00ec3934();
          puVar4 = *(undefined4 **)(*piVar8 + 0x5c);
        }
        uVar2 = *puVar4;
        iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010fcac4 + 0x10fc7ac));
        System_Action_object____ctor_1f11414
                  (iVar7,uVar2,**(undefined4 **)(_UNK_010fcac8 + 0x10fc7cc),0);
        piVar3 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
        *piVar3 = iVar7;
        thunk_FUN_00ec5080(piVar3,iVar7);
      }
      puVar4 = *(undefined4 **)(_UNK_010fcacc + 0x10fc800);
      PrimeTween_Sequence__ChainCallback_object__15b4c64
                (&uStack_48,&uStack_38,param_1,iVar7,0,*puVar4);
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_58,&uStack_38,0x3f400000,0);
      iVar1 = *piVar8;
      uStack_38 = uStack_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar8;
      }
      puVar5 = *(undefined4 **)(iVar1 + 0x5c);
      iVar7 = puVar5[2];
      if (iVar7 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          FUN_00ec3934();
          puVar5 = *(undefined4 **)(*piVar8 + 0x5c);
        }
        uVar2 = *puVar5;
        iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010fcad0 + 0x10fc880));
        System_Action_object____ctor_1f11414
                  (iVar7,uVar2,**(undefined4 **)(_UNK_010fcad4 + 0x10fc8a0),0);
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
      if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x1c),0);
      if (*(int *)(**(int **)(_UNK_010fcad8 + 0x10fc918) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Scale_2ce4684(&uStack_58,uVar2,0x3f800000,0x3e19999a,0,0,0,0,0,1,0,0,0,0,0);
      PrimeTween_Sequence__Chain_2cee04c
                (&uStack_58,&uStack_38,uStack_58,uStack_54,uStack_50,uStack_4c,0);
      iVar1 = *piVar8;
      uStack_38 = uStack_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar8;
      }
      puVar5 = *(undefined4 **)(iVar1 + 0x5c);
      iVar7 = puVar5[3];
      if (iVar7 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          FUN_00ec3934();
          puVar5 = *(undefined4 **)(*piVar8 + 0x5c);
        }
        uVar2 = *puVar5;
        iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010fcadc + 0x10fc9e8));
        System_Action_object____ctor_1f11414
                  (iVar7,uVar2,**(undefined4 **)(_UNK_010fcae0 + 0x10fca08),0);
        piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0xc);
        *piVar8 = iVar7;
        thunk_FUN_00ec5080(piVar8,iVar7);
      }
      PrimeTween_Sequence__ChainCallback_object__15b4c64
                (&uStack_48,&uStack_38,param_1,iVar7,0,*puVar4);
      iVar1 = *(int *)(**(int **)(_UNK_010fcae4 + 0x10fca54) + 0x74);
      if (iVar1 == 0) {
        FUN_00ec3934();
        iVar1 = extraout_r1;
      }
      Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
                (&uStack_48,iVar1,uStack_48,uStack_44,uStack_40,uStack_3c,0);
    }
  }
  return;
}

