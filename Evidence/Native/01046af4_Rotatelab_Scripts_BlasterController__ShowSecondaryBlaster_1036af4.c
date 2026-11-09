/* IL2CPP: Rotatelab.Scripts.BlasterController$$ShowSecondaryBlaster
void Rotatelab_Scripts_BlasterController__ShowSecondaryBlaster (Rotatelab_Scripts_BlasterController_o* __this, bool immediately, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$ShowSecondaryBlaster
   void Rotatelab_Scripts_BlasterController__ShowSecondaryBlaster
   (Rotatelab_Scripts_BlasterController_o* __this, bool immediately, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__ShowSecondaryBlaster_1036af4(int *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  code *pcVar9;
  int *piVar10;
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
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar7 = (char *)(_UNK_01046e7c + 0x1046b18);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01046e80 + 0x1046b2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01046e84 + 0x1046b38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01046e88 + 0x1046b44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01046e8c + 0x1046b50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01046e90 + 0x1046b5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01046e94 + 0x1046b68));
    *pcVar7 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_3c = uStack_4c;
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  Rotatelab_Scripts_BlasterController__SetShootingState_1036330(param_1,0);
  pcVar9 = *(code **)(*param_1 + 0x148);
  uVar4 = *(undefined4 *)(*param_1 + 0x14c);
  param_1[0x43] = param_1[0x44];
  param_1[0x44] = 0;
  param_1[0x45] = param_1[0x2d];
  (*pcVar9)(param_1,uVar4);
  iVar1 = Rotatelab_Scripts_BlasterController__get_UsesGhostDockScale_1034040(param_1);
  if (iVar1 == 0) {
    fVar2 = 1.0;
  }
  else {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01046e98 + 0x1046bd8));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar2 = (float)Rotatelab_Scripts_DockManager__get_GhostBlasterScale_1004494(iVar1,0);
  }
  PrimeTween_Sequence__Create_2cef1e0(&uStack_60,1,0,1,0,0,0);
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  uStack_48 = uStack_58;
  uStack_44 = uStack_54;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_70,&uStack_50,param_1[0x1c],0);
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  uStack_48 = uStack_68;
  uStack_44 = uStack_64;
  Rotatelab_Scripts_BlasterController__ScaleBlasterVisual_1033f58
            (&uStack_80,param_1,fVar2 * _UNK_01046e78,0x3da3d70a,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_80,&uStack_50,uStack_80,uStack_7c,uStack_78,uStack_74,0);
  piVar10 = *(int **)(_UNK_01046e9c + 0x1046ca4);
  iVar1 = *piVar10;
  uStack_50 = uStack_80;
  uStack_4c = uStack_7c;
  uStack_48 = uStack_78;
  uStack_44 = uStack_74;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar10;
  }
  puVar5 = *(undefined4 **)(iVar1 + 0x5c);
  iVar8 = puVar5[0xb];
  if (iVar8 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar5 = *(undefined4 **)(*piVar10 + 0x5c);
    }
    uVar4 = *puVar5;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01046ea0 + 0x1046cf4));
    System_Action_object____ctor_1f11414(iVar8,uVar4,**(undefined4 **)(_UNK_01046ea4 + 0x1046d14),0)
    ;
    piVar3 = (int *)(*(int *)(*piVar10 + 0x5c) + 0x2c);
    *piVar3 = iVar8;
    thunk_FUN_00ec5080(piVar3,iVar8);
  }
  puVar5 = *(undefined4 **)(_UNK_01046ea8 + 0x1046d4c);
  PrimeTween_Sequence__ChainCallback_object__15b4c64(&uStack_60,&uStack_50,param_1,iVar8,0,*puVar5);
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  uStack_48 = uStack_58;
  uStack_44 = uStack_54;
  Rotatelab_Scripts_BlasterController__ScaleBlasterVisual_1033f58
            (&uStack_70,param_1,fVar2,0x3df5c28f,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_70,&uStack_50,uStack_70,uStack_6c,uStack_68,uStack_64,0);
  iVar1 = *piVar10;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  uStack_48 = uStack_68;
  uStack_44 = uStack_64;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar10;
  }
  puVar6 = *(undefined4 **)(iVar1 + 0x5c);
  iVar8 = puVar6[0xc];
  if (iVar8 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar6 = *(undefined4 **)(*piVar10 + 0x5c);
    }
    uVar4 = *puVar6;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01046eac + 0x1046df8));
    System_Action_object____ctor_1f11414(iVar8,uVar4,**(undefined4 **)(_UNK_01046eb0 + 0x1046e18),0)
    ;
    piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 0x30);
    *piVar10 = iVar8;
    thunk_FUN_00ec5080(piVar10,iVar8);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64(&uStack_40,&uStack_50,param_1,iVar8,0,*puVar5);
  if (param_2 != 0) {
    PrimeTween_Sequence__Complete_2ceea60(&uStack_40,0);
  }
  return;
}

