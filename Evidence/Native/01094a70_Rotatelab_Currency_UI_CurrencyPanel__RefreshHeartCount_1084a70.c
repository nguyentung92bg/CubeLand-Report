/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$RefreshHeartCount
void Rotatelab_Currency_UI_CurrencyPanel__RefreshHeartCount (Rotatelab_Currency_UI_CurrencyPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$RefreshHeartCount
   void Rotatelab_Currency_UI_CurrencyPanel__RefreshHeartCount
   (Rotatelab_Currency_UI_CurrencyPanel_o* __this, const MethodInfo* method); */

void Rotatelab_Currency_UI_CurrencyPanel__RefreshHeartCount_1084a70(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  pcVar3 = (char *)(_UNK_01094d60 + 0x1094a84);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01094d64 + 0x1094a98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01094d68 + 0x1094aa4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01094d6c + 0x1094ab0));
    *pcVar3 = '\x01';
  }
  puVar8 = *(undefined4 **)(_UNK_01094d70 + 0x1094ac4);
  iVar4 = *(int *)(param_1 + 0x20);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = 0;
  iVar1 = Rotatelab_ObservableEnergy__get_IsInfinite_fb31e4(*(int *)(iVar1 + 0x58),0);
  if (iVar1 == 0) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = Rotatelab_ObservableLong__op_Implicit_fb4344(*(undefined4 *)(iVar1 + 0x58),0);
    iVar2 = (int)((ulonglong)uVar10 >> 0x20);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar7 = *(int **)(iVar1 + 0x58);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar11 = (**(code **)(*piVar7 + 0x110))(piVar7,*(undefined4 *)(*piVar7 + 0x114));
    iVar1 = (int)((ulonglong)uVar11 >> 0x20);
    bVar9 = (uint)uVar10 < (uint)uVar11;
    uVar6 = 0;
    if ((int)(iVar2 - (iVar1 + (uint)bVar9)) < 0 !=
        (SBORROW4(iVar2,iVar1) != SBORROW4(iVar2 - iVar1,(uint)bVar9))) {
      uVar6 = 1;
    }
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar4,uVar6,0);
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
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
  iVar2 = 0x30;
  if (iVar1 != 0) {
    iVar2 = 0x34;
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(iVar4,*(undefined4 *)(param_1 + iVar2),0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
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
  piVar7 = *(int **)(param_1 + 0x24);
  if (iVar1 != 0) {
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Could not recover jumptable at 0x01094ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar7 + 0x2b0))
              (piVar7,**(undefined4 **)(_UNK_01094d74 + 0x1094cc4),*(undefined4 *)(*piVar7 + 0x2b4))
    ;
    return;
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
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
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar10 = (**(code **)(*piVar5 + 0xf0))(piVar5,*(undefined4 *)(*piVar5 + 0xf4));
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = FUN_00f88368((int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
  TMPro_TMP_Text__SetText_34ffc64
            (piVar7,**(undefined4 **)(_UNK_01094d78 + 0x1094d54),uVar6,0,0,0,0,0,0,0);
  return;
}

