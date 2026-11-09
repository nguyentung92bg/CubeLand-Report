/* IL2CPP: Rotatelab.Scripts.DoubleLargeVoxelController$$OnVisualHealthOfPieceIsDepleted
void Rotatelab_Scripts_DoubleLargeVoxelController__OnVisualHealthOfPieceIsDepleted (Rotatelab_Scripts_DoubleLargeVoxelController_o* __this, Rotatelab_Scripts_LargeVoxelController_o* largeVoxel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DoubleLargeVoxelController$$OnVisualHealthOfPieceIsDepleted
   void Rotatelab_Scripts_DoubleLargeVoxelController__OnVisualHealthOfPieceIsDepleted
   (Rotatelab_Scripts_DoubleLargeVoxelController_o* __this,
   Rotatelab_Scripts_LargeVoxelController_o* largeVoxel, const MethodInfo* method); */

void Rotatelab_Scripts_DoubleLargeVoxelController__OnVisualHealthOfPieceIsDepleted_1013fec
               (int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
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
  
  pcVar8 = (char *)(_UNK_010242ec + 0x1024004);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010242f0 + 0x1024018));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010242f4 + 0x1024024));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010242f8 + 0x1024030));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010242fc + 0x102403c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01024300 + 0x1024048));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar4 = *(int *)(param_1 + 0x38) + -1;
  *(int *)(param_1 + 0x38) = iVar4;
  uStack_38 = 0;
  if (iVar4 < 1) {
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_LargeVoxelController__OnVisualHealthDepleted_1014318(*(int *)(param_1 + 0x20))
    ;
    if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_LargeVoxelController__OnVisualHealthDepleted_1014318(*(int *)(param_1 + 0x24))
    ;
    PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    uVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,5,0);
    uVar3 = uStack_50;
    uVar2 = uStack_54;
    uVar1 = uStack_58;
    uVar10 = uStack_5c;
    uVar6 = uStack_60;
    if (*(int *)(**(int **)(_UNK_01024304 + 0x10240fc) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Scale_2ce4684
              (&uStack_60,uVar5,0x3f9c28f6,0x3d75c28f,uVar6,uVar10,uVar1,uVar2,uVar3,1,0,0,0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_70,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
    uStack_38 = uStack_70;
    uStack_34 = uStack_6c;
    uStack_30 = uStack_68;
    uStack_2c = uStack_64;
    uVar6 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,6,0);
    PrimeTween_Tween__Scale_2ce4684
              (&uStack_60,uVar6,0,0x3e19999a,uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,1,0,0
               ,0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_60,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_30 = uStack_58;
    uStack_2c = uStack_54;
    uVar6 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
    piVar11 = *(int **)(_UNK_01024308 + 0x1024238);
    iVar4 = *piVar11;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar11;
    }
    puVar7 = *(undefined4 **)(iVar4 + 0x5c);
    iVar9 = puVar7[1];
    if (iVar9 == 0) {
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        puVar7 = *(undefined4 **)(*piVar11 + 0x5c);
      }
      uVar10 = *puVar7;
      iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0102430c + 0x1024280));
      System_Action_object____ctor_1f11414
                (iVar9,uVar10,**(undefined4 **)(_UNK_01024310 + 0x10242a0),0);
      piVar11 = (int *)(*(int *)(*piVar11 + 0x5c) + 4);
      *piVar11 = iVar9;
      thunk_FUN_00ec5080(piVar11,iVar9);
    }
    PrimeTween_Sequence__ChainCallback_object__15b4c64
              (&uStack_60,&uStack_38,uVar6,iVar9,0,**(undefined4 **)(_UNK_01024314 + 0x10242d0));
  }
  return;
}

