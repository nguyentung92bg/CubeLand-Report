/* IL2CPP: Rotatelab.Scripts.KeyController$$Unlock
void Rotatelab_Scripts_KeyController__Unlock (Rotatelab_Scripts_KeyController_o* __this, Rotatelab_Scripts_LockController_o* targetLock, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.KeyController$$Unlock
   void Rotatelab_Scripts_KeyController__Unlock (Rotatelab_Scripts_KeyController_o* __this,
   Rotatelab_Scripts_LockController_o* targetLock, const MethodInfo* method); */

void Rotatelab_Scripts_KeyController__Unlock_103ddf8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  float fVar12;
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
  
  pcVar6 = (char *)(_UNK_0104e4b0 + 0x104de1c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104e4b4 + 0x104de30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104e4b8 + 0x104de3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104e4bc + 0x104de48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104e4c0 + 0x104de54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104e4c4 + 0x104de60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104e4c8 + 0x104de6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104e4cc + 0x104de78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104e4d0 + 0x104de84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104e4d4 + 0x104de90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104e4d8 + 0x104de9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104e4dc + 0x104dea8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104e4e0 + 0x104deb4));
    *pcVar6 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar7 = *(undefined4 *)(param_1 + 0x44);
  uStack_50 = 0;
  if (*(int *)(**(int **)(_UNK_0104e4e4 + 0x104ded0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar7,0,0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_BaseDockController__Empty_100b530(*(int *)(param_1 + 0x44),param_1,0);
    iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__SetParent_3615994(iVar1,0,1,0);
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined1 *)(param_2 + 0x44) = 1;
  Rotatelab_Scripts_UtilityPlaceableController__StopRotationTween_104d840(param_1,0);
  pcVar6 = (char *)(_UNK_0104e4e8 + 0x104df80);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104e4ec + 0x104df94));
    *pcVar6 = '\x01';
  }
  piVar9 = *(int **)(_UNK_0104e4f0 + 0x104dfa4);
  iVar1 = *(int *)(*piVar9 + 0x5c);
  Rotatelab_Scripts_UtilityPlaceableController__Scale_104e45c
            (param_1,*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),
             *(undefined4 *)(iVar1 + 0x14),0);
  *(undefined4 *)(param_1 + 0x68) = 3;
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Animator__SetFloat_35902e4
            (*(int *)(param_1 + 0x10),**(undefined4 **)(_UNK_0104e4f4 + 0x104dfec),0,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Animator__CrossFadeInFixedTime_3591034
            (*(int *)(param_1 + 0x10),**(undefined4 **)(_UNK_0104e4f8 + 0x104e018),0x3ec00000,0,0,0)
  ;
  PrimeTween_Sequence__Create_2cef1e0(&uStack_60,1,0,1,0,0,0);
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  uStack_48 = uStack_58;
  uStack_44 = uStack_54;
  uVar7 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  pcVar6 = (char *)(_UNK_0104e4fc + 0x104e074);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104e500 + 0x104e088));
    *pcVar6 = '\x01';
  }
  iVar1 = *(int *)(*piVar9 + 0x5c);
  fVar12 = *(float *)(iVar1 + 0x18) * _UNK_0104e0cc;
  fVar11 = *(float *)(iVar1 + 0x1c) * _UNK_0104e0cc;
  fVar10 = *(float *)(iVar1 + 0x20) * _UNK_0104e0cc;
  pcVar6 = (char *)(_UNK_0104e504 + 0x104e0c0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(piVar9);
    iVar1 = *piVar9;
    *pcVar6 = '\x01';
    iVar1 = *(int *)(iVar1 + 0x5c);
  }
  Rotatelab_Scripts_BasePlaceableController__MoveToTransform_103089c
            (&uStack_70,param_1,uVar7,0x3ec00000,fVar12 + *(float *)(iVar1 + 0x54) * _UNK_0104e4ac,
             fVar11 + *(float *)(iVar1 + 0x58) * _UNK_0104e4ac,
             fVar10 + *(float *)(iVar1 + 0x5c) * _UNK_0104e4ac,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_70,&uStack_50,uStack_70,uStack_6c,uStack_68,uStack_64,0);
  piVar9 = *(int **)(_UNK_0104e508 + 0x104e15c);
  iVar1 = *piVar9;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  uStack_48 = uStack_68;
  uStack_44 = uStack_64;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar9;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar8 = puVar3[1];
  if (iVar8 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar9 + 0x5c);
    }
    uVar7 = *puVar3;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104e50c + 0x104e1ac));
    System_Action_object____ctor_1f11414(iVar8,uVar7,**(undefined4 **)(_UNK_0104e510 + 0x104e1cc),0)
    ;
    piVar2 = (int *)(*(int *)(*piVar9 + 0x5c) + 4);
    *piVar2 = iVar8;
    thunk_FUN_00ec5080(piVar2,iVar8);
  }
  puVar3 = *(undefined4 **)(_UNK_0104e514 + 0x104e200);
  PrimeTween_Sequence__ChainCallback_object__15b4c64(&uStack_60,&uStack_50,param_1,iVar8,0,*puVar3);
  iVar1 = *piVar9;
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  uStack_48 = uStack_58;
  uStack_44 = uStack_54;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar9;
  }
  puVar4 = *(undefined4 **)(iVar1 + 0x5c);
  iVar8 = puVar4[2];
  if (iVar8 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar4 = *(undefined4 **)(*piVar9 + 0x5c);
    }
    uVar7 = *puVar4;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104e518 + 0x104e268));
    System_Action_object____ctor_1f11414(iVar8,uVar7,**(undefined4 **)(_UNK_0104e51c + 0x104e288),0)
    ;
    piVar2 = (int *)(*(int *)(*piVar9 + 0x5c) + 8);
    *piVar2 = iVar8;
    thunk_FUN_00ec5080(piVar2,iVar8);
  }
  puVar4 = *(undefined4 **)(_UNK_0104e520 + 0x104e2bc);
  PrimeTween_Sequence__ChainCallback_object__15b4c64(&uStack_60,&uStack_50,param_2,iVar8,0,*puVar4);
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  uStack_48 = uStack_58;
  uStack_44 = uStack_54;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_70,&uStack_50,0x3f000000,0);
  iVar1 = *piVar9;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  uStack_48 = uStack_68;
  uStack_44 = uStack_64;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar9;
  }
  puVar5 = *(undefined4 **)(iVar1 + 0x5c);
  iVar8 = puVar5[3];
  if (iVar8 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar5 = *(undefined4 **)(*piVar9 + 0x5c);
    }
    uVar7 = *puVar5;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104e524 + 0x104e344));
    System_Action_object____ctor_1f11414(iVar8,uVar7,**(undefined4 **)(_UNK_0104e528 + 0x104e364),0)
    ;
    piVar2 = (int *)(*(int *)(*piVar9 + 0x5c) + 0xc);
    *piVar2 = iVar8;
    thunk_FUN_00ec5080(piVar2,iVar8);
    puVar4 = *(undefined4 **)(_UNK_0104e52c + 0x104e390);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64(&uStack_60,&uStack_50,param_1,iVar8,0,*puVar3);
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  uStack_48 = uStack_58;
  uStack_44 = uStack_54;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_70,&uStack_50,0x3eaa7efa,0);
  iVar1 = *piVar9;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  uStack_48 = uStack_68;
  uStack_44 = uStack_64;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar9;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar8 = puVar3[4];
  if (iVar8 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar9 + 0x5c);
    }
    uVar7 = *puVar3;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104e530 + 0x104e420));
    System_Action_object____ctor_1f11414(iVar8,uVar7,**(undefined4 **)(_UNK_0104e534 + 0x104e440),0)
    ;
    piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 0x10);
    *piVar9 = iVar8;
    thunk_FUN_00ec5080(piVar9,iVar8);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64(&uStack_60,&uStack_50,param_2,iVar8,0,*puVar4);
  Rotatelab_GameExtensions__PreventFailSearchDuringAnimation_fb5500
            (&uStack_60,uStack_54,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  return;
}

