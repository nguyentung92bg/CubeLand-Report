/* IL2CPP: Rotatelab.Shop.ShopRestoreButton$$OnMainCanvasChangeEndedHandler
void Rotatelab_Shop_ShopRestoreButton__OnMainCanvasChangeEndedHandler (Rotatelab_Shop_ShopRestoreButton_o* __this, int32_t type, bool arg2, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.ShopRestoreButton$$OnMainCanvasChangeEndedHandler
   void Rotatelab_Shop_ShopRestoreButton__OnMainCanvasChangeEndedHandler
   (Rotatelab_Shop_ShopRestoreButton_o* __this, int32_t type, bool arg2, const MethodInfo* method);
    */

void Rotatelab_Shop_ShopRestoreButton__OnMainCanvasChangeEndedHandler_10c3728
               (undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar4;
  
  if (param_2 == 0) {
    pcVar4 = (char *)(_UNK_010d39ac + 0x10d3900);
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d39b0 + 0x10d3914));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d39b4 + 0x10d3920));
      *pcVar4 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_010d39b8 + 0x10d3934) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Application__get_platform_35a81fc(0);
    if (iVar1 != 8) {
      return;
    }
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
    if (*(int *)(**(int **)(_UNK_010d39bc + 0x10d3970) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar2 = RotateAdLogicManager__get_IsRestored_fab1fc(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = uVar2 ^ 1;
    uVar3 = extraout_r3_00;
  }
  else {
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = 0;
    uVar3 = extraout_r3;
  }
  pcVar4 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),uVar2,0,uVar3,unaff_r4,unaff_r5);
    *pcVar4 = '\x01';
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
    (*UNRECOVERED_JUMPTABLE)(iVar1,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

