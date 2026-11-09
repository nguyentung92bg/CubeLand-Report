/* IL2CPP: Rotatelab.RecentLogRecorder$$OnLogMessageReceived
void Rotatelab_RecentLogRecorder__OnLogMessageReceived (System_String_o* condition, System_String_o* stackTrace, int32_t type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RecentLogRecorder$$OnLogMessageReceived
   void Rotatelab_RecentLogRecorder__OnLogMessageReceived (System_String_o* condition,
   System_String_o* stackTrace, int32_t type, const MethodInfo* method); */

void Rotatelab_RecentLogRecorder__OnLogMessageReceived_fbada8
               (undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_6c;
  char *pcStack_68;
  undefined4 *puStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  char cStack_3d;
  undefined4 uStack_3c;
  
  pcVar4 = (char *)(_UNK_00fcb1e8 + 0xfcadd0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcb1ec + 0xfcade8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcb1f0 + 0xfcadf4));
    *pcVar4 = '\x01';
  }
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_3c = 0;
  cStack_3d = '\0';
  iStack_60 = 0;
  uStack_50 = 0;
  if (param_3 == 3) {
    return;
  }
  piVar7 = *(int **)(_UNK_00fcb1f4 + 0xfcae2c);
  iVar1 = *piVar7;
  uStack_4c = uStack_5c;
  uStack_48 = uStack_58;
  uStack_44 = uStack_54;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puStack_64 = &uStack_3c;
  cStack_3d = '\0';
  uStack_3c = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
  pcStack_68 = &cStack_3d;
  iStack_6c = 0;
  System_Threading_Monitor__Enter_2bdfb90();
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  piVar2 = *(int **)(iVar1 + 0x5c);
  if (piVar2[2] < 1) {
LAB_00fcb000:
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar7;
    }
    uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iVar6 = **(int **)(iVar1 + 0x5c);
    uVar5 = (*(int **)(iVar1 + 0x5c))[3];
    uStack_50 = 0;
    iStack_60 = param_3;
    uStack_5c = param_1;
    uStack_48 = uStack_58;
    uStack_44 = uStack_54;
    thunk_FUN_00ec5080((uint)&iStack_60 | 4,param_1);
    uStack_58 = param_2;
    thunk_FUN_00ec5080(&uStack_58,param_2);
    if (*(int *)(**(int **)(_UNK_00fcb1f8 + 0xfcb060) + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_DateTime__get_UtcNow_2b4a27c(&uStack_78,0);
    uStack_48 = 1;
    uStack_50 = uStack_78;
    uStack_4c = uStack_74;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar6 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar6 = iVar6 + uVar5 * 0x20;
    *(undefined4 *)(iVar6 + 0x28) = 1;
    *(undefined4 *)(iVar6 + 0x2c) = uStack_44;
    *(ulonglong *)(iVar6 + 0x10) = CONCAT44(uStack_5c,iStack_60);
    *(ulonglong *)(iVar6 + 0x18) = CONCAT44(uStack_54,uStack_58);
    *(undefined4 *)(iVar6 + 0x20) = uStack_78;
    *(undefined4 *)(iVar6 + 0x24) = uStack_74;
    thunk_FUN_00ec5080(iVar6 + 0x14,0);
    iVar1 = *piVar7;
    iVar6 = *(int *)(iVar1 + 0x5c);
    iVar3 = *(int *)(iVar6 + 8);
    *(int *)(iVar6 + 0xc) = (*(int *)(iVar6 + 0xc) + 1) % 0x14;
    if (0x13 < iVar3) goto LAB_00fcb140;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar6 = *(int *)(*piVar7 + 0x5c);
      iVar3 = *(int *)(iVar6 + 8);
    }
    piVar7 = (int *)(iVar6 + 8);
  }
  else {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      piVar2 = *(int **)(*piVar7 + 0x5c);
    }
    iVar6 = *piVar2;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = (piVar2[3] + 0x13) % 0x14;
    if (*(uint *)(iVar6 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar1 = *piVar7;
    if (*(int *)(iVar6 + uVar5 * 0x20 + 0x10) != param_3) goto LAB_00fcb000;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar7;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar6 = System_String__op_Equality_2a0975c
                      (*(undefined4 *)(iVar1 + uVar5 * 0x20 + 0x14),param_1,0);
    iVar1 = *piVar7;
    if (iVar6 == 0) goto LAB_00fcb000;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar7;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar6 = System_String__op_Equality_2a0975c
                      (*(undefined4 *)(iVar1 + uVar5 * 0x20 + 0x18),param_2,0);
    iVar1 = *piVar7;
    if (iVar6 == 0) goto LAB_00fcb000;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar7;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar7 = (int *)(iVar1 + uVar5 * 0x20 + 0x28);
    iVar3 = *piVar7;
  }
  *piVar7 = iVar3 + 1;
LAB_00fcb140:
  if (*pcStack_68 != '\0') {
    System_Threading_Monitor__Exit_2be3444(*puStack_64,0);
  }
  if (iStack_6c != 0) {
    FUN_00ec3a6c();
  }
  return;
}

