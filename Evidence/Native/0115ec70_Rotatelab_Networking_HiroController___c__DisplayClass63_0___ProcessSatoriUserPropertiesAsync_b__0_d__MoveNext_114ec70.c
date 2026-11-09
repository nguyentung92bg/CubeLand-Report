/* IL2CPP: Rotatelab.Networking.HiroController.<>c__DisplayClass63_0.<<ProcessSatoriUserPropertiesAsync>b__0>d$$MoveNext
void Rotatelab_Networking_HiroController___c__DisplayClass63_0___ProcessSatoriUserPropertiesAsync_b__0_d__MoveNext (Rotatelab_Networking_HiroController___c__DisplayClass63_0___ProcessSatoriUserPropertiesAsync_b__0_d_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Networking.HiroController.<>c__DisplayClass63_0.<<ProcessSatoriUserPropertiesAsync>b__0>d$$MoveNext
   void 
   Rotatelab_Networking_HiroController___c__DisplayClass63_0___ProcessSatoriUserPropertiesAsync_b__0_d__MoveNext
   (Rotatelab_Networking_HiroController___c__DisplayClass63_0___ProcessSatoriUserPropertiesAsync_b__0_d_o
   __this, const MethodInfo* method); */

void Rotatelab_Networking_HiroController___c__DisplayClass63_0___ProcessSatoriUserPropertiesAsync_b__0_d__MoveNext_114ec70
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
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_0115f00c + 0x115ec88);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115f010 + 0x115ec9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115f014 + 0x115eca8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115f018 + 0x115ecb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115f01c + 0x115ecc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115f020 + 0x115eccc));
    *pcVar4 = '\x01';
  }
  iVar5 = param_1[3];
  iStack_1c = 0;
  if (*param_1 == 0) {
    *param_1 = -1;
    iStack_1c = param_1[4];
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
    iVar6 = *(int *)(*(int *)(iVar5 + 8) + 0x24);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar8 = *(undefined4 *)(iVar6 + 0x28);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *piVar7;
    uVar2 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar2 != 0) {
      piVar3 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_0115f024 + 0x115ed60)) {
          puVar1 = (undefined4 *)(iVar6 + *piVar3 * 8 + 0xf8);
          goto LAB_0115edc0;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined4 *)FUN_00efdb38(piVar7,**(int **)(_UNK_0115f024 + 0x115ed60),7);
LAB_0115edc0:
    iVar6 = (*(code *)*puVar1)(piVar7,uVar8,0,0,0,puVar1[1]);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iStack_1c = System_Threading_Tasks_Task_object___GetAwaiter_1b58780
                          (iVar6,**(undefined4 **)(_UNK_0115f028 + 0x115ee00));
    iVar6 = System_Runtime_CompilerServices_TaskAwaiter_object___get_IsCompleted_1b45ac8
                      (&iStack_1c,**(undefined4 **)(_UNK_0115f02c + 0x115ee14));
    if (iVar6 == 0) {
      *param_1 = 0;
      param_1[4] = iStack_1c;
      thunk_FUN_00ec5080(param_1 + 4,0);
      func_0x0117315c(param_1 + 1,&iStack_1c,param_1,**(undefined4 **)(_UNK_0115f030 + 0x115ef0c));
      return;
    }
  }
  uVar8 = System_Runtime_CompilerServices_TaskAwaiter_object___GetResult_1b45b3c
                    (&iStack_1c,**(undefined4 **)(_UNK_0115f034 + 0x115ee34));
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar5 + 0xc) = uVar8;
  thunk_FUN_00ec5080((undefined4 *)(iVar5 + 0xc),uVar8);
  iVar5 = _UNK_0115f038;
  *param_1 = -2;
  if (*(char *)(iVar5 + 0x115ee70) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115f03c + 0x115ee84));
    *(char *)(iVar5 + 0x115ee70) = '\x01';
  }
  piVar7 = (int *)param_1[1];
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    uVar2 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar2 != 0) {
      piVar3 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_0115f040 + 0x115eea8)) {
          puVar1 = (undefined4 *)(iVar5 + *piVar3 * 8 + 0xd0);
          goto LAB_0115ef2c;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined4 *)FUN_00efdb38(piVar7,**(int **)(_UNK_0115f040 + 0x115eea8),2);
LAB_0115ef2c:
    (*(code *)*puVar1)(piVar7,puVar1[1]);
  }
  return;
}

