/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$IsSystemCheckDue
bool Rotatelab_CloudRush_CloudRushController__IsSystemCheckDue (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$IsSystemCheckDue
   bool Rotatelab_CloudRush_CloudRushController__IsSystemCheckDue
   (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_CloudRush_CloudRushController__IsSystemCheckDue_10dd364(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  char *pcVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_010ed494 + 0x10ed37c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ed498 + 0x10ed390));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ed49c + 0x10ed39c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ed4a0 + 0x10ed3a8));
    *pcVar6 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010ed4a4 + 0x10ed3bc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_CloudRush_CloudRushController__get_Now_10dbbb0(&uStack_28);
  uVar2 = uStack_24;
  uVar1 = uStack_28;
  Rotatelab_CloudRush_CloudRushController__GetStartOfCycle_10dced0
            (&uStack_28,extraout_r1,uStack_28,uStack_24);
  uVar3 = uStack_24;
  uVar5 = uStack_28;
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_DateTime___get_Value_1a8b364
            (&uStack_28,*(int *)(param_1 + 0x24),**(undefined4 **)(_UNK_010ed4a8 + 0x10ed414));
  Rotatelab_CloudRush_CloudRushController__GetStartOfCycle_10dced0
            (&uStack_28,extraout_r1_00,uStack_28,uStack_24);
  if (*(int *)(**(int **)(_UNK_010ed4ac + 0x10ed438) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = System_DateTime__op_Inequality_2b4c168(uVar5,uVar3,uStack_28,uStack_24,0);
  uVar5 = 1;
  if (iVar4 == 0) {
    uVar5 = Rotatelab_CloudRush_CloudRushController__IsCurrentStateExpired_10dd180
                      (param_1,0,uVar1,uVar2);
  }
  return uVar5;
}

