/* IL2CPP: Rotatelab.Networking.HiroController.<>c__DisplayClass75_0.<<AuthenticateSatoriAsync>b__0>d$$MoveNext
void Rotatelab_Networking_HiroController___c__DisplayClass75_0___AuthenticateSatoriAsync_b__0_d__MoveNext (Rotatelab_Networking_HiroController___c__DisplayClass75_0___AuthenticateSatoriAsync_b__0_d_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Networking.HiroController.<>c__DisplayClass75_0.<<AuthenticateSatoriAsync>b__0>d$$MoveNext
   void 
   Rotatelab_Networking_HiroController___c__DisplayClass75_0___AuthenticateSatoriAsync_b__0_d__MoveNext
   (Rotatelab_Networking_HiroController___c__DisplayClass75_0___AuthenticateSatoriAsync_b__0_d_o
   __this, const MethodInfo* method); */

void Rotatelab_Networking_HiroController___c__DisplayClass75_0___AuthenticateSatoriAsync_b__0_d__MoveNext_114fcf4
               (int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_01160060 + 0x115fd0c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01160064 + 0x115fd20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01160068 + 0x115fd2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116006c + 0x115fd38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01160070 + 0x115fd44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01160074 + 0x115fd50));
    *pcVar5 = '\x01';
  }
  iVar6 = param_1[3];
  iStack_24 = 0;
  if (*param_1 == 0) {
    *param_1 = -1;
    iStack_24 = param_1[4];
    param_1[4] = 0;
  }
  else {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar8 = *(int **)(iVar6 + 8);
    if (*(int *)(iVar6 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar9 = *(undefined4 *)(iVar6 + 0x10);
    uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0xc) + 0x14);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piVar8;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_01160078 + 0x115fdb4)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd8);
          goto LAB_0115fe14;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar8,**(int **)(_UNK_01160078 + 0x115fdb4),3);
LAB_0115fe14:
    iVar1 = (*(code *)*puVar2)(piVar8,uVar7,uVar9,0,0,0,0,puVar2[1]);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iStack_24 = System_Threading_Tasks_Task_object___GetAwaiter_1b58780
                          (iVar1,**(undefined4 **)(_UNK_0116007c + 0x115fe60));
    iVar1 = System_Runtime_CompilerServices_TaskAwaiter_object___get_IsCompleted_1b45ac8
                      (&iStack_24,**(undefined4 **)(_UNK_01160080 + 0x115fe74));
    if (iVar1 == 0) {
      *param_1 = 0;
      param_1[4] = iStack_24;
      thunk_FUN_00ec5080(param_1 + 4,0);
      func_0x011734bc(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_01160084 + 0x115ff6c));
      return;
    }
  }
  uVar7 = System_Runtime_CompilerServices_TaskAwaiter_object___GetResult_1b45b3c
                    (&iStack_24,**(undefined4 **)(_UNK_01160088 + 0x115fe94));
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar6 + 0x14) = uVar7;
  thunk_FUN_00ec5080((undefined4 *)(iVar6 + 0x14),uVar7);
  iVar6 = _UNK_0116008c;
  *param_1 = -2;
  if (*(char *)(iVar6 + 0x115fed0) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01160090 + 0x115fee4));
    *(char *)(iVar6 + 0x115fed0) = '\x01';
  }
  piVar8 = (int *)param_1[1];
  if (piVar8 != (int *)0x0) {
    iVar6 = *piVar8;
    uVar3 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_01160094 + 0x115ff08)) {
          puVar2 = (undefined4 *)(iVar6 + *piVar4 * 8 + 0xd0);
          goto LAB_0115ff8c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar8,**(int **)(_UNK_01160094 + 0x115ff08),2);
LAB_0115ff8c:
    (*(code *)*puVar2)(piVar8,puVar2[1]);
  }
  return;
}

