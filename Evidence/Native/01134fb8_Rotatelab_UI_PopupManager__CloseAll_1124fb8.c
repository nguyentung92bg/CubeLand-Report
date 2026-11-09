/* IL2CPP: Rotatelab.UI.PopupManager$$CloseAll
void Rotatelab_UI_PopupManager__CloseAll (Rotatelab_UI_PopupManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PopupManager$$CloseAll
   void Rotatelab_UI_PopupManager__CloseAll (Rotatelab_UI_PopupManager_o* __this, const MethodInfo*
   method); */

void Rotatelab_UI_PopupManager__CloseAll_1124fb8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  int iVar6;
  undefined4 unaff_r6;
  undefined4 *puVar7;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_011350d8 + 0x1134fcc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011350dc + 0x1134fe0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011350e0 + 0x1134fec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011350e4 + 0x1134ff8));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
  if (-1 < iVar6 + -1) {
    puVar7 = *(undefined4 **)(_UNK_011350e8 + 0x1135028);
    do {
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar6 = iVar6 + -1;
      iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x10),iVar6,*puVar7);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(char *)(iVar1 + 0x10) != '\0') {
        if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar2 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0x10),iVar6,*puVar7);
        Rotatelab_UI_PopupManager__SetPopupVisible_1124efc(uVar2,uVar2,0);
      }
    } while (0 < iVar6);
  }
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar6 + 0xc);
  *(undefined4 *)(iVar6 + 0xc) = 0;
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  if (0 < iVar1) {
    puVar7 = *(undefined4 **)(iVar6 + 8);
    if (puVar7 == (undefined4 *)0x0) {
      thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6df8 + 0x2ba6d44),0,iVar1,0,unaff_r4,unaff_r5,
                         unaff_r6,unaff_lr);
      uVar4 = thunk_FUN_00f00cdc();
      uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6dfc + 0x2ba6d58));
      System_ArgumentNullException___ctor_2b08d00(uVar4,uVar2,0);
    }
    else {
      if (iVar1 < 0) {
        thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6e00 + 0x2ba6d78),0,iVar1,0,unaff_r4,unaff_r5,
                           unaff_r6,unaff_lr);
        uVar4 = thunk_FUN_00f00cdc();
        uVar2 = *(undefined4 *)(_UNK_02ba6e04 + 0x2ba6d8c);
      }
      else {
        iVar6 = FUN_00ed20b8(puVar7,0);
        if (iVar6 < 1) {
          iVar3 = System_Array__get_Length_2b8bcdc(puVar7);
          if (-iVar6 <= iVar3 - iVar1) {
            iVar3 = FUN_00f943a0(*puVar7);
            FUN_00f88e5c((int)puVar7 + iVar3 * -iVar6 + 0x10,iVar3 * iVar1);
            return;
          }
          thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6e14 + 0x2ba6db8));
          uVar4 = thunk_FUN_00f00cdc();
          uVar2 = *(undefined4 *)(_UNK_02ba6e18 + 0x2ba6dcc);
        }
        else {
          thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6e0c + 0x2ba6d98));
          uVar4 = thunk_FUN_00f00cdc();
          uVar2 = *(undefined4 *)(_UNK_02ba6e10 + 0x2ba6dac);
        }
      }
      uVar2 = thunk_FUN_00f23fd0(uVar2);
      System_IndexOutOfRangeException___ctor_2b69538(uVar4,uVar2,0);
    }
    uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6e08 + 0x2ba6de8));
    func_0x00ec3920(uVar4,uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_00ec3760();
  }
  return;
}

