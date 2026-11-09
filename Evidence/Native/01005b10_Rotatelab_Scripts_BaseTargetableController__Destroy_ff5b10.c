/* IL2CPP: Rotatelab.Scripts.BaseTargetableController$$Destroy
void Rotatelab_Scripts_BaseTargetableController__Destroy (Rotatelab_Scripts_BaseTargetableController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BaseTargetableController$$Destroy
   void Rotatelab_Scripts_BaseTargetableController__Destroy
   (Rotatelab_Scripts_BaseTargetableController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BaseTargetableController__Destroy_ff5b10(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  pcVar9 = (char *)(_UNK_0100602c + 0x1005b30);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01006030 + 0x1005b44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01006034 + 0x1005b50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01006038 + 0x1005b5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100603c + 0x1005b68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01006040 + 0x1005b74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01006044 + 0x1005b80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01006048 + 0x1005b8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100604c + 0x1005b98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01006050 + 0x1005ba4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01006054 + 0x1005bb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01006058 + 0x1005bbc));
    *pcVar9 = '\x01';
  }
  iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_40 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_3c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  puVar10 = *(undefined4 **)(_UNK_0100605c + 0x1005bd8);
  iStack_48 = 0;
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
  uVar5 = (**(code **)(*param_1 + 0x100))(param_1,*(undefined4 *)(*param_1 + 0x104));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Grid_GridManager__RemoveFromGrid_1107024(iVar4,param_1,uVar5,0);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
  uVar5 = (**(code **)(*param_1 + 0x100))(param_1,*(undefined4 *)(*param_1 + 0x104));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Grid_GridManager__ShowTargetablesAdjacentToCells_1108600(iVar4,uVar5,0);
  uVar6 = (uint)*(byte *)(**(int **)(_UNK_01006060 + 0x1005c6c) + 0xb8);
  if ((uVar6 <= *(byte *)(*param_1 + 0xb8)) &&
     (*(int *)(*(int *)(*param_1 + 100) + uVar6 * 4 + -4) == **(int **)(_UNK_01006060 + 0x1005c6c)))
  {
    Rotatelab_Scripts_BaseTargetableController__PlayDestructionSfx_ff608c();
    piVar11 = *(int **)(_UNK_01006064 + 0x1005d54);
    iVar4 = *piVar11;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar11;
    }
    iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 8);
    if (iVar4 != 0) {
      Rotatelab_GameAction_object___Raise_23a2f44
                (iVar4,param_1,**(undefined4 **)(_UNK_01006068 + 0x1005d8c));
                    /* WARNING: Could not recover jumptable at 0x01005db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x140))(param_1,*(undefined4 *)(*param_1 + 0x144));
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  PrimeTween_Sequence__Create_2cef1e0(&iStack_60,1,0,1,0,0,0);
  iStack_48 = iStack_60;
  iStack_44 = iStack_5c;
  iStack_40 = iStack_58;
  iStack_3c = iStack_54;
  uVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  iVar4 = *param_1;
  uVar8 = (uint)*(byte *)(**(int **)(_UNK_0100606c + 0x1005cdc) + 0xb8);
  uVar6 = (uint)*(byte *)(iVar4 + 0xb8);
  if ((uVar6 < uVar8) ||
     (*(int *)(*(int *)(iVar4 + 100) + uVar8 * 4 + -4) != **(int **)(_UNK_0100606c + 0x1005cdc))) {
    iVar7 = **(int **)(_UNK_01006074 + 0x1005d10);
    uVar8 = (uint)*(byte *)(iVar7 + 0xb8);
    uVar12 = _UNK_01006014;
    if (uVar8 <= uVar6) {
      puVar10 = (undefined4 *)&UNK_01006018;
      if (*(int *)(*(int *)(iVar4 + 100) + uVar8 * 4 + -4) == iVar7) {
        puVar10 = (undefined4 *)&UNK_0100601c;
      }
      uVar12 = *puVar10;
    }
  }
  else {
    iVar7 = **(int **)(_UNK_01006070 + 0x1005dc8);
    uVar8 = (uint)*(byte *)(iVar7 + 0xb8);
    uVar12 = _UNK_01006010;
  }
  uVar13 = _UNK_01006020;
  if (uVar8 <= uVar6) {
    puVar10 = (undefined4 *)&UNK_01006024;
    if (*(int *)(*(int *)(iVar4 + 100) + uVar8 * 4 + -4) == iVar7) {
      puVar10 = (undefined4 *)&UNK_01006028;
    }
    uVar13 = *puVar10;
  }
  PrimeTween_Easing__op_Implicit_2ce2e54(&iStack_60,5,0);
  uVar3 = uStack_50;
  iVar2 = iStack_54;
  iVar1 = iStack_58;
  iVar7 = iStack_5c;
  iVar4 = iStack_60;
  if (*(int *)(**(int **)(_UNK_01006078 + 0x1005e1c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684
            (&iStack_60,uVar5,uVar12,uVar13,iVar4,iVar7,iVar1,iVar2,uVar3,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&iStack_70,&iStack_48,iStack_60,iStack_5c,iStack_58,iStack_54,0);
  iStack_48 = iStack_70;
  iStack_44 = uStack_6c;
  iStack_40 = uStack_68;
  iStack_3c = uStack_64;
  uVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  PrimeTween_Easing__op_Implicit_2ce2e54(&iStack_60,6,0);
  PrimeTween_Tween__Scale_2ce4684
            (&iStack_60,uVar5,0,0x3e19999a,iStack_60,iStack_5c,iStack_58,iStack_54,uStack_50,1,0,0,0
             ,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&iStack_60,&iStack_48,iStack_60,iStack_5c,iStack_58,iStack_54,0);
  piVar11 = *(int **)(_UNK_0100607c + 0x1005f34);
  iVar4 = *piVar11;
  iStack_48 = iStack_60;
  iStack_44 = iStack_5c;
  iStack_40 = iStack_58;
  iStack_3c = iStack_54;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar11;
  }
  puVar10 = *(undefined4 **)(iVar4 + 0x5c);
  iVar7 = puVar10[1];
  if (iVar7 == 0) {
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      puVar10 = *(undefined4 **)(*piVar11 + 0x5c);
    }
    uVar5 = *puVar10;
    iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01006080 + 0x1005f84));
    System_Action_object____ctor_1f11414(iVar7,uVar5,**(undefined4 **)(_UNK_01006084 + 0x1005fa4),0)
    ;
    piVar11 = (int *)(*(int *)(*piVar11 + 0x5c) + 4);
    *piVar11 = iVar7;
    thunk_FUN_00ec5080(piVar11,iVar7);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&iStack_60,&iStack_48,param_1,iVar7,0,**(undefined4 **)(_UNK_01006088 + 0x1005fd4));
  param_1[10] = iStack_60;
  param_1[0xb] = iStack_5c;
  param_1[0xc] = iStack_58;
  param_1[0xd] = iStack_54;
  thunk_FUN_00ec5080(param_1 + 0xc,0);
  return;
}

