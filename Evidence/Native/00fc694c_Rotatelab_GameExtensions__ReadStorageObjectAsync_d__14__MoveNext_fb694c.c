/* IL2CPP: Rotatelab.GameExtensions.<ReadStorageObjectAsync>d__14$$MoveNext
void Rotatelab_GameExtensions__ReadStorageObjectAsync_d__14__MoveNext (Rotatelab_GameExtensions__ReadStorageObjectAsync_d__14_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x00fc6f3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Rotatelab.GameExtensions.<ReadStorageObjectAsync>d__14$$MoveNext
   void Rotatelab_GameExtensions__ReadStorageObjectAsync_d__14__MoveNext
   (Rotatelab_GameExtensions__ReadStorageObjectAsync_d__14_o __this, const MethodInfo* method); */

void Rotatelab_GameExtensions__ReadStorageObjectAsync_d__14__MoveNext_fb694c(uint *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uStack_2c;
  uint uStack_28;
  
  pcVar7 = (char *)(_UNK_00fc7094 + 0xfc6964);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc7098 + 0xfc6978));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc709c + 0xfc6984));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc70a0 + 0xfc6990));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc70a4 + 0xfc699c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc70a8 + 0xfc69a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc70ac + 0xfc69b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc70b0 + 0xfc69c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc70b4 + 0xfc69cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc70b8 + 0xfc69d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc70bc + 0xfc69e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc70c0 + 0xfc69f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc70c4 + 0xfc69fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc70c8 + 0xfc6a08));
    *pcVar7 = '\x01';
  }
  uStack_28 = *param_1;
  uStack_2c = 0;
  if (uStack_28 == 0) {
    uStack_2c = param_1[8];
    *param_1 = 0xffffffff;
    param_1[8] = 0;
    uStack_28 = 0xffffffff;
  }
  else {
    uVar8 = param_1[4];
    if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar9 = *(int **)(uVar8 + 0x20);
    uVar11 = *(undefined4 *)(uVar8 + 0x24);
    piVar1 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fc70cc + 0xfc6a94),1);
    uVar8 = param_1[5];
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((uVar8 != 0) &&
       (iVar2 = thunk_FUN_00f00bc8(uVar8,*(undefined4 *)(*piVar1 + 0x20)), iVar2 == 0)) {
      uVar3 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar3,0);
    }
    if (piVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar1[4] = uVar8;
    thunk_FUN_00ec5080(piVar1 + 4,uVar8);
    uVar8 = param_1[6];
    uVar12 = param_1[7];
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *piVar9;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_00fc70d0 + 0xfc6b20)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0x130);
          goto LAB_00fc6b68;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_00fc70d0 + 0xfc6b20),0xe);
LAB_00fc6b68:
    iVar2 = (*(code *)*puVar4)(piVar9,uVar11,piVar1,uVar8,uVar12,puVar4[1]);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_2c = System_Threading_Tasks_Task_object___GetAwaiter_1b58780
                          (iVar2,**(undefined4 **)(_UNK_00fc70d4 + 0xfc6ba0));
    iVar2 = System_Runtime_CompilerServices_TaskAwaiter_object___get_IsCompleted_1b45ac8
                      (&uStack_2c,**(undefined4 **)(_UNK_00fc70d8 + 0xfc6bb4));
    if (iVar2 == 0) {
      *param_1 = 0;
      uStack_28 = 0;
      param_1[8] = uStack_2c;
      thunk_FUN_00ec5080(param_1 + 8,0);
      if (*(int *)(**(int **)(_UNK_00fc70dc + 0xfc6c64) + 0x74) == 0) {
        FUN_00ec3934();
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___AwaitUnsafeOnCompleted_TaskAwaiter_object___GameExtensions__ReadStorageObjectAsync_d__14__121d59c
                (param_1 + 1,&uStack_2c,param_1,**(undefined4 **)(_UNK_00fc70e0 + 0xfc6c80));
      return;
    }
  }
  piVar1 = (int *)System_Runtime_CompilerServices_TaskAwaiter_object___GetResult_1b45b3c
                            (&uStack_2c,**(undefined4 **)(_UNK_00fc70e4 + 0xfc6bd4));
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *piVar1;
  uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_00fc70e8 + 0xfc6bfc)) {
        puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
        goto LAB_00fc6ca0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(piVar1,**(int **)(_UNK_00fc70e8 + 0xfc6bfc),0);
LAB_00fc6ca0:
  piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *piVar1;
  uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_00fc70ec + 0xfc6cd0)) {
        puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
        goto LAB_00fc6d18;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(piVar1,**(int **)(_UNK_00fc70ec + 0xfc6cd0),0);
LAB_00fc6d18:
  piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *piVar1;
  uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_00fc70f0 + 0xfc6d64)) {
        puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
        goto LAB_00fc6dac;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(piVar1,**(int **)(_UNK_00fc70f0 + 0xfc6d64),0);
LAB_00fc6dac:
  iVar2 = (*(code *)*puVar4)(piVar1,puVar4[1]);
  iVar10 = 8;
  if (iVar2 == 0) {
    uVar11 = 0;
  }
  else {
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *piVar1;
    uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_00fc70f4 + 0xfc6dec)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto LAB_00fc6e34;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar1,**(int **)(_UNK_00fc70f4 + 0xfc6dec),0);
LAB_00fc6e34:
    uVar11 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    iVar10 = 7;
  }
  if ((0x7fffffff < uStack_28) && (piVar1 != (int *)0x0)) {
    iVar2 = *piVar1;
    uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_00fc70f8 + 0xfc6edc)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto LAB_00fc6f24;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar1,**(int **)(_UNK_00fc70f8 + 0xfc6edc),0);
LAB_00fc6f24:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  if (iVar10 != 8) {
    if (iVar10 == 7) goto LAB_00fc6f60;
    if (iVar10 != 0) {
      return;
    }
  }
  uVar11 = 0;
LAB_00fc6f60:
  piVar1 = *(int **)(_UNK_00fc70fc + 0xfc6f70);
  *param_1 = 0xfffffffe;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___SetResult_17c08c0
            (param_1 + 1,uVar11,**(undefined4 **)(_UNK_00fc7100 + 0xfc6f94));
  return;
}

