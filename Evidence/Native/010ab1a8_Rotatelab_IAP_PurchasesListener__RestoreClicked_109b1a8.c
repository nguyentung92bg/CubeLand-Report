/* IL2CPP: Rotatelab.IAP.PurchasesListener$$RestoreClicked
void Rotatelab_IAP_PurchasesListener__RestoreClicked (Rotatelab_IAP_PurchasesListener_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$RestoreClicked
   void Rotatelab_IAP_PurchasesListener__RestoreClicked (Rotatelab_IAP_PurchasesListener_o* __this,
   const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__RestoreClicked_109b1a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined1 uStack_19;
  
  pcVar5 = (char *)(_UNK_010ab478 + 0x10ab1c0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab47c + 0x10ab1d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab480 + 0x10ab1e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab484 + 0x10ab1ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab488 + 0x10ab1f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab48c + 0x10ab204));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab490 + 0x10ab210));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab494 + 0x10ab21c));
    *pcVar5 = '\x01';
  }
  uStack_19 = 0;
  iVar1 = Rotatelab_IAP_PurchasesListener__TryShowNoConnectionDialog_109a5ac();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x18),1,0);
      piVar6 = *(int **)(_UNK_010ab498 + 0x10ab270);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar1 = UnityEngine_Application__get_platform_35a81fc(0);
      if (iVar1 != 8) {
        if (*(int *)(*piVar6 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar1 = UnityEngine_Application__get_platform_35a81fc(0);
        if (iVar1 == 0xb) {
          Rotatelab_IAP_PurchasesListener__CheckRestoredPurchases_109b4b4(param_1);
          if (*(int *)(**(int **)(_UNK_010ab4ac + 0x10ab34c) + 0x74) == 0) {
            FUN_00ec3934();
          }
          UnityEngine_Debug__Log_35b1c44(**(undefined4 **)(_UNK_010ab4b0 + 0x10ab36c),0);
        }
        iVar1 = *(int *)(param_1 + 0x18);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        pcVar5 = (char *)(iRam036120c4 + 0x3612050);
        if (*pcVar5 == '\0') {
          thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0);
          *pcVar5 = '\x01';
        }
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(iRam036120cc + 0x3612090);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam036120d0 + 0x36120a0);
            *(code **)(iRam036120d4 + 0x36120b0) = UNRECOVERED_JUMPTABLE;
          }
                    /* WARNING: Could not recover jumptable at 0x036120bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(iVar1,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
      }
      piVar6 = *(int **)(param_1 + 0x24);
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar8 = **(int **)(_UNK_010ab49c + 0x10ab2ac);
      iVar1 = *piVar6;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == *(int *)(iVar8 + 0x10)) {
            iVar1 = iVar1 + (*piVar7 + (uint)*(ushort *)(iVar8 + 0x2c)) * 8 + 0xc0;
            goto LAB_010ab3a8;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar4 != 0);
      }
      iVar1 = FUN_00efdb38(piVar6);
LAB_010ab3a8:
      iVar1 = FUN_00ec3930(*(undefined4 *)(iVar1 + 4),iVar8);
      piVar6 = (int *)(**(code **)(iVar1 + 4))(piVar6,iVar1);
      uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ab4a0 + 0x10ab3d4));
      System_Action_bool__object____ctor_1f17fac
                (uVar2,param_1,**(undefined4 **)(_UNK_010ab4a4 + 0x10ab3f0),0);
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *piVar6;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_010ab4a8 + 0x10ab414)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
            goto LAB_010ab45c;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar6,**(int **)(_UNK_010ab4a8 + 0x10ab414),0);
LAB_010ab45c:
                    /* WARNING: Could not recover jumptable at 0x010ab474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(piVar6,uVar2,puVar3[1]);
      return;
    }
    uStack_19 = Rotatelab_IAP_PurchasesListener__RetryInitializationAsync_1096a48(param_1);
    Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_19,0);
    Rotatelab_IAP_PurchasesListener__ShowStoreUnavailableDialog_109a67c();
  }
  return;
}

