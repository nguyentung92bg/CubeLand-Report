/* IL2CPP: Rotatelab.Scripts.ScissorsController$$Cut
void Rotatelab_Scripts_ScissorsController__Cut (Rotatelab_Scripts_ScissorsController_o* __this, Rotatelab_Scripts_GiftWrapperController_o* giftWrapper, UnityEngine_Transform_o* targetPoint, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ScissorsController$$Cut
   void Rotatelab_Scripts_ScissorsController__Cut (Rotatelab_Scripts_ScissorsController_o* __this,
   Rotatelab_Scripts_GiftWrapperController_o* giftWrapper, UnityEngine_Transform_o* targetPoint,
   const MethodInfo* method); */

void Rotatelab_Scripts_ScissorsController__Cut_1047228(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 *puVar11;
  float fVar12;
  undefined4 uStack_70;
  undefined4 uStack_6c;
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
  
  pcVar9 = (char *)(_UNK_0105778c + 0x1057250);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01057790 + 0x1057264));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01057794 + 0x1057270));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01057798 + 0x105727c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105779c + 0x1057288));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010577a0 + 0x1057294));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010577a4 + 0x10572a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010577a8 + 0x10572ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010577ac + 0x10572b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010577b0 + 0x10572c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010577b4 + 0x10572d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010577b8 + 0x10572dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010577bc + 0x10572e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010577c0 + 0x10572f4));
    *pcVar9 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010577c4 + 0x1057310));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar10 = (int *)(iVar1 + 8);
  *piVar10 = param_2;
  thunk_FUN_00ec5080(piVar10,param_2);
  uVar8 = *(undefined4 *)(param_1 + 0x44);
  if (*(int *)(**(int **)(_UNK_010577c8 + 0x1057350) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Inequality_36018e4(uVar8,0,0);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_BaseDockController__Empty_100b530(*(int *)(param_1 + 0x44),param_1,0);
  }
  if (*piVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_GiftWrapperController__DecreaseHp_100eccc(*piVar10,0);
  if (*piVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(bool *)(iVar1 + 0xc) = *(int *)(*piVar10 + 0x34) == 0;
  Rotatelab_Scripts_UtilityPlaceableController__StopRotationTween_104d840(param_1);
  iVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010577cc + 0x1057400));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetParent_3615994(iVar2,*(undefined4 *)(iVar3 + 0x50),1,0);
  Rotatelab_Scripts_ScissorsController__UpdateAnimationState_104684c(param_1,3,0);
  uVar8 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  uVar4 = UnityEngine_LayerMask__NameToLayer_3602cd0(**(undefined4 **)(_UNK_010577d0 + 0x1057468),0)
  ;
  if (*(int *)(**(int **)(_UNK_010577d4 + 0x105747c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__SetLayerRecursively_fc27c4(uVar8,uVar4,0);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010577d8 + 0x10574ac));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_PlaceableManager__RemovePlaceableFromQueue_10478e4(iVar2,param_1);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_50,1,0,1,0,0,0);
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  Rotatelab_Scripts_BasePlaceableController__MoveToTransform_103089c
            (&uStack_60,param_1,param_3,*(undefined4 *)(param_1 + 0x68),0,0,0,9,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_60,&uStack_40,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  piVar10 = *(int **)(_UNK_010577dc + 0x1057558);
  iVar2 = *piVar10;
  fVar12 = *(float *)(param_1 + 0x68);
  uStack_40 = uStack_60;
  uStack_3c = uStack_5c;
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar10;
  }
  puVar6 = *(undefined4 **)(iVar2 + 0x5c);
  iVar3 = puVar6[1];
  if (iVar3 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar6 = *(undefined4 **)(*piVar10 + 0x5c);
    }
    uVar8 = *puVar6;
    iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010577e0 + 0x10575b0));
    System_Action___ctor_2b10bac(iVar3,uVar8,**(undefined4 **)(_UNK_010577e4 + 0x10575d0),0);
    piVar5 = (int *)(*(int *)(*piVar10 + 0x5c) + 4);
    *piVar5 = iVar3;
    thunk_FUN_00ec5080(piVar5,iVar3);
  }
  PrimeTween_Sequence__InsertCallback_2cf01e0
            (&uStack_50,&uStack_40,fVar12 + _UNK_01057788,iVar3,0,0);
  puVar6 = *(undefined4 **)(_UNK_010577e8 + 0x1057628);
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uVar8 = thunk_FUN_00f00cdc(*puVar6);
  System_Action_object____ctor_1f11414(uVar8,iVar1,**(undefined4 **)(_UNK_010577ec + 0x1057644),0);
  puVar11 = *(undefined4 **)(_UNK_010577f0 + 0x1057668);
  PrimeTween_Sequence__ChainCallback_object__15b4c64(&uStack_60,&uStack_40,param_1,uVar8,0,*puVar11)
  ;
  uStack_40 = uStack_60;
  uStack_3c = uStack_5c;
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_70,&uStack_40,0x3e800000,0);
  iVar1 = *piVar10;
  uStack_40 = uStack_70;
  uStack_3c = uStack_6c;
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar10;
  }
  puVar7 = *(undefined4 **)(iVar1 + 0x5c);
  iVar2 = puVar7[2];
  if (iVar2 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar7 = *(undefined4 **)(*piVar10 + 0x5c);
    }
    uVar8 = *puVar7;
    iVar2 = thunk_FUN_00f00cdc(*puVar6);
    System_Action_object____ctor_1f11414(iVar2,uVar8,**(undefined4 **)(_UNK_010577f4 + 0x1057704),0)
    ;
    piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 8);
    *piVar10 = iVar2;
    thunk_FUN_00ec5080(piVar10,iVar2);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64(&uStack_50,&uStack_40,param_1,iVar2,0,*puVar11)
  ;
  Rotatelab_GameExtensions__PreventFailSearchDuringAnimation_fb5500
            (&uStack_50,uStack_44,uStack_50,uStack_4c,uStack_48,uStack_44,0);
  Rotatelab_GameExtensions__PreventManualRotationDuringAnimation_fb5878
            (&uStack_50,uStack_44,uStack_50,uStack_4c,uStack_48,uStack_44,0);
  return;
}

