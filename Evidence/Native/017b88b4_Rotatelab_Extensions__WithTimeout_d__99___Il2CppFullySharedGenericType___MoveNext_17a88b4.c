/* IL2CPP: Rotatelab.Extensions.<WithTimeout>d__99<__Il2CppFullySharedGenericType>$$MoveNext
void Rotatelab_Extensions__WithTimeout_d__99___Il2CppFullySharedGenericType___MoveNext (Rotatelab_Extensions__WithTimeout_d__99_T__o __this, const MethodInfo_17A88B4* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions.<WithTimeout>d__99<__Il2CppFullySharedGenericType>$$MoveNext
   void Rotatelab_Extensions__WithTimeout_d__99___Il2CppFullySharedGenericType___MoveNext
   (Rotatelab_Extensions__WithTimeout_d__99_T__o __this, const MethodInfo_17A88B4* method); */

void Rotatelab_Extensions__WithTimeout_d__99___Il2CppFullySharedGenericType___MoveNext_17a88b4
               (int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  ushort uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  code *pcVar13;
  int *piVar14;
  int iVar15;
  int aiStack_48 [2];
  int aiStack_40 [4];
  int *piStack_30;
  int iStack_2c;
  
  pcVar10 = (char *)(_UNK_017b9198 + 0x17b88d4);
  iStack_2c = **(int **)(_UNK_017b919c + 0x17b88e4);
  aiStack_40[0] = param_1;
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_017b91a0 + 0x17b88fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_017b91a4 + 0x17b8908));
    FUN_00ec37c0(*(undefined4 *)(_UNK_017b91a8 + 0x17b8914));
    FUN_00ec37c0(*(undefined4 *)(_UNK_017b91ac + 0x17b8920));
    FUN_00ec37c0(*(undefined4 *)(_UNK_017b91b0 + 0x17b892c));
    *pcVar10 = '\x01';
  }
  iVar11 = *(int *)(param_2 + 0x10);
  uVar9 = *(ushort *)(iVar11 + 0xbd);
  iVar2 = iVar11;
  if ((uVar9 & 1) == 0) {
    iVar11 = FUN_00efd768(iVar11);
    uVar9 = *(ushort *)(*(int *)(param_2 + 0x10) + 0xbd);
    iVar2 = *(int *)(param_2 + 0x10);
  }
  iVar15 = *(int *)(*(int *)(*(int *)(iVar11 + 0x60) + 0x18) + 0x84);
  uVar1 = iVar15 + 7U & 0xfffffff8;
  piVar14 = (int *)((int)aiStack_40 - uVar1);
  iVar11 = (int)piVar14 - uVar1;
  aiStack_40[3] = 0;
  aiStack_40[2] = 0;
  FUN_00f88e5c(iVar11,iVar15);
  if ((uVar9 & 1) == 0) {
    iVar2 = FUN_00efd768(iVar2);
  }
  piVar3 = (int *)thunk_FUN_00f1b490(aiStack_40[0],*(undefined4 *)(**(int **)(iVar2 + 0x60) + 0x40))
  ;
  if (*piVar3 == 0) {
    iVar2 = *(int *)(param_2 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    puVar7 = (undefined4 *)
             thunk_FUN_00f1b490(aiStack_40[0],*(int *)(**(int **)(iVar2 + 0x60) + 0x40) + 100);
    iVar2 = *(int *)(param_2 + 0x10);
    aiStack_40[3] = *puVar7;
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    puVar7 = (undefined4 *)
             thunk_FUN_00f1b490(aiStack_40[0],*(int *)(**(int **)(iVar2 + 0x60) + 0x40) + 100);
    *puVar7 = 0;
    iVar2 = *(int *)(param_2 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    func_0x00b904cc(aiStack_40[0],*(undefined4 *)(**(int **)(iVar2 + 0x60) + 0x40),0xffffffff);
  }
  else {
    piVar3 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_017b91b4 + 0x17b89d8),2);
    iVar2 = *(int *)(param_2 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    piVar4 = (int *)thunk_FUN_00f1b490(aiStack_40[0],
                                       *(int *)(**(int **)(iVar2 + 0x60) + 0x40) + 0x28);
    iVar2 = *piVar4;
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((iVar2 != 0) &&
       (iVar5 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
      uVar6 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar6,0);
    }
    if (piVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar3[4] = iVar2;
    thunk_FUN_00ec5080(piVar3 + 4,iVar2);
    iVar2 = *(int *)(param_2 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    puVar7 = (undefined4 *)
             thunk_FUN_00f1b490(aiStack_40[0],*(int *)(**(int **)(iVar2 + 0x60) + 0x40) + 0x3c);
    uVar6 = *puVar7;
    uVar12 = puVar7[1];
    if (*(int *)(**(int **)(_UNK_017b91b8 + 0x17b8aa8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = System_Threading_Tasks_Task__Delay_2bfa4b4(uVar6,uVar12,0);
    if ((iVar2 != 0) &&
       (iVar5 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
      uVar6 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar6,0);
    }
    if ((uint)piVar3[3] < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar3[5] = iVar2;
    thunk_FUN_00ec5080(piVar3 + 5,iVar2);
    iVar2 = System_Threading_Tasks_Task__WhenAny_2bfb114(piVar3,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    aiStack_40[3] =
         System_Threading_Tasks_Task_object___GetAwaiter_1b58780
                   (iVar2,**(undefined4 **)(_UNK_017b91bc + 0x17b8b44));
    iVar2 = System_Runtime_CompilerServices_TaskAwaiter_object___get_IsCompleted_1b45ac8
                      (aiStack_40 + 3,**(undefined4 **)(_UNK_017b91c0 + 0x17b8b58));
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_2 + 0x10);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = FUN_00efd768();
      }
      func_0x00b904cc(aiStack_40[0],*(undefined4 *)(**(int **)(iVar2 + 0x60) + 0x40),0);
      iVar2 = aiStack_40[3];
      iVar11 = *(int *)(param_2 + 0x10);
      if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
        iVar11 = FUN_00efd768();
      }
      func_0x00b8fd54(aiStack_40[0],*(int *)(**(int **)(iVar11 + 0x60) + 0x40) + 100,iVar2);
      iVar2 = *(int *)(param_2 + 0x10);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = FUN_00efd768();
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x10);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = FUN_00efd768();
      }
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar11 = *(int *)(param_2 + 0x10);
      uVar9 = *(ushort *)(iVar11 + 0xbd);
      iVar2 = iVar11;
      if ((uVar9 & 1) == 0) {
        iVar2 = FUN_00efd768();
        iVar11 = *(int *)(param_2 + 0x10);
        uVar9 = *(ushort *)(iVar11 + 0xbd);
      }
      pcVar13 = (code *)**(undefined4 **)(*(int *)(iVar2 + 0x60) + 0xc);
      if ((uVar9 & 1) == 0) {
        iVar11 = FUN_00efd768();
      }
      uVar6 = thunk_FUN_00f1b490(aiStack_40[0],*(int *)(**(int **)(iVar11 + 0x60) + 0x40) + 0x14);
      iVar2 = *(int *)(param_2 + 0x10);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = FUN_00efd768();
      }
      (*pcVar13)(uVar6,aiStack_40 + 3,aiStack_40[0],*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0xc));
      goto LAB_017b8fd0;
    }
  }
  iVar2 = System_Runtime_CompilerServices_TaskAwaiter_object___GetResult_1b45b3c
                    (aiStack_40 + 3,**(undefined4 **)(_UNK_017b91c4 + 0x17b8cd0));
  iVar5 = *(int *)(param_2 + 0x10);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = FUN_00efd768();
  }
  piVar3 = (int *)thunk_FUN_00f1b490(aiStack_40[0],*(int *)(**(int **)(iVar5 + 0x60) + 0x40) + 0x28)
  ;
  iVar5 = *(int *)(param_2 + 0x10);
  if (iVar2 == *piVar3) {
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = FUN_00efd768();
    }
    piVar3 = (int *)thunk_FUN_00f1b490(aiStack_40[0],
                                       *(int *)(**(int **)(iVar5 + 0x60) + 0x40) + 0x28);
    iVar2 = *piVar3;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = *(int *)(param_2 + 0x10);
    uVar9 = *(ushort *)(iVar8 + 0xbd);
    iVar5 = iVar8;
    if ((uVar9 & 1) == 0) {
      iVar5 = FUN_00efd768();
      iVar8 = *(int *)(param_2 + 0x10);
      uVar9 = *(ushort *)(iVar8 + 0xbd);
    }
    uVar6 = **(undefined4 **)(*(int *)(iVar5 + 0x60) + 0x1c);
    if ((uVar9 & 1) == 0) {
      iVar8 = FUN_00efd768();
    }
    iVar5 = *(int *)(*(int *)(iVar8 + 0x60) + 0x1c);
    pcVar13 = *(code **)(iVar5 + 8);
    piStack_30 = piVar14;
    *(int **)(iVar11 + -8) = piVar14;
    (*pcVar13)(uVar6,iVar5,iVar2,&piStack_30);
    thunk_FUN_00f95db8(iVar11,piVar14,iVar15);
  }
  else {
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = FUN_00efd768();
    }
    uVar6 = thunk_FUN_00f1b490(aiStack_40[0],*(int *)(**(int **)(iVar5 + 0x60) + 0x40) + 0x50);
    thunk_FUN_00f95db8(piVar14,uVar6,iVar15);
    thunk_FUN_00f95db8(iVar11,uVar6,iVar15);
  }
  iVar2 = *(int *)(param_2 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  func_0x00b904cc(aiStack_40[0],*(undefined4 *)(**(int **)(iVar2 + 0x60) + 0x40),0xfffffffe);
  thunk_FUN_00f95db8(piVar14,iVar11,iVar15);
  iVar2 = *(int *)(param_2 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar15 = *(int *)(param_2 + 0x10);
  uVar9 = *(ushort *)(iVar15 + 0xbd);
  iVar2 = iVar15;
  if ((uVar9 & 1) == 0) {
    iVar2 = FUN_00efd768();
    iVar15 = *(int *)(param_2 + 0x10);
    uVar9 = *(ushort *)(iVar15 + 0xbd);
  }
  uVar6 = **(undefined4 **)(*(int *)(iVar2 + 0x60) + 0x24);
  iVar2 = iVar15;
  if ((uVar9 & 1) == 0) {
    iVar2 = FUN_00efd768();
    iVar15 = *(int *)(param_2 + 0x10);
    uVar9 = *(ushort *)(iVar15 + 0xbd);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x24);
  if ((uVar9 & 1) == 0) {
    iVar15 = FUN_00efd768();
  }
  uVar12 = thunk_FUN_00f1b490(aiStack_40[0],*(int *)(**(int **)(iVar15 + 0x60) + 0x40) + 0x14);
  iVar15 = *(int *)(param_2 + 0x10);
  if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
    iVar15 = FUN_00efd768();
  }
  pcVar13 = *(code **)(iVar2 + 8);
  if (-1 < *(int *)(*(int *)(*(int *)(iVar15 + 0x60) + 0x18) + 0x14)) {
    piVar14 = (int *)*piVar14;
  }
  piStack_30 = piVar14;
  *(int **)(iVar11 + -8) = piVar14;
  (*pcVar13)(uVar6,iVar2,uVar12,&piStack_30);
LAB_017b8fd0:
  if (**(int **)(_UNK_017b91cc + 0x17b8fe0) == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

