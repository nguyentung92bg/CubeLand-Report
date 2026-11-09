/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.<LogAppleTransactionAsync>d__26$$MoveNext
void Rotatelab_Scripts_ControllerFirebase__LogAppleTransactionAsync_d__26__MoveNext (Rotatelab_Scripts_ControllerFirebase__LogAppleTransactionAsync_d__26_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.<LogAppleTransactionAsync>d__26$$MoveNext
   void Rotatelab_Scripts_ControllerFirebase__LogAppleTransactionAsync_d__26__MoveNext
   (Rotatelab_Scripts_ControllerFirebase__LogAppleTransactionAsync_d__26_o __this, const MethodInfo*
   method); */

void Rotatelab_Scripts_ControllerFirebase__LogAppleTransactionAsync_d__26__MoveNext_106390c
               (int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  int *piStack_58;
  int iStack_54;
  undefined4 uStack_48;
  int iStack_44;
  int *piStack_40;
  int iStack_3c;
  int *piStack_38;
  int iStack_34;
  int *piStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_01074034 + 0x1073924);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01074038 + 0x1073938));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107403c + 0x1073944));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01074040 + 0x1073950));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01074044 + 0x107395c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01074048 + 0x1073968));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107404c + 0x1073974));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01074050 + 0x1073980));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01074054 + 0x107398c));
    *pcVar6 = '\x01';
  }
  iVar9 = *param_1;
  piVar5 = param_1 + 3;
  piVar11 = param_1 + 5;
  iStack_2c = 0;
  piStack_30 = (int *)0x0;
  iStack_34 = 0;
  piStack_38 = (int *)0x0;
  iStack_3c = 0;
  piStack_40 = (int *)0x0;
  iStack_44 = 0;
  uStack_48 = 0;
  if (iVar9 == 0) {
    piVar7 = (int *)*piVar5;
    iVar1 = param_1[4];
    iVar9 = -1;
    *param_1 = -1;
    *piVar5 = 0;
    param_1[4] = 0;
    piStack_30 = piVar7;
    iStack_2c = iVar1;
LAB_01073c04:
    pcVar6 = (char *)(_UNK_01074080 + 0x1073c10);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01074084 + 0x1073c24));
      *pcVar6 = '\x01';
    }
    if (piVar7 != (int *)0x0) {
      iVar8 = *piVar7;
      uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01074088 + 0x1073c44)) {
            puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xd0);
            goto LAB_01073c8c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar7,**(int **)(_UNK_01074088 + 0x1073c44),2);
