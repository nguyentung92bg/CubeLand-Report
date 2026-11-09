/* IL2CPP: Rotatelab.Scripts.FlyingPiggyController$$Destroy
void Rotatelab_Scripts_FlyingPiggyController__Destroy (Rotatelab_Scripts_FlyingPiggyController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.FlyingPiggyController$$Destroy
   void Rotatelab_Scripts_FlyingPiggyController__Destroy (Rotatelab_Scripts_FlyingPiggyController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_FlyingPiggyController__Destroy_100e440(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
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
  
  pcVar8 = (char *)(_UNK_0101e808 + 0x101e458);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101e80c + 0x101e46c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101e810 + 0x101e478));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101e814 + 0x101e484));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101e818 + 0x101e490));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101e81c + 0x101e49c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101e820 + 0x101e4a8));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  uVar4 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,5,0);
  uVar6 = uStack_50;
  uVar3 = uStack_54;
  uVar2 = uStack_58;
  uVar1 = uStack_5c;
  uVar10 = uStack_60;
  if (*(int *)(**(int **)(_UNK_0101e824 + 0x101e520) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684
            (&uStack_60,uVar4,0x3f9c28f6,0x3e800000,uVar10,uVar1,uVar2,uVar3,uVar6,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_60,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  piVar9 = *(int **)(_UNK_0101e828 + 0x101e5a4);
  iVar5 = *piVar9;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_30 = uStack_58;
  uStack_2c = uStack_54;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar9;
  }
  puVar7 = *(undefined4 **)(iVar5 + 0x5c);
  iVar11 = puVar7[1];
  if (iVar11 == 0) {
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      puVar7 = *(undefined4 **)(*piVar9 + 0x5c);
    }
    uVar10 = *puVar7;
    iVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101e82c + 0x101e5f4));
    System_Action_object____ctor_1f11414
              (iVar11,uVar10,**(undefined4 **)(_UNK_0101e830 + 0x101e614),0);
    piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 4);
    *piVar9 = iVar11;
    thunk_FUN_00ec5080(piVar9,iVar11);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_48,&uStack_38,param_1,iVar11,0,**(undefined4 **)(_UNK_0101e834 + 0x101e648));
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  uVar6 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,6,0);
  uVar3 = uStack_54;
  uVar2 = uStack_58;
  uVar1 = uStack_5c;
  uVar10 = uStack_60;
  if (*(int *)(**(int **)(_UNK_0101e838 + 0x101e69c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684
            (&uStack_60,uVar6,0,0x3eb33333,uVar10,uVar1,uVar2,uVar3,uStack_50,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_60,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  piVar9 = *(int **)(_UNK_0101e83c + 0x101e720);
  iVar5 = *piVar9;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_30 = uStack_58;
  uStack_2c = uStack_54;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar9;
  }
  puVar7 = *(undefined4 **)(iVar5 + 0x5c);
  iVar11 = puVar7[2];
  if (iVar11 == 0) {
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      puVar7 = *(undefined4 **)(*piVar9 + 0x5c);
    }
    uVar10 = *puVar7;
    iVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101e840 + 0x101e774));
    System_Action_object____ctor_1f11414
              (iVar11,uVar10,**(undefined4 **)(_UNK_0101e844 + 0x101e794),0);
    piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 8);
    *piVar9 = iVar11;
    thunk_FUN_00ec5080(piVar9,iVar11);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_60,&uStack_38,param_1,iVar11,0,**(undefined4 **)(_UNK_0101e848 + 0x101e7c8));
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(param_1 + 0x28) = uStack_60;
  *(undefined4 *)(param_1 + 0x2c) = uStack_5c;
  *(undefined4 *)(param_1 + 0x30) = uStack_58;
  *(undefined4 *)(param_1 + 0x34) = uStack_54;
  thunk_FUN_00ec5080(param_1 + 0x30,0);
  return;
}

