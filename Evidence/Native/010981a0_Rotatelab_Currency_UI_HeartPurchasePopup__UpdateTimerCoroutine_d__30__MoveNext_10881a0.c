/* IL2CPP: Rotatelab.Currency.UI.HeartPurchasePopup.<UpdateTimerCoroutine>d__30$$MoveNext
bool Rotatelab_Currency_UI_HeartPurchasePopup__UpdateTimerCoroutine_d__30__MoveNext (Rotatelab_Currency_UI_HeartPurchasePopup__UpdateTimerCoroutine_d__30_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.HeartPurchasePopup.<UpdateTimerCoroutine>d__30$$MoveNext
   bool Rotatelab_Currency_UI_HeartPurchasePopup__UpdateTimerCoroutine_d__30__MoveNext
   (Rotatelab_Currency_UI_HeartPurchasePopup__UpdateTimerCoroutine_d__30_o* __this, const
   MethodInfo* method); */

undefined4
Rotatelab_Currency_UI_HeartPurchasePopup__UpdateTimerCoroutine_d__30__MoveNext_10881a0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint in_fpscr;
  undefined4 uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_01098674 + 0x10981bc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01098678 + 0x10981d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109867c + 0x10981dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01098680 + 0x10981e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01098684 + 0x10981f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01098688 + 0x1098200));
    *pcVar5 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 8);
  uVar2 = 0;
  iVar6 = *(int *)(param_1 + 0x10);
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  if (iVar4 == 2) {
    iVar4 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    goto LAB_010984b4;
  }
  if (iVar4 == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    goto LAB_010982bc;
  }
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    while( true ) {
      puVar7 = *(undefined4 **)(_UNK_0109868c + 0x1098270);
      iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar4 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = Rotatelab_ObservableEnergy__get_IsInfinite_fb31e4(*(int *)(iVar4 + 0x58),0);
      if (iVar4 == 0) break;
LAB_010982bc:
      puVar7 = *(undefined4 **)(_UNK_0109869c + 0x10982c8);
      iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar4 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = Rotatelab_ObservableEnergy__get_IsInfinite_fb31e4(*(int *)(iVar4 + 0x58),0);
      if (iVar4 != 0) {
        iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar4 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar4 = *(int *)(iVar4 + 0x58);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar2 = *(undefined4 *)(iVar4 + 0x50);
        uVar8 = *(undefined4 *)(iVar4 + 0x54);
        if (*(int *)(**(int **)(_UNK_01098690 + 0x109835c) + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar11 = FUN_00f88328(uVar2,uVar8);
        uVar2 = (undefined4)((ulonglong)uVar11 >> 0x20);
        System_TimeSpan__FromSeconds_2b8a42c(&uStack_30,uVar2,(int)uVar11,uVar2,0);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar4 = *(int *)(iVar6 + 0x50);
        dVar10 = (double)System_TimeSpan__get_TotalHours_2b89c40(&uStack_30,0);
        uVar2 = System_TimeSpan__get_Minutes_2b89bbc(&uStack_30,0);
        uVar8 = System_TimeSpan__get_Seconds_2b89be8(&uStack_30,0);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar1 = in_fpscr & 0xfffffff | (uint)(dVar10 == _UNK_01098668) << 0x1e;
        uVar9 = VectorSignedToFloat((int)(longlong)dVar10,(byte)(uVar1 >> 0x16) & 3);
        uVar2 = VectorSignedToFloat(uVar2,(byte)(uVar1 >> 0x16) & 3);
        if (SUB41(uVar1 >> 0x1e,0)) {
          uVar9 = _UNK_01098670;
        }
        uVar8 = VectorSignedToFloat(uVar8,(byte)(uVar1 >> 0x16) & 3);
        TMPro_TMP_Text__SetText_34fff14
                  (iVar4,**(undefined4 **)(_UNK_01098694 + 0x1098400),uVar9,uVar2,uVar8,0);
        if (*(int *)(**(int **)(_UNK_01098698 + 0x1098444) + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar2 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3f800000);
        *(undefined4 *)(param_1 + 0xc) = uVar2;
        thunk_FUN_00ec5080();
        uVar2 = 1;
        goto LAB_01098654;
      }
LAB_010984fc:
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Currency_UI_HeartPurchasePopup__RefreshContent_10866a0(iVar6);
    }
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(*(undefined4 *)(iVar4 + 0x58),0);
    *(int *)(param_1 + 0x14) = iVar4;
LAB_010984b4:
    puVar7 = *(undefined4 **)(_UNK_010986ac + 0x10984c0);
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(*(undefined4 *)(iVar3 + 0x58),0);
    if (iVar4 != iVar3) goto LAB_010984fc;
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *(int *)(iVar4 + 0x58);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = *(undefined4 *)(iVar4 + 0x38);
    uVar8 = *(undefined4 *)(iVar4 + 0x3c);
    if (*(int *)(**(int **)(_UNK_010986a0 + 0x109855c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar11 = FUN_00f88328(uVar2,uVar8);
    uVar2 = (undefined4)((ulonglong)uVar11 >> 0x20);
    System_TimeSpan__FromSeconds_2b8a42c(&uStack_38,uVar2,(int)uVar11,uVar2,0);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *(int *)(iVar6 + 0x50);
    dVar10 = (double)System_TimeSpan__get_TotalMinutes_2b89cc8(&uStack_38,0);
    uVar2 = System_TimeSpan__get_Seconds_2b89be8(&uStack_38,0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = in_fpscr & 0xfffffff | (uint)(dVar10 == _UNK_01098668) << 0x1e;
    uVar8 = VectorSignedToFloat((int)(longlong)dVar10,(byte)(uVar1 >> 0x16) & 3);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(uVar1 >> 0x16) & 3);
    if (SUB41(uVar1 >> 0x1e,0)) {
      uVar8 = _UNK_01098670;
    }
    TMPro_TMP_Text__SetText_34ffee4
              (iVar4,**(undefined4 **)(_UNK_010986a4 + 0x10985f0),uVar8,uVar2,0);
    if (*(int *)(**(int **)(_UNK_010986a8 + 0x1098628) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar2 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3f800000);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    thunk_FUN_00ec5080();
    uVar2 = 2;
LAB_01098654:
    *(undefined4 *)(param_1 + 8) = uVar2;
    uVar2 = 1;
  }
  return uVar2;
}

