/* IL2CPP: Rotatelab.Scripts.WallController$$Destroy
void Rotatelab_Scripts_WallController__Destroy (Rotatelab_Scripts_WallController_o* __this, bool playParticle, bool scaleUp, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.WallController$$Destroy
   void Rotatelab_Scripts_WallController__Destroy (Rotatelab_Scripts_WallController_o* __this, bool
   playParticle, bool scaleUp, const MethodInfo* method); */

void Rotatelab_Scripts_WallController__Destroy_105e828(int param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
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
  
  pcVar5 = (char *)(_UNK_0106ec34 + 0x106e848);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106ec38 + 0x106e85c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106ec3c + 0x106e868));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106ec40 + 0x106e874));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106ec44 + 0x106e880));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106ec48 + 0x106e88c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106ec4c + 0x106e898));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106ec50 + 0x106e8a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106ec54 + 0x106e8b0));
    *pcVar5 = '\x01';
  }
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  uStack_44 = uStack_54;
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0106ec58 + 0x106e8d0));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Grid_GridManager__ShowTargetablesAdjacentToCells_1108600
            (iVar1,*(undefined4 *)(param_1 + 0x18),0);
  *(undefined1 *)(param_1 + 0x14) = param_2;
  if (param_3 == 0) {
    PrimeTween_Sequence__Create_2cef1e0(&uStack_58,1,0,1,0,0,0);
  }
  else {
    PrimeTween_Sequence__Create_2cef1e0(&uStack_68,1,0,1,0,0,0);
    uStack_48 = uStack_68;
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    uVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (*(int *)(**(int **)(_UNK_0106ec5c + 0x106e96c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Scale_2ce4684(&uStack_78,uVar2,0x40000000,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_58,&uStack_48,uStack_78,uStack_74,uStack_70,uStack_6c,0);
  }
  piVar7 = *(int **)(_UNK_0106ec60 + 0x106ea1c);
  iVar1 = *piVar7;
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puVar4 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar4[1];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar4 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar2 = *puVar4;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106ec64 + 0x106ea6c));
    System_Action_object____ctor_1f11414(iVar6,uVar2,**(undefined4 **)(_UNK_0106ec68 + 0x106ea8c),0)
    ;
    piVar3 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
    *piVar3 = iVar6;
    thunk_FUN_00ec5080(piVar3,iVar6);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_68,&uStack_38,param_1,iVar6,0,**(undefined4 **)(_UNK_0106ec6c + 0x106eac8));
  uStack_48 = uStack_68;
  uStack_44 = uStack_64;
  uStack_40 = uStack_60;
  uStack_3c = uStack_5c;
  uVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (*(int *)(**(int **)(_UNK_0106ec70 + 0x106eaf8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684(&uStack_78,uVar2,0,0x3ecccccd,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_78,&uStack_48,uStack_78,uStack_74,uStack_70,uStack_6c,0);
  iVar1 = *piVar7;
  uStack_48 = uStack_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  uStack_3c = uStack_6c;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puVar4 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar4[2];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar4 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar2 = *puVar4;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106ec74 + 0x106ebc8));
    System_Action_object____ctor_1f11414(iVar6,uVar2,**(undefined4 **)(_UNK_0106ec78 + 0x106ebe8),0)
    ;
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 8);
    *piVar7 = iVar6;
    thunk_FUN_00ec5080(piVar7,iVar6);
  }
  PrimeTween_Sequence__OnComplete_object__15b4ffc
            (&uStack_68,&uStack_48,param_1,iVar6,0,**(undefined4 **)(_UNK_0106ec7c + 0x106ec18));
  return;
}

