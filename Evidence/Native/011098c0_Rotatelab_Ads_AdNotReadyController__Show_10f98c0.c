/* IL2CPP: Rotatelab.Ads.AdNotReadyController$$Show
void Rotatelab_Ads_AdNotReadyController__Show (Rotatelab_Ads_AdNotReadyController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdNotReadyController$$Show
   void Rotatelab_Ads_AdNotReadyController__Show (Rotatelab_Ads_AdNotReadyController_o* __this,
   const MethodInfo* method); */

void Rotatelab_Ads_AdNotReadyController__Show_10f98c0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_80;
  undefined4 uStack_7c;
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
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_01109cb4 + 0x11098d8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109cb8 + 0x11098ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109cbc + 0x11098f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109cc0 + 0x1109904));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109cc4 + 0x1109910));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109cc8 + 0x110991c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109ccc + 0x1109928));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109cd0 + 0x1109934));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109cd4 + 0x1109940));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109cd8 + 0x110994c));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar7 = *(int **)(param_1 + 0x14);
  uStack_38 = 0;
  if (*(int *)(**(int **)(_UNK_01109cdc + 0x1109968) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = UnityEngine_Application__get_internetReachability_35a8364(0);
  puVar5 = *(undefined4 **)(_UNK_01109ce4 + 0x11099a0);
  if (iVar4 == 0) {
    puVar5 = *(undefined4 **)(_UNK_01109ce0 + 0x1109998);
  }
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar7 + 0x2b0))(piVar7,*puVar5,*(undefined4 *)(*piVar7 + 0x2b4));
  uVar8 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(**(int **)(_UNK_01109ce8 + 0x11099d4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__SetAnchoredPosY_fc1f84(uVar8,0x443b8000,0);
  iVar4 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar4,1,0);
  PrimeTween_Sequence__Stop_2cf07bc((undefined4 *)(param_1 + 0x18),0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,0x1b,0);
  uVar3 = uStack_50;
  uVar2 = uStack_54;
  uVar1 = uStack_58;
  uVar10 = uStack_5c;
  uVar8 = uStack_60;
  if (*(int *)(**(int **)(_UNK_01109cec + 0x1109a88) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__UIAnchoredPositionY_2ce79a8
            (&uStack_60,uVar11,0x443b8000,0,0x3eb33333,uVar8,uVar10,uVar1,uVar2,uVar3,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_70,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  uStack_38 = uStack_70;
  uStack_34 = uStack_6c;
  uStack_30 = uStack_68;
  uStack_2c = uStack_64;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_80,&uStack_38,0x3fc00000,0);
  uVar8 = *(undefined4 *)(param_1 + 0x10);
  uStack_38 = uStack_80;
  uStack_34 = uStack_7c;
  uStack_30 = uStack_78;
  uStack_2c = uStack_74;
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,0x1a,0);
  PrimeTween_Tween__UIAnchoredPositionY_2ce7730
            (&uStack_60,uVar8,0x443b8000,0x3eb33333,uStack_60,uStack_5c,uStack_58,uStack_54,
             uStack_50,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_60,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_30 = uStack_58;
  uStack_2c = uStack_54;
  uVar8 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  piVar7 = *(int **)(_UNK_01109cf0 + 0x1109be8);
  iVar4 = *piVar7;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar7;
  }
  puVar5 = *(undefined4 **)(iVar4 + 0x5c);
  iVar9 = puVar5[1];
  if (iVar9 == 0) {
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      puVar5 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar10 = *puVar5;
    iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01109cf4 + 0x1109c30));
    System_Action_object____ctor_1f11414
              (iVar9,uVar10,**(undefined4 **)(_UNK_01109cf8 + 0x1109c50),0);
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
    *piVar7 = iVar9;
    thunk_FUN_00ec5080(piVar7,iVar9);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_60,&uStack_38,uVar8,iVar9,0,**(undefined4 **)(_UNK_01109cfc + 0x1109c80));
  *(undefined4 *)(param_1 + 0x18) = uStack_60;
  *(undefined4 *)(param_1 + 0x1c) = uStack_5c;
  *(undefined4 *)(param_1 + 0x20) = uStack_58;
  *(undefined4 *)(param_1 + 0x24) = uStack_54;
  thunk_FUN_00ec5080(param_1 + 0x20,0);
  return;
}

