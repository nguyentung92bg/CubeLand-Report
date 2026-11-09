/* IL2CPP: Rotatelab.Currency.CurrencyManager$$Awake
void Rotatelab_Currency_CurrencyManager__Awake (Rotatelab_Currency_CurrencyManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.CurrencyManager$$Awake
   void Rotatelab_Currency_CurrencyManager__Awake (Rotatelab_Currency_CurrencyManager_o* __this,
   const MethodInfo* method); */

void Rotatelab_Currency_CurrencyManager__Awake_10833f0(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  pcVar3 = (char *)(_UNK_01093558 + 0x1093408);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109355c + 0x109341c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01093560 + 0x1093428));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01093564 + 0x1093434));
    *pcVar3 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_01093568 + 0x1093448));
  puVar5 = *(undefined4 **)(_UNK_0109356c + 0x109345c);
  iVar1 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                    (*(undefined4 *)(param_1 + 0x1c),*puVar5);
  if (0 < iVar1) {
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar4 = *(int **)(iVar1 + 0x28);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = (**(code **)(*piVar4 + 0xf0))(piVar4,*(undefined4 *)(*piVar4 + 0xf4));
    uVar2 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                      (*(undefined4 *)(param_1 + 0x1c),*puVar5);
    iVar1 = *piVar4;
    (**(code **)(iVar1 + 0xf8))
              (piVar4,iVar1,(uint)uVar6 + uVar2,
               (int)((ulonglong)uVar6 >> 0x20) + ((int)uVar2 >> 0x1f) +
               (uint)CARRY4((uint)uVar6,uVar2),*(undefined4 *)(iVar1 + 0xfc));
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Save_SavedValue_int___set_Value_1a8b820
              (*(int *)(param_1 + 0x1c),0,**(undefined4 **)(_UNK_01093570 + 0x10934f8));
  }
  iVar1 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                    (*(undefined4 *)(param_1 + 0x20),*puVar5);
  if (0 < iVar1) {
    piVar4 = *(int **)(param_1 + 0x10);
    uVar6 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                      (*(undefined4 *)(param_1 + 0x20),*puVar5);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar4 + 0xf8))
              (piVar4,(int)((ulonglong)uVar6 >> 0x20),(int)uVar6,(int)uVar6 >> 0x1f,
               *(undefined4 *)(*piVar4 + 0xfc));
  }
  return;
}

