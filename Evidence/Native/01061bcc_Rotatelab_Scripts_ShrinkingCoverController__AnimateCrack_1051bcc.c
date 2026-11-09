/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$AnimateCrack
void Rotatelab_Scripts_ShrinkingCoverController__AnimateCrack (Rotatelab_Scripts_ShrinkingCoverController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$AnimateCrack
   void Rotatelab_Scripts_ShrinkingCoverController__AnimateCrack
   (Rotatelab_Scripts_ShrinkingCoverController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ShrinkingCoverController__AnimateCrack_1051bcc(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_01061fc4 + 0x1061be4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01061fc8 + 0x1061bf8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01061fcc + 0x1061c04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01061fd0 + 0x1061c10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01061fd4 + 0x1061c1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01061fd8 + 0x1061c28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01061fdc + 0x1061c34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01061fe0 + 0x1061c40));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (*(float *)(param_1 + 0x90) <= *(float *)(param_1 + 0x84)) {
    fVar8 = _UNK_01061fc0;
    if (*(float *)(param_1 + 0x78) < _UNK_01061fc0) {
      fVar8 = *(float *)(param_1 + 0x78);
    }
    *(float *)(param_1 + 0x74) = *(float *)(param_1 + 0x74) + fVar8;
    if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = UnityEngine_SkinnedMeshRenderer__GetBlendShapeWeight_35ce4bc
                      (*(int *)(param_1 + 0x3c),2,0);
    piVar2 = *(int **)(_UNK_01061ffc + 0x1061e5c);
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    if (*(int *)(*piVar2 + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Stop_2ced694((undefined4 *)(param_1 + 0x98),0);
    uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    uVar3 = *(undefined4 *)(param_1 + 0x74);
    uVar7 = *(undefined4 *)(param_1 + 0x70);
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01062000 + 0x1061ea4));
    System_Action_object__float____ctor_1f19254
              (uVar4,param_1,**(undefined4 **)(_UNK_01062004 + 0x1061ec0),0);
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,1,0);
    PrimeTween_Tween__Custom_object__15d5b3c
              (&uStack_50,uVar1,uVar7,uVar3,0x3e800000,uVar4,uStack_50,uStack_4c,uStack_48,uStack_44
               ,uStack_40,1,0,0,0,0,**(undefined4 **)(_UNK_01062008 + 0x1061ef0));
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106200c + 0x1061f54));
    System_Action___ctor_2b10bac(uVar1,param_1,**(undefined4 **)(_UNK_01062010 + 0x1061f74),0);
    PrimeTween_Tween__OnComplete_2ceddf8(&uStack_60,&uStack_38,uVar1,0,0);
    *(undefined4 *)(param_1 + 0x98) = uStack_60;
    *(undefined4 *)(param_1 + 0x9c) = uStack_5c;
    *(undefined4 *)(param_1 + 0xa0) = uStack_58;
    *(undefined4 *)(param_1 + 0xa4) = uStack_54;
    iVar5 = param_1 + 0xa0;
  }
  else {
    fVar8 = _UNK_01061fc0;
    if (*(float *)(param_1 + 0x7c) < _UNK_01061fc0) {
      fVar8 = *(float *)(param_1 + 0x7c);
    }
    *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) + fVar8;
    if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = UnityEngine_SkinnedMeshRenderer__GetBlendShapeWeight_35ce4bc
                      (*(int *)(param_1 + 0x3c),3,0);
    piVar2 = *(int **)(_UNK_01061fe4 + 0x1061cb8);
    *(undefined4 *)(param_1 + 0x80) = uVar1;
    if (*(int *)(*piVar2 + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Stop_2ced694((undefined4 *)(param_1 + 0xb8),0);
    uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    uVar3 = *(undefined4 *)(param_1 + 0x84);
    uVar7 = *(undefined4 *)(param_1 + 0x80);
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01061fe8 + 0x1061d00));
    System_Action_object__float____ctor_1f19254
              (uVar4,param_1,**(undefined4 **)(_UNK_01061fec + 0x1061d1c),0);
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,1,0);
    PrimeTween_Tween__Custom_object__15d5b3c
              (&uStack_50,uVar1,uVar7,uVar3,0x3e800000,uVar4,uStack_50,uStack_4c,uStack_48,uStack_44
               ,uStack_40,1,0,0,0,0,**(undefined4 **)(_UNK_01061ff0 + 0x1061d4c));
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01061ff4 + 0x1061db0));
    System_Action___ctor_2b10bac(uVar1,param_1,**(undefined4 **)(_UNK_01061ff8 + 0x1061dd0),0);
    PrimeTween_Tween__OnComplete_2ceddf8(&uStack_60,&uStack_38,uVar1,0,0);
    *(undefined4 *)(param_1 + 0xb8) = uStack_60;
    *(undefined4 *)(param_1 + 0xbc) = uStack_5c;
    *(undefined4 *)(param_1 + 0xc0) = uStack_58;
    *(undefined4 *)(param_1 + 0xc4) = uStack_54;
    iVar5 = param_1 + 0xc0;
  }
  thunk_FUN_00ec5080(iVar5,0);
  Rotatelab_Scripts_ShrinkingCoverController__RemoveCrossedZLayersFromGrid_10522b4(param_1);
  return;
}

