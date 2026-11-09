/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$Destroy
void Rotatelab_Scripts_ShrinkingCoverController__Destroy (Rotatelab_Scripts_ShrinkingCoverController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$Destroy
   void Rotatelab_Scripts_ShrinkingCoverController__Destroy
   (Rotatelab_Scripts_ShrinkingCoverController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ShrinkingCoverController__Destroy_10523a4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  pcVar3 = (char *)(_UNK_0106274c + 0x10623bc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01062750 + 0x10623d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01062754 + 0x10623dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01062758 + 0x10623e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106275c + 0x10623f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01062760 + 0x1062400));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01062764 + 0x106240c));
    *pcVar3 = '\x01';
  }
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  puVar6 = *(undefined4 **)(_UNK_01062768 + 0x1062428);
  iStack_38 = 0;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
  uVar2 = (**(code **)(*param_1 + 0x100))(param_1,*(undefined4 *)(*param_1 + 0x104));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Grid_GridManager__RemoveFromGrid_1107024(iVar1,param_1,uVar2,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
  uVar2 = (**(code **)(*param_1 + 0x100))(param_1,*(undefined4 *)(*param_1 + 0x104));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Grid_GridManager__ShowTargetablesAdjacentToCells_1108600(iVar1,uVar2,0);
  if (param_1[0xf] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1[0xf],0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Transform__get_parent_36148d8(iVar1,0);
  iVar4 = param_1[0x13];
  Rotatelab_Scripts_ShrinkingCoverController__GetCollapseOrigin_1052780(&iStack_48,param_1);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_position_3614acc(iVar4,iStack_48,iStack_44,iStack_40,0);
  iVar5 = param_1[0x13];
  iVar4 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_rotation_3614cfc(&iStack_48,iVar4,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_rotation_3614e20(iVar5,iStack_48,iStack_44,iStack_40,iStack_3c,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetParent_3615994(iVar1,param_1[0x13],1,0);
  if (param_1[0x14] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc(param_1[0x14],1,0);
  if (param_1[0x14] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Animator__Play_35915ac
            (param_1[0x14],**(undefined4 **)(_UNK_0106276c + 0x1062600),0,0,0);
  PrimeTween_Sequence__Create_2cef1e0(&iStack_48,1,0,1,0,0,0);
  iStack_38 = iStack_48;
  iStack_34 = iStack_44;
  iStack_30 = iStack_40;
  iStack_2c = iStack_3c;
  if (param_1[0x15] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_AnimationClip__get_length_35901e8(param_1[0x15],0);
  PrimeTween_Sequence__ChainDelay_2cf0394(&iStack_58,&iStack_38,uVar2,0);
  piVar7 = *(int **)(_UNK_01062770 + 0x1062678);
  iVar1 = *piVar7;
  iStack_38 = iStack_58;
  iStack_34 = uStack_54;
  iStack_30 = uStack_50;
  iStack_2c = uStack_4c;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puVar6 = *(undefined4 **)(iVar1 + 0x5c);
  iVar4 = puVar6[3];
  if (iVar4 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar6 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar2 = *puVar6;
    iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01062774 + 0x10626c8));
    System_Action_object____ctor_1f11414(iVar4,uVar2,**(undefined4 **)(_UNK_01062778 + 0x10626e8),0)
    ;
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 0xc);
    *piVar7 = iVar4;
    thunk_FUN_00ec5080(piVar7,iVar4);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&iStack_48,&iStack_38,param_1,iVar4,0,**(undefined4 **)(_UNK_0106277c + 0x1062718));
  param_1[10] = iStack_48;
  param_1[0xb] = iStack_44;
  param_1[0xc] = iStack_40;
  param_1[0xd] = iStack_3c;
  thunk_FUN_00ec5080(param_1 + 0xc,0);
  return;
}

