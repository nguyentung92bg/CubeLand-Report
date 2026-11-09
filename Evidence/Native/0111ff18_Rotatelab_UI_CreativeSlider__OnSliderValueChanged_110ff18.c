/* IL2CPP: Rotatelab.UI.CreativeSlider$$OnSliderValueChanged
void Rotatelab_UI_CreativeSlider__OnSliderValueChanged (Rotatelab_UI_CreativeSlider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.CreativeSlider$$OnSliderValueChanged
   void Rotatelab_UI_CreativeSlider__OnSliderValueChanged (Rotatelab_UI_CreativeSlider_o* __this,
   const MethodInfo* method); */

void Rotatelab_UI_CreativeSlider__OnSliderValueChanged_110ff18(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  float fStack_1c;
  
  pcVar9 = (char *)(_UNK_011200fc + 0x111ff34);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01120100 + 0x111ff48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01120104 + 0x111ff54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01120108 + 0x111ff60));
    *pcVar9 = '\x01';
  }
  piVar13 = *(int **)(param_1 + 0x10);
  iVar10 = *(int *)(param_1 + 0x1c);
  fStack_1c = 0.0;
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fStack_1c = (float)(**(code **)(*piVar13 + 0x230))(piVar13,*(undefined4 *)(*piVar13 + 0x234));
    fVar1 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x18),(byte)(in_fpscr >> 0x16) & 3)
    ;
    fStack_1c = fStack_1c / fVar1;
    if (*(int *)(**(int **)(_UNK_01120120 + 0x112009c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar5 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
    uVar5 = System_Single__ToString_2b850a4(&fStack_1c,uVar5,0);
    if (iVar10 != 0) {
      TMPro_TMP_InputField__set_text_34eb818(iVar10,uVar5,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar1 = (float)(**(code **)(*piVar13 + 0x230))(piVar13,*(undefined4 *)(*piVar13 + 0x234));
  pcVar9 = (char *)(_UNK_0112010c + 0x111ffb4);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01120110 + 0x111ffc8));
    *pcVar9 = '\x01';
  }
  fVar16 = 1.0;
  if (1.0 < ABS(fVar1)) {
    fVar16 = ABS(fVar1);
  }
  fVar17 = **(float **)(**(int **)(_UNK_01120114 + 0x111ffec) + 0x5c) * 8.0;
  if (fVar17 < fVar16 * _UNK_011200f8) {
    fVar17 = fVar16 * _UNK_011200f8;
  }
  piVar13 = *(int **)(_UNK_0112011c + 0x1120014);
  if (ABS(1.0 - fVar1) < fVar17) {
    piVar13 = *(int **)(_UNK_01120118 + 0x112000c);
  }
  iVar11 = *piVar13;
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar9 = (char *)(_UNK_034fb998 + 0x34fb83c);
  if (*pcVar9 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_034fb99c + 0x34fb850));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_034fb9a0 + 0x34fb85c));
    *pcVar9 = '\x01';
  }
  piVar13 = (int *)(iVar10 + 0x160);
  iVar4 = System_String__op_Equality_2a0975c(*piVar13,iVar11,0);
  if (iVar4 != 0) {
    return;
  }
  iVar4 = **(int **)(_UNK_034fb9a8 + 0x34fb8a0);
  if (iVar11 != 0) {
    iVar4 = iVar11;
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = System_String__Replace_2a0d800
                    (iVar4,**(undefined4 **)(_UNK_034fb9ac + 0x34fb8c8),
                     **(undefined4 **)(*(int *)(*(int *)(_UNK_034fb9a4 + 0x34fb890) + 0x48) + 0x5c),
                     0);
  *(undefined4 *)(iVar10 + 0x160) = uVar5;
  thunk_FUN_00ec5080(piVar13,uVar5);
  if (*(int *)(iVar10 + 0xb4) != 0) {
    UnityEngine_TouchScreenKeyboard__set_text_3611718(*(int *)(iVar10 + 0xb4),*piVar13,0);
  }
  if (*(int *)(iVar10 + 0x160) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(iVar10 + 0x160) + 8) < *(int *)(iVar10 + 0x170)) {
    if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = *(undefined4 *)(*piVar13 + 8);
    *(undefined4 *)(iVar10 + 0x170) = uVar5;
  }
  else {
    if (*(int *)(iVar10 + 0x160) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar10 + 0x174) <= *(int *)(*(int *)(iVar10 + 0x160) + 8)) goto LAB_034fb96c;
    if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = *(undefined4 *)(*piVar13 + 8);
  }
  *(undefined4 *)(iVar10 + 0x174) = uVar5;
