/* IL2CPP: Rotatelab.Scripts.HammerController$$AnimateHit
void Rotatelab_Scripts_HammerController__AnimateHit (Rotatelab_Scripts_HammerController_o* __this, Rotatelab_Scripts_WallController_o* targetWall, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.HammerController$$AnimateHit
   void Rotatelab_Scripts_HammerController__AnimateHit (Rotatelab_Scripts_HammerController_o*
   __this, Rotatelab_Scripts_WallController_o* targetWall, const MethodInfo* method); */

void Rotatelab_Scripts_HammerController__AnimateHit_103d400(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_78;
  undefined4 uStack_74;
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
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_0104d7e8 + 0x104d41c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104d7ec + 0x104d430));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104d7f0 + 0x104d43c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104d7f4 + 0x104d448));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104d7f8 + 0x104d454));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104d7fc + 0x104d460));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104d800 + 0x104d46c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104d804 + 0x104d478));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104d808 + 0x104d484));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104d80c + 0x104d490));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104d810 + 0x104d4ac));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar8 = (int *)(iVar1 + 8);
  *piVar8 = param_2;
  thunk_FUN_00ec5080(piVar8,param_2);
  puVar9 = *(undefined4 **)(_UNK_0104d814 + 0x104d4ec);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = Rotatelab_Scripts_ObjectManager__MarkWallsToBreakByHammer_102dec0
                    (iVar2,*piVar8,*(undefined4 *)(param_1 + 0x7c));
  *(undefined4 *)(iVar1 + 0xc) = uVar3;
  thunk_FUN_00ec5080();
  iVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetParent_3615994(iVar2,*(undefined4 *)(iVar4 + 0x50),1,0);
  Rotatelab_Scripts_HammerController__UpdateAnimationState_103d2fc(param_1,3,0);
  uVar3 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  uVar5 = UnityEngine_LayerMask__NameToLayer_3602cd0(**(undefined4 **)(_UNK_0104d818 + 0x104d5a8),0)
  ;
  if (*(int *)(**(int **)(_UNK_0104d81c + 0x104d5bc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__SetLayerRecursively_fc27c4(uVar3,uVar5,0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = UnityEngine_Component__get_transform_35fe190(*piVar8,0);
  Rotatelab_Scripts_BasePlaceableController__MoveToTransform_103089c
            (&uStack_58,param_1,uVar3,*(undefined4 *)(param_1 + 0x68),
             *(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),
             *(undefined4 *)(param_1 + 0x78),0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_58,&uStack_38,uStack_58,uStack_54,uStack_50,uStack_4c,0);
  puVar10 = *(undefined4 **)(_UNK_0104d820 + 0x104d680);
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uVar3 = thunk_FUN_00f00cdc(*puVar10);
  System_Action_object____ctor_1f11414(uVar3,iVar1,**(undefined4 **)(_UNK_0104d824 + 0x104d6a0),0);
  puVar9 = *(undefined4 **)(_UNK_0104d828 + 0x104d6bc);
  PrimeTween_Sequence__ChainCallback_object__15b4c64(&uStack_68,&uStack_38,param_1,uVar3,0,*puVar9);
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_78,&uStack_38,0x3e800000,0);
  piVar8 = *(int **)(_UNK_0104d82c + 0x104d700);
  iVar1 = *piVar8;
  uStack_38 = uStack_78;
  uStack_34 = uStack_74;
  uStack_30 = uStack_70;
  uStack_2c = uStack_6c;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  puVar6 = *(undefined4 **)(iVar1 + 0x5c);
  iVar2 = puVar6[1];
  if (iVar2 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar6 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar3 = *puVar6;
    iVar2 = thunk_FUN_00f00cdc(*puVar10);
    System_Action_object____ctor_1f11414(iVar2,uVar3,**(undefined4 **)(_UNK_0104d830 + 0x104d768),0)
    ;
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
    *piVar8 = iVar2;
    thunk_FUN_00ec5080(piVar8,iVar2);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64(&uStack_48,&uStack_38,param_1,iVar2,0,*puVar9);
  Rotatelab_GameExtensions__PreventFailSearchDuringAnimation_fb5500
            (&uStack_48,uStack_3c,uStack_48,uStack_44,uStack_40,uStack_3c,0);
  Rotatelab_GameExtensions__PreventManualRotationDuringAnimation_fb5878
            (&uStack_48,uStack_3c,uStack_48,uStack_44,uStack_40,uStack_3c,0);
  return;
}

