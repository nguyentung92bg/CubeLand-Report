/* IL2CPP: Rotatelab.Scripts.PropellerController$$AnimateHit
void Rotatelab_Scripts_PropellerController__AnimateHit (Rotatelab_Scripts_PropellerController_o* __this, Rotatelab_Scripts_VoxelController_o* targetVoxel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PropellerController$$AnimateHit
   void Rotatelab_Scripts_PropellerController__AnimateHit (Rotatelab_Scripts_PropellerController_o*
   __this, Rotatelab_Scripts_VoxelController_o* targetVoxel, const MethodInfo* method); */

void Rotatelab_Scripts_PropellerController__AnimateHit_10484bc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  float fVar11;
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
  
  pcVar6 = (char *)(_UNK_01058ae4 + 0x10584e0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058ae8 + 0x10584f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058aec + 0x1058500));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058af0 + 0x105850c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058af4 + 0x1058518));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058af8 + 0x1058524));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058afc + 0x1058530));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058b00 + 0x105853c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058b04 + 0x1058548));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058b08 + 0x1058554));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058b0c + 0x1058560));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058b10 + 0x105856c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058b14 + 0x1058578));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058b18 + 0x1058584));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058b1c + 0x1058590));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058b20 + 0x105859c));
    *pcVar6 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01058b24 + 0x10585b8));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar1 + 8) = param_1;
  thunk_FUN_00ec5080((int *)(iVar1 + 8),param_1);
  puVar7 = (undefined4 *)(iVar1 + 0xc);
  *puVar7 = param_2;
  thunk_FUN_00ec5080(puVar7,param_2);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01058b28 + 0x1058608));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = Rotatelab_Scripts_ObjectManager__MarkVoxelsToDestroyByPropeller_102e81c
                    (iVar2,*puVar7,*(undefined4 *)(param_1 + 0x50),0);
  *(undefined4 *)(iVar1 + 0x10) = uVar3;
  thunk_FUN_00ec5080();
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x44),0,0);
  Rotatelab_Scripts_PropellerController__UpdateAnimationState_1046a6c(param_1,3,0);
  uVar3 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  uVar4 = UnityEngine_LayerMask__NameToLayer_3602cd0(**(undefined4 **)(_UNK_01058b2c + 0x105869c),0)
  ;
  if (*(int *)(**(int **)(_UNK_01058b30 + 0x10586b0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__SetLayerRecursively_fc27c4(uVar3,uVar4,0);
  uVar3 = DG_Tweening_ShortcutExtensions__DOLocalRotate_116b650
                    (*(undefined4 *)(param_1 + 0x40),0x40d24dd3,0xc21f199a,0xc1e51eb8,0x3f000000,0,0
                    );
  DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
            (uVar3,1,**(undefined4 **)(_UNK_01058b34 + 0x105870c));
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  pcVar6 = (char *)(_UNK_01058b38 + 0x1058724);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058b3c + 0x1058738));
    *pcVar6 = '\x01';
  }
  piVar10 = *(int **)(_UNK_01058b40 + 0x1058758);
  iVar2 = *(int *)(*piVar10 + 0x5c);
  uVar3 = DG_Tweening_ShortcutExtensions__DOScale_116b840
                    (uVar3,*(float *)(iVar2 + 0xc) * _UNK_01058adc,
                     *(float *)(iVar2 + 0x10) * _UNK_01058adc,
                     *(float *)(iVar2 + 0x14) * _UNK_01058adc,0x3f666666,0);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01058b44 + 0x105879c));
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar4,iVar1,**(undefined4 **)(_UNK_01058b48 + 0x10587b8),0);
  DG_Tweening_TweenSettingsExtensions__OnComplete_object__15d9e0c
            (uVar3,uVar4,**(undefined4 **)(_UNK_01058b4c + 0x10587d0));
  PrimeTween_Sequence__Create_2cef1e0(&uStack_50,1,0,1,0,0,0);
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = UnityEngine_Component__get_transform_35fe190(*(int *)(iVar1 + 0xc),0);
  uVar4 = *(undefined4 *)(param_1 + 0x48);
  pcVar6 = (char *)(_UNK_01058b50 + 0x105883c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058b54 + 0x1058850));
    *pcVar6 = '\x01';
  }
  puVar7 = *(undefined4 **)(*piVar10 + 0x5c);
  Rotatelab_Scripts_BasePlaceableController__MoveToTransform_103089c
            (&uStack_60,param_1,uVar3,uVar4,*puVar7,puVar7[1],puVar7[2],0xf,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_60,&uStack_40,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  piVar10 = *(int **)(_UNK_01058b58 + 0x10588c0);
  iVar2 = *piVar10;
  fVar11 = *(float *)(param_1 + 0x48);
  uStack_40 = uStack_60;
  uStack_3c = uStack_5c;
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar10;
  }
  puVar7 = *(undefined4 **)(iVar2 + 0x5c);
  iVar8 = puVar7[1];
  if (iVar8 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar7 = *(undefined4 **)(*piVar10 + 0x5c);
    }
    uVar3 = *puVar7;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01058b5c + 0x1058914));
    System_Action___ctor_2b10bac(iVar8,uVar3,**(undefined4 **)(_UNK_01058b60 + 0x1058934),0);
    piVar10 = (int *)(*(int *)(**(int **)(_UNK_01058b64 + 0x105894c) + 0x5c) + 4);
    *piVar10 = iVar8;
    thunk_FUN_00ec5080(piVar10,iVar8);
  }
  PrimeTween_Sequence__InsertCallback_2cf01e0
            (&uStack_50,&uStack_40,fVar11 + _UNK_01058ae0,iVar8,0,0);
  puVar9 = *(undefined4 **)(_UNK_01058b68 + 0x1058994);
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uVar3 = thunk_FUN_00f00cdc(*puVar9);
  System_Action_object____ctor_1f11414(uVar3,iVar1,**(undefined4 **)(_UNK_01058b6c + 0x10589b4),0);
  puVar7 = *(undefined4 **)(_UNK_01058b70 + 0x10589d4);
  piVar10 = *(int **)(_UNK_01058b74 + 0x10589ec);
  PrimeTween_Sequence__ChainCallback_object__15b4c64(&uStack_60,&uStack_40,param_1,uVar3,0,*puVar7);
  iVar1 = *piVar10;
  uStack_40 = uStack_60;
  uStack_3c = uStack_5c;
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar10;
  }
  puVar5 = *(undefined4 **)(iVar1 + 0x5c);
  iVar2 = puVar5[2];
  if (iVar2 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar5 = *(undefined4 **)(*piVar10 + 0x5c);
    }
    uVar3 = *puVar5;
    iVar2 = thunk_FUN_00f00cdc(*puVar9);
    System_Action_object____ctor_1f11414(iVar2,uVar3,**(undefined4 **)(_UNK_01058b78 + 0x1058a58),0)
    ;
    piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 8);
    *piVar10 = iVar2;
    thunk_FUN_00ec5080(piVar10,iVar2);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64(&uStack_50,&uStack_40,param_1,iVar2,0,*puVar7);
  Rotatelab_GameExtensions__PreventFailSearchDuringAnimation_fb5500
            (&uStack_50,uStack_44,uStack_50,uStack_4c,uStack_48,uStack_44,0);
  Rotatelab_GameExtensions__PreventManualRotationDuringAnimation_fb5878
            (&uStack_50,uStack_44,uStack_50,uStack_4c,uStack_48,uStack_44,0);
  return;
}

