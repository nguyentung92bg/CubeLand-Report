/* IL2CPP: Rotatelab.ForcedOfferPopupTracker$$ResetLimitWindowIfExpired
void Rotatelab_ForcedOfferPopupTracker__ResetLimitWindowIfExpired (Rotatelab_ForcedOfferPopupTracker_o* __this, Rotatelab_Networking_OfferPopupRule_o* rule, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ForcedOfferPopupTracker$$ResetLimitWindowIfExpired
   void Rotatelab_ForcedOfferPopupTracker__ResetLimitWindowIfExpired
   (Rotatelab_ForcedOfferPopupTracker_o* __this, Rotatelab_Networking_OfferPopupRule_o* rule, const
   MethodInfo* method); */

void Rotatelab_ForcedOfferPopupTracker__ResetLimitWindowIfExpired_1079b68(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  int extraout_r1_00;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  float fVar9;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar5 = (char *)(_UNK_01089dc8 + 0x1089b8c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01089dcc + 0x1089ba0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01089dd0 + 0x1089bac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01089dd4 + 0x1089bb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01089dd8 + 0x1089bc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01089ddc + 0x1089bd0));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar6 = *(undefined4 **)(_UNK_01089de0 + 0x1089bfc);
  Rotatelab_Save_SavedValue_DateTime___get_Value_1a8b364
            (&uStack_38,*(int *)(param_1 + 0x10),*puVar6);
  uVar2 = uStack_34;
  uVar1 = uStack_38;
  piVar8 = *(int **)(_UNK_01089de4 + 0x1089c0c);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  iVar3 = System_DateTime__op_Equality_2b4c0e8
                    (uVar1,uVar2,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8),
                     *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc),0);
  if (iVar3 == 0) {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_DateTime__get_Now_2b4a124(&uStack_38,0);
    uVar2 = uStack_34;
    uVar1 = uStack_38;
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Save_SavedValue_DateTime___get_Value_1a8b364
              (&uStack_38,*(int *)(param_1 + 0x10),*puVar6);
    System_DateTime__op_Subtraction_2b4c068(&uStack_38,uStack_34,uVar1,uVar2,uStack_38,uStack_34,0);
    uVar2 = uStack_34;
    uVar1 = uStack_38;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar9 = *(float *)(param_2 + 0x18);
    iVar3 = *(int *)(**(int **)(_UNK_01089de8 + 0x1089cd4) + 0x74);
    if (iVar3 == 0) {
      FUN_00ec3934();
      iVar3 = extraout_r1;
    }
    System_TimeSpan__FromHours_2b8a194
              (&uStack_38,iVar3,SUB84((double)fVar9,0),(int)((ulonglong)(double)fVar9 >> 0x20),0);
    iVar3 = System_TimeSpan__op_LessThan_2b8abb0(uVar1,uVar2,uStack_38,uStack_34,0);
    if (iVar3 == 0) {
      iVar4 = *piVar8;
      iVar7 = *(int *)(param_1 + 0x10);
      iVar3 = *(int *)(iVar4 + 0x74);
      if (iVar3 == 0) {
        FUN_00ec3934();
        iVar4 = *piVar8;
        iVar3 = extraout_r1_00;
      }
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Save_SavedValue_DateTime___set_Value_1a8b3bc
                (iVar7,iVar3,*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 8),
                 *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0xc),
                 **(undefined4 **)(_UNK_01089dec + 0x1089d64));
      if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar6 = *(undefined4 **)(_UNK_01089df0 + 0x1089d94);
      Rotatelab_Save_SavedValue_int___set_Value_1a8b820(*(int *)(param_1 + 0xc),0,*puVar6);
      if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Save_SavedValue_int___set_Value_1a8b820(*(int *)(param_1 + 8),0,*puVar6);
    }
  }
  return;
}

