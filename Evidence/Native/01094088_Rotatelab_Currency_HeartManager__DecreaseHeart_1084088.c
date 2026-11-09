/* IL2CPP: Rotatelab.Currency.HeartManager$$DecreaseHeart
void Rotatelab_Currency_HeartManager__DecreaseHeart (Rotatelab_Currency_HeartManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.HeartManager$$DecreaseHeart
   void Rotatelab_Currency_HeartManager__DecreaseHeart (Rotatelab_Currency_HeartManager_o* __this,
   const MethodInfo* method); */

void Rotatelab_Currency_HeartManager__DecreaseHeart_1084088(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  pcVar3 = (char *)(_UNK_01094244 + 0x10940a0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01094248 + 0x10940b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109424c + 0x10940c0));
    *pcVar3 = '\x01';
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(*(undefined4 *)(iVar1 + 0x58),0);
  if (0 < iVar1) {
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_ObservableEnergy__get_IsInfinite_fb31e4(*(int *)(iVar1 + 0x58),0);
    if (iVar1 == 0) {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01094250 + 0x1094140));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = Rotatelab_Scripts_GameManager__get_IsMainMenuActive_1065c48(iVar1,0);
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0x14) = 1;
        iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar2 = *(int **)(iVar1 + 0x58);
        if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar4 = (**(code **)(*piVar2 + 0xf0))(piVar2,*(undefined4 *)(*piVar2 + 0xf4));
        iVar1 = (int)((ulonglong)uVar4 >> 0x20);
        (**(code **)(*piVar2 + 0xf8))
                  (piVar2,iVar1,(int)uVar4 + -1,iVar1 - (uint)((int)uVar4 == 0),
                   *(undefined4 *)(*piVar2 + 0xfc));
        iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(*(undefined4 *)(iVar1 + 0x58),0);
        if (iVar1 == 0) {
          piVar2 = *(int **)(_UNK_01094254 + 0x1094208);
          iVar1 = *piVar2;
          if (*(int *)(iVar1 + 0x74) == 0) {
            FUN_00ec3934();
            iVar1 = *piVar2;
          }
          iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x48);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar1 = *(int *)(iVar1 + 8);
          if (iVar1 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x00fd08d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
          return;
        }
      }
    }
  }
  return;
}

