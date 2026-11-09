/* IL2CPP: Rotatelab.Networking.HiroController.<<InitializeSystemsAsync>b__62_0>d$$MoveNext
void Rotatelab_Networking_HiroController___InitializeSystemsAsync_b__62_0_d__MoveNext (Rotatelab_Networking_HiroController___InitializeSystemsAsync_b__62_0_d_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController.<<InitializeSystemsAsync>b__62_0>d$$MoveNext
   void Rotatelab_Networking_HiroController___InitializeSystemsAsync_b__62_0_d__MoveNext
   (Rotatelab_Networking_HiroController___InitializeSystemsAsync_b__62_0_d_o __this, const
   MethodInfo* method); */

void Rotatelab_Networking_HiroController___InitializeSystemsAsync_b__62_0_d__MoveNext_114e414
               (int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  int iStack_14;
  
  pcVar5 = (char *)(_UNK_0115e67c + 0x115e42c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115e680 + 0x115e440));
    *pcVar5 = '\x01';
  }
  iStack_14 = 0;
  if (*param_1 == 0) {
    *param_1 = -1;
    iStack_14 = param_1[4];
    param_1[4] = 0;
  }
  else {
    if (param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(param_1[3] + 0x20);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = Hiro_NakamaSystem__InitializeAsync_296324c(iVar6,0);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iStack_14 = System_Threading_Tasks_Task__GetAwaiter_2bf1e70(iVar6,0);
    iVar6 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted_2a9339c(&iStack_14,0);
    if (iVar6 == 0) {
      *param_1 = 0;
      param_1[4] = iStack_14;
      thunk_FUN_00ec5080(param_1 + 4,0);
      func_0x01172f1c(param_1 + 1,&iStack_14,param_1,**(undefined4 **)(_UNK_0115e684 + 0x115e4e8));
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult_2a93488(&iStack_14,0);
  iVar6 = _UNK_0115e688;
  *param_1 = -2;
  if (*(char *)(iVar6 + 0x115e530) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115e68c + 0x115e544));
    *(char *)(iVar6 + 0x115e530) = '\x01';
  }
  piVar4 = (int *)param_1[1];
  if (piVar4 != (int *)0x0) {
    iVar6 = *piVar4;
    uVar2 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar2 != 0) {
      piVar3 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_0115e690 + 0x115e568)) {
          puVar1 = (undefined4 *)(iVar6 + *piVar3 * 8 + 0xd0);
          goto LAB_0115e5b0;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined4 *)FUN_00efdb38(piVar4,**(int **)(_UNK_0115e690 + 0x115e568),2);
LAB_0115e5b0:
    (*(code *)*puVar1)(piVar4,puVar1[1]);
  }
  return;
}

