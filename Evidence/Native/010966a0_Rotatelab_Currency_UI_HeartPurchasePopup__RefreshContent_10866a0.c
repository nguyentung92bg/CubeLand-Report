/* IL2CPP: Rotatelab.Currency.UI.HeartPurchasePopup$$RefreshContent
void Rotatelab_Currency_UI_HeartPurchasePopup__RefreshContent (Rotatelab_Currency_UI_HeartPurchasePopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.HeartPurchasePopup$$RefreshContent
   void Rotatelab_Currency_UI_HeartPurchasePopup__RefreshContent
   (Rotatelab_Currency_UI_HeartPurchasePopup_o* __this, const MethodInfo* method); */

void Rotatelab_Currency_UI_HeartPurchasePopup__RefreshContent_10866a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  
  pcVar6 = (char *)(_UNK_01096cb0 + 0x10966b8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01096cb4 + 0x10966cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01096cb8 + 0x10966d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01096cbc + 0x10966e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01096cc0 + 0x10966f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01096cc4 + 0x10966fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01096cc8 + 0x1096708));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01096ccc + 0x1096714));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01096cd0 + 0x1096720));
    *pcVar6 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01096cd4 + 0x1096734));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x4c) == 0) {
    bVar11 = false;
  }
  else {
    if (*(int *)(**(int **)(_UNK_01096cd8 + 0x1096760) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar2 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
    iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01096cdc + 0x1096790));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x34) + 0x14);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(iVar3 + 0x14);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    bVar11 = *(int *)(iVar3 + 8) <= iVar1;
  }
  puVar9 = *(undefined4 **)(_UNK_01096ce0 + 0x10967f8);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(*(undefined4 *)(iVar1 + 0x58),0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
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
  uVar12 = (**(code **)(*piVar7 + 0x110))(piVar7,*(undefined4 *)(*piVar7 + 0x114));
  iVar3 = (int)((ulonglong)uVar12 >> 0x20);
  uVar5 = (uint)uVar12;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
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
  uVar10 = 0;
  iVar1 = Rotatelab_ObservableEnergy__get_IsInfinite_fb31e4(*(int *)(iVar1 + 0x58),0);
  while( true ) {
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x28) + 0xc) <= (int)uVar10) break;
    iVar8 = *(int *)(param_1 + 0x28);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar8 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar8 = *(int *)(iVar8 + uVar10 * 4 + 0x10);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = UnityEngine_Component__get_gameObject_35fe360(iVar8,0);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar8,(int)uVar10 < (int)uVar4,0);
    uVar10 = uVar10 + 1;
  }
  piVar7 = *(int **)(param_1 + 0x20);
  iVar8 = (int)uVar4 >> 0x1f;
  if (iVar1 == 0) {
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar7 + 0x2b0))
              (piVar7,**(undefined4 **)(_UNK_01096ce8 + 0x1096a94),*(undefined4 *)(*piVar7 + 0x2b4))
    ;
    if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x40),0,0);
    if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x2c),1,0);
    iVar1 = *(int *)(param_1 + 0x3c);
    if ((int)(iVar8 - (iVar3 + (uint)(uVar4 < uVar5))) < 0 ==
        (SBORROW4(iVar8,iVar3) != SBORROW4(iVar8 - iVar3,(uint)(uVar4 < uVar5)))) {
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
      if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x30),0,0);
      if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x34),0,0);
      if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x38),0,0);
      if (*(int *)(param_1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x5c),0,0);
      if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Febucci_UI_Core_TAnimPlayerBase__ShowText_11d109c
                (*(int *)(param_1 + 0x44),**(undefined4 **)(_UNK_01096cec + 0x1096c50),0);
      goto LAB_01096c58;
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar1,0,0);
    if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x30),1,0);
    if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x34),1,0);
    if (*(int *)(param_1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x5c),1,0);
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  else {
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar7 + 0x2b0))
              (piVar7,**(undefined4 **)(_UNK_01096ce4 + 0x109698c),*(undefined4 *)(*piVar7 + 0x2b4))
    ;
    if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x40),1,0);
    if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x30),1,0);
    if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x2c),0,0);
    if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x34),0,0);
    if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x38),0,0);
    if (*(int *)(param_1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x5c),0,0);
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    bVar11 = false;
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,bVar11,0);
LAB_01096c58:
  if ((int)(iVar8 - (iVar3 + (uint)(uVar4 < uVar5))) < 0 ==
      (SBORROW4(iVar8,iVar3) != SBORROW4(iVar8 - iVar3,(uint)(uVar4 < uVar5)))) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = FUN_00f88368(uVar5 - uVar4,iVar3 - (iVar8 + (uint)(uVar5 < uVar4)));
  TMPro_TMP_Text__SetText_34ffc64
            (iVar1,**(undefined4 **)(_UNK_01096cf0 + 0x1096c98),uVar2,0,0,0,0,0,0,0);
  return;
}

