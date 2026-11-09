/* IL2CPP: Rotatelab.Networking.UI.HiroRewardDialog.<<OnAfterClaimOrDiscardButtonClickedAsync>b__13_0>d$$MoveNext
void Rotatelab_Networking_UI_HiroRewardDialog___OnAfterClaimOrDiscardButtonClickedAsync_b__13_0_d__MoveNext (Rotatelab_Networking_UI_HiroRewardDialog___OnAfterClaimOrDiscardButtonClickedAsync_b__13_0_d_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Networking.UI.HiroRewardDialog.<<OnAfterClaimOrDiscardButtonClickedAsync>b__13_0>d$$MoveNext
   void 
   Rotatelab_Networking_UI_HiroRewardDialog___OnAfterClaimOrDiscardButtonClickedAsync_b__13_0_d__MoveNext
   (Rotatelab_Networking_UI_HiroRewardDialog___OnAfterClaimOrDiscardButtonClickedAsync_b__13_0_d_o
   __this, const MethodInfo* method); */

void Rotatelab_Networking_UI_HiroRewardDialog___OnAfterClaimOrDiscardButtonClickedAsync_b__13_0_d__MoveNext_febdd4
               (int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iStack_1c;
  
  pcVar6 = (char *)(_UNK_00ffc15c + 0xffbdec);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffc160 + 0xffbe00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffc164 + 0xffbe0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffc168 + 0xffbe18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffc16c + 0xffbe24));
    *pcVar6 = '\x01';
  }
  iVar7 = param_1[3];
  iStack_1c = 0;
  if (*param_1 == 0) {
    *param_1 = -1;
    iStack_1c = param_1[4];
    param_1[4] = 0;
  }
  else {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_00ffc170 + 0xffbe54));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *(int *)(iVar1 + 0x28);
    iVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_00ffc174 + 0xffbe78),1);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar8 = *(int **)(iVar7 + 0x28);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *piVar8;
    uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_00ffc178 + 0xffbeb0)) {
          puVar2 = (undefined4 *)(iVar7 + *piVar5 * 8 + 0xc0);
          goto LAB_00ffbf10;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar8,**(int **)(_UNK_00ffc178 + 0xffbeb0),0);
LAB_00ffbf10:
    uVar3 = (*(code *)*puVar2)(piVar8,puVar2[1]);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar1 + 0x10) = uVar3;
    thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),uVar3);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = Hiro_RewardMailboxSystem__DeleteAsync_296ae50(iVar9,iVar1,0,0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iStack_1c = System_Threading_Tasks_Task__GetAwaiter_2bf1e70(iVar7,0);
    iVar7 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted_2a9339c(&iStack_1c,0);
    if (iVar7 == 0) {
      *param_1 = 0;
      param_1[4] = iStack_1c;
      thunk_FUN_00ec5080(param_1 + 4,0);
      func_0x010125fc(param_1 + 1,&iStack_1c,param_1,**(undefined4 **)(_UNK_00ffc17c + 0xffc060));
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult_2a93488(&iStack_1c,0);
  iVar7 = _UNK_00ffc180;
  *param_1 = -2;
  if (*(char *)(iVar7 + 0xffbfc4) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffc184 + 0xffbfd8));
    *(char *)(iVar7 + 0xffbfc4) = '\x01';
  }
  piVar8 = (int *)param_1[1];
  if (piVar8 != (int *)0x0) {
    iVar7 = *piVar8;
    uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_00ffc188 + 0xffbffc)) {
          puVar2 = (undefined4 *)(iVar7 + *piVar5 * 8 + 0xd0);
          goto LAB_00ffc080;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar8,**(int **)(_UNK_00ffc188 + 0xffbffc),2);
LAB_00ffc080:
    (*(code *)*puVar2)(piVar8,puVar2[1]);
  }
  return;
}

