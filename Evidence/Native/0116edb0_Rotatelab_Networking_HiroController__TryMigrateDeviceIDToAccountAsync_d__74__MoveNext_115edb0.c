/* IL2CPP: Rotatelab.Networking.HiroController.<TryMigrateDeviceIDToAccountAsync>d__74$$MoveNext
void Rotatelab_Networking_HiroController__TryMigrateDeviceIDToAccountAsync_d__74__MoveNext (Rotatelab_Networking_HiroController__TryMigrateDeviceIDToAccountAsync_d__74_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController.<TryMigrateDeviceIDToAccountAsync>d__74$$MoveNext
   void Rotatelab_Networking_HiroController__TryMigrateDeviceIDToAccountAsync_d__74__MoveNext
   (Rotatelab_Networking_HiroController__TryMigrateDeviceIDToAccountAsync_d__74_o __this, const
   MethodInfo* method); */

void Rotatelab_Networking_HiroController__TryMigrateDeviceIDToAccountAsync_d__74__MoveNext_115edb0
               (uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uStack_24;
  
  pcVar7 = (char *)(_UNK_0116f588 + 0x116edc8);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116f58c + 0x116eddc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116f590 + 0x116ede8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116f594 + 0x116edf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116f598 + 0x116ee00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116f59c + 0x116ee0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116f5a0 + 0x116ee18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116f5a4 + 0x116ee24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116f5a8 + 0x116ee30));
    *pcVar7 = '\x01';
  }
  uVar10 = *param_1;
  uVar11 = param_1[3];
  uStack_24 = 0;
  if (1 < uVar10) {
    iVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_0116f5ac + 0x116ee60),6);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar8 = **(undefined4 **)(_UNK_0116f5b0 + 0x116ee84);
    if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar1 + 0x10) = uVar8;
    thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),uVar8);
    if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar8 = *(undefined4 *)(uVar11 + 0x18);
    if (*(uint *)(iVar1 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar1 + 0x14) = uVar8;
    thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x14),uVar8);
    uVar8 = **(undefined4 **)(_UNK_0116f5b4 + 0x116eee0);
    if (*(uint *)(iVar1 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar1 + 0x18) = uVar8;
    thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x18),uVar8);
    piVar9 = (int *)param_1[4];
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *piVar9;
    piVar12 = *(int **)(_UNK_0116f5b8 + 0x116ef20);
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    iVar4 = *piVar12;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar4) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xf8);
          goto LAB_0116ef68;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar9,iVar4,7);
LAB_0116ef68:
    uVar8 = (*(code *)*puVar3)(piVar9,puVar3[1]);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar1 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar1 + 0x1c) = uVar8;
    thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x1c),uVar8);
    uVar8 = **(undefined4 **)(_UNK_0116f5bc + 0x116efb4);
    if (*(uint *)(iVar1 + 0xc) < 5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar1 + 0x20) = uVar8;
    thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x20),uVar8);
    piVar9 = (int *)param_1[5];
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *piVar9;
    iVar4 = *piVar12;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar12[-1] == iVar4) {
          puVar3 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0xf8);
          goto LAB_0116f034;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar9,iVar4,7);
LAB_0116f034:
    uVar8 = (*(code *)*puVar3)(piVar9,puVar3[1]);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar1 + 0xc) < 6) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar1 + 0x24) = uVar8;
    thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x24),uVar8);
    uVar8 = System_String__Concat_2a0bee8(iVar1,0);
    if (*(int *)(**(int **)(_UNK_0116f5c0 + 0x116f090) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Debug__Log_35b1c44(uVar8,0);
  }
  if (uVar10 == 0) {
    *param_1 = 0xffffffff;
    uStack_24 = param_1[7];
    param_1[7] = 0;
  }
  else {
    if (uVar10 == 1) {
      *param_1 = 0xffffffff;
      uStack_24 = param_1[7];
      param_1[7] = 0;
      goto LAB_0116f2cc;
    }
    piVar9 = (int *)param_1[6];
    uVar10 = param_1[4];
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piVar9;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar12[-1] == **(int **)(_UNK_0116f5c4 + 0x116f118)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0x108);
          goto LAB_0116f160;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_0116f5c4 + 0x116f118),9);
LAB_0116f160:
    iVar1 = (*(code *)*puVar3)(piVar9,uVar10,0,0,puVar3[1]);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_24 = System_Threading_Tasks_Task__GetAwaiter_2bf1e70(iVar1,0);
    iVar1 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted_2a9339c(&uStack_24,0);
    if (iVar1 == 0) {
      *param_1 = 0;
      param_1[7] = uStack_24;
      thunk_FUN_00ec5080(param_1 + 7,0);
      func_0x011753b4(param_1 + 1,&uStack_24,param_1,**(undefined4 **)(_UNK_0116f5c8 + 0x116f254));
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult_2a93488(&uStack_24,0);
  uVar10 = param_1[5];
  piVar9 = (int *)param_1[6];
  if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar8 = *(undefined4 *)(uVar11 + 0x18);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar9;
  uVar11 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar12[-1] == **(int **)(_UNK_0116f5d4 + 0x116f1f0)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0x120);
        goto LAB_0116f274;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 2;
    } while (uVar11 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_0116f5d4 + 0x116f1f0),0xc);
LAB_0116f274:
  iVar1 = (*(code *)*puVar3)(piVar9,uVar10,uVar8,0,0,puVar3[1]);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_24 = System_Threading_Tasks_Task__GetAwaiter_2bf1e70(iVar1,0);
  iVar1 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted_2a9339c(&uStack_24,0);
  if (iVar1 == 0) {
    *param_1 = 1;
    param_1[7] = uStack_24;
    thunk_FUN_00ec5080(param_1 + 7,0);
    func_0x011753b4(param_1 + 1,&uStack_24,param_1,**(undefined4 **)(_UNK_0116f5d8 + 0x116f388));
    return;
  }
LAB_0116f2cc:
  System_Runtime_CompilerServices_TaskAwaiter__GetResult_2a93488(&uStack_24,0);
  iVar1 = _UNK_0116f5dc;
  *param_1 = 0xfffffffe;
  if (*(char *)(iVar1 + 0x116f2ec) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116f5e0 + 0x116f300));
    *(char *)(iVar1 + 0x116f2ec) = '\x01';
  }
  piVar9 = (int *)param_1[1];
  if (piVar9 != (int *)0x0) {
    iVar1 = *piVar9;
    uVar10 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar12[-1] == **(int **)(_UNK_0116f5e4 + 0x116f324)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xd0);
          goto LAB_0116f3a8;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_0116f5e4 + 0x116f324),2);
LAB_0116f3a8:
    (*(code *)*puVar3)(piVar9,puVar3[1]);
  }
  return;
}

