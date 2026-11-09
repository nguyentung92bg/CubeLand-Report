/* IL2CPP: Rotatelab.RecentLogRecorder$$Format
System_String_o* Rotatelab_RecentLogRecorder__Format (Rotatelab_RecentLogRecorder_Entry_o* entry, int32_t stackTraceLineLimit, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RecentLogRecorder$$Format
   System_String_o* Rotatelab_RecentLogRecorder__Format (Rotatelab_RecentLogRecorder_Entry_o* entry,
   int32_t stackTraceLineLimit, const MethodInfo* method); */

void Rotatelab_RecentLogRecorder__Format_fbb1fc(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_00fcb6a4 + 0xfcb218);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcb6a8 + 0xfcb22c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcb6ac + 0xfcb238));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcb6b0 + 0xfcb244));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcb6b4 + 0xfcb250));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcb6b8 + 0xfcb25c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcb6bc + 0xfcb268));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcb6c0 + 0xfcb274));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcb6c4 + 0xfcb280));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcb6c8 + 0xfcb28c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcb6cc + 0xfcb298));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcb6d0 + 0xfcb2a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcb6d4 + 0xfcb2b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcb6d8 + 0xfcb2bc));
    *pcVar6 = '\x01';
  }
  piVar1 = (int *)thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fcb6dc + 0xfcb2d0));
  System_Text_StringBuilder___ctor_2a14a7c(piVar1,0x100,0);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_Text_StringBuilder__Append_2a16604
                    (piVar1,**(undefined4 **)(_UNK_00fcb6e0 + 0xfcb300),0);
  if (*(int *)(**(int **)(_UNK_00fcb6e4 + 0xfcb318) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
  if (*(int *)(**(int **)(_UNK_00fcb6e8 + 0xfcb344) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = System_DateTime__ToString_2b4b634
                    (param_1 + 4,**(undefined4 **)(_UNK_00fcb6ec + 0xfcb368),uVar3,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_Text_StringBuilder__Append_2a16604(iVar2,uVar3,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_Text_StringBuilder__Append_2a16604
                    (iVar2,**(undefined4 **)(_UNK_00fcb6f0 + 0xfcb3b0),0);
  uStack_28 = *param_1;
  uVar3 = FUN_00ec393c(**(undefined4 **)(_UNK_00fcb6f4 + 0xfcb3cc),&uStack_28);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_Text_StringBuilder__Append_2a1746c(iVar2,uVar3,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_Text_StringBuilder__Append_2a16604
                    (iVar2,**(undefined4 **)(_UNK_00fcb6f8 + 0xfcb418),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Text_StringBuilder__Append_2a16604(iVar2,param_1[1],0);
  if (1 < (int)param_1[6]) {
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = System_Text_StringBuilder__Append_2a16604
                      (piVar1,**(undefined4 **)(_UNK_00fcb6fc + 0xfcb46c),0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = System_Text_StringBuilder__Append_2a17344(iVar2,param_1[6],0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Text_StringBuilder__Append_2a1726c(iVar2,0x29,0);
  }
  if ((param_2 != 0) && (iVar2 = System_String__IsNullOrEmpty_2a0a844(param_1[2],0), iVar2 == 0)) {
    if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = System_String__TrimEnd_2a1041c(param_1[2],0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = System_String__Split_2a0df50(iVar2,10,0,0);
    if (param_2 < 1) {
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = *(uint *)(iVar2 + 0xc);
    }
    else {
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(**(int **)(_UNK_00fcb700 + 0xfcb538) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar4 = System_Math__Min_2b6fffc(param_2,*(undefined4 *)(iVar2 + 0xc),0);
    }
    if (0 < (int)uVar4) {
      uVar8 = 0;
      puVar9 = *(undefined4 **)(_UNK_00fcb704 + 0xfcb58c);
      do {
        if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar5 = System_Text_StringBuilder__Append_2a16604(piVar1,*puVar9,0);
        if (*(uint *)(iVar2 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar7 = *(int *)(iVar2 + 0x10 + uVar8 * 4);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar3 = System_String__TrimEnd_2a1041c(iVar7,0);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Text_StringBuilder__Append_2a16604(iVar5,uVar3,0);
        uVar8 = uVar8 + 1;
      } while (uVar4 != uVar8);
    }
    if ((int)uVar4 < *(int *)(iVar2 + 0xc)) {
      if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = System_Text_StringBuilder__Append_2a16604
                        (piVar1,**(undefined4 **)(_UNK_00fcb708 + 0xfcb628),0);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = System_Text_StringBuilder__Append_2a17344(iVar5,*(int *)(iVar2 + 0xc) - uVar4,0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Text_StringBuilder__Append_2a16604(iVar2,**(undefined4 **)(_UNK_00fcb70c + 0xfcb674),0)
      ;
    }
  }
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
  return;
}

