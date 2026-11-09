/* IL2CPP: Rotatelab.Networking.HiroController.<ProcessSatoriExperimentsAsync>d__78$$MoveNext
void Rotatelab_Networking_HiroController__ProcessSatoriExperimentsAsync_d__78__MoveNext (Rotatelab_Networking_HiroController__ProcessSatoriExperimentsAsync_d__78_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController.<ProcessSatoriExperimentsAsync>d__78$$MoveNext
   void Rotatelab_Networking_HiroController__ProcessSatoriExperimentsAsync_d__78__MoveNext
   (Rotatelab_Networking_HiroController__ProcessSatoriExperimentsAsync_d__78_o __this, const
   MethodInfo* method); */

void Rotatelab_Networking_HiroController__ProcessSatoriExperimentsAsync_d__78__MoveNext_115a488
               (int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  int *piStack_48;
  int iStack_44;
  undefined4 uStack_38;
  int iStack_34;
  int *piStack_30;
  int iStack_2c;
  
  pcVar8 = (char *)(_UNK_0116aac8 + 0x116a4a0);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116aacc + 0x116a4b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116aad0 + 0x116a4c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116aad4 + 0x116a4cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116aad8 + 0x116a4d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116aadc + 0x116a4e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116aae0 + 0x116a4f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116aae4 + 0x116a4fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116aae8 + 0x116a508));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116aaec + 0x116a514));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116aaf0 + 0x116a520));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116aaf4 + 0x116a52c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116aaf8 + 0x116a538));
    *pcVar8 = '\x01';
  }
  iVar9 = param_1[2];
  iStack_2c = 0;
  piStack_30 = (int *)0x0;
  iStack_34 = 0;
  uStack_38 = 0;
  if (*param_1 == 0) {
    piVar3 = (int *)param_1[3];
    iVar4 = param_1[4];
    *param_1 = -1;
    param_1[3] = 0;
    param_1[4] = 0;
    piStack_30 = piVar3;
    iStack_2c = iVar4;
  }
  else {
    if (*param_1 == 1) {
      *param_1 = -1;
      iStack_34 = param_1[5];
      param_1[5] = 0;
      goto LAB_0116a840;
    }
    uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0116aafc + 0x116a5b8));
    System_Func_bool____ctor_23938dc(uVar1,iVar9,**(undefined4 **)(_UNK_0116ab00 + 0x116a5cc),0);
    piVar3 = *(int **)(_UNK_0116ab04 + 0x116a5e8);
    if (*(int *)(*piVar3 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Cysharp_Threading_Tasks_UniTask__WaitUntil_3217d44(&piStack_48,uVar1,8,0,0,0);
    thunk_FUN_00ec5080(&piStack_48,0);
    pcVar8 = (char *)(_UNK_0116ab08 + 0x116a644);
    iStack_2c = iStack_44;
    piStack_30 = piStack_48;
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0116ab0c + 0x116a664));
      *pcVar8 = '\x01';
    }
    if (*(int *)(*piVar3 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar8 = (char *)(_UNK_0116ab10 + 0x116a68c);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0116ab14 + 0x116a6a0));
      *pcVar8 = '\x01';
    }
    iVar4 = (int)(short)iStack_44;
    if (piStack_48 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      iVar2 = *piStack_48;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar3 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar3[-1] == **(int **)(_UNK_0116ab18 + 0x116a6c4)) {
            puVar5 = (undefined4 *)(iVar2 + *piVar3 * 8 + 0xc0);
            goto LAB_0116a714;
          }
          uVar6 = uVar6 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined4 *)FUN_00efdb38(piStack_48,**(int **)(_UNK_0116ab18 + 0x116a6c4),0);
LAB_0116a714:
      iVar2 = (*(code *)*puVar5)(piStack_48,iVar4,puVar5[1]);
      piVar3 = piStack_48;
      if (iVar2 == 0) {
        param_1[4] = iStack_44;
        *param_1 = 0;
        param_1[3] = (int)piStack_48;
        thunk_FUN_00ec5080(param_1 + 3,0);
        func_0x011744ac(param_1 + 1,&piStack_30,param_1,**(undefined4 **)(_UNK_0116ab1c + 0x116a9d0)
                       );
        return;
      }
    }
  }
  pcVar8 = (char *)(_UNK_0116ab20 + 0x116a73c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116ab24 + 0x116a750));
    *pcVar8 = '\x01';
  }
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0116ab28 + 0x116a770)) {
          puVar5 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xd0);
          goto LAB_0116a7b8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)FUN_00efdb38(piVar3,**(int **)(_UNK_0116ab28 + 0x116a770),2);
LAB_0116a7b8:
    (*(code *)*puVar5)(piVar3,(int)(short)iVar4,puVar5[1]);
  }
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar9 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = Hiro_SatoriSystem__GetAllExperimentsAsync_296b7f4(*(int *)(iVar9 + 0x24),0,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iStack_34 = System_Threading_Tasks_Task_object___GetAwaiter_1b58780
                        (iVar4,**(undefined4 **)(_UNK_0116ab2c + 0x116a818));
  iVar4 = System_Runtime_CompilerServices_TaskAwaiter_object___get_IsCompleted_1b45ac8
                    (&iStack_34,**(undefined4 **)(_UNK_0116ab30 + 0x116a82c));
  if (iVar4 == 0) {
    *param_1 = 1;
    param_1[5] = iStack_34;
    thunk_FUN_00ec5080(param_1 + 5,0);
    func_0x011745cc(param_1 + 1,&iStack_34,param_1,**(undefined4 **)(_UNK_0116ab34 + 0x116a8e8));
    return;
  }
LAB_0116a840:
  piVar3 = (int *)System_Runtime_CompilerServices_TaskAwaiter_object___GetResult_1b45b3c
                            (&iStack_34,**(undefined4 **)(_UNK_0116ab38 + 0x116a84c));
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar9 = *(int *)(iVar9 + 0x44);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *piVar3;
  uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_0116ab3c + 0x116a884)) {
        puVar5 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xc0);
        goto LAB_0116a908;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined4 *)FUN_00efdb38(piVar3,**(int **)(_UNK_0116ab3c + 0x116a884),0);
LAB_0116a908:
  iVar4 = (*(code *)*puVar5)(piVar3,puVar5[1]);
  if (iVar4 == 0) {
    bVar10 = false;
  }
  else {
    if (*(int *)(**(int **)(_UNK_0116ab40 + 0x116a930) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar4 = Rotatelab_Extensions__Count_object__1485df8
                      (iVar4,**(undefined4 **)(_UNK_0116ab44 + 0x116a94c));
    bVar10 = 0 < iVar4;
  }
  if (iVar9 != 0) {
    Rotatelab_Save_SavedValue_bool___set_Value_1a8af9c
              (iVar9,bVar10,**(undefined4 **)(_UNK_0116ab48 + 0x116a980));
    *param_1 = -2;
    func_0x00fcef34(param_1 + 1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

