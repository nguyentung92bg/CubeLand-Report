/* IL2CPP: Rotatelab.SeasonPass.SeasonPassSo$$FillRewardIcons
void Rotatelab_SeasonPass_SeasonPassSo__FillRewardIcons (Rotatelab_SeasonPass_SeasonPassSo_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010b24d4) */
/* WARNING: Removing unreachable block (ram,0x010b260c) */
/* WARNING: Removing unreachable block (ram,0x010b24e0) */
/* WARNING: Removing unreachable block (ram,0x010b26bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassSo$$FillRewardIcons
   void Rotatelab_SeasonPass_SeasonPassSo__FillRewardIcons (Rotatelab_SeasonPass_SeasonPassSo_o*
   __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassSo__FillRewardIcons_10a22a8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_010b2754 + 0x10b22c0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2758 + 0x10b22d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b275c + 0x10b22e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2760 + 0x10b22ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2764 + 0x10b22f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2768 + 0x10b2304));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b276c + 0x10b2310));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2770 + 0x10b231c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2774 + 0x10b2328));
    *pcVar6 = '\x01';
  }
  puStack_44 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_3c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_4c = 0;
  puStack_34 = puStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_60,*(int *)(param_1 + 0xc),**(undefined4 **)(_UNK_010b2778 + 0x10b2370));
  uStack_38 = uStack_60;
  puStack_34 = puStack_5c;
  uStack_30 = uStack_58;
  iStack_2c = iStack_54;
  puVar8 = *(undefined4 **)(_UNK_010b277c + 0x10b2394);
  while( true ) {
    iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                      (&uStack_38,**(undefined4 **)(_UNK_010b2790 + 0x10b239c));
    iVar7 = iStack_2c;
    if (iVar1 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_38,**(undefined4 **)(_UNK_010b2794 + 0x10b26ac));
      return;
    }
    if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iStack_2c + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(*(int *)(iStack_2c + 8) + 0xc);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_60,iVar1,**(undefined4 **)(_UNK_010b2780 + 0x10b23e8));
    uStack_48 = uStack_60;
    puStack_44 = puStack_5c;
    uStack_40 = uStack_58;
    iStack_3c = iStack_54;
    uStack_60 = 0;
    puStack_5c = &uStack_48;
    while (iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                             (&uStack_48,*puVar8), iVar1 = iStack_3c, iVar2 != 0) {
      if (iStack_3c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = Rotatelab_SeasonPass_SeasonPassSo__GetRewardType_10a2798
                        (param_1,*(undefined4 *)(iStack_3c + 0xc));
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(iVar2 + 0xc);
      }
      *(undefined4 *)(iVar1 + 0x10) = uVar4;
      thunk_FUN_00ec5080();
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(iVar2 + 0x10);
      }
      uStack_4c = FUN_00f88368(*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0x1c));
      uStack_4c = uStack_4c & 0x7fffffff;
      uVar3 = System_Single__ToString_2b8501c(&uStack_4c,0);
      if (iVar2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar2 + 0x14);
      }
      uVar4 = System_String__Concat_2a0b574(uVar4,uVar3,uVar5,0);
      *(undefined4 *)(iVar1 + 0x20) = uVar4;
      thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x20));
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (&uStack_48,**(undefined4 **)(_UNK_010b2784 + 0x10b24c8));
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(iVar7 + 0x10);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(iVar7 + 0xc);
    if (iVar7 == 0) break;
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_60,iVar7,**(undefined4 **)(_UNK_010b2788 + 0x10b2524));
    uStack_48 = uStack_60;
    puStack_44 = puStack_5c;
    uStack_40 = uStack_58;
    iStack_3c = iStack_54;
    uStack_60 = 0;
    puStack_5c = &uStack_48;
    while (iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                             (&uStack_48,*puVar8), iVar7 = iStack_3c, iVar1 != 0) {
      if (iStack_3c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = Rotatelab_SeasonPass_SeasonPassSo__GetRewardType_10a2798
                        (param_1,*(undefined4 *)(iStack_3c + 0xc));
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(iVar1 + 0xc);
      }
      *(undefined4 *)(iVar7 + 0x10) = uVar4;
      thunk_FUN_00ec5080();
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(iVar1 + 0x10);
      }
      uStack_4c = FUN_00f88368(*(undefined4 *)(iVar7 + 0x18),*(undefined4 *)(iVar7 + 0x1c));
      uStack_4c = uStack_4c & 0x7fffffff;
      uVar3 = System_Single__ToString_2b8501c(&uStack_4c,0);
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar1 + 0x14);
      }
      uVar4 = System_String__Concat_2a0b574(uVar4,uVar3,uVar5,0);
      *(undefined4 *)(iVar7 + 0x20) = uVar4;
      thunk_FUN_00ec5080((undefined4 *)(iVar7 + 0x20));
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (&uStack_48,**(undefined4 **)(_UNK_010b278c + 0x10b2600));
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

