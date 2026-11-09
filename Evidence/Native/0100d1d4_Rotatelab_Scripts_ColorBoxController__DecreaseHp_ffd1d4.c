/* IL2CPP: Rotatelab.Scripts.ColorBoxController$$DecreaseHp
void Rotatelab_Scripts_ColorBoxController__DecreaseHp (Rotatelab_Scripts_ColorBoxController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBoxController$$DecreaseHp
   void Rotatelab_Scripts_ColorBoxController__DecreaseHp (Rotatelab_Scripts_ColorBoxController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_ColorBoxController__DecreaseHp_ffd1d4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_0100d32c + 0x100d1ec);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d330 + 0x100d200));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100d334 + 0x100d20c));
    *pcVar7 = '\x01';
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    Rotatelab_Scripts_ColorBoxController__UpdateHealthTexts_ffc770(param_1);
    piVar10 = *(int **)(_UNK_0100d338 + 0x100d23c);
    iVar8 = *(int *)(param_1 + 0x1c);
    iVar4 = *piVar10;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar10;
    }
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_28 = 0;
    UnityEngine_Animator__Play_35915e4(iVar8,**(undefined4 **)(iVar4 + 0x5c),0,0);
    Rotatelab_Scripts_ColorBoxController__AnimateCrack_ffd340(param_1);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_ColorBoxPlankLayer__OnHealthDecreased_ffd5b4
              (*(int *)(param_1 + 0x20),*(int *)(param_1 + 0x30),
               *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24),0 < *(int *)(param_1 + 0x30));
    if (*(int *)(param_1 + 0x30) == 0) {
      iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0100d33c + 0x100d2f8));
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar4,0x24,0);
      pcVar7 = (char *)(_UNK_0100db08 + 0x100d6e8);
      if (*pcVar7 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0100db0c + 0x100d6fc));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0100db10 + 0x100d708));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0100db14 + 0x100d714));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0100db18 + 0x100d720));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0100db1c + 0x100d72c));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0100db20 + 0x100d738));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0100db24 + 0x100d744));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0100db28 + 0x100d750));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0100db2c + 0x100d75c));
        FUN_00ec37c0(*(undefined4 *)(_UNK_0100db30 + 0x100d768));
        *pcVar7 = '\x01';
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      piVar10 = *(int **)(_UNK_0100db34 + 0x100d784);
      uStack_38 = 0;
      iVar4 = *piVar10;
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        iVar4 = *piVar10;
      }
      uVar9 = **(undefined4 **)(iVar4 + 0x5c);
      uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0100db38 + 0x100d7ac));
      System_Action_Int32Enum__int____ctor_1f18658
                (uVar5,param_1,**(undefined4 **)(_UNK_0100db3c + 0x100d7cc),0);
      uVar5 = Rotatelab_GameAction_Int32Enum__int___op_Subtraction_23a4710
                        (uVar9,uVar5,**(undefined4 **)(_UNK_0100db40 + 0x100d7e4));
      **(undefined4 **)(*piVar10 + 0x5c) = uVar5;
      thunk_FUN_00ec5080(*(undefined4 *)(*piVar10 + 0x5c));
      puVar11 = *(undefined4 **)(_UNK_0100db44 + 0x100d814);
      iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar11);
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Grid_GridManager__RemoveFromGrid_1107024
                (iVar4,param_1,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x2c),0);
      iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar11);
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Grid_GridManager__ShowTargetablesAdjacentToCells_1108600
                (iVar4,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x2c),0);
      if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Scripts_ColorBoxPlankLayer__DestroyAllRemaining_ffdb5c(*(int *)(param_1 + 0x20));
      PrimeTween_Sequence__Stop_2cf07bc((undefined4 *)(param_1 + 0x50),0);
      PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uVar6 = UnityEngine_Component__get_transform_35fe190(param_1,0);
      PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,5,0);
      uVar3 = uStack_50;
      uVar2 = uStack_54;
      uVar1 = uStack_58;
      uVar9 = uStack_5c;
      uVar5 = uStack_60;
      if (*(int *)(**(int **)(_UNK_0100db48 + 0x100d910) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Scale_2ce4684
                (&uStack_60,uVar6,0x3f9c28f6,0x3e99999a,uVar5,uVar9,uVar1,uVar2,uVar3,1,0,0,0,0,0);
      PrimeTween_Sequence__Chain_2cee04c
                (&uStack_70,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
      uStack_38 = uStack_70;
      uStack_34 = uStack_6c;
      uStack_30 = uStack_68;
      uStack_2c = uStack_64;
      uVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
      PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,6,0);
      PrimeTween_Tween__Scale_2ce4684
                (&uStack_60,uVar5,0,0x3f400000,uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,1,0
                 ,0,0,0,0);
      PrimeTween_Sequence__Chain_2cee04c
                (&uStack_60,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
      piVar10 = *(int **)(_UNK_0100db4c + 0x100da34);
      iVar4 = *piVar10;
      uStack_38 = uStack_60;
      uStack_34 = uStack_5c;
      uStack_30 = uStack_58;
      uStack_2c = uStack_54;
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        iVar4 = *piVar10;
      }
      puVar11 = *(undefined4 **)(iVar4 + 0x5c);
      iVar8 = puVar11[1];
      if (iVar8 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          FUN_00ec3934();
          puVar11 = *(undefined4 **)(*piVar10 + 0x5c);
        }
        uVar5 = *puVar11;
        iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0100db50 + 0x100da84));
        System_Action_object____ctor_1f11414
                  (iVar8,uVar5,**(undefined4 **)(_UNK_0100db54 + 0x100daa4),0);
        piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 4);
        *piVar10 = iVar8;
        thunk_FUN_00ec5080(piVar10,iVar8);
      }
      PrimeTween_Sequence__ChainCallback_object__15b4c64
                (&uStack_60,&uStack_38,param_1,iVar8,0,**(undefined4 **)(_UNK_0100db58 + 0x100dad4))
      ;
      *(undefined4 *)(param_1 + 0x50) = uStack_60;
      *(undefined4 *)(param_1 + 0x54) = uStack_5c;
      *(undefined4 *)(param_1 + 0x58) = uStack_58;
      *(undefined4 *)(param_1 + 0x5c) = uStack_54;
      thunk_FUN_00ec5080(param_1 + 0x58,0);
      return;
    }
  }
  return;
}

