/* IL2CPP: Rotatelab.MetaProgressionBaseStage$$SetSliderValue
void Rotatelab_MetaProgressionBaseStage__SetSliderValue (Rotatelab_MetaProgressionBaseStage_o* __this, float value, bool isAnimated, float moveDuration, float moveDelay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionBaseStage$$SetSliderValue
   void Rotatelab_MetaProgressionBaseStage__SetSliderValue (Rotatelab_MetaProgressionBaseStage_o*
   __this, float value, bool isAnimated, float moveDuration, float moveDelay, const MethodInfo*
   method); */

void Rotatelab_MetaProgressionBaseStage__SetSliderValue_fbb8dc
               (int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar12 = (char *)(_UNK_00fcba18 + 0xfcb8fc);
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcba1c + 0xfcb918));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcba20 + 0xfcb924));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcba24 + 0xfcb930));
    *pcVar12 = '\x01';
  }
  iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fcba28 + 0xfcb94c));
  System_Object___ctor_2bb93bc(iVar4,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar4 + 0xc) = param_1;
  *(undefined4 *)(iVar4 + 8) = param_2;
  thunk_FUN_00ec5080((int *)(iVar4 + 0xc),param_1);
  *(undefined4 *)(iVar4 + 0x18) = param_5;
  fVar13 = *(float *)(iVar4 + 8);
  *(undefined4 *)(iVar4 + 0x14) = param_4;
  *(undefined1 *)(iVar4 + 0x10) = param_3;
  if (0.0 <= fVar13) {
    if (fVar13 != 0.0) {
      iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fcba2c + 0xfcb9e4));
      System_Action___ctor_2b10bac(iVar9,iVar4,**(undefined4 **)(_UNK_00fcba30 + 0xfcba00),0);
      goto LAB_00fcb9cc;
    }
  }
  else {
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar13 = *(float *)(*(int *)(param_1 + 0x14) + 0xc4);
  }
  iVar9 = 0;
LAB_00fcb9cc:
  pcVar12 = (char *)(_UNK_00fcbcc8 + 0xfcba64);
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcbccc + 0xfcba78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcbcd0 + 0xfcba84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcbcd4 + 0xfcba90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcbcd8 + 0xfcba9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcbcdc + 0xfcbaa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcbce0 + 0xfcbab4));
    *pcVar12 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fcbce4 + 0xfcbad0));
  System_Object___ctor_2bb93bc(iVar5,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar11 = (int *)(iVar5 + 8);
  *piVar11 = iVar9;
  thunk_FUN_00ec5080(piVar11,iVar9);
  iVar9 = *(int *)(iVar4 + 0xc);
  if (*(char *)(iVar4 + 0x10) == '\0') {
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar10 = *(int **)(iVar9 + 0x14);
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar10 + 0x238))(piVar10,fVar13,*(undefined4 *)(*piVar10 + 0x23c));
    iVar4 = *piVar11;
    if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00fcbcc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x14));
      return;
    }
  }
  else {
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar11 = *(int **)(iVar9 + 0x14);
    if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = (**(code **)(*piVar11 + 0x230))(piVar11,*(undefined4 *)(*piVar11 + 0x234));
    uVar14 = *(undefined4 *)(iVar4 + 0x14);
    uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fcbce8 + 0xfcbb5c));
    System_Action_float____ctor_1f12930(uVar7,iVar4,**(undefined4 **)(_UNK_00fcbcec + 0xfcbb7c),0);
    uVar15 = *(undefined4 *)(iVar4 + 0x18);
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,1,0);
    uVar3 = uStack_54;
    uVar2 = uStack_58;
    uVar1 = uStack_5c;
    uVar8 = uStack_60;
    if (*(int *)(**(int **)(_UNK_00fcbcf0 + 0xfcbba8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Custom_2ce885c
              (&uStack_60,uVar6,fVar13,uVar14,uVar7,uVar8,uVar1,uVar2,uVar3,uStack_50,1,0,uVar15,0,0
               ,0);
    uStack_48 = uStack_60;
    uStack_44 = uStack_5c;
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fcbcf4 + 0xfcbc18));
    System_Action___ctor_2b10bac(uVar8,iVar5,**(undefined4 **)(_UNK_00fcbcf8 + 0xfcbc38),0);
    PrimeTween_Tween__OnComplete_2ceddf8(auStack_70,&uStack_48,uVar8,0,0);
  }
  return;
}

