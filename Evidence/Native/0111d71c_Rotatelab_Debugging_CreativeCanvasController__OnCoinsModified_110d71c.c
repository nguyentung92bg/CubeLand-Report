/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$OnCoinsModified
void Rotatelab_Debugging_CreativeCanvasController__OnCoinsModified (Rotatelab_Debugging_CreativeCanvasController_o* __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$OnCoinsModified
   void Rotatelab_Debugging_CreativeCanvasController__OnCoinsModified
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, System_String_o* value, const
   MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__OnCoinsModified_110d71c
               (int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  int iVar10;
  int *piVar11;
  char *pcVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  
  pcVar12 = (char *)(_UNK_0111d87c + 0x111d738);
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d880 + 0x111d74c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d884 + 0x111d758));
    *pcVar12 = '\x01';
  }
  iVar1 = System_String__IsNullOrWhiteSpace_2a0a85c(param_2,0);
  if (iVar1 == 0) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0111d88c + 0x111d7fc));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar2 = (int *)Rotatelab_Currency_CurrencyManager__get_Coins_1083318(iVar1,0);
    if (*(int *)(**(int **)(_UNK_0111d890 + 0x111d82c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar15 = System_Convert__ToInt32_2b1ddb4(param_2,0);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xf8))
                (piVar2,(int)((ulonglong)uVar15 >> 0x20),(int)uVar15,(int)uVar15 >> 0x1f,
                 *(undefined4 *)(*piVar2 + 0xfc));
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar10 = *(int *)(param_1 + 0x24);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0111d888 + 0x111d780));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar2 = (int *)Rotatelab_Currency_CurrencyManager__get_Coins_1083318(iVar1,0);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = (**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar12 = (char *)(_UNK_034fb998 + 0x34fb83c);
  if (*pcVar12 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_034fb99c + 0x34fb850));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_034fb9a0 + 0x34fb85c));
    *pcVar12 = '\x01';
  }
  piVar2 = (int *)(iVar10 + 0x160);
  iVar5 = System_String__op_Equality_2a0975c(*piVar2,iVar1,0);
  if (iVar5 != 0) {
    return;
  }
  iVar5 = **(int **)(_UNK_034fb9a8 + 0x34fb8a0);
  if (iVar1 != 0) {
    iVar5 = iVar1;
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = System_String__Replace_2a0d800
                    (iVar5,**(undefined4 **)(_UNK_034fb9ac + 0x34fb8c8),
                     **(undefined4 **)(*(int *)(*(int *)(_UNK_034fb9a4 + 0x34fb890) + 0x48) + 0x5c),
                     0);
  *(undefined4 *)(iVar10 + 0x160) = uVar6;
  thunk_FUN_00ec5080(piVar2,uVar6);
  if (*(int *)(iVar10 + 0xb4) != 0) {
    UnityEngine_TouchScreenKeyboard__set_text_3611718(*(int *)(iVar10 + 0xb4),*piVar2,0);
  }
  if (*(int *)(iVar10 + 0x160) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(iVar10 + 0x160) + 8) < *(int *)(iVar10 + 0x170)) {
    if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = *(undefined4 *)(*piVar2 + 8);
    *(undefined4 *)(iVar10 + 0x170) = uVar6;
  }
  else {
    if (*(int *)(iVar10 + 0x160) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar10 + 0x174) <= *(int *)(*(int *)(iVar10 + 0x160) + 8)) goto LAB_034fb96c;
    if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = *(undefined4 *)(*piVar2 + 8);
  }
  *(undefined4 *)(iVar10 + 0x174) = uVar6;
LAB_034fb96c:
  *(undefined1 *)(iVar10 + 0x1ba) = 1;
  *(undefined1 *)(iVar10 + 0x1f8) = 1;
  TMPro_TMP_InputField__UpdateLabel_34eb9b8(iVar10);
  pcVar12 = (char *)(_UNK_034fc014 + 0x34fbfd0);
  if (*pcVar12 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_034fc018 + 0x34fbfe4));
    *pcVar12 = '\x01';
  }
  iVar1 = *(int *)(iVar10 + 0x130);
  if (iVar1 == 0) {
    return;
  }
  iVar5 = **(int **)(_UNK_034fc01c + 0x34fc004);
  iVar10 = *(int *)(iVar10 + 0x160);
  pcVar12 = (char *)(_UNK_01c728c8 + 0x1c72698);
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01c728cc + 0x1c726ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01c728d0 + 0x1c726b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01c728d4 + 0x1c726c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01c728d8 + 0x1c726d0));
    *pcVar12 = '\x01';
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar13 = 0;
  iVar3 = UnityEngine_Events_UnityEventBase__PrepareInvoke_361af00(iVar1,0);
  piVar2 = (int *)(iVar1 + 0x14);
  puVar14 = *(undefined4 **)(_UNK_01c728dc + 0x1c72708);
  do {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 0xc) <= iVar13) {
      return;
    }
    piVar4 = (int *)System_Collections_Generic_List_object___get_Item_267d814(iVar3,iVar13,*puVar14)
    ;
    iVar1 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x14);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    if (piVar4 == (int *)0x0) {
LAB_01c7277c:
      piVar4 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                                (iVar3,iVar13,*puVar14);
      if (piVar4 == (int *)0x0) {
LAB_01c727c8:
        piVar4 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                                  (iVar3,iVar13,*puVar14);
        piVar11 = (int *)*piVar2;
        if (piVar11 == (int *)0x0) {
          iVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_01c728e4 + 0x1c727f8),1);
          *piVar2 = iVar1;
          thunk_FUN_00ec5080(piVar2,iVar1);
          piVar11 = (int *)*piVar2;
          if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
        }
        if ((iVar10 != 0) &&
           (iVar1 = thunk_FUN_00f00bc8(iVar10,*(undefined4 *)(*piVar11 + 0x20)), iVar1 == 0)) {
          uVar6 = thunk_FUN_00f08b98();
          func_0x00ec3920(uVar6,0);
        }
        if (piVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        piVar11[4] = iVar10;
        thunk_FUN_00ec5080(piVar11 + 4,iVar10);
        if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        pcVar9 = *(code **)(*piVar4 + 0xe0);
        uVar6 = *(undefined4 *)(*piVar4 + 0xe4);
        iVar1 = *piVar2;
        goto LAB_01c72890;
      }
      uVar8 = (uint)*(byte *)(**(int **)(_UNK_01c728e0 + 0x1c727a0) + 0xb8);
      if ((*(byte *)(*piVar4 + 0xb8) < uVar8) ||
         (*(int *)(*(int *)(*piVar4 + 100) + uVar8 * 4 + -4) !=
          **(int **)(_UNK_01c728e0 + 0x1c727a0))) goto LAB_01c727c8;
      UnityEngine_Events_InvokableCall__Invoke_3618f24(piVar4,0);
    }
    else {
      iVar7 = *piVar4;
      if (((uint)*(byte *)(iVar7 + 0xb8) < (uint)*(byte *)(iVar1 + 0xb8)) ||
         (*(int *)(*(int *)(iVar7 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1))
      goto LAB_01c7277c;
      uVar6 = *(undefined4 *)(iVar7 + 0xf4);
      pcVar9 = *(code **)(iVar7 + 0xf0);
      iVar1 = iVar10;
LAB_01c72890:
      (*pcVar9)(piVar4,iVar1,uVar6);
    }
    iVar13 = iVar13 + 1;
  } while( true );
}

