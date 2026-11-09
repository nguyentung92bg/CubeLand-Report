/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$<Start>b__12_3
void Rotatelab_Currency_UI_CurrencyPanel___Start_b__12_3 (Rotatelab_Currency_UI_CurrencyPanel_o* __this, int64_t __, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$<Start>b__12_3
   void Rotatelab_Currency_UI_CurrencyPanel___Start_b__12_3 (Rotatelab_Currency_UI_CurrencyPanel_o*
   __this, int64_t __, const MethodInfo* method); */

void Rotatelab_Currency_UI_CurrencyPanel___Start_b__12_3_10858f8(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  uint in_fpscr;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01095244 + 0x1094d9c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095248 + 0x1094db0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109524c + 0x1094dbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095250 + 0x1094dc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095254 + 0x1094dd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095258 + 0x1094de0));
    *pcVar5 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x1c),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_GameObject__get_activeSelf_360212c(iVar2,0);
  if (iVar2 != 0) {
    puVar8 = *(undefined4 **)(_UNK_0109525c + 0x1094e48);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
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
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
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
      uVar13 = Rotatelab_ObservableLong__op_Implicit_fb4344(*(undefined4 *)(iVar2 + 0x58),0);
      iVar3 = (int)((ulonglong)uVar13 >> 0x20);
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar7 = *(int **)(iVar2 + 0x58);
      if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar14 = (**(code **)(*piVar7 + 0x110))(piVar7,*(undefined4 *)(*piVar7 + 0x114));
      iVar2 = (int)((ulonglong)uVar14 >> 0x20);
      bVar10 = (uint)uVar13 < (uint)uVar14;
      if ((int)(iVar3 - (iVar2 + (uint)bVar10)) < 0 ==
          (SBORROW4(iVar3,iVar2) != SBORROW4(iVar3 - iVar2,(uint)bVar10))) {
        piVar7 = *(int **)(param_1 + 0x28);
        if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
                    /* WARNING: Could not recover jumptable at 0x01095234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar7 + 0x2b0))
                  (piVar7,**(undefined4 **)(_UNK_0109526c + 0x1095224),
                   *(undefined4 *)(*piVar7 + 0x2b4));
        return;
      }
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
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
      uVar9 = *(undefined4 *)(iVar2 + 0x38);
      uVar6 = *(undefined4 *)(iVar2 + 0x3c);
      if (*(int *)(**(int **)(_UNK_01095270 + 0x1095098) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar13 = FUN_00f88328(uVar9,uVar6);
      uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
      System_TimeSpan__FromSeconds_2b8a42c(&uStack_30,uVar6,(int)uVar13,uVar6,0);
      iVar2 = *(int *)(param_1 + 0x28);
      dVar12 = (double)System_TimeSpan__get_TotalMinutes_2b89cc8(&uStack_30,0);
      uVar6 = System_TimeSpan__get_Seconds_2b89be8(&uStack_30,0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = **(undefined4 **)(_UNK_01095274 + 0x1095120);
      uVar1 = in_fpscr & 0xfffffff | (uint)(dVar12 == _UNK_01095238) << 0x1e;
      uVar9 = VectorSignedToFloat((int)(longlong)dVar12,(byte)(uVar1 >> 0x16) & 3);
      uVar6 = VectorSignedToFloat(uVar6,(byte)(uVar1 >> 0x16) & 3);
      if (SUB41(uVar1 >> 0x1e,0)) {
        uVar9 = _UNK_01095240;
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
      piVar7 = *(int **)(_UNK_01095260 + 0x1094ee0);
      uVar9 = *(undefined4 *)(iVar2 + 0x50);
      uVar6 = *(undefined4 *)(iVar2 + 0x54);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar13 = FUN_00f88328(uVar9,uVar6);
      uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
      System_TimeSpan__FromSeconds_2b8a42c(&uStack_28,uVar6,(int)uVar13,uVar6,0);
      dVar12 = (double)System_TimeSpan__get_TotalHours_2b89c40(&uStack_28,0);
      iVar2 = *(int *)(param_1 + 0x28);
      iVar3 = *(int *)(*piVar7 + 0x74);
      uVar1 = in_fpscr & 0xfffffff | (uint)(dVar12 < 1.0) << 0x1f;
      uVar11 = uVar1 | (uint)NAN(dVar12) << 0x1c;
      if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar11 >> 0x1c) & 1)) {
        if (iVar3 == 0) {
          FUN_00ec3934();
        }
        dVar12 = (double)System_TimeSpan__get_TotalHours_2b89c40(&uStack_28,0);
        uVar6 = System_TimeSpan__get_Minutes_2b89bbc(&uStack_28,0);
        uVar9 = System_TimeSpan__get_Seconds_2b89be8(&uStack_28,0);
        if (iVar2 != 0) {
          uVar1 = uVar11 & 0xfffffff | (uint)(dVar12 == _UNK_01095238) << 0x1e;
          uVar4 = VectorSignedToFloat((int)(longlong)dVar12,(byte)(uVar1 >> 0x16) & 3);
          uVar6 = VectorSignedToFloat(uVar6,(byte)(uVar1 >> 0x16) & 3);
          if (SUB41(uVar1 >> 0x1e,0)) {
            uVar4 = _UNK_01095240;
          }
          uVar9 = VectorSignedToFloat(uVar9,(byte)(uVar1 >> 0x16) & 3);
          TMPro_TMP_Text__SetText_34fff14
                    (iVar2,**(undefined4 **)(_UNK_01095264 + 0x10951b8),uVar4,uVar6,uVar9,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar3 == 0) {
        FUN_00ec3934();
      }
      uVar6 = System_TimeSpan__get_Minutes_2b89bbc(&uStack_28,0);
      uVar4 = System_TimeSpan__get_Seconds_2b89be8(&uStack_28,0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar9 = VectorSignedToFloat(uVar6,(byte)(uVar11 >> 0x16) & 3);
      uVar6 = VectorSignedToFloat(uVar4,(byte)(uVar11 >> 0x16) & 3);
      uVar4 = **(undefined4 **)(_UNK_01095268 + 0x1094fac);
    }
    TMPro_TMP_Text__SetText_34ffee4(iVar2,uVar4,uVar9,uVar6,0);
  }
  return;
}

