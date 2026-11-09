/* IL2CPP: Rotatelab.Scripts.StopSignController$$Init
void Rotatelab_Scripts_StopSignController__Init (Rotatelab_Scripts_StopSignController_o* __this, int32_t health, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01056bf4) */
/* WARNING: Removing unreachable block (ram,0x01056c10) */
/* WARNING: Removing unreachable block (ram,0x01056c14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.StopSignController$$Init
   void Rotatelab_Scripts_StopSignController__Init (Rotatelab_Scripts_StopSignController_o* __this,
   int32_t health, const MethodInfo* method); */

void Rotatelab_Scripts_StopSignController__Init_1043048(int param_1,undefined4 param_2)

{
  char *pcVar1;
  
  *(undefined4 *)(param_1 + 0x48) = param_2;
  Rotatelab_Scripts_StopSignController__UpdateHealthText_104de4c();
  pcVar1 = (char *)(_UNK_01056ce8 + 0x1056ba0);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056cec + 0x1056bb4),1,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056cf0 + 0x1056bc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056cf4 + 0x1056bcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056cf8 + 0x1056bd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056cfc + 0x1056be4));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x44) == 1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x44) = 1;
                    /* WARNING: Could not recover jumptable at 0x01056c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_01056c48 + _UNK_01056c48))();
  return;
}

