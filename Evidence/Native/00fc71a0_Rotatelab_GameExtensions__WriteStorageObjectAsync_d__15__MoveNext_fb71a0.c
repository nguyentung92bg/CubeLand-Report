/* IL2CPP: Rotatelab.GameExtensions.<WriteStorageObjectAsync>d__15$$MoveNext
void Rotatelab_GameExtensions__WriteStorageObjectAsync_d__15__MoveNext (Rotatelab_GameExtensions__WriteStorageObjectAsync_d__15_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x00fc7790) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Rotatelab.GameExtensions.<WriteStorageObjectAsync>d__15$$MoveNext
   void Rotatelab_GameExtensions__WriteStorageObjectAsync_d__15__MoveNext
   (Rotatelab_GameExtensions__WriteStorageObjectAsync_d__15_o __this, const MethodInfo* method); */

void Rotatelab_GameExtensions__WriteStorageObjectAsync_d__15__MoveNext_fb71a0(uint *param_1)

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
  
  pcVar7 = (char *)(_UNK_00fc78e8 + 0xfc71b8);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc78ec + 0xfc71cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc78f0 + 0xfc71d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc78f4 + 0xfc71e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc78f8 + 0xfc71f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc78fc + 0xfc71fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc7900 + 0xfc7208));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc7904 + 0xfc7214));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc7908 + 0xfc7220));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc790c + 0xfc722c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc7910 + 0xfc7238));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc7914 + 0xfc7244));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc7918 + 0xfc7250));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc791c + 0xfc725c));
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
    piVar1 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fc7920 + 0xfc72e8),1);
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
        if (piVar6[-1] == **(int **)(_UNK_00fc7924 + 0xfc7374)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0x148);
          goto LAB_00fc73bc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_00fc7924 + 0xfc7374),0x11);
LAB_00fc73bc:
    iVar2 = (*(code *)*puVar4)(piVar9,uVar11,piVar1,uVar8,uVar12,puVar4[1]);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_2c = System_Threading_Tasks_Task_object___GetAwaiter_1b58780
                          (iVar2,**(undefined4 **)(_UNK_00fc7928 + 0xfc73f4));
    iVar2 = System_Runtime_CompilerServices_TaskAwaiter_object___get_IsCompleted_1b45ac8
                      (&uStack_2c,**(undefined4 **)(_UNK_00fc792c + 0xfc7408));
    if (iVar2 == 0) {
      *param_1 = 0;
      uStack_28 = 0;
      param_1[8] = uStack_2c;
      thunk_FUN_00ec5080(param_1 + 8,0);
      if (*(int *)(**(int **)(_UNK_00fc7930 + 0xfc74b8) + 0x74) == 0) {
        FUN_00ec3934();
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___AwaitUnsafeOnCompleted_TaskAwaiter_object___GameExtensions__WriteStorageObjectAsync_d__15__121d76c
                (param_1 + 1,&uStack_2c,param_1,**(undefined4 **)(_UNK_00fc7934 + 0xfc74d4));
      return;
    }
  }
  piVar1 = (int *)System_Runtime_CompilerServices_TaskAwaiter_object___GetResult_1b45b3c
                            (&uStack_2c,**(undefined4 **)(_UNK_00fc7938 + 0xfc7428));
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *piVar1;
  uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_00fc793c + 0xfc7450)) {
        puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
        goto LAB_00fc74f4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(piVar1,**(int **)(_UNK_00fc793c + 0xfc7450),0);
LAB_00fc74f4:
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
      if (piVar9[-1] == **(int **)(_UNK_00fc7940 + 0xfc7524)) {
        puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
        goto LAB_00fc756c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(piVar1,**(int **)(_UNK_00fc7940 + 0xfc7524),0);
LAB_00fc756c:
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
      if (piVar9[-1] == **(int **)(_UNK_00fc7944 + 0xfc75b8)) {
        puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
        goto LAB_00fc7600;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(piVar1,**(int **)(_UNK_00fc7944 + 0xfc75b8),0);
LAB_00fc7600:
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
        if (piVar9[-1] == **(int **)(_UNK_00fc7948 + 0xfc7640)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto LAB_00fc7688;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar1,**(int **)(_UNK_00fc7948 + 0xfc7640),0);
LAB_00fc7688:
    uVar11 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    iVar10 = 7;
  }
  if ((0x7fffffff < uStack_28) && (piVar1 != (int *)0x0)) {
    iVar2 = *piVar1;
    uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_00fc794c + 0xfc7730)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto LAB_00fc7778;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar1,**(int **)(_UNK_00fc794c + 0xfc7730),0);
LAB_00fc7778:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  if (iVar10 != 8) {
    if (iVar10 == 7) goto LAB_00fc77b4;
    if (iVar10 != 0) {
      return;
    }
  }
  uVar11 = 0;
LAB_00fc77b4:
  piVar1 = *(int **)(_UNK_00fc7950 + 0xfc77c4);
  *param_1 = 0xfffffffe;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___SetResult_17c08c0
            (param_1 + 1,uVar11,**(undefined4 **)(_UNK_00fc7954 + 0xfc77e8));
  return;
}

