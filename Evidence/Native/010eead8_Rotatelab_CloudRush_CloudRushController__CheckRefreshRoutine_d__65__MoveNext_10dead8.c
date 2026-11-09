/* IL2CPP: Rotatelab.CloudRush.CloudRushController.<CheckRefreshRoutine>d__65$$MoveNext
bool Rotatelab_CloudRush_CloudRushController__CheckRefreshRoutine_d__65__MoveNext (Rotatelab_CloudRush_CloudRushController__CheckRefreshRoutine_d__65_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController.<CheckRefreshRoutine>d__65$$MoveNext
   bool Rotatelab_CloudRush_CloudRushController__CheckRefreshRoutine_d__65__MoveNext
   (Rotatelab_CloudRush_CloudRushController__CheckRefreshRoutine_d__65_o* __this, const MethodInfo*
   method); */

bool Rotatelab_CloudRush_CloudRushController__CheckRefreshRoutine_d__65__MoveNext_10dead8
               (int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  
  pcVar3 = (char *)(_UNK_010eec24 + 0x10eeaec);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eec28 + 0x10eeb00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eec2c + 0x10eeb0c));
    *pcVar3 = '\x01';
  }
  uVar5 = *(uint *)(param_1 + 8);
  if (uVar5 < 2) {
    iVar4 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_CloudRush_CloudRushController__IsSystemCheckDue_10dd364(iVar4);
    if ((iVar1 != 0) && (*(char *)(iVar4 + 0x20) == '\0')) {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_010eec30 + 0x10eeb7c));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(iVar1 + 0x14) + 0x10) == 0) {
        Rotatelab_CloudRush_CloudRushController__CheckSystem_10dc8d8(iVar4);
        if (*(int *)(iVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_CloudRush_CloudRushManager__Refresh_10dec38(*(int *)(iVar4 + 0x10));
      }
    }
    Rotatelab_CloudRush_CloudRushController__SetTime_10dde9c(iVar4);
    if (*(int *)(**(int **)(_UNK_010eec34 + 0x10eebe0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar2 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3f800000,0);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar2);
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return uVar5 < 2;
}

