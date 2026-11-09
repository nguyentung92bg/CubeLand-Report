/* IL2CPP: Rotatelab.Networking.HiroController.<>c__DisplayClass67_0.<<AuthenticateNakamaAsync>b__2>d$$MoveNext
void Rotatelab_Networking_HiroController___c__DisplayClass67_0___AuthenticateNakamaAsync_b__2_d__MoveNext (Rotatelab_Networking_HiroController___c__DisplayClass67_0___AuthenticateNakamaAsync_b__2_d_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Networking.HiroController.<>c__DisplayClass67_0.<<AuthenticateNakamaAsync>b__2>d$$MoveNext
   void 
   Rotatelab_Networking_HiroController___c__DisplayClass67_0___AuthenticateNakamaAsync_b__2_d__MoveNext
   (Rotatelab_Networking_HiroController___c__DisplayClass67_0___AuthenticateNakamaAsync_b__2_d_o
   __this, const MethodInfo* method); */

void Rotatelab_Networking_HiroController___c__DisplayClass67_0___AuthenticateNakamaAsync_b__2_d__MoveNext_114f79c
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
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_0115fb04 + 0x115f7b4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115fb08 + 0x115f7c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115fb0c + 0x115f7d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115fb10 + 0x115f7e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115fb14 + 0x115f7ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115fb18 + 0x115f7f8));
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
    uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0xc) + 0x18);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piVar8;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_0115fb1c + 0x115f858)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xf8);
          goto LAB_0115f8b8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar8,**(int **)(_UNK_0115fb1c + 0x115f858),7);
LAB_0115f8b8:
    iVar1 = (*(code *)*puVar2)(piVar8,uVar7,0,1,0,0,0,puVar2[1]);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iStack_24 = System_Threading_Tasks_Task_object___GetAwaiter_1b58780
                          (iVar1,**(undefined4 **)(_UNK_0115fb20 + 0x115f904));
    iVar1 = System_Runtime_CompilerServices_TaskAwaiter_object___get_IsCompleted_1b45ac8
                      (&iStack_24,**(undefined4 **)(_UNK_0115fb24 + 0x115f918));
    if (iVar1 == 0) {
      *param_1 = 0;
      param_1[4] = iStack_24;
      thunk_FUN_00ec5080(param_1 + 4,0);
      func_0x0117339c(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_0115fb28 + 0x115fa10));
      return;
    }
  }
  uVar7 = System_Runtime_CompilerServices_TaskAwaiter_object___GetResult_1b45b3c
                    (&iStack_24,**(undefined4 **)(_UNK_0115fb2c + 0x115f938));
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar6 + 0x10) = uVar7;
  thunk_FUN_00ec5080((undefined4 *)(iVar6 + 0x10),uVar7);
  iVar6 = _UNK_0115fb30;
  *param_1 = -2;
  if (*(char *)(iVar6 + 0x115f974) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115fb34 + 0x115f988));
    *(char *)(iVar6 + 0x115f974) = '\x01';
  }
  piVar8 = (int *)param_1[1];
  if (piVar8 != (int *)0x0) {
    iVar6 = *piVar8;
    uVar3 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_0115fb38 + 0x115f9ac)) {
          puVar2 = (undefined4 *)(iVar6 + *piVar4 * 8 + 0xd0);
          goto LAB_0115fa30;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar8,**(int **)(_UNK_0115fb38 + 0x115f9ac),2);
LAB_0115fa30:
    (*(code *)*puVar2)(piVar8,puVar2[1]);
  }
  return;
}

