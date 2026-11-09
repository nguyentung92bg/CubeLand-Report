/* IL2CPP: Rotatelab.ForcedOfferPopupTracker$$MarkShown
void Rotatelab_ForcedOfferPopupTracker__MarkShown (Rotatelab_ForcedOfferPopupTracker_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ForcedOfferPopupTracker$$MarkShown
   void Rotatelab_ForcedOfferPopupTracker__MarkShown (Rotatelab_ForcedOfferPopupTracker_o* __this,
   const MethodInfo* method); */

void Rotatelab_ForcedOfferPopupTracker__MarkShown_1079df4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_0108a004 + 0x1089e0c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a008 + 0x1089e20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a00c + 0x1089e2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a010 + 0x1089e38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a014 + 0x1089e44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a018 + 0x1089e50));
    *pcVar4 = '\x01';
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Save_SavedValue_DateTime___get_Value_1a8b364
              (&uStack_20,*(int *)(param_1 + 0x10),**(undefined4 **)(_UNK_0108a024 + 0x1089ef0));
    uVar2 = uStack_1c;
    uVar1 = uStack_20;
    piVar6 = *(int **)(_UNK_0108a028 + 0x1089f04);
    iVar3 = *piVar6;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar6;
    }
    iVar3 = System_DateTime__op_Equality_2b4c0e8
                      (uVar1,uVar2,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8),
                       *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc),0);
    if (iVar3 != 0) {
      iVar3 = *(int *)(param_1 + 0x10);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        FUN_00ec3934();
      }
      System_DateTime__get_Now_2b4a124(&uStack_20,0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Save_SavedValue_DateTime___set_Value_1a8b3bc
                (iVar3,extraout_r1_00,uStack_20,uStack_1c,
                 **(undefined4 **)(_UNK_0108a02c + 0x1089f90));
    }
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = Rotatelab_Save_SavedValue_int___get_Value_1a8b7e4
                      (iVar3,**(undefined4 **)(_UNK_0108a030 + 0x1089fb4));
    Rotatelab_Save_SavedValue_int___set_Value_1a8b820
              (iVar3,iVar5 + 1,**(undefined4 **)(_UNK_0108a038 + 0x1089ff4));
  }
  else {
    iVar5 = *(int *)(param_1 + 0x14);
    iVar3 = *(int *)(**(int **)(_UNK_0108a01c + 0x1089e74) + 0x74);
    *(undefined1 *)(param_1 + 0x18) = 0;
    if (iVar3 == 0) {
      FUN_00ec3934();
    }
    System_DateTime__get_Now_2b4a124(&uStack_20,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Save_SavedValue_DateTime___set_Value_1a8b3bc
              (iVar5,extraout_r1,uStack_20,uStack_1c,**(undefined4 **)(_UNK_0108a020 + 0x1089ec0));
  }
  return;
}

