/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel.<>c__DisplayClass16_0$$<RefreshButtonsVisibility>b__0
void Rotatelab_Currency_UI_CurrencyPanel___c__DisplayClass16_0___RefreshButtonsVisibility_b__0 (Rotatelab_Currency_UI_CurrencyPanel___c__DisplayClass16_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel.<>c__DisplayClass16_0$$<RefreshButtonsVisibility>b__0
   void Rotatelab_Currency_UI_CurrencyPanel___c__DisplayClass16_0___RefreshButtonsVisibility_b__0
   (Rotatelab_Currency_UI_CurrencyPanel___c__DisplayClass16_0_o* __this, const MethodInfo* method);
    */

void Rotatelab_Currency_UI_CurrencyPanel___c__DisplayClass16_0___RefreshButtonsVisibility_b__0_1085fbc
               (int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  bool bVar11;
  uint uVar12;
  uint in_fpscr;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_010960e4 + 0x1095fd0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010960e8 + 0x1095fe4));
    *pcVar7 = '\x01';
  }
  iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010960ec + 0x1095ff8));
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = Rotatelab_Scripts_GameManager__get_IsMainMenuActive_1065c48(iVar5,0);
  if (iVar5 == 0) {
    return;
  }
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x1c);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = UnityEngine_Component__get_gameObject_35fe360(iVar5,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar5,*(int *)(param_1 + 0xc) == 0,0);
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x1c);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = UnityEngine_Component__get_gameObject_35fe360(iVar5,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = UnityEngine_GameObject__get_activeSelf_360212c(iVar5,0);
  if (iVar5 == 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(_UNK_01095244 + 0x1094d9c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095248 + 0x1094db0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109524c + 0x1094dbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095250 + 0x1094dc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095254 + 0x1094dd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095258 + 0x1094de0));
    *pcVar7 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  if (*(int *)(iVar5 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(iVar5 + 0x1c),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_GameObject__get_activeSelf_360212c(iVar2,0);
  if (iVar2 != 0) {
    puVar9 = *(undefined4 **)(_UNK_0109525c + 0x1094e48);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_ObservableEnergy__get_IsInfinite_fb31e4(*(int *)(iVar2 + 0x58),0);
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
    if (iVar2 == 0) {
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar14 = Rotatelab_ObservableLong__op_Implicit_fb4344(*(undefined4 *)(iVar2 + 0x58),0);
      iVar3 = (int)((ulonglong)uVar14 >> 0x20);
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar8 = *(int **)(iVar2 + 0x58);
      if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar15 = (**(code **)(*piVar8 + 0x110))(piVar8,*(undefined4 *)(*piVar8 + 0x114));
      iVar2 = (int)((ulonglong)uVar15 >> 0x20);
      bVar11 = (uint)uVar14 < (uint)uVar15;
      if ((int)(iVar3 - (iVar2 + (uint)bVar11)) < 0 ==
          (SBORROW4(iVar3,iVar2) != SBORROW4(iVar3 - iVar2,(uint)bVar11))) {
        piVar8 = *(int **)(iVar5 + 0x28);
        if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
                    /* WARNING: Could not recover jumptable at 0x01095234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar8 + 0x2b0))
                  (piVar8,**(undefined4 **)(_UNK_0109526c + 0x1095224),
                   *(undefined4 *)(*piVar8 + 0x2b4));
        return;
      }
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(iVar2 + 0x58);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar10 = *(undefined4 *)(iVar2 + 0x38);
      uVar6 = *(undefined4 *)(iVar2 + 0x3c);
      if (*(int *)(**(int **)(_UNK_01095270 + 0x1095098) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar14 = FUN_00f88328(uVar10,uVar6);
      uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
      System_TimeSpan__FromSeconds_2b8a42c(&uStack_30,uVar6,(int)uVar14,uVar6,0);
      iVar5 = *(int *)(iVar5 + 0x28);
      dVar13 = (double)System_TimeSpan__get_TotalMinutes_2b89cc8(&uStack_30,0);
      uVar6 = System_TimeSpan__get_Seconds_2b89be8(&uStack_30,0);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = **(undefined4 **)(_UNK_01095274 + 0x1095120);
      uVar1 = in_fpscr & 0xfffffff | (uint)(dVar13 == _UNK_01095238) << 0x1e;
      uVar10 = VectorSignedToFloat((int)(longlong)dVar13,(byte)(uVar1 >> 0x16) & 3);
      uVar6 = VectorSignedToFloat(uVar6,(byte)(uVar1 >> 0x16) & 3);
      if (SUB41(uVar1 >> 0x1e,0)) {
        uVar10 = _UNK_01095240;
      }
    }
    else {
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(iVar2 + 0x58);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar8 = *(int **)(_UNK_01095260 + 0x1094ee0);
      uVar10 = *(undefined4 *)(iVar2 + 0x50);
      uVar6 = *(undefined4 *)(iVar2 + 0x54);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar14 = FUN_00f88328(uVar10,uVar6);
      uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
      System_TimeSpan__FromSeconds_2b8a42c(&uStack_28,uVar6,(int)uVar14,uVar6,0);
      dVar13 = (double)System_TimeSpan__get_TotalHours_2b89c40(&uStack_28,0);
      iVar5 = *(int *)(iVar5 + 0x28);
      iVar2 = *(int *)(*piVar8 + 0x74);
      uVar1 = in_fpscr & 0xfffffff | (uint)(dVar13 < 1.0) << 0x1f;
      uVar12 = uVar1 | (uint)NAN(dVar13) << 0x1c;
      if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar12 >> 0x1c) & 1)) {
        if (iVar2 == 0) {
          FUN_00ec3934();
        }
        dVar13 = (double)System_TimeSpan__get_TotalHours_2b89c40(&uStack_28,0);
        uVar6 = System_TimeSpan__get_Minutes_2b89bbc(&uStack_28,0);
        uVar10 = System_TimeSpan__get_Seconds_2b89be8(&uStack_28,0);
        if (iVar5 != 0) {
          uVar1 = uVar12 & 0xfffffff | (uint)(dVar13 == _UNK_01095238) << 0x1e;
          uVar4 = VectorSignedToFloat((int)(longlong)dVar13,(byte)(uVar1 >> 0x16) & 3);
          uVar6 = VectorSignedToFloat(uVar6,(byte)(uVar1 >> 0x16) & 3);
          if (SUB41(uVar1 >> 0x1e,0)) {
            uVar4 = _UNK_01095240;
          }
          uVar10 = VectorSignedToFloat(uVar10,(byte)(uVar1 >> 0x16) & 3);
          TMPro_TMP_Text__SetText_34fff14
                    (iVar5,**(undefined4 **)(_UNK_01095264 + 0x10951b8),uVar4,uVar6,uVar10,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar2 == 0) {
        FUN_00ec3934();
      }
      uVar6 = System_TimeSpan__get_Minutes_2b89bbc(&uStack_28,0);
      uVar4 = System_TimeSpan__get_Seconds_2b89be8(&uStack_28,0);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar10 = VectorSignedToFloat(uVar6,(byte)(uVar12 >> 0x16) & 3);
      uVar6 = VectorSignedToFloat(uVar4,(byte)(uVar12 >> 0x16) & 3);
      uVar4 = **(undefined4 **)(_UNK_01095268 + 0x1094fac);
    }
    TMPro_TMP_Text__SetText_34ffee4(iVar5,uVar4,uVar10,uVar6,0);
  }
  return;
}

