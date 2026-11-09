/* IL2CPP: Rotatelab.Scripts.IceWrapperController$$OnPlaceableLeftQueueHandler
void Rotatelab_Scripts_IceWrapperController__OnPlaceableLeftQueueHandler (Rotatelab_Scripts_IceWrapperController_o* __this, Rotatelab_Scripts_BasePlaceableController_o* placeable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.IceWrapperController$$OnPlaceableLeftQueueHandler
   void Rotatelab_Scripts_IceWrapperController__OnPlaceableLeftQueueHandler
   (Rotatelab_Scripts_IceWrapperController_o* __this, Rotatelab_Scripts_BasePlaceableController_o*
   placeable, const MethodInfo* method); */

void Rotatelab_Scripts_IceWrapperController__OnPlaceableLeftQueueHandler_1011df4
               (int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_01021e74 + 0x1021e0c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01021e78 + 0x1021e20));
    *pcVar8 = '\x01';
  }
  if (param_2 != (int *)0x0) {
    uVar3 = (uint)*(byte *)(**(int **)(_UNK_01021e7c + 0x1021e3c) + 0xb8);
    if (*(byte *)(*param_2 + 0xb8) < uVar3) {
      return;
    }
    if (*(int *)(*(int *)(*param_2 + 100) + uVar3 * 4 + -4) == **(int **)(_UNK_01021e7c + 0x1021e3c)
       ) {
      pcVar8 = (char *)(_UNK_01021330 + 0x1021288);
      if (*pcVar8 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01021334 + 0x102129c));
        *pcVar8 = '\x01';
      }
      if (*(int *)(param_1 + 0x2c) < 1) {
        return;
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      Rotatelab_Scripts_IceWrapperController__UpdateHealthTexts_10111c4(param_1);
      Rotatelab_Scripts_IceWrapperController__AnimatePunch_101133c(param_1);
      Rotatelab_Scripts_IceWrapperController__AnimateCrack_1011440(param_1);
      if (*(int *)(param_1 + 0x2c) != 0) {
        if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_ParticleSystem__Stop_368e968(*(int *)(param_1 + 0x28),1,1,0);
        iVar4 = *(int *)(param_1 + 0x28);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        pcVar8 = (char *)(_UNK_0369e8f8 + 0x369e87c);
        if (*pcVar8 == '\0') {
          thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0369e8fc + 0x369e890),1,0);
          *pcVar8 = '\x01';
        }
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = *(int *)(iVar4 + 8);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar4,0);
        }
        UNRECOVERED_JUMPTABLE = *(code **)(_UNK_0369e900 + 0x369e8c8);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_0369e904 + 0x369e8d8);
          *(code **)(_UNK_0369e908 + 0x369e8e8) = UNRECOVERED_JUMPTABLE;
        }
                    /* WARNING: Could not recover jumptable at 0x0369e8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar6,1);
        return;
      }
      iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01021338 + 0x10212f8));
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar4,0xf,0);
      Rotatelab_Scripts_IceWrapperController__AnimateBreakParticle_10116c4(param_1);
      pcVar8 = (char *)(_UNK_01021d60 + 0x1021ac8);
      if (*pcVar8 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01021d64 + 0x1021adc));
        FUN_00ec37c0(*(undefined4 *)(_UNK_01021d68 + 0x1021ae8));
        FUN_00ec37c0(*(undefined4 *)(_UNK_01021d6c + 0x1021af4));
        FUN_00ec37c0(*(undefined4 *)(_UNK_01021d70 + 0x1021b00));
        FUN_00ec37c0(*(undefined4 *)(_UNK_01021d74 + 0x1021b0c));
        FUN_00ec37c0(*(undefined4 *)(_UNK_01021d78 + 0x1021b18));
        *pcVar8 = '\x01';
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01021d7c + 0x1021b34));
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Grid_GridManager__RemoveFromGrid_1107024
                (iVar4,param_1,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x28),0);
      if (*(int *)(**(int **)(_UNK_01021d80 + 0x1021b84) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Stop_2ced694((undefined4 *)(param_1 + 0x38),0);
      uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
      pcVar8 = (char *)(_UNK_01021d84 + 0x1021bc4);
      if (*pcVar8 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01021d88 + 0x1021bd8));
        *pcVar8 = '\x01';
      }
      puVar2 = *(undefined4 **)(**(int **)(_UNK_01021d8c + 0x1021bf8) + 0x5c);
      uVar5 = *puVar2;
      uVar7 = puVar2[1];
      uVar10 = puVar2[2];
      PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,9,0);
      PrimeTween_Tween__Scale_2ce6560
                (&uStack_50,uVar1,uVar5,uVar7,uVar10,0x3e800000,uStack_50,uStack_4c,uStack_48,
                 uStack_44,uStack_40,1,0,0,0,0,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
      piVar9 = *(int **)(_UNK_01021d90 + 0x1021c78);
      iVar4 = *piVar9;
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        iVar4 = *piVar9;
      }
      puVar2 = *(undefined4 **)(iVar4 + 0x5c);
      iVar6 = puVar2[2];
      if (iVar6 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          FUN_00ec3934();
          puVar2 = *(undefined4 **)(*piVar9 + 0x5c);
        }
        uVar5 = *puVar2;
        iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01021d94 + 0x1021cc4));
        System_Action_object____ctor_1f11414
                  (iVar6,uVar5,**(undefined4 **)(_UNK_01021d98 + 0x1021ce4),0);
        piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 8);
        *piVar9 = iVar6;
        thunk_FUN_00ec5080(piVar9,iVar6);
      }
      if (*(int *)(**(int **)(_UNK_01021d9c + 0x1021d0c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__OnComplete_object__15d62e8
                (&uStack_50,&uStack_38,uVar1,iVar6,0,**(undefined4 **)(_UNK_01021da0 + 0x1021d30));
      *(undefined4 *)(param_1 + 0x38) = uStack_50;
      *(undefined4 *)(param_1 + 0x3c) = uStack_4c;
      *(undefined4 *)(param_1 + 0x40) = uStack_48;
      *(undefined4 *)(param_1 + 0x44) = uStack_44;
      thunk_FUN_00ec5080(param_1 + 0x40,0);
      return;
    }
  }
  return;
}

