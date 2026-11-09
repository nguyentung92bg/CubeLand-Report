/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$UpdateMaterial
void Rotatelab_UI_SlicedFilledImage__UpdateMaterial (Rotatelab_UI_SlicedFilledImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$UpdateMaterial
   void Rotatelab_UI_SlicedFilledImage__UpdateMaterial (Rotatelab_UI_SlicedFilledImage_o* __this,
   const MethodInfo* method); */

void Rotatelab_UI_SlicedFilledImage__UpdateMaterial_1121d70(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar4;
  int iVar5;
  undefined4 unaff_r6;
  int *piVar6;
  undefined4 unaff_lr;
  
  pcVar4 = (char *)(_UNK_01131e98 + 0x1131d84);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01131e9c + 0x1131d98));
    *pcVar4 = '\x01';
  }
  UnityEngine_UI_Graphic__UpdateMaterial_371d390(param_1,0);
  uVar1 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
  piVar6 = *(int **)(_UNK_01131ea0 + 0x1131dc4);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Equality_36033f4(uVar1,0,0);
  if (iVar2 == 0) {
    iVar2 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Sprite__get_associatedAlphaSplitTexture_35a373c(iVar2,0);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = UnityEngine_Object__op_Inequality_36018e4(iVar2,0,0);
    if (iVar3 == 0) {
      return;
    }
    iVar3 = UnityEngine_UI_Graphic__get_canvasRenderer_371c574(param_1,0);
    uVar1 = extraout_r3_00;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  else {
    iVar3 = UnityEngine_UI_Graphic__get_canvasRenderer_371c574(param_1,0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = 0;
    uVar1 = extraout_r3;
  }
  pcVar4 = (char *)(_UNK_039b570c + 0x39b565c);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039b5710 + 0x39b5670),iVar2,0,uVar1,unaff_r4,unaff_r5,
                       unaff_r6,unaff_lr);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039b5714 + 0x39b567c));
    *pcVar4 = '\x01';
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar3 + 8);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar3,0);
  }
  if (*(int *)(**(int **)(_UNK_039b5718 + 0x39b56b4) + 0x1c) == 0) {
    thunk_FUN_00efd7c4();
  }
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(iVar2 + 8);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_039b571c + 0x39b56dc);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_039b5720 + 0x39b56ec);
    *(code **)(_UNK_039b5724 + 0x39b56fc) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x039b5708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar5,uVar1);
  return;
}

