/* IL2CPP: Rotatelab.MetaProgressionController.<>c__DisplayClass34_1$$<ShowJourney>b__3
void Rotatelab_MetaProgressionController___c__DisplayClass34_1___ShowJourney_b__3 (Rotatelab_MetaProgressionController___c__DisplayClass34_1_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionController.<>c__DisplayClass34_1$$<ShowJourney>b__3
   void Rotatelab_MetaProgressionController___c__DisplayClass34_1___ShowJourney_b__3
   (Rotatelab_MetaProgressionController___c__DisplayClass34_1_o* __this, const MethodInfo* method);
    */

void Rotatelab_MetaProgressionController___c__DisplayClass34_1___ShowJourney_b__3_fbe790
               (int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint in_fpscr;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pcVar1 = (char *)(_UNK_00fce920 + 0xfce7ac);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fce924 + 0xfce7c0));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x10);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar2 + 0x40);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar4 = *(undefined4 **)(_UNK_00fce928 + 0xfce810);
  iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                    (iVar2,*(undefined4 *)(param_1 + 8),*puVar4);
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 8) == *(int *)(*(int *)(param_1 + 0xc) + 8)) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = VectorSignedToFloat(*(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x44),
                                (byte)(in_fpscr >> 0x16) & 3);
  }
  else {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x40);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                      (iVar3,*(undefined4 *)(param_1 + 8),*puVar4);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x14) + 0xc0);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = _UNK_00fce91c;
  if (*(int *)(param_1 + 8) == *(int *)(*(int *)(param_1 + 0xc) + 0xc)) {
    uVar5 = 0x3f000000;
  }
  Rotatelab_MetaProgressionBaseStage__SetSliderValue_fbb8dc(iVar2,uVar6,1,0x3fc00000,uVar5);
  return;
}

