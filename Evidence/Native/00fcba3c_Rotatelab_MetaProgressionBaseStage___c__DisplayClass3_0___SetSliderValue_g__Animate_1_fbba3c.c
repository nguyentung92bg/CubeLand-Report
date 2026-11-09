/* IL2CPP: Rotatelab.MetaProgressionBaseStage.<>c__DisplayClass3_0$$<SetSliderValue>g__Animate|1
void Rotatelab_MetaProgressionBaseStage___c__DisplayClass3_0___SetSliderValue_g__Animate_1 (Rotatelab_MetaProgressionBaseStage___c__DisplayClass3_0_o* __this, float newValue, System_Action_o* callBack, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionBaseStage.<>c__DisplayClass3_0$$<SetSliderValue>g__Animate|1
   void Rotatelab_MetaProgressionBaseStage___c__DisplayClass3_0___SetSliderValue_g__Animate_1
   (Rotatelab_MetaProgressionBaseStage___c__DisplayClass3_0_o* __this, float newValue,
   System_Action_o* callBack, const MethodInfo* method); */

void Rotatelab_MetaProgressionBaseStage___c__DisplayClass3_0___SetSliderValue_g__Animate_1_fbba3c
               (int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
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
  
  pcVar10 = (char *)(_UNK_00fcbcc8 + 0xfcba64);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcbccc + 0xfcba78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcbcd0 + 0xfcba84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcbcd4 + 0xfcba90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcbcd8 + 0xfcba9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcbcdc + 0xfcbaa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcbce0 + 0xfcbab4));
    *pcVar10 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fcbce4 + 0xfcbad0));
  System_Object___ctor_2bb93bc(iVar4,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar11 = (int *)(iVar4 + 8);
  *piVar11 = param_3;
  thunk_FUN_00ec5080(piVar11,param_3);
  iVar8 = *(int *)(param_1 + 0xc);
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar9 = *(int **)(iVar8 + 0x14);
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar9 + 0x238))(piVar9,param_2,*(undefined4 *)(*piVar9 + 0x23c));
    iVar4 = *piVar11;
    if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00fcbcc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x14));
      return;
    }
  }
  else {
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar11 = *(int **)(iVar8 + 0x14);
    if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = (**(code **)(*piVar11 + 0x230))(piVar11,*(undefined4 *)(*piVar11 + 0x234));
    uVar12 = *(undefined4 *)(param_1 + 0x14);
    uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fcbce8 + 0xfcbb5c));
    System_Action_float____ctor_1f12930(uVar6,param_1,**(undefined4 **)(_UNK_00fcbcec + 0xfcbb7c),0)
    ;
    uVar13 = *(undefined4 *)(param_1 + 0x18);
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,1,0);
    uVar3 = uStack_54;
    uVar2 = uStack_58;
    uVar1 = uStack_5c;
    uVar7 = uStack_60;
    if (*(int *)(**(int **)(_UNK_00fcbcf0 + 0xfcbba8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Custom_2ce885c
              (&uStack_60,uVar5,param_2,uVar12,uVar6,uVar7,uVar1,uVar2,uVar3,uStack_50,1,0,uVar13,0,
               0,0);
    uStack_48 = uStack_60;
    uStack_44 = uStack_5c;
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fcbcf4 + 0xfcbc18));
    System_Action___ctor_2b10bac(uVar7,iVar4,**(undefined4 **)(_UNK_00fcbcf8 + 0xfcbc38),0);
    PrimeTween_Tween__OnComplete_2ceddf8(auStack_70,&uStack_48,uVar7,0,0);
  }
  return;
}

