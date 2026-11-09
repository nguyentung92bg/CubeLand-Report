/* IL2CPP: Rotatelab.Scripts.BlasterController$$get_IsConnected
bool Rotatelab_Scripts_BlasterController__get_IsConnected (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$get_IsConnected
   bool Rotatelab_Scripts_BlasterController__get_IsConnected (Rotatelab_Scripts_BlasterController_o*
   __this, const MethodInfo* method); */

bool Rotatelab_Scripts_BlasterController__get_IsConnected_1030fd0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01041024 + 0x1040fe4);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01041028 + 0x1040ff8));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return 0 < *(int *)(*(int *)(param_1 + 0x118) + 0xc);
}

