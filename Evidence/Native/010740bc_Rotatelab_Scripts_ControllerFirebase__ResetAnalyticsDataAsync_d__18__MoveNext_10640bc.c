/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.<ResetAnalyticsDataAsync>d__18$$MoveNext
void Rotatelab_Scripts_ControllerFirebase__ResetAnalyticsDataAsync_d__18__MoveNext (Rotatelab_Scripts_ControllerFirebase__ResetAnalyticsDataAsync_d__18_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.<ResetAnalyticsDataAsync>d__18$$MoveNext
   void Rotatelab_Scripts_ControllerFirebase__ResetAnalyticsDataAsync_d__18__MoveNext
   (Rotatelab_Scripts_ControllerFirebase__ResetAnalyticsDataAsync_d__18_o __this, const MethodInfo*
   method); */

void Rotatelab_Scripts_ControllerFirebase__ResetAnalyticsDataAsync_d__18__MoveNext_10640bc
               (int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piStack_50;
  int iStack_4c;
  undefined4 uStack_44;
  int *piStack_40;
  int iStack_3c;
  int *piStack_38;
  int iStack_34;
  int *piStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_0107464c + 0x10740d4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01074650 + 0x10740e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01074654 + 0x10740f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01074658 + 0x1074100));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107465c + 0x107410c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01074660 + 0x1074118));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01074664 + 0x1074124));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01074668 + 0x1074130));
    *pcVar6 = '\x01';
  }
  piVar5 = param_1 + 2;
  piVar9 = param_1 + 4;
  iStack_2c = 0;
  piStack_30 = (int *)0x0;
  iStack_34 = 0;
  piStack_38 = (int *)0x0;
  iStack_3c = 0;
  piStack_40 = (int *)0x0;
  uStack_44 = 0;
  if (*param_1 == 0) {
    piVar10 = (int *)*piVar5;
    iVar1 = param_1[3];
    *param_1 = -1;
    *piVar5 = 0;
    param_1[3] = 0;
    piStack_30 = piVar10;
    iStack_2c = iVar1;
  }
  else {
    if (*param_1 == 1) {
      piStack_38 = (int *)*piVar9;
      iStack_34 = param_1[5];
      *param_1 = -1;
      *piVar9 = 0;
      param_1[5] = 0;
      goto LAB_010744ac;
    }
    piVar10 = *(int **)(_UNK_0107466c + 0x10741c4);
    iVar1 = *piVar10;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar10;
    }
    puVar3 = *(undefined4 **)(iVar1 + 0x5c);
    iVar7 = puVar3[2];
    if (iVar7 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        puVar3 = *(undefined4 **)(*piVar10 + 0x5c);
      }
      uVar8 = *puVar3;
      iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01074670 + 0x1074210));
      System_Func_bool____ctor_23938dc(iVar7,uVar8,**(undefined4 **)(_UNK_01074674 + 0x1074224),0);
      piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 8);
      *piVar10 = iVar7;
      thunk_FUN_00ec5080(piVar10,iVar7);
    }
    piVar11 = *(int **)(_UNK_01074678 + 0x1074254);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Cysharp_Threading_Tasks_UniTask__WaitUntil_3217d44(&piStack_50,iVar7,8,0,0,0);
    thunk_FUN_00ec5080(&piStack_50,0);
    iVar7 = iStack_4c;
    piVar10 = piStack_50;
    pcVar6 = (char *)(_UNK_0107467c + 0x10742b0);
    iStack_2c = iStack_4c;
    piStack_30 = piStack_50;
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01074680 + 0x10742d0));
      *pcVar6 = '\x01';
    }
    if (*(int *)(*piVar11 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar6 = (char *)(_UNK_01074684 + 0x10742f8);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01074688 + 0x107430c));
      *pcVar6 = '\x01';
    }
    iVar1 = (int)(short)iVar7;
    if (piVar10 == (int *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      iVar2 = *piVar10;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar11[-1] == **(int **)(_UNK_0107468c + 0x1074330)) {
            puVar3 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xc0);
            goto LAB_01074380;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar10,**(int **)(_UNK_0107468c + 0x1074330),0);
LAB_01074380:
      iVar2 = (*(code *)*puVar3)(piVar10,iVar1,puVar3[1]);
      if (iVar2 == 0) {
        *piVar5 = (int)piVar10;
        param_1[3] = iVar7;
        *param_1 = 0;
        thunk_FUN_00ec5080(piVar5,0);
        func_0x0107fe8c(param_1 + 1,&piStack_30,param_1,**(undefined4 **)(_UNK_01074690 + 0x1074564)
                       );
        return;
      }
    }
  }
  pcVar6 = (char *)(_UNK_01074694 + 0x10743ac);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01074698 + 0x10743c0));
    *pcVar6 = '\x01';
  }
  if (piVar10 != (int *)0x0) {
    iVar7 = *piVar10;
    uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_0107469c + 0x10743e0)) {
          puVar3 = (undefined4 *)(iVar7 + *piVar5 * 8 + 0xd0);
          goto LAB_01074428;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar10,**(int **)(_UNK_0107469c + 0x10743e0),2);
LAB_01074428:
    (*(code *)*puVar3)(piVar10,(int)(short)iVar1,puVar3[1]);
  }
  if (*(int *)(**(int **)(_UNK_010746a0 + 0x1074448) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Cysharp_Threading_Tasks_UniTask__SwitchToMainThread_3217d18(&piStack_50,0,0);
  iStack_3c = iStack_4c;
  piStack_40 = piStack_50;
  Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable__GetAwaiter_321c50c(&piStack_50,&piStack_40,0)
  ;
  iStack_34 = iStack_4c;
  piStack_38 = piStack_50;
  iVar1 = Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__get_IsCompleted_321c538
                    (&piStack_38,0);
  if (iVar1 == 0) {
    *piVar9 = (int)piStack_38;
    param_1[5] = iStack_34;
    *param_1 = 1;
    thunk_FUN_00ec5080(param_1 + 5,0);
    func_0x0107ffac(param_1 + 1,&piStack_38,param_1,**(undefined4 **)(_UNK_010746a4 + 0x107452c));
    return;
  }
LAB_010744ac:
  Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__GetResult_321c614(&piStack_38,0);
  if (*(int *)(**(int **)(_UNK_010746a8 + 0x10744c4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Firebase_Analytics_FirebaseAnalytics__ResetAnalyticsData_11dcfe4(0);
  Firebase_Analytics_FirebaseAnalytics__SetUserId_11dd25c(0,0);
  *param_1 = -2;
  func_0x00fcef34(param_1 + 1,0);
  return;
}

