/* IL2CPP: Rotatelab.RecentLogRecorder$$AppendTo
void Rotatelab_RecentLogRecorder__AppendTo (System_Text_StringBuilder_o* sb, int32_t maxEntries, int32_t stackTraceLineLimit, int32_t maxBlockChars, bool includeWarnings, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x00fcaa28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Rotatelab.RecentLogRecorder$$AppendTo
   void Rotatelab_RecentLogRecorder__AppendTo (System_Text_StringBuilder_o* sb, int32_t maxEntries,
   int32_t stackTraceLineLimit, int32_t maxBlockChars, bool includeWarnings, const MethodInfo*
   method); */

void Rotatelab_RecentLogRecorder__AppendTo_fba710
               (int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  char cStack_29;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_00fcab64 + 0xfca734);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcab68 + 0xfca748));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcab6c + 0xfca754));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcab70 + 0xfca760));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcab74 + 0xfca76c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcab78 + 0xfca778));
    *pcVar7 = '\x01';
  }
  uStack_28 = 0;
  cStack_29 = '\0';
  if (0 < param_2) {
    if (*(int *)(**(int **)(_UNK_00fcab7c + 0xfca7a0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar2 = System_Math__Min_2b6fffc(param_2,0x14,0);
    iVar3 = FUN_00ec388c(**(undefined4 **)(_UNK_00fcab80 + 0xfca7d4),uVar2);
    piVar8 = *(int **)(_UNK_00fcab84 + 0xfca7e8);
    iVar4 = *piVar8;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar8;
    }
    cStack_29 = '\0';
    uStack_28 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 4);
    System_Threading_Monitor__Enter_2bdfb90(uStack_28,&cStack_29,0);
    iVar13 = 0;
    iVar14 = 0x27;
    iVar4 = 0;
    piVar8 = *(int **)(_UNK_00fcab88 + 0xfca84c);
    uVar12 = 0;
    while( true ) {
      iVar5 = *piVar8;
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        iVar5 = *piVar8;
      }
      bVar1 = false;
      if (*(int *)(*(int *)(iVar5 + 0x5c) + 8) <= iVar13) break;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar3 + 0xc) <= (int)uVar12) break;
      iVar5 = *piVar8;
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        iVar5 = *piVar8;
      }
      piVar6 = *(int **)(iVar5 + 0x5c);
      uVar11 = (iVar14 + piVar6[3]) % 0x14;
      if (param_5 == 0) {
        if (*(int *)(iVar5 + 0x74) == 0) {
          FUN_00ec3934();
          piVar6 = *(int **)(*piVar8 + 0x5c);
        }
        iVar5 = *piVar6;
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar5 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        uVar10 = uVar12;
        if (*(int *)(iVar5 + uVar11 * 0x20 + 0x10) != 2) {
          iVar5 = *piVar8;
          goto LAB_00fca924;
        }
      }
      else {
LAB_00fca924:
        if (*(int *)(iVar5 + 0x74) == 0) {
          FUN_00ec3934();
          iVar5 = *piVar8;
        }
        iVar5 = **(int **)(iVar5 + 0x5c);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar5 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar5 = Rotatelab_RecentLogRecorder__Format_fbb1fc(iVar5 + uVar11 * 0x20 + 0x10,param_3);
        if (param_4 < 0) {
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
        }
        else {
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (param_4 < *(int *)(iVar5 + 8) + iVar4) {
            bVar1 = true;
            break;
          }
        }
        uVar10 = uVar12 + 1;
        iVar9 = *(int *)(iVar5 + 8);
        if (*(uint *)(iVar3 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(int *)(iVar3 + uVar12 * 4 + 0x10) = iVar5;
        thunk_FUN_00ec5080(iVar3 + 0x10 + uVar12 * 4,iVar5);
        iVar4 = iVar9 + iVar4;
        piVar8 = *(int **)(_UNK_00fcab8c + 0xfca9f0);
      }
      iVar14 = iVar14 + -1;
      iVar13 = iVar13 + 1;
      uVar12 = uVar10;
    }
    if (cStack_29 != '\0') {
      System_Threading_Monitor__Exit_2be3444(uStack_28,0);
    }
    if (uVar12 != 0) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Text_StringBuilder__Append_2a16604
                (param_1,**(undefined4 **)(_UNK_00fcab98 + 0xfcaa50),0);
      if (bVar1) {
        System_Text_StringBuilder__Append_2a16604
                  (param_1,**(undefined4 **)(_UNK_00fcab94 + 0xfcaa98),0);
      }
      if (-1 < (int)(uVar12 - 1)) {
        iVar4 = uVar12 + 3;
        do {
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar12 = iVar4 - 4;
          if (*(uint *)(iVar3 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          System_Text_StringBuilder__Append_2a16604(param_1,*(undefined4 *)(iVar3 + iVar4 * 4),0);
          iVar4 = iVar4 + -1;
        } while (0 < (int)uVar12);
      }
    }
  }
  return;
}