LAB_01073c8c:
      (*(code *)*puVar3)(piVar7,(int)(short)iVar1,puVar3[1]);
    }
    if (*(int *)(**(int **)(_UNK_0107408c + 0x1073cb0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Cysharp_Threading_Tasks_UniTask__SwitchToMainThread_3217d18(&piStack_58,0,0);
    iStack_3c = iStack_54;
    piStack_40 = piStack_58;
    Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable__GetAwaiter_321c50c
              (&piStack_58,&piStack_40,0);
    iStack_34 = iStack_54;
    piStack_38 = piStack_58;
    iVar1 = Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__get_IsCompleted_321c538
                      (&piStack_38,0);
    if (iVar1 == 0) {
      *piVar11 = (int)piStack_38;
      param_1[6] = iStack_34;
      *param_1 = 1;
      thunk_FUN_00ec5080(param_1 + 6,0);
      func_0x0107fc4c(param_1 + 1,&piStack_38,param_1,**(undefined4 **)(_UNK_01074090 + 0x1073e2c));
      return;
    }
LAB_01073d14:
    Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__GetResult_321c614(&piStack_38,0);
    if (iVar9 != 2) {
      iVar9 = param_1[2];
      if (*(int *)(**(int **)(_UNK_01074094 + 0x1073d70) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar9 = Firebase_Analytics_FirebaseAnalytics__LogAppleTransactionAsync_11dd4f4(iVar9,0);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iStack_44 = System_Threading_Tasks_Task__GetAwaiter_2bf1e70(iVar9,0);
      iVar9 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted_2a9339c(&iStack_44,0);
      if (iVar9 == 0) {
        *param_1 = 2;
        param_1[7] = iStack_44;
        thunk_FUN_00ec5080(param_1 + 7,0);
        func_0x0107fd6c(param_1 + 1,&iStack_44,param_1,**(undefined4 **)(_UNK_01074098 + 0x1073dec))
        ;
        return;
      }
      goto LAB_01073d40;
    }
  }
  else {
    if (iVar9 == 1) {
      piStack_38 = (int *)*piVar11;
      iStack_34 = param_1[6];
      iVar9 = -1;
      *param_1 = -1;
      *piVar11 = 0;
      param_1[6] = 0;
      goto LAB_01073d14;
    }
    if (iVar9 != 2) {
      piVar7 = *(int **)(_UNK_01074058 + 0x10739e8);
      iVar1 = *piVar7;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar7;
      }
      puVar3 = *(undefined4 **)(iVar1 + 0x5c);
      iVar8 = puVar3[5];
      if (iVar8 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          FUN_00ec3934();
          puVar3 = *(undefined4 **)(*piVar7 + 0x5c);
        }
        uVar10 = *puVar3;
        iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0107405c + 0x1073a34));
        System_Func_bool____ctor_23938dc
                  (iVar8,uVar10,**(undefined4 **)(_UNK_01074060 + 0x1073a48),0);
        piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 0x14);
        *piVar7 = iVar8;
        thunk_FUN_00ec5080(piVar7,iVar8);
      }
      piVar12 = *(int **)(_UNK_01074064 + 0x1073a78);
      if (*(int *)(*piVar12 + 0x74) == 0) {
        FUN_00ec3934();
      }
      Cysharp_Threading_Tasks_UniTask__WaitUntil_3217d44(&piStack_58,iVar8,8,0,0,0);
      thunk_FUN_00ec5080(&piStack_58,0);
      iVar8 = iStack_54;
      piVar7 = piStack_58;
      pcVar6 = (char *)(_UNK_01074068 + 0x1073ad4);
      iStack_2c = iStack_54;
      piStack_30 = piStack_58;
      if (*pcVar6 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0107406c + 0x1073af4));
        *pcVar6 = '\x01';
      }
      if (*(int *)(*piVar12 + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar6 = (char *)(_UNK_01074070 + 0x1073b1c);
      if (*pcVar6 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01074074 + 0x1073b30));
        *pcVar6 = '\x01';
      }
      iVar1 = (int)(short)iVar8;
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        iVar2 = *piVar7;
        uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar12[-1] == **(int **)(_UNK_01074078 + 0x1073b54)) {
              puVar3 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0xc0);
              goto LAB_01073be8;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)FUN_00efdb38(piVar7,**(int **)(_UNK_01074078 + 0x1073b54),0);
LAB_01073be8:
        iVar2 = (*(code *)*puVar3)(piVar7,iVar1,puVar3[1]);
        if (iVar2 == 0) {
          *piVar5 = (int)piVar7;
          param_1[4] = iVar8;
          *param_1 = 0;
          thunk_FUN_00ec5080(piVar5,0);
          func_0x0107fb2c(param_1 + 1,&piStack_30,param_1,
                          **(undefined4 **)(_UNK_0107407c + 0x1073e64));
          return;
        }
      }
      goto LAB_01073c04;
    }
  }
  *param_1 = -1;
  iStack_44 = param_1[7];
  param_1[7] = 0;
LAB_01073d40:
  System_Runtime_CompilerServices_TaskAwaiter__GetResult_2a93488(&iStack_44,0);
  *param_1 = -2;
  func_0x00fcef34(param_1 + 1,0);
  return;
}

