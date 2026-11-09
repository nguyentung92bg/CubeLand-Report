/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.<SetUserPropertyAsync>d__24$$MoveNext
void Rotatelab_Scripts_ControllerFirebase__SetUserPropertyAsync_d__24__MoveNext (Rotatelab_Scripts_ControllerFirebase__SetUserPropertyAsync_d__24_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.<SetUserPropertyAsync>d__24$$MoveNext
   void Rotatelab_Scripts_ControllerFirebase__SetUserPropertyAsync_d__24__MoveNext
   (Rotatelab_Scripts_ControllerFirebase__SetUserPropertyAsync_d__24_o __this, const MethodInfo*
   method); */

void Rotatelab_Scripts_ControllerFirebase__SetUserPropertyAsync_d__24__MoveNext_106563c
               (int *param_1)

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
  
  pcVar5 = (char *)(_UNK_01075bd4 + 0x1075654);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01075bd8 + 0x1075668));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01075bdc + 0x1075674));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01075be0 + 0x1075680));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01075be4 + 0x107568c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01075be8 + 0x1075698));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01075bec + 0x10756a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01075bf0 + 0x10756b0));
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
      goto LAB_01075a2c;
    }
    piVar10 = *(int **)(_UNK_01075bf4 + 0x1075744);
    iVar6 = *piVar10;
    if (*(int *)(iVar6 + 0x74) == 0) {
      FUN_00ec3934();
      iVar6 = *piVar10;
    }
    puVar2 = *(undefined4 **)(iVar6 + 0x5c);
    iVar7 = puVar2[4];
    if (iVar7 == 0) {
      if (*(int *)(iVar6 + 0x74) == 0) {
        FUN_00ec3934();
        puVar2 = *(undefined4 **)(*piVar10 + 0x5c);
      }
      uVar8 = *puVar2;
      iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01075bf8 + 0x1075790));
      System_Func_bool____ctor_23938dc(iVar7,uVar8,**(undefined4 **)(_UNK_01075bfc + 0x10757a4),0);
      piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 0x10);
      *piVar10 = iVar7;
      thunk_FUN_00ec5080(piVar10,iVar7);
    }
    piVar11 = *(int **)(_UNK_01075c00 + 0x10757d4);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Cysharp_Threading_Tasks_UniTask__WaitUntil_3217d44(&piStack_50,iVar7,8,0,0,0);
    thunk_FUN_00ec5080(&piStack_50,0);
    iVar7 = iStack_4c;
    piVar10 = piStack_50;
    pcVar5 = (char *)(_UNK_01075c04 + 0x1075830);
    iStack_2c = iStack_4c;
    piStack_30 = piStack_50;
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01075c08 + 0x1075850));
      *pcVar5 = '\x01';
    }
    if (*(int *)(*piVar11 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar5 = (char *)(_UNK_01075c0c + 0x1075878);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01075c10 + 0x107588c));
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
          if (piVar11[-1] == **(int **)(_UNK_01075c14 + 0x10758b0)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
            goto LAB_01075900;
          }
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piVar10,**(int **)(_UNK_01075c14 + 0x10758b0),0);
LAB_01075900:
      iVar1 = (*(code *)*puVar2)(piVar10,iVar6,puVar2[1]);
      if (iVar1 == 0) {
        *piVar4 = (int)piVar10;
        param_1[5] = iVar7;
        *param_1 = 0;
        thunk_FUN_00ec5080(piVar4,0);
        func_0x0108054c(param_1 + 1,&piStack_30,param_1,**(undefined4 **)(_UNK_01075c18 + 0x1075ae8)
                       );
        return;
      }
    }
  }
  pcVar5 = (char *)(_UNK_01075c1c + 0x107592c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01075c20 + 0x1075940));
    *pcVar5 = '\x01';
  }
  if (piVar10 != (int *)0x0) {
    iVar7 = *piVar10;
    uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_01075c24 + 0x1075960)) {
          puVar2 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xd0);
          goto LAB_010759a8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar10,**(int **)(_UNK_01075c24 + 0x1075960),2);
LAB_010759a8:
    (*(code *)*puVar2)(piVar10,(int)(short)iVar6,puVar2[1]);
  }
  if (*(int *)(**(int **)(_UNK_01075c28 + 0x10759c8) + 0x74) == 0) {
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
    func_0x0108066c(param_1 + 1,&piStack_38,param_1,**(undefined4 **)(_UNK_01075c2c + 0x1075ab0));
    return;
  }
LAB_01075a2c:
  Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__GetResult_321c614(&piStack_38,0);
  iVar7 = param_1[2];
  iVar6 = param_1[3];
  if (*(int *)(**(int **)(_UNK_01075c30 + 0x1075a44) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Firebase_Analytics_FirebaseAnalytics__SetUserProperty_11dd3a0(iVar7,iVar6,0);
  *param_1 = -2;
  func_0x00fcef34(param_1 + 1,0);
  return;
}

