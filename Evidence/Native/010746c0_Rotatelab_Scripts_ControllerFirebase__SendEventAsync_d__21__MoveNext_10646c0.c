/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.<SendEventAsync>d__21$$MoveNext
void Rotatelab_Scripts_ControllerFirebase__SendEventAsync_d__21__MoveNext (Rotatelab_Scripts_ControllerFirebase__SendEventAsync_d__21_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.<SendEventAsync>d__21$$MoveNext
   void Rotatelab_Scripts_ControllerFirebase__SendEventAsync_d__21__MoveNext
   (Rotatelab_Scripts_ControllerFirebase__SendEventAsync_d__21_o __this, const MethodInfo* method);
    */

void Rotatelab_Scripts_ControllerFirebase__SendEventAsync_d__21__MoveNext_10646c0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
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
  
  pcVar5 = (char *)(_UNK_01074c54 + 0x10746d8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01074c58 + 0x10746ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01074c5c + 0x10746f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01074c60 + 0x1074704));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01074c64 + 0x1074710));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01074c68 + 0x107471c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01074c6c + 0x1074728));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01074c70 + 0x1074734));
    *pcVar5 = '\x01';
  }
  piVar4 = param_1 + 4;
  piVar9 = param_1 + 6;
  iStack_2c = 0;
  piStack_30 = (int *)0x0;
  iStack_34 = 0;
  piStack_38 = (int *)0x0;
  iStack_3c = 0;
  piStack_40 = (int *)0x0;
  uStack_44 = 0;
  if (*param_1 == 0) {
    piVar10 = (int *)*piVar4;
    iVar6 = param_1[5];
    *param_1 = -1;
    *piVar4 = 0;
    param_1[5] = 0;
    piStack_30 = piVar10;
    iStack_2c = iVar6;
  }
  else {
    if (*param_1 == 1) {
      piStack_38 = (int *)*piVar9;
      iStack_34 = param_1[7];
      *param_1 = -1;
      *piVar9 = 0;
      param_1[7] = 0;
      goto LAB_01074ab0;
    }
    piVar10 = *(int **)(_UNK_01074c74 + 0x10747c8);
    iVar6 = *piVar10;
    if (*(int *)(iVar6 + 0x74) == 0) {
      FUN_00ec3934();
      iVar6 = *piVar10;
    }
    puVar2 = *(undefined4 **)(iVar6 + 0x5c);
    iVar7 = puVar2[3];
    if (iVar7 == 0) {
      if (*(int *)(iVar6 + 0x74) == 0) {
        FUN_00ec3934();
        puVar2 = *(undefined4 **)(*piVar10 + 0x5c);
      }
      uVar8 = *puVar2;
      iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01074c78 + 0x1074814));
      System_Func_bool____ctor_23938dc(iVar7,uVar8,**(undefined4 **)(_UNK_01074c7c + 0x1074828),0);
      piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 0xc);
      *piVar10 = iVar7;
      thunk_FUN_00ec5080(piVar10,iVar7);
    }
    piVar11 = *(int **)(_UNK_01074c80 + 0x1074858);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Cysharp_Threading_Tasks_UniTask__WaitUntil_3217d44(&piStack_50,iVar7,8,0,0,0);
    thunk_FUN_00ec5080(&piStack_50,0);
    iVar7 = iStack_4c;
    piVar10 = piStack_50;
    pcVar5 = (char *)(_UNK_01074c84 + 0x10748b4);
    iStack_2c = iStack_4c;
    piStack_30 = piStack_50;
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01074c88 + 0x10748d4));
      *pcVar5 = '\x01';
    }
    if (*(int *)(*piVar11 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar5 = (char *)(_UNK_01074c8c + 0x10748fc);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01074c90 + 0x1074910));
      *pcVar5 = '\x01';
    }
    iVar6 = (int)(short)iVar7;
    if (piVar10 == (int *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      iVar1 = *piVar10;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar11[-1] == **(int **)(_UNK_01074c94 + 0x1074934)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
            goto LAB_01074984;
          }
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piVar10,**(int **)(_UNK_01074c94 + 0x1074934),0);
LAB_01074984:
      iVar1 = (*(code *)*puVar2)(piVar10,iVar6,puVar2[1]);
      if (iVar1 == 0) {
        *piVar4 = (int)piVar10;
        param_1[5] = iVar7;
        *param_1 = 0;
        thunk_FUN_00ec5080(piVar4,0);
        func_0x010800cc(param_1 + 1,&piStack_30,param_1,**(undefined4 **)(_UNK_01074c98 + 0x1074b68)
                       );
        return;
      }
    }
  }
  pcVar5 = (char *)(_UNK_01074c9c + 0x10749b0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01074ca0 + 0x10749c4));
    *pcVar5 = '\x01';
  }
  if (piVar10 != (int *)0x0) {
    iVar7 = *piVar10;
    uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_01074ca4 + 0x10749e4)) {
          puVar2 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xd0);
          goto LAB_01074a2c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar10,**(int **)(_UNK_01074ca4 + 0x10749e4),2);
LAB_01074a2c:
    (*(code *)*puVar2)(piVar10,(int)(short)iVar6,puVar2[1]);
  }
  if (*(int *)(**(int **)(_UNK_01074ca8 + 0x1074a4c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Cysharp_Threading_Tasks_UniTask__SwitchToMainThread_3217d18(&piStack_50,0,0);
  iStack_3c = iStack_4c;
  piStack_40 = piStack_50;
  Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable__GetAwaiter_321c50c(&piStack_50,&piStack_40,0)
  ;
  iStack_34 = iStack_4c;
  piStack_38 = piStack_50;
  iVar6 = Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__get_IsCompleted_321c538
                    (&piStack_38,0);
  if (iVar6 == 0) {
    *piVar9 = (int)piStack_38;
    param_1[7] = iStack_34;
    *param_1 = 1;
    thunk_FUN_00ec5080(param_1 + 7,0);
    func_0x010801ec(param_1 + 1,&piStack_38,param_1,**(undefined4 **)(_UNK_01074cac + 0x1074b30));
    return;
  }
LAB_01074ab0:
  Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__GetResult_321c614(&piStack_38,0);
  iVar7 = param_1[2];
  iVar6 = param_1[3];
  if (*(int *)(**(int **)(_UNK_01074cb0 + 0x1074ac8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Scripts_ControllerFirebase__LogEvent_1060eac(iVar7,iVar6);
  *param_1 = -2;
  func_0x00fcef34(param_1 + 1,0);
  return;
}

