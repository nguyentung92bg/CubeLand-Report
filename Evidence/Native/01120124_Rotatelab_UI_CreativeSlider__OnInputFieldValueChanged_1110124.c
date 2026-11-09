/* IL2CPP: Rotatelab.UI.CreativeSlider$$OnInputFieldValueChanged
void Rotatelab_UI_CreativeSlider__OnInputFieldValueChanged (Rotatelab_UI_CreativeSlider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.CreativeSlider$$OnInputFieldValueChanged
   void Rotatelab_UI_CreativeSlider__OnInputFieldValueChanged (Rotatelab_UI_CreativeSlider_o*
   __this, const MethodInfo* method); */

void Rotatelab_UI_CreativeSlider__OnInputFieldValueChanged_1110124(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;
  float fVar6;
  float fStack_24;
  
  pcVar2 = (char *)(_UNK_0112028c + 0x1120140);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01120290 + 0x1120154));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01120294 + 0x1120160));
    *pcVar2 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x1c);
  piVar3 = *(int **)(param_1 + 0x10);
  fStack_24 = 0.0;
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = *(undefined4 *)(iVar4 + 0x160);
    if (*(int *)(**(int **)(_UNK_0112029c + 0x1120200) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar1 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
    iVar4 = System_Single__TryParse_2b85998(uVar5,0xa7,uVar1,&fStack_24,0);
    fVar6 = _UNK_01120288;
    if (iVar4 != 0) {
      fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x18),
                                         (byte)(in_fpscr >> 0x16) & 3);
      fVar6 = fStack_24 * fVar6;
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x238))(piVar3,fVar6,*(undefined4 *)(*piVar3 + 0x23c));
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = System_String__op_Equality_2a0975c
                    (*(undefined4 *)(iVar4 + 0x160),**(undefined4 **)(_UNK_01120298 + 0x11201a0),0);
  fVar6 = _UNK_01120288;
  if (iVar4 != 0) {
    fVar6 = 1.0;
  }
  if (piVar3 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x011201e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar3 + 0x238))(piVar3,fVar6,*(undefined4 *)(*piVar3 + 0x23c));
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

