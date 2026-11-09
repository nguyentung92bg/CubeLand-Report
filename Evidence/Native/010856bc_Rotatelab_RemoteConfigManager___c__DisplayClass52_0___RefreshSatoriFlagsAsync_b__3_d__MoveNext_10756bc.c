/* IL2CPP: Rotatelab.RemoteConfigManager.<>c__DisplayClass52_0.<<RefreshSatoriFlagsAsync>b__3>d$$MoveNext
void Rotatelab_RemoteConfigManager___c__DisplayClass52_0___RefreshSatoriFlagsAsync_b__3_d__MoveNext (Rotatelab_RemoteConfigManager___c__DisplayClass52_0___RefreshSatoriFlagsAsync_b__3_d_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.RemoteConfigManager.<>c__DisplayClass52_0.<<RefreshSatoriFlagsAsync>b__3>d$$MoveNext
   void 
   Rotatelab_RemoteConfigManager___c__DisplayClass52_0___RefreshSatoriFlagsAsync_b__3_d__MoveNext
   (Rotatelab_RemoteConfigManager___c__DisplayClass52_0___RefreshSatoriFlagsAsync_b__3_d_o __this,
   const MethodInfo* method); */

void Rotatelab_RemoteConfigManager___c__DisplayClass52_0___RefreshSatoriFlagsAsync_b__3_d__MoveNext_10756bc
               (int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_01085a90 + 0x10856d4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01085a94 + 0x10856e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01085a98 + 0x10856f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01085a9c + 0x1085700));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01085aa0 + 0x108570c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01085aa4 + 0x1085718));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01085aa8 + 0x1085724));
    *pcVar4 = '\x01';
  }
  iVar5 = param_1[3];
  iStack_24 = 0;
  if (*param_1 == 0) {
    *param_1 = -1;
    iStack_24 = param_1[4];
    param_1[4] = 0;
  }
  else {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01085aac + 0x1085754));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar10 = *(int **)(_UNK_01085ab0 + 0x1085774);
    iVar9 = *(int *)(iVar1 + 0x24);
    iVar7 = *piVar10;
    iVar1 = *(int *)(iVar7 + 0x1c);
    if (iVar1 == 0) {
      FUN_00efd7c4(iVar7);
      iVar1 = *(int *)(iVar7 + 0x1c);
    }
    iVar1 = *(int *)(iVar1 + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    iVar7 = *piVar10;
    uVar8 = **(undefined4 **)(iVar1 + 0x5c);
    iVar1 = *(int *)(iVar7 + 0x1c);
    if (iVar1 == 0) {
      FUN_00efd7c4(iVar7);
      iVar1 = *(int *)(iVar7 + 0x1c);
    }
    iVar1 = *(int *)(iVar1 + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Hiro_SatoriSystem__GetFlagsAsync_296c220
                      (iVar9,uVar8,**(undefined4 **)(iVar1 + 0x5c),0,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iStack_24 = System_Threading_Tasks_Task_object___GetAwaiter_1b58780
                          (iVar1,**(undefined4 **)(_UNK_01085ab4 + 0x1085878));
    iVar1 = System_Runtime_CompilerServices_TaskAwaiter_object___get_IsCompleted_1b45ac8
                      (&iStack_24,**(undefined4 **)(_UNK_01085ab8 + 0x108588c));
    if (iVar1 == 0) {
      *param_1 = 0;
      param_1[4] = iStack_24;
      thunk_FUN_00ec5080(param_1 + 4,0);
      func_0x0109f6f0(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_01085abc + 0x10858c8));
      return;
    }
  }
  uVar8 = System_Runtime_CompilerServices_TaskAwaiter_object___GetResult_1b45b3c
                    (&iStack_24,**(undefined4 **)(_UNK_01085ac0 + 0x10858fc));
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar6 = (undefined4 *)(iVar5 + 8);
  *puVar6 = uVar8;
  thunk_FUN_00ec5080(puVar6,uVar8);
  iVar5 = _UNK_01085ac4;
  *param_1 = -2;
  if (*(char *)(iVar5 + 0x1085938) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01085ac8 + 0x108594c));
    *(char *)(iVar5 + 0x1085938) = '\x01';
  }
  piVar10 = (int *)param_1[1];
  if (piVar10 != (int *)0x0) {
    iVar5 = *piVar10;
    uVar2 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar2 != 0) {
      piVar3 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01085acc + 0x1085970)) {
          puVar6 = (undefined4 *)(iVar5 + *piVar3 * 8 + 0xd0);
          goto LAB_010859b8;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar2 != 0);
    }
    puVar6 = (undefined4 *)FUN_00efdb38(piVar10,**(int **)(_UNK_01085acc + 0x1085970),2);
LAB_010859b8:
    (*(code *)*puVar6)(piVar10,puVar6[1]);
  }
  return;
}

