/* IL2CPP: Rotatelab.Currency.CurrencyManager$$IncreaseCurrency
void Rotatelab_Currency_CurrencyManager__IncreaseCurrency (Rotatelab_Currency_CurrencyManager_o* __this, int32_t type, int64_t diff, System_Nullable_float__o animationDelay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.CurrencyManager$$IncreaseCurrency
   void Rotatelab_Currency_CurrencyManager__IncreaseCurrency (Rotatelab_Currency_CurrencyManager_o*
   __this, int32_t type, int64_t diff, System_Nullable_float__o animationDelay, const MethodInfo*
   method); */

void Rotatelab_Currency_CurrencyManager__IncreaseCurrency_10839a0
               (undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5,
               undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_40 [16];
  uint uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_01093c3c + 0x10939c4);
  uStack_2c = param_6;
  uStack_30 = param_5;
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01093c40 + 0x10939ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01093c44 + 0x10939f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01093c48 + 0x1093a04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01093c4c + 0x1093a10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01093c50 + 0x1093a1c));
    *pcVar4 = '\x01';
  }
  if (param_2 < 5) {
LAB_01093a2c:
    piVar5 = *(int **)(_UNK_01093c54 + 0x1093a38);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar5;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x1c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_Int32Enum__long___Raise_23a4840
              (iVar1,param_2,param_3,param_4,**(undefined4 **)(_UNK_01093c58 + 0x1093a78));
    if (param_2 != 5) {
LAB_01093a9c:
      piVar5 = (int *)Rotatelab_Currency_CurrencyManager__GetCurrency_10808a4(param_1,param_2);
      if ((param_5 & 0xff) != 0) {
        piVar2 = (int *)Rotatelab_Currency_CurrencyManager__GetCurrency_10808a4(param_1,param_2);
        if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        lVar6 = (**(code **)(*piVar2 + 0xf0))(piVar2,*(undefined4 *)(*piVar2 + 0xf4));
        uVar3 = System_Nullable_float___get_Value_17dea58
                          (&uStack_30,**(undefined4 **)(_UNK_01093c64 + 0x1093af8));
        if (piVar5 != (int *)0x0) {
          lVar6 = lVar6 + CONCAT44(param_4,param_3);
          Rotatelab_ObservableLong__SetValueAnimated_fb4020
                    (auStack_40,piVar5,(int)lVar6,(int)((ulonglong)lVar6 >> 0x20),0x3f800000,uVar3,0
                    );
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      goto LAB_01093b80;
    }
  }
  else if (param_2 != 5) {
    if (param_2 == 9) goto LAB_01093a2c;
    goto LAB_01093a9c;
  }
  if ((int)param_4 < (int)(uint)(param_3 == 0)) {
    if (param_4 < 0x80000000) {
      return;
    }
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01093c60 + 0x1093bdc));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0x58) != 0) {
      Rotatelab_ObservableEnergy__GrantInfiniteEnergy_fb3a88
                (*(int *)(iVar1 + 0x58),param_4 * -0xf,(int)((ulonglong)param_3 * 0xffffffc4),
                 ((int)((ulonglong)param_3 * 0xffffffc4 >> 0x20) - param_3) + param_4 * -0x3c,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01093c5c + 0x1093b54));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar5 = *(int **)(iVar1 + 0x58);
LAB_01093b80:
  if (piVar5 != (int *)0x0) {
    lVar7 = (**(code **)(*piVar5 + 0xf0))(piVar5,*(undefined4 *)(*piVar5 + 0xf4));
    lVar6 = lVar7 + CONCAT44(param_4,param_3);
    (**(code **)(*piVar5 + 0xf8))
              (piVar5,(int)((ulonglong)lVar7 >> 0x20),(int)lVar6,(int)((ulonglong)lVar6 >> 0x20),
               *(undefined4 *)(*piVar5 + 0xfc));
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

