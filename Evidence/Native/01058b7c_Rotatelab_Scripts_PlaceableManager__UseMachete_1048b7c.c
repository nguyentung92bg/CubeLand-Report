/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$UseMachete
void Rotatelab_Scripts_PlaceableManager__UseMachete (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_Scripts_MacheteController_o* machete, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$UseMachete
   void Rotatelab_Scripts_PlaceableManager__UseMachete (Rotatelab_Scripts_PlaceableManager_o*
   __this, Rotatelab_Scripts_MacheteController_o* machete, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__UseMachete_1048b7c(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
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
  
  Rotatelab_Scripts_PlaceableManager__RemovePlaceableFromQueue_10478e4();
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = (char *)(_UNK_0104f004 + 0x104ead4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104f008 + 0x104eae8),0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104f00c + 0x104eaf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104f010 + 0x104eb00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104f014 + 0x104eb0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104f018 + 0x104eb18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104f01c + 0x104eb24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104f020 + 0x104eb30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104f024 + 0x104eb3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104f028 + 0x104eb48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104f02c + 0x104eb54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104f030 + 0x104eb60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104f034 + 0x104eb6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104f038 + 0x104eb78));
    *pcVar4 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0104f03c + 0x104eb94));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar8 = *(int **)(_UNK_0104f040 + 0x104ebb8);
  uVar6 = *(undefined4 *)(iVar1 + 0x44);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar7 = puVar3[1];
  if (iVar7 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar5 = *puVar3;
    iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104f044 + 0x104ec04));
    System_Predicate_object____ctor_1876380
              (iVar7,uVar5,**(undefined4 **)(_UNK_0104f048 + 0x104ec24),0);
    piVar2 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
    *piVar2 = iVar7;
    thunk_FUN_00ec5080(piVar2,iVar7);
  }
  if (*(int *)(**(int **)(_UNK_0104f04c + 0x104ec4c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__Find_object__1486ad0
                    (uVar6,iVar7,**(undefined4 **)(_UNK_0104f050 + 0x104ec6c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(iVar1 + 0x48);
  thunk_FUN_00ec5080();
  Rotatelab_Scripts_MacheteController__UpdateAnimationState_103e9b4(param_2,2,0);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar7 = puVar3[2];
  if (iVar7 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar6 = *puVar3;
    iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104f054 + 0x104ecf0));
    System_Action___ctor_2b10bac(iVar7,uVar6,**(undefined4 **)(_UNK_0104f058 + 0x104ed10),0);
    piVar2 = (int *)(*(int *)(*piVar8 + 0x5c) + 8);
    *piVar2 = iVar7;
    thunk_FUN_00ec5080(piVar2,iVar7);
  }
  if (*(int *)(**(int **)(_UNK_0104f05c + 0x104ed38) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Delay_2ce9f2c(&uStack_60,0x3ecccccd,iVar7,0,0,0);
  uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104f060 + 0x104ed78));
  System_Action___ctor_2b10bac(uVar6,param_2,**(undefined4 **)(_UNK_0104f064 + 0x104ed94),0);
  PrimeTween_Tween__Delay_2ce9f2c(&uStack_60,0x3f19999a,uVar6,0,0,0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_60,1,0,1,0,0,0);
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  uStack_48 = uStack_58;
  uStack_44 = uStack_54;
  if (*(int *)(param_2 + 0x6c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_2 + 0x6c),0);
  uVar5 = *(undefined4 *)(param_2 + 0x68);
  pcVar4 = (char *)(_UNK_0104f068 + 0x104ee18);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104f06c + 0x104ee2c));
    *pcVar4 = '\x01';
  }
  piVar2 = *(int **)(_UNK_0104f070 + 0x104ee44);
  iVar1 = *(int *)(*piVar2 + 0x5c);
  fVar11 = *(float *)(iVar1 + 0x3c) * _UNK_0104effc;
  fVar10 = *(float *)(iVar1 + 0x40) * _UNK_0104effc;
  fVar9 = *(float *)(iVar1 + 0x44) * _UNK_0104effc;
  pcVar4 = (char *)(_UNK_0104f074 + 0x104ee6c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(piVar2);
    iVar1 = *piVar2;
    *pcVar4 = '\x01';
    iVar1 = *(int *)(iVar1 + 0x5c);
  }
  Rotatelab_Scripts_BasePlaceableController__MoveToTransform_103089c
            (&uStack_70,param_2,uVar6,uVar5,fVar11 + *(float *)(iVar1 + 0x18) * _UNK_0104f000,
             fVar10 + *(float *)(iVar1 + 0x1c) * _UNK_0104f000,
             fVar9 + *(float *)(iVar1 + 0x20) * _UNK_0104f000,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_70,&uStack_50,uStack_70,uStack_6c,uStack_68,uStack_64,0);
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  uStack_48 = uStack_68;
  uStack_44 = uStack_64;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_80,&uStack_50,0x3dcccccd,0);
  iVar1 = *piVar8;
  uStack_50 = uStack_80;
  uStack_4c = uStack_7c;
  uStack_48 = uStack_78;
  uStack_44 = uStack_74;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar7 = puVar3[3];
  if (iVar7 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar6 = *puVar3;
    iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104f078 + 0x104ef6c));
    System_Action_object____ctor_1f11414(iVar7,uVar6,**(undefined4 **)(_UNK_0104f07c + 0x104ef8c),0)
    ;
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0xc);
    *piVar8 = iVar7;
    thunk_FUN_00ec5080(piVar8,iVar7);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_60,&uStack_50,param_2,iVar7,0,**(undefined4 **)(_UNK_0104f080 + 0x104efc0));
  Rotatelab_GameExtensions__PreventFailSearchDuringAnimation_fb5500
            (&uStack_60,uStack_54,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  return;
}

