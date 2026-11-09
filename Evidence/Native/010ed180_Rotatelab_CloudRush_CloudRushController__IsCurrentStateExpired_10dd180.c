/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$IsCurrentStateExpired
bool Rotatelab_CloudRush_CloudRushController__IsCurrentStateExpired (Rotatelab_CloudRush_CloudRushController_o* __this, System_DateTime_o now, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$IsCurrentStateExpired
   bool Rotatelab_CloudRush_CloudRushController__IsCurrentStateExpired
   (Rotatelab_CloudRush_CloudRushController_o* __this, System_DateTime_o now, const MethodInfo*
   method); */

bool Rotatelab_CloudRush_CloudRushController__IsCurrentStateExpired_10dd180
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r1;
  int extraout_r1_00;
  char *pcVar2;
  double dVar3;
  double dVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_010ed33c + 0x10ed1a0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ed340 + 0x10ed1b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ed344 + 0x10ed1c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ed348 + 0x10ed1cc));
    *pcVar2 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  iVar1 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c();
  if (iVar1 == 3) {
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Save_SavedValue_DateTime___get_Value_1a8b364
              (&uStack_28,*(int *)(param_1 + 0x28),**(undefined4 **)(_UNK_010ed358 + 0x10ed2ac));
    iVar1 = *(int *)(**(int **)(_UNK_010ed35c + 0x10ed2c0) + 0x74);
    if (iVar1 == 0) {
      FUN_00ec3934();
      iVar1 = extraout_r1_00;
    }
    System_DateTime__op_Subtraction_2b4c068(&uStack_20,iVar1,param_3,param_4,uStack_28,uStack_24,0);
    if (*(int *)(**(int **)(_UNK_010ed360 + 0x10ed300) + 0x74) == 0) {
      FUN_00ec3934();
    }
    dVar4 = (double)System_TimeSpan__get_TotalMinutes_2b89cc8(&uStack_20,0);
    dVar3 = 30.0;
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Save_SavedValue_DateTime___get_Value_1a8b364
              (&uStack_28,*(int *)(param_1 + 0x2c),**(undefined4 **)(_UNK_010ed34c + 0x10ed214));
    iVar1 = *(int *)(**(int **)(_UNK_010ed350 + 0x10ed228) + 0x74);
    if (iVar1 == 0) {
      FUN_00ec3934();
      iVar1 = extraout_r1;
    }
    System_DateTime__op_Subtraction_2b4c068(&uStack_20,iVar1,param_3,param_4,uStack_28,uStack_24,0);
    if (*(int *)(**(int **)(_UNK_010ed354 + 0x10ed268) + 0x74) == 0) {
      FUN_00ec3934();
    }
    dVar4 = (double)System_TimeSpan__get_TotalHours_2b89c40(&uStack_20,0);
    dVar3 = 24.0;
  }
  return dVar3 <= dVar4;
}