LAB_034fb96c:
  *(undefined1 *)(iVar10 + 0x1ba) = 1;
  *(undefined1 *)(iVar10 + 0x1f8) = 1;
  TMPro_TMP_InputField__UpdateLabel_34eb9b8(iVar10);
  pcVar9 = (char *)(_UNK_034fc014 + 0x34fbfd0);
  if (*pcVar9 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_034fc018 + 0x34fbfe4));
    *pcVar9 = '\x01';
  }
  iVar11 = *(int *)(iVar10 + 0x130);
  if (iVar11 == 0) {
    return;
  }
  iVar4 = **(int **)(_UNK_034fc01c + 0x34fc004);
  iVar10 = *(int *)(iVar10 + 0x160);
  pcVar9 = (char *)(_UNK_01c728c8 + 0x1c72698);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01c728cc + 0x1c726ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01c728d0 + 0x1c726b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01c728d4 + 0x1c726c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01c728d8 + 0x1c726d0));
    *pcVar9 = '\x01';
  }
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar14 = 0;
  iVar2 = UnityEngine_Events_UnityEventBase__PrepareInvoke_361af00(iVar11,0);
  piVar13 = (int *)(iVar11 + 0x14);
  puVar15 = *(undefined4 **)(_UNK_01c728dc + 0x1c72708);
  do {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0xc) <= iVar14) {
      return;
    }
    piVar3 = (int *)System_Collections_Generic_List_object___get_Item_267d814(iVar2,iVar14,*puVar15)
    ;
    iVar11 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x14);
    if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
      iVar11 = FUN_00efd768();
    }
    if (piVar3 == (int *)0x0) {
LAB_01c7277c:
      piVar3 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                                (iVar2,iVar14,*puVar15);
      if (piVar3 == (int *)0x0) {
LAB_01c727c8:
        piVar3 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                                  (iVar2,iVar14,*puVar15);
        piVar12 = (int *)*piVar13;
        if (piVar12 == (int *)0x0) {
          iVar11 = FUN_00ec388c(**(undefined4 **)(_UNK_01c728e4 + 0x1c727f8),1);
          *piVar13 = iVar11;
          thunk_FUN_00ec5080(piVar13,iVar11);
          piVar12 = (int *)*piVar13;
          if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
        }
        if ((iVar10 != 0) &&
           (iVar11 = thunk_FUN_00f00bc8(iVar10,*(undefined4 *)(*piVar12 + 0x20)), iVar11 == 0)) {
          uVar5 = thunk_FUN_00f08b98();
          func_0x00ec3920(uVar5,0);
        }
        if (piVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        piVar12[4] = iVar10;
        thunk_FUN_00ec5080(piVar12 + 4,iVar10);
        if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        pcVar8 = *(code **)(*piVar3 + 0xe0);
        uVar5 = *(undefined4 *)(*piVar3 + 0xe4);
        iVar11 = *piVar13;
        goto LAB_01c72890;
      }
      uVar7 = (uint)*(byte *)(**(int **)(_UNK_01c728e0 + 0x1c727a0) + 0xb8);
      if ((*(byte *)(*piVar3 + 0xb8) < uVar7) ||
         (*(int *)(*(int *)(*piVar3 + 100) + uVar7 * 4 + -4) !=
          **(int **)(_UNK_01c728e0 + 0x1c727a0))) goto LAB_01c727c8;
      UnityEngine_Events_InvokableCall__Invoke_3618f24(piVar3,0);
    }
    else {
      iVar6 = *piVar3;
      if (((uint)*(byte *)(iVar6 + 0xb8) < (uint)*(byte *)(iVar11 + 0xb8)) ||
         (*(int *)(*(int *)(iVar6 + 100) + (uint)*(byte *)(iVar11 + 0xb8) * 4 + -4) != iVar11))
      goto LAB_01c7277c;
      uVar5 = *(undefined4 *)(iVar6 + 0xf4);
      pcVar8 = *(code **)(iVar6 + 0xf0);
      iVar11 = iVar10;
LAB_01c72890:
      (*pcVar8)(piVar3,iVar11,uVar5);
    }
    iVar14 = iVar14 + 1;
  } while( true );
}

