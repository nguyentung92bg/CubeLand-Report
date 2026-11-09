/* IL2CPP: Rotatelab.Networking.HiroController.<>c__DisplayClass76_0.<<AuthenticateSatoriInBackgroundAsync>b__0>d$$MoveNext
void Rotatelab_Networking_HiroController___c__DisplayClass76_0___AuthenticateSatoriInBackgroundAsync_b__0_d__MoveNext (Rotatelab_Networking_HiroController___c__DisplayClass76_0___AuthenticateSatoriInBackgroundAsync_b__0_d_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Networking.HiroController.<>c__DisplayClass76_0.<<AuthenticateSatoriInBackgroundAsync>b__0>d$$MoveNext
   void 
   Rotatelab_Networking_HiroController___c__DisplayClass76_0___AuthenticateSatoriInBackgroundAsync_b__0_d__MoveNext
   (Rotatelab_Networking_HiroController___c__DisplayClass76_0___AuthenticateSatoriInBackgroundAsync_b__0_d_o
   __this, const MethodInfo* method); */

void Rotatelab_Networking_HiroController___c__DisplayClass76_0___AuthenticateSatoriInBackgroundAsync_b__0_d__MoveNext_1150178
               (int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_0116050c + 0x1160190);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01160510 + 0x11601a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01160514 + 0x11601b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01160518 + 0x11601bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116051c + 0x11601c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01160520 + 0x11601d4));
    *pcVar4 = '\x01';
  }
  iVar5 = param_1[3];
  iStack_28 = 0;
  if (*param_1 == 0) {
    *param_1 = -1;
    iStack_28 = param_1[4];
    param_1[4] = 0;
  }
  else {
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(*(int *)(iVar5 + 8) + 0x24);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar7 = *(int **)(iVar6 + 0x10);
    if (*(int *)(iVar5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar8 = *(undefined4 *)(iVar5 + 0xc);
    uVar9 = *(undefined4 *)(*(int *)(iVar5 + 8) + 0x14);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *piVar7;
    uVar2 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar2 != 0) {
      piVar3 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01160524 + 0x116025c)) {
          puVar1 = (undefined4 *)(iVar6 + *piVar3 * 8 + 0xd8);
          goto LAB_011602bc;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined4 *)FUN_00efdb38(piVar7,**(int **)(_UNK_01160524 + 0x116025c),3);
LAB_011602bc:
    iVar6 = (*(code *)*puVar1)(piVar7,uVar9,uVar8,0,0,0,0,puVar1[1]);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iStack_28 = System_Threading_Tasks_Task_object___GetAwaiter_1b58780
                          (iVar6,**(undefined4 **)(_UNK_01160528 + 0x1160304));
    iVar6 = System_Runtime_CompilerServices_TaskAwaiter_object___get_IsCompleted_1b45ac8
                      (&iStack_28,**(undefined4 **)(_UNK_0116052c + 0x1160318));
    if (iVar6 == 0) {
      *param_1 = 0;
      param_1[4] = iStack_28;
      thunk_FUN_00ec5080(param_1 + 4,0);
      func_0x011735dc(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_01160530 + 0x1160410));
      return;
    }
  }
  uVar8 = System_Runtime_CompilerServices_TaskAwaiter_object___GetResult_1b45b3c
                    (&iStack_28,**(undefined4 **)(_UNK_01160534 + 0x1160338));
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar5 + 0x10) = uVar8;
  thunk_FUN_00ec5080((undefined4 *)(iVar5 + 0x10),uVar8);
  iVar5 = _UNK_01160538;
  *param_1 = -2;
  if (*(char *)(iVar5 + 0x1160374) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116053c + 0x1160388));
    *(char *)(iVar5 + 0x1160374) = '\x01';
  }
  piVar7 = (int *)param_1[1];
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    uVar2 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar2 != 0) {
      piVar3 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01160540 + 0x11603ac)) {
          puVar1 = (undefined4 *)(iVar5 + *piVar3 * 8 + 0xd0);
          goto LAB_01160430;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined4 *)FUN_00efdb38(piVar7,**(int **)(_UNK_01160540 + 0x11603ac),2);
LAB_01160430:
    (*(code *)*puVar1)(piVar7,puVar1[1]);
  }
  return;
}

