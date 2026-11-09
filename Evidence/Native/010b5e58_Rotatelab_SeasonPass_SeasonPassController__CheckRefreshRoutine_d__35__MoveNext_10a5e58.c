/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController.<CheckRefreshRoutine>d__35$$MoveNext
bool Rotatelab_SeasonPass_SeasonPassController__CheckRefreshRoutine_d__35__MoveNext (Rotatelab_SeasonPass_SeasonPassController__CheckRefreshRoutine_d__35_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController.<CheckRefreshRoutine>d__35$$MoveNext
   bool Rotatelab_SeasonPass_SeasonPassController__CheckRefreshRoutine_d__35__MoveNext
   (Rotatelab_SeasonPass_SeasonPassController__CheckRefreshRoutine_d__35_o* __this, const
   MethodInfo* method); */

bool Rotatelab_SeasonPass_SeasonPassController__CheckRefreshRoutine_d__35__MoveNext_10a5e58
               (int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  uint uVar3;
  
  pcVar2 = (char *)(_UNK_010b5f04 + 0x10b5e6c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b5f08 + 0x10b5e80));
    *pcVar2 = '\x01';
  }
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 < 2) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_SeasonPass_SeasonPassController__SetTime_10a4b18(*(int *)(param_1 + 0x10));
    if (*(int *)(**(int **)(_UNK_010b5f0c + 0x10b5ec0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar1 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3f800000,0);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar1);
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return uVar3 < 2;
}

