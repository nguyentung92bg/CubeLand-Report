/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$Start
void Rotatelab_Currency_UI_CurrencyPanel__Start (Rotatelab_Currency_UI_CurrencyPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$Start
   void Rotatelab_Currency_UI_CurrencyPanel__Start (Rotatelab_Currency_UI_CurrencyPanel_o* __this,
   const MethodInfo* method); */

void Rotatelab_Currency_UI_CurrencyPanel__Start_10844d8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  bool bVar13;
  uint in_fpscr;
  uint uVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_010949d4 + 0x10944ec);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010949d8 + 0x1094500));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010949dc + 0x109450c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010949e0 + 0x1094518));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010949e4 + 0x1094524));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010949e8 + 0x1094530));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010949ec + 0x109453c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010949f0 + 0x1094548));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010949f4 + 0x1094554));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010949f8 + 0x1094560));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010949fc + 0x109456c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01094a00 + 0x1094578));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01094a04 + 0x1094584));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01094a08 + 0x1094590));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01094a0c + 0x109459c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01094a10 + 0x10945a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01094a14 + 0x10945b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01094a18 + 0x10945c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01094a1c + 0x10945cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01094a20 + 0x10945d8));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar10 = *(undefined4 **)(_UNK_01094a24 + 0x10945fc);
  iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 0xb4);
  uVar2 = thunk_FUN_00f00cdc(*puVar10);
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar2,param_1,**(undefined4 **)(_UNK_01094a28 + 0x109461c),0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar6,uVar2,0);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar11 = *(int **)(_UNK_01094a2c + 0x109465c);
  iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0xb4);
  iVar6 = *piVar11;
  if (*(int *)(iVar6 + 0x74) == 0) {
    FUN_00ec3934();
    iVar6 = *piVar11;
  }
  puVar4 = *(undefined4 **)(iVar6 + 0x5c);
  iVar9 = puVar4[1];
  if (iVar9 == 0) {
    if (*(int *)(iVar6 + 0x74) == 0) {
      FUN_00ec3934();
      puVar4 = *(undefined4 **)(*piVar11 + 0x5c);
    }
    uVar2 = *puVar4;
    iVar9 = thunk_FUN_00f00cdc(*puVar10);
    UnityEngine_Events_UnityAction___ctor_361afc4
              (iVar9,uVar2,**(undefined4 **)(_UNK_01094a30 + 0x10946c0),0);
    piVar11 = (int *)(*(int *)(*piVar11 + 0x5c) + 4);
    *piVar11 = iVar9;
    thunk_FUN_00ec5080(piVar11,iVar9);
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar7,iVar9,0);
  puVar10 = *(undefined4 **)(_UNK_01094a34 + 0x1094704);
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar4 = *(undefined4 **)(_UNK_01094a38 + 0x1094738);
  iVar6 = *(int *)(iVar6 + 0x58);
  uVar2 = thunk_FUN_00f00cdc(*puVar4);
  System_Action_long____ctor_1f10724(uVar2,param_1,**(undefined4 **)(_UNK_01094a3c + 0x1094758),0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar12 = *(undefined4 **)(_UNK_01094a40 + 0x1094780);
  Rotatelab_ObservableValue_long___add_OnValueChanged_185d4e4(iVar6,uVar2,*puVar12);
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(iVar6 + 0x58);
  uVar2 = thunk_FUN_00f00cdc(*puVar4);
  System_Action_long____ctor_1f10724(uVar2,param_1,**(undefined4 **)(_UNK_01094a44 + 0x10947d4),0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_ObservableEnergy__add_OnRefillTimerChanged_fb36d4(iVar6,uVar2,0);
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(iVar6 + 0x58);
  uVar2 = thunk_FUN_00f00cdc(*puVar4);
  System_Action_long____ctor_1f10724(uVar2,param_1,**(undefined4 **)(_UNK_01094a48 + 0x1094848),0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_ObservableEnergy__add_OnInfinityTimerChanged_fb3928(iVar6,uVar2,0);
  piVar11 = *(int **)(_UNK_01094a4c + 0x1094878);
  iVar6 = *piVar11;
  if (*(int *)(iVar6 + 0x74) == 0) {
    FUN_00ec3934();
    iVar6 = *piVar11;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x118);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01094a50 + 0x109489c));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar2,param_1,**(undefined4 **)(_UNK_01094a54 + 0x10948bc),0);
  uVar2 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                    (uVar8,uVar2,**(undefined4 **)(_UNK_01094a58 + 0x10948d4));
  *(undefined4 *)(*(int *)(*piVar11 + 0x5c) + 0x118) = uVar2;
  thunk_FUN_00ec5080();
  uVar8 = *(undefined4 *)(*(int *)(*piVar11 + 0x5c) + 0x11c);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01094a5c + 0x1094904));
  System_Action_Int32Enum__bool__bool____ctor_1f1a4f0
            (uVar2,param_1,**(undefined4 **)(_UNK_01094a60 + 0x1094924),0);
  uVar2 = Rotatelab_GameAction_Int32Enum__bool__bool___op_Addition_23a5cec
                    (uVar8,uVar2,**(undefined4 **)(_UNK_01094a64 + 0x109493c));
  *(undefined4 *)(*(int *)(*piVar11 + 0x5c) + 0x11c) = uVar2;
  thunk_FUN_00ec5080();
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01094a68 + 0x1094964));
  if (iVar6 != 0) {
    iVar6 = *(int *)(iVar6 + 0x10);
    uVar2 = thunk_FUN_00f00cdc(*puVar4);
    System_Action_long____ctor_1f10724(uVar2,param_1,**(undefined4 **)(_UNK_01094a6c + 0x109499c),0)
    ;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_ObservableValue_long___add_OnValueChanged_185d4e4(iVar6,uVar2,*puVar12);
    Rotatelab_Currency_UI_CurrencyPanel__RefreshHeartCount_1084a70(param_1);
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
    iVar6 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x1c),0);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = UnityEngine_GameObject__get_activeSelf_360212c(iVar6,0);
    if (iVar6 != 0) {
      puVar10 = *(undefined4 **)(_UNK_0109525c + 0x1094e48);
      iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar6 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar6 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar6 = Rotatelab_ObservableEnergy__get_IsInfinite_fb31e4(*(int *)(iVar6 + 0x58),0);
      iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
      if (iVar6 == 0) {
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar16 = Rotatelab_ObservableLong__op_Implicit_fb4344(*(undefined4 *)(iVar6 + 0x58),0);
        iVar7 = (int)((ulonglong)uVar16 >> 0x20);
        iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar11 = *(int **)(iVar6 + 0x58);
        if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar17 = (**(code **)(*piVar11 + 0x110))(piVar11,*(undefined4 *)(*piVar11 + 0x114));
        iVar6 = (int)((ulonglong)uVar17 >> 0x20);
        bVar13 = (uint)uVar16 < (uint)uVar17;
        if ((int)(iVar7 - (iVar6 + (uint)bVar13)) < 0 ==
            (SBORROW4(iVar7,iVar6) != SBORROW4(iVar7 - iVar6,(uint)bVar13))) {
          piVar11 = *(int **)(param_1 + 0x28);
          if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
                    /* WARNING: Could not recover jumptable at 0x01095234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar11 + 0x2b0))
                    (piVar11,**(undefined4 **)(_UNK_0109526c + 0x1095224),
                     *(undefined4 *)(*piVar11 + 0x2b4));
          return;
        }
        iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = *(int *)(iVar6 + 0x58);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar8 = *(undefined4 *)(iVar6 + 0x38);
        uVar2 = *(undefined4 *)(iVar6 + 0x3c);
        if (*(int *)(**(int **)(_UNK_01095270 + 0x1095098) + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar16 = FUN_00f88328(uVar8,uVar2);
        uVar2 = (undefined4)((ulonglong)uVar16 >> 0x20);
        System_TimeSpan__FromSeconds_2b8a42c(&uStack_30,uVar2,(int)uVar16,uVar2,0);
        iVar6 = *(int *)(param_1 + 0x28);
        dVar15 = (double)System_TimeSpan__get_TotalMinutes_2b89cc8(&uStack_30,0);
        uVar2 = System_TimeSpan__get_Seconds_2b89be8(&uStack_30,0);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar3 = **(undefined4 **)(_UNK_01095274 + 0x1095120);
        uVar1 = in_fpscr & 0xfffffff | (uint)(dVar15 == _UNK_01095238) << 0x1e;
        uVar8 = VectorSignedToFloat((int)(longlong)dVar15,(byte)(uVar1 >> 0x16) & 3);
        uVar2 = VectorSignedToFloat(uVar2,(byte)(uVar1 >> 0x16) & 3);
        if (SUB41(uVar1 >> 0x1e,0)) {
          uVar8 = _UNK_01095240;
        }
      }
      else {
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = *(int *)(iVar6 + 0x58);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar11 = *(int **)(_UNK_01095260 + 0x1094ee0);
        uVar8 = *(undefined4 *)(iVar6 + 0x50);
        uVar2 = *(undefined4 *)(iVar6 + 0x54);
        if (*(int *)(*piVar11 + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar16 = FUN_00f88328(uVar8,uVar2);
        uVar2 = (undefined4)((ulonglong)uVar16 >> 0x20);
        System_TimeSpan__FromSeconds_2b8a42c(&uStack_28,uVar2,(int)uVar16,uVar2,0);
        dVar15 = (double)System_TimeSpan__get_TotalHours_2b89c40(&uStack_28,0);
        iVar6 = *(int *)(param_1 + 0x28);
        iVar7 = *(int *)(*piVar11 + 0x74);
        uVar1 = in_fpscr & 0xfffffff | (uint)(dVar15 < 1.0) << 0x1f;
        uVar14 = uVar1 | (uint)NAN(dVar15) << 0x1c;
        if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar14 >> 0x1c) & 1)) {
          if (iVar7 == 0) {
            FUN_00ec3934();
          }
          dVar15 = (double)System_TimeSpan__get_TotalHours_2b89c40(&uStack_28,0);
          uVar2 = System_TimeSpan__get_Minutes_2b89bbc(&uStack_28,0);
          uVar8 = System_TimeSpan__get_Seconds_2b89be8(&uStack_28,0);
          if (iVar6 != 0) {
            uVar1 = uVar14 & 0xfffffff | (uint)(dVar15 == _UNK_01095238) << 0x1e;
            uVar3 = VectorSignedToFloat((int)(longlong)dVar15,(byte)(uVar1 >> 0x16) & 3);
            uVar2 = VectorSignedToFloat(uVar2,(byte)(uVar1 >> 0x16) & 3);
            if (SUB41(uVar1 >> 0x1e,0)) {
              uVar3 = _UNK_01095240;
            }
            uVar8 = VectorSignedToFloat(uVar8,(byte)(uVar1 >> 0x16) & 3);
            TMPro_TMP_Text__SetText_34fff14
                      (iVar6,**(undefined4 **)(_UNK_01095264 + 0x10951b8),uVar3,uVar2,uVar8,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (iVar7 == 0) {
          FUN_00ec3934();
        }
        uVar2 = System_TimeSpan__get_Minutes_2b89bbc(&uStack_28,0);
        uVar3 = System_TimeSpan__get_Seconds_2b89be8(&uStack_28,0);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar8 = VectorSignedToFloat(uVar2,(byte)(uVar14 >> 0x16) & 3);
        uVar2 = VectorSignedToFloat(uVar3,(byte)(uVar14 >> 0x16) & 3);
        uVar3 = **(undefined4 **)(_UNK_01095268 + 0x1094fac);
      }
      TMPro_TMP_Text__SetText_34ffee4(iVar6,uVar3,uVar8,uVar2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

