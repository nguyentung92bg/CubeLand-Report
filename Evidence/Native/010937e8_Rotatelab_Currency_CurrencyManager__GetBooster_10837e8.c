/* IL2CPP: Rotatelab.Currency.CurrencyManager$$GetBooster
Rotatelab_ObservableBooster_o* Rotatelab_Currency_CurrencyManager__GetBooster (Rotatelab_Currency_CurrencyManager_o* __this, bool isPreBooster, int32_t boosterId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.CurrencyManager$$GetBooster
   Rotatelab_ObservableBooster_o* Rotatelab_Currency_CurrencyManager__GetBooster
   (Rotatelab_Currency_CurrencyManager_o* __this, bool isPreBooster, int32_t boosterId, const
   MethodInfo* method); */

undefined4
Rotatelab_Currency_CurrencyManager__GetBooster_10837e8(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iStack_18;
  int iStack_14;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 1:
      iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar1 = (undefined4 *)(iVar2 + 0x40);
      break;
    case 2:
      iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar1 = (undefined4 *)(iVar2 + 0x44);
      break;
    case 3:
      iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar1 = (undefined4 *)(iVar2 + 0x48);
      break;
    case 4:
      iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar1 = (undefined4 *)(iVar2 + 0x4c);
      break;
    case 5:
      iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar1 = (undefined4 *)(iVar2 + 0x50);
      break;
    default:
      iStack_14 = param_3;
      uVar3 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_01093988 + 0x1093924) + 0x24),&iStack_14);
      uVar4 = *(undefined4 *)(_UNK_0109398c + 0x109393c);
LAB_01093938:
      uVar4 = thunk_FUN_00f23fd0(uVar4);
      uVar3 = System_String__Format_29ffb6c(uVar4,uVar3,0);
      thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01093990 + 0x1093958));
      uVar4 = thunk_FUN_00f00cdc();
      System_ArgumentException___ctor_2b113a4(uVar4,uVar3,0);
      uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01093994 + 0x1093978));
      func_0x00ec3920(uVar4,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_00ec3760();
    }
  }
  else if (param_3 == 2) {
    puVar1 = (undefined4 *)(param_1 + 0x18);
  }
  else {
    if (param_3 != 1) {
      iStack_18 = param_3;
      uVar3 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_01093998 + 0x10938fc) + 0x24),&iStack_18);
      uVar4 = *(undefined4 *)(_UNK_0109399c + 0x1093914);
      goto LAB_01093938;
    }
    puVar1 = (undefined4 *)(param_1 + 0x14);
  }
  return *puVar1;
}

