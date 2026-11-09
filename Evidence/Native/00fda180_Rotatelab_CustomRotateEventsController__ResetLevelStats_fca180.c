/* IL2CPP: Rotatelab.CustomRotateEventsController$$ResetLevelStats
void Rotatelab_CustomRotateEventsController__ResetLevelStats (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$ResetLevelStats
   void Rotatelab_CustomRotateEventsController__ResetLevelStats
   (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__ResetLevelStats_fca180(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 unaff_r4;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 unaff_lr;
  
  pcVar3 = (char *)(_UNK_00fda270 + 0xfda190);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda274 + 0xfda1a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda278 + 0xfda1b0));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_00fda27c + 0xfda1c4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_UI_FailPanelController__set_levelBasePlayOnUseCount_1118e10(0,0);
  iVar4 = 1;
  piVar5 = *(int **)(_UNK_00fda280 + 0xfda1f0);
  do {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_CustomRotateEventsController__SetLevelBaseBoosterUseCount_fc6850(0,iVar4,0);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 6);
  iVar4 = 1;
  do {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_CustomRotateEventsController__SetLevelBaseBoosterUseCount_fc6850(1,iVar4,0);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  uVar1 = extraout_r3_00;
  if (*(int *)(*piVar5 + 0x74) == 0) {
    FUN_00ec3934();
    uVar1 = extraout_r3_01;
  }
  pcVar3 = (char *)(_UNK_00fd6604 + 0xfd65cc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd6608 + 0xfd65e0));
    *pcVar3 = '\x01';
    uVar1 = extraout_r3;
  }
  iVar4 = UnityEngine_PlayerPrefs__TrySetInt_35f6358
                    (**(undefined4 **)(_UNK_00fd660c + 0xfd65fc),0,0,uVar1,unaff_r4,unaff_lr);
  if (iVar4 != 0) {
    return;
  }
  thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606b64 + 0x3606b28));
  uVar1 = thunk_FUN_00f00cdc();
  uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606b68 + 0x3606b3c));
  UnityEngine_PlayerPrefsException___ctor_35f62e8(uVar1,uVar2);
  uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606b6c + 0x3606b54));
  FUN_01f4fe28(uVar1,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

