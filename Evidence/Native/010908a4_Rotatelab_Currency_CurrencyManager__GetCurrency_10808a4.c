/* IL2CPP: Rotatelab.Currency.CurrencyManager$$GetCurrency
Rotatelab_ObservableLong_o* Rotatelab_Currency_CurrencyManager__GetCurrency (Rotatelab_Currency_CurrencyManager_o* __this, int32_t type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.CurrencyManager$$GetCurrency
   Rotatelab_ObservableLong_o* Rotatelab_Currency_CurrencyManager__GetCurrency
   (Rotatelab_Currency_CurrencyManager_o* __this, int32_t type, const MethodInfo* method); */

undefined4 Rotatelab_Currency_CurrencyManager__GetCurrency_10808a4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_01090af0 + 0x10908c0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01090af4 + 0x10908d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01090af8 + 0x10908e0));
    *pcVar4 = '\x01';
  }
  switch(param_2) {
  case 0:
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x28);
    break;
  case 1:
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x40);
    break;
  case 2:
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x44);
    break;
  case 3:
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x48);
    break;
  case 4:
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x4c);
    break;
  case 5:
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(&UNK_010909a8 + _UNK_01090afc));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x58);
    break;
  case 6:
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    break;
  case 7:
    if (*(int *)(**(int **)(&UNK_01090a04 + _UNK_01090b00) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    return *(undefined4 *)(iVar1 + 0x2c);
  default:
    uStack_1c = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01090b04 + 0x1090a7c));
    uStack_18 = 0xffffffff;
    uStack_14 = param_2;
    uVar2 = System_Enum__ToString_2bab8c0(&uStack_1c,0);
    uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01090b08 + 0x1090aa4));
    uVar2 = System_String__Concat_29fee38(uVar3,uVar2,0);
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01090b0c + 0x1090ac0));
    uVar3 = thunk_FUN_00f00cdc();
    System_ArgumentException___ctor_2b113a4(uVar3,uVar2,0);
    uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01090b10 + 0x1090ae0));
    func_0x00ec3920(uVar3,uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_00ec3760();
  case 9:
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x50);
    break;
  case 10:
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    break;
  case 0xb:
    uVar2 = *(undefined4 *)(param_1 + 0x18);
  }
  return uVar2;
}

