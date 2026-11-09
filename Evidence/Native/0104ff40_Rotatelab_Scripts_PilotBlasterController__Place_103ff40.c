/* IL2CPP: Rotatelab.Scripts.PilotBlasterController$$Place
void Rotatelab_Scripts_PilotBlasterController__Place (Rotatelab_Scripts_PilotBlasterController_o* __this, Rotatelab_Scripts_BaseBlasterDockController_o* dock, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PilotBlasterController$$Place
   void Rotatelab_Scripts_PilotBlasterController__Place (Rotatelab_Scripts_PilotBlasterController_o*
   __this, Rotatelab_Scripts_BaseBlasterDockController_o* dock, const MethodInfo* method); */

void Rotatelab_Scripts_PilotBlasterController__Place_103ff40(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  
  pcVar7 = (char *)(_UNK_01050730 + 0x104ff64);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01050734 + 0x104ff78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01050738 + 0x104ff84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105073c + 0x104ff90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01050740 + 0x104ff9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01050744 + 0x104ffa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01050748 + 0x104ffb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105074c + 0x104ffc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01050750 + 0x104ffcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01050754 + 0x104ffd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01050758 + 0x104ffe4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105075c + 0x104fff0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01050760 + 0x104fffc));
    *pcVar7 = '\x01';
  }
  if (*(char *)(param_1 + 0xc2) != '\0') {
    Rotatelab_Scripts_BlasterController__AnimateHiddenReveal_103481c(param_1,0);
  }
  Rotatelab_Scripts_BlasterController__OnBeingPlacedToDock_1036220(param_1,param_2,0);
  if (*(int *)(param_1 + 0x144) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Renderer__set_enabled_35c51f8(*(int *)(param_1 + 0x144),0,0);
  if (*(int *)(param_1 + 0x134) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x134),1,0);
  piVar8 = *(int **)(_UNK_01050764 + 0x1050078);
  uVar12 = *(undefined4 *)(param_1 + 0x158);
  uVar15 = *(undefined4 *)(param_1 + 0x164);
  iVar4 = *piVar8;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar8;
  }
  puVar6 = *(undefined4 **)(iVar4 + 0x5c);
  iVar11 = puVar6[1];
  if (iVar11 == 0) {
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      puVar6 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar10 = *puVar6;
    iVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01050768 + 0x10500c8));
    System_Action_object__float____ctor_1f19254
              (iVar11,uVar10,**(undefined4 **)(_UNK_0105076c + 0x10500e8),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
    *piVar8 = iVar11;
    thunk_FUN_00ec5080(piVar8,iVar11);
  }
  piVar8 = *(int **)(_UNK_01050770 + 0x1050110);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Custom_object__15d5b3c
            (&fStack_80,param_1,0,uVar15,uVar12,iVar11,0,0,0,0,0,1,0,0,0,0,
             **(undefined4 **)(_UNK_01050774 + 0x1050138));
  piVar9 = (int *)(param_1 + 0x54);
  if (*piVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__get_gameObject_35fe360(*piVar9,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar4,0,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_80,iVar4,0);
  iVar4 = 0x154;
  if (0.0 < fStack_80) {
    iVar4 = 0x150;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + iVar4);
  thunk_FUN_00ec5080(piVar9);
  if (*(int *)(param_1 + 0x150) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x150),0);
  uVar15 = *(undefined4 *)(param_1 + 0x54);
  uVar12 = *(undefined4 *)(param_1 + 0x150);
  if (*(int *)(**(int **)(_UNK_01050778 + 0x1050248) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar12 = UnityEngine_Object__op_Equality_36033f4(uVar12,uVar15,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar4,uVar12,0);
  if (*(int *)(param_1 + 0x154) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x154),0);
  uVar12 = UnityEngine_Object__op_Equality_36033f4
                     (*(undefined4 *)(param_1 + 0x154),*(undefined4 *)(param_1 + 0x54),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar4,uVar12,0);
  if (*piVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar10 = TMPro_TMP_Text__get_rectTransform_34fc82c(*piVar9,0);
  uVar13 = *(undefined4 *)(param_1 + 0x158);
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_80,1,0);
  uVar15 = uStack_70;
  uVar12 = uStack_74;
  fVar3 = fStack_78;
  fVar2 = fStack_7c;
  fVar1 = fStack_80;
  if (*(int *)(*piVar8 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4a3c
            (&fStack_80,uVar10,0,0x3f800000,uVar13,fVar1,fVar2,fVar3,uVar12,uVar15,1,0,0,0,0,0);
  uVar12 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_rotation_3614cfc(&fStack_80,iVar4,0);
  uVar15 = uStack_74;
  fVar3 = fStack_78;
  fVar2 = fStack_7c;
  fVar1 = fStack_80;
  uVar10 = *(undefined4 *)(param_1 + 0x158);
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_80,4,0);
  PrimeTween_Tween__Rotation_2ce5efc
            (&fStack_80,uVar12,fVar1,fVar2,fVar3,uVar15,uVar10,fStack_80,fStack_7c,fStack_78,
             uStack_74,uStack_70,1,0,0,0,0,0);
  uVar12 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  uVar10 = *(undefined4 *)(param_1 + 0x158);
  uVar15 = *(undefined4 *)(param_1 + 0x160);
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_80,4,0);
  PrimeTween_Tween__Scale_2ce4684
            (&fStack_80,uVar12,uVar15,uVar10,fStack_80,fStack_7c,fStack_78,uStack_74,uStack_70,1,0,0
             ,0,0,0);
  iVar4 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_80,iVar4,0);
  fVar3 = fStack_78;
  fVar2 = fStack_7c;
  fVar1 = fStack_80;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_80,iVar4,0);
  pcVar7 = (char *)(_UNK_0105077c + 0x1050524);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01050780 + 0x1050538));
    *pcVar7 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x198);
  iVar11 = *(int *)(**(int **)(_UNK_01050784 + 0x1050560) + 0x5c);
  fVar14 = *(float *)(param_1 + 0x15c);
  fVar16 = *(float *)(iVar11 + 0x18);
  fVar17 = *(float *)(iVar11 + 0x1c);
  fVar18 = *(float *)(iVar11 + 0x20);
  if (iVar4 != 0) {
    DG_Tweening_TweenExtensions__Kill_1168b64(iVar4,0,0);
  }
  uVar12 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  iVar4 = FUN_00ec388c(**(undefined4 **)(_UNK_01050788 + 0x10505c8),3);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = *(uint *)(iVar4 + 0xc);
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(float *)(iVar4 + 0x10) = fVar1;
  *(float *)(iVar4 + 0x14) = fVar2;
  *(float *)(iVar4 + 0x18) = fVar3;
  if (uVar5 < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(float *)(iVar4 + 0x1c) = (fVar1 + fStack_80) * 0.5 + fVar16 * fVar14;
  *(float *)(iVar4 + 0x20) = (fVar2 + fStack_7c) * 0.5 + fVar17 * fVar14;
  *(float *)(iVar4 + 0x24) = (fVar3 + fStack_78) * 0.5 + fVar18 * fVar14;
  if (uVar5 < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(float *)(iVar4 + 0x28) = fStack_80;
  *(float *)(iVar4 + 0x2c) = fStack_7c;
  *(float *)(iVar4 + 0x30) = fStack_78;
  uVar12 = DG_Tweening_ShortcutExtensions__DOPath_116c1dc
                     (uVar12,iVar4,*(undefined4 *)(param_1 + 0x158),1,1,10,0,0,0,0,0,0);
  uVar12 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                     (uVar12,4,**(undefined4 **)(_UNK_0105078c + 0x1050694));
  uVar15 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  uVar12 = DG_Tweening_TweenSettingsExtensions__SetLink_object__15da040
                     (uVar12,uVar15,**(undefined4 **)(_UNK_01050790 + 0x10506bc));
  uVar15 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01050794 + 0x10506d4));
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar15,param_1,**(undefined4 **)(_UNK_01050798 + 0x10506f0),0);
  uVar12 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__15d9e0c
                     (uVar12,uVar15,**(undefined4 **)(_UNK_0105079c + 0x1050708));
  *(undefined4 *)(param_1 + 0x198) = uVar12;
  thunk_FUN_00ec5080((int *)(param_1 + 0x198),uVar12);
  return;
}

