/* IL2CPP: Rotatelab.ForcedOfferPopupTracker$$ShouldRequestOnMainMenuArrival
bool Rotatelab_ForcedOfferPopupTracker__ShouldRequestOnMainMenuArrival (Rotatelab_ForcedOfferPopupTracker_o* __this, Rotatelab_Networking_OfferPopupRule_o* rule, bool isSessionStart, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ForcedOfferPopupTracker$$ShouldRequestOnMainMenuArrival
   bool Rotatelab_ForcedOfferPopupTracker__ShouldRequestOnMainMenuArrival
   (Rotatelab_ForcedOfferPopupTracker_o* __this, Rotatelab_Networking_OfferPopupRule_o* rule, bool
   isSessionStart, const MethodInfo* method); */

bool Rotatelab_ForcedOfferPopupTracker__ShouldRequestOnMainMenuArrival_10798bc
               (int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_01089b38 + 0x10898e0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01089b3c + 0x10898f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01089b40 + 0x1089900));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01089b44 + 0x108990c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01089b48 + 0x1089918));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01089b4c + 0x1089924));
    *pcVar4 = '\x01';
  }
  if (param_3 == 0) {
    Rotatelab_ForcedOfferPopupTracker__ResetLimitWindowIfExpired_1079b68(param_1,param_2);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (-1 < *(int *)(param_2 + 0x14)) {
      if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = Rotatelab_Save_SavedValue_int___get_Value_1a8b7e4
                        (*(int *)(param_1 + 0xc),**(undefined4 **)(_UNK_01089b5c + 0x1089a6c));
      if (*(int *)(param_2 + 0x14) <= iVar3) {
        return false;
      }
    }
    if (0 < *(int *)(param_2 + 0x10)) {
      if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar6 = *(undefined4 **)(_UNK_01089b60 + 0x1089ab0);
      uVar1 = Rotatelab_Save_SavedValue_int___get_Value_1a8b7e4(*(int *)(param_1 + 8),*puVar6);
      iVar3 = *(int *)(param_1 + 8);
      uVar5 = *(undefined4 *)(param_2 + 0x10);
      if (iVar3 != 0) {
        iVar2 = Rotatelab_Save_SavedValue_int___get_Value_1a8b7e4(iVar3,*puVar6);
        Rotatelab_Save_SavedValue_int___set_Value_1a8b820
                  (iVar3,iVar2 + 1,**(undefined4 **)(_UNK_01089b64 + 0x1089b0c));
        FUN_00f88884(uVar1,uVar5);
        return extraout_r1_00 == 0;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  else {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(param_2 + 0x1c) != '\0') {
      if (*(int *)(**(int **)(_UNK_01089b50 + 0x1089958) + 0x74) == 0) {
        FUN_00ec3934();
      }
      System_DateTime__get_Now_2b4a124(&uStack_30,0);
      uVar5 = uStack_2c;
      uVar1 = uStack_30;
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Save_SavedValue_DateTime___get_Value_1a8b364
                (&uStack_30,*(int *)(param_1 + 0x14),**(undefined4 **)(_UNK_01089b54 + 0x10899a0));
      System_DateTime__op_Subtraction_2b4c068
                (&uStack_30,uStack_2c,uVar1,uVar5,uStack_30,uStack_2c,0);
      uVar5 = uStack_2c;
      uVar1 = uStack_30;
      fVar7 = *(float *)(param_2 + 0x20);
      iVar3 = *(int *)(**(int **)(_UNK_01089b58 + 0x10899d8) + 0x74);
      if (iVar3 == 0) {
        FUN_00ec3934();
        iVar3 = extraout_r1;
      }
      System_TimeSpan__FromHours_2b8a194
                (&uStack_30,iVar3,SUB84((double)fVar7,0),(int)((ulonglong)(double)fVar7 >> 0x20),0);
      iVar3 = System_TimeSpan__op_GreaterThanOrEqual_2b8abf8(uVar1,uVar5,uStack_30,uStack_2c,0);
      if (iVar3 == 0) {
        return false;
      }
      *(undefined1 *)(param_1 + 0x18) = 1;
      return true;
    }
  }
  return false;
}

