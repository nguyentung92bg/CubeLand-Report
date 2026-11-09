/* IL2CPP: Rotatelab.Scripts.BlasterController$$OnShuffleSettled
void Rotatelab_Scripts_BlasterController__OnShuffleSettled (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$OnShuffleSettled
   void Rotatelab_Scripts_BlasterController__OnShuffleSettled
   (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__OnShuffleSettled_1034ab0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
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
  
  if ((param_1[8] == 0) || (*(char *)((int)param_1 + 0xc2) != '\0')) {
    uVar4 = 0;
    if (param_1[0x25] < 1) {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  (**(code **)(*param_1 + 0x110))(param_1,uVar4,*(undefined4 *)(*param_1 + 0x114));
  Rotatelab_Scripts_BlasterController__SetSkinnedMeshDetails_1034b3c(param_1,param_1[8] == 0);
  if (param_1[8] != 0) {
    return;
  }
  if (*(char *)((int)param_1 + 0xc2) == '\0') {
    return;
  }
  pcVar5 = (char *)(_UNK_01044a84 + 0x1044834);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01044a88 + 0x1044848));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01044a8c + 0x1044854));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01044a90 + 0x1044860));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01044a94 + 0x104486c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01044a98 + 0x1044878));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01044a9c + 0x1044894));
  iVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_48,iVar2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_BulletParticleManager__EmitHiddenReveal_ffa62c
            (iVar1,uStack_48,uStack_44,uStack_40,0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  Rotatelab_Scripts_BlasterController__ScaleBlasterVisual_1033f58
            (&uStack_58,param_1,0x3f99999a,0x3dcccccd,2);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_58,&uStack_38,uStack_58,uStack_54,uStack_50,uStack_4c,0);
  piVar6 = *(int **)(_UNK_01044aa0 + 0x1044980);
  iVar1 = *piVar6;
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar2 = puVar3[6];
  if (iVar2 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar6 + 0x5c);
    }
    uVar4 = *puVar3;
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01044aa4 + 0x10449d0));
    System_Action_object____ctor_1f11414(iVar2,uVar4,**(undefined4 **)(_UNK_01044aa8 + 0x10449f0),0)
    ;
    piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 0x18);
    *piVar6 = iVar2;
    thunk_FUN_00ec5080(piVar6,iVar2);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_48,&uStack_38,param_1,iVar2,0,**(undefined4 **)(_UNK_01044aac + 0x1044a28));
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  Rotatelab_Scripts_BlasterController__ScaleBlasterVisual_1033f58
            (&uStack_58,param_1,0x3f800000,0x3e19999a,3);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_58,&uStack_38,uStack_58,uStack_54,uStack_50,uStack_4c,0);
  return;
}

