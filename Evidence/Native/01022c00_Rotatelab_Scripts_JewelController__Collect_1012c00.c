/* IL2CPP: Rotatelab.Scripts.JewelController$$Collect
void Rotatelab_Scripts_JewelController__Collect (Rotatelab_Scripts_JewelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.JewelController$$Collect
   void Rotatelab_Scripts_JewelController__Collect (Rotatelab_Scripts_JewelController_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_JewelController__Collect_1012c00(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined1 auStack_98 [16];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  
  pcVar10 = (char *)(_UNK_0102319c + 0x1022c20);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010231a0 + 0x1022c34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010231a4 + 0x1022c40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010231a8 + 0x1022c4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010231ac + 0x1022c58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010231b0 + 0x1022c64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010231b4 + 0x1022c70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010231b8 + 0x1022c7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010231bc + 0x1022c88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010231c0 + 0x1022c94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010231c4 + 0x1022ca0));
    *pcVar10 = '\x01';
  }
  fStack_5c = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  fStack_58 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  fStack_60 = 0.0;
  iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010231c8 + 0x1022cbc));
  System_Object___ctor_2bb93bc(iVar5,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar5 + 8) = param_1;
  thunk_FUN_00ec5080((int *)(iVar5 + 8),param_1);
  iVar6 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetParent_3615994(iVar6,0,1,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_70,*(int *)(param_1 + 0x10),0);
  *(undefined4 *)(iVar5 + 0x14) = uStack_68;
  *(undefined8 *)(iVar5 + 0xc) = uStack_70;
  fVar2 = _UNK_01022dcc;
  fVar1 = _UNK_01022dc8;
  fVar15 = *(float *)(param_1 + 0x20);
  fVar16 = *(float *)(param_1 + 0x24);
  *(float *)(iVar5 + 0x24) = *(float *)(iVar5 + 0xc) + *(float *)(param_1 + 0x1c);
  *(float *)(iVar5 + 0x28) = *(float *)(iVar5 + 0x10) + fVar15;
  *(float *)(iVar5 + 0x2c) = *(float *)(iVar5 + 0x14) + fVar16;
  fVar15 = *(float *)(param_1 + 0x20);
  fVar16 = *(float *)(param_1 + 0x24);
  *(float *)(iVar5 + 0x18) = *(float *)(iVar5 + 0xc) + *(float *)(param_1 + 0x1c) * fVar2;
  *(float *)(iVar5 + 0x1c) = *(float *)(iVar5 + 0x10) + fVar15 * fVar1;
  *(float *)(iVar5 + 0x20) = *(float *)(iVar5 + 0x14) + fVar16;
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010231cc + 0x1022db4));
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = Rotatelab_GameExtensions__Multiplier_fb4f04
                    (*(undefined4 *)(*(int *)(iVar6 + 0x18) + 0x50),0);
  piVar12 = *(int **)(param_1 + 0x38);
  puVar7 = *(undefined4 **)(_UNK_010231d0 + 0x1022e04);
  *(int *)(iVar5 + 0x30) = iVar6;
  iVar8 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iStack_74 = Rotatelab_Debugging_CreativeCanvasController__get_JewelIncreaseAmountOfPerBlasterJewel_110b108
                        (iVar8,0);
  iStack_74 = iStack_74 * iVar6;
  uVar9 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_010231d4 + 0x1022e38) + 0x24),&iStack_74);
  uVar9 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_010231d8 + 0x1022e58),uVar9,0);
  if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar12 + 0x2b0))(piVar12,uVar9,*(undefined4 *)(*piVar12 + 0x2b4));
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = TMPro_TMP_Text__get_rectTransform_34fc82c(*(int *)(param_1 + 0x38),0);
  pcVar10 = (char *)(_UNK_010231dc + 0x1022eb4);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010231e0 + 0x1022ec8));
    *pcVar10 = '\x01';
  }
  iVar8 = *(int *)(**(int **)(_UNK_010231e4 + 0x1022ee0) + 0x5c);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar6,*(undefined4 *)(iVar8 + 0xc),*(undefined4 *)(iVar8 + 0x10),
             *(undefined4 *)(iVar8 + 0x14),0);
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localScale_36154c0(&fStack_88,iVar6,0);
  fVar3 = fStack_80;
  fVar15 = fStack_84;
  fVar1 = fStack_88;
  fVar18 = *(float *)(param_1 + 0x28);
  uVar17 = *(undefined4 *)(param_1 + 0x2c);
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_88,6,0);
  uVar11 = uStack_78;
  uVar9 = uStack_7c;
  fVar4 = fStack_80;
  fVar16 = fStack_84;
  fVar2 = fStack_88;
  if (*(int *)(**(int **)(_UNK_010231e8 + 0x1022f84) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce6560
            (&fStack_88,iVar6,fVar1 * fVar18,fVar15 * fVar18,fVar3 * fVar18,uVar17,fVar2,fVar16,
             fVar4,uVar9,uVar11,1,0,0,0,0,0);
  uVar9 = *(undefined4 *)(param_1 + 0x14);
  pcVar10 = (char *)(_UNK_010231ec + 0x102300c);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010231f0 + 0x1023024));
    *pcVar10 = '\x01';
  }
  uVar11 = *(undefined4 *)(param_1 + 0x34);
  puVar7 = *(undefined4 **)(**(int **)(_UNK_010231f4 + 0x1023040) + 0x5c);
  uVar13 = *puVar7;
  uVar14 = puVar7[1];
  uVar17 = puVar7[2];
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_88,0x1a,0);
  PrimeTween_Tween__Scale_2ce6560
            (&fStack_88,uVar9,uVar13,uVar14,uVar17,uVar11,fStack_88,fStack_84,fStack_80,uStack_7c,
             uStack_78,1,0,0,0,0,0);
  uVar11 = *(undefined4 *)(param_1 + 0x2c);
  uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010231f8 + 0x10230ac));
  System_Action_float____ctor_1f12930(uVar9,iVar5,**(undefined4 **)(_UNK_010231fc + 0x10230c8),0);
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_88,6,0);
  PrimeTween_Tween__Custom_2ce885c
            (&fStack_88,0,0x3f800000,uVar11,uVar9,fStack_88,fStack_84,fStack_80,uStack_7c,uStack_78,
             1,0,0,0,0,0);
  fStack_60 = fStack_88;
  fStack_5c = fStack_84;
  fStack_58 = fStack_80;
  uStack_54 = uStack_7c;
  uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01023200 + 0x1023140));
  System_Action_object____ctor_1f11414(uVar9,iVar5,**(undefined4 **)(_UNK_01023204 + 0x1023160),0);
  PrimeTween_Tween__OnComplete_object__15d62e8
            (auStack_98,&fStack_60,param_1,uVar9,0,**(undefined4 **)(_UNK_01023208 + 0x1023180));
  return;
}

