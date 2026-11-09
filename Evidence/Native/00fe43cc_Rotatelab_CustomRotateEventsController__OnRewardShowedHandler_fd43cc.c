/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnRewardShowedHandler
void Rotatelab_CustomRotateEventsController__OnRewardShowedHandler (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnRewardShowedHandler
   void Rotatelab_CustomRotateEventsController__OnRewardShowedHandler
   (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnRewardShowedHandler_fd43cc(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_00fe4444 + 0xfe43e4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4448 + 0xfe43f8));
    *pcVar2 = '\x01';
  }
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_CustomRotateEventsController__CheckAndReport_fce038
            (param_1,uVar3,*(undefined4 *)(iVar1 + 0xd0),*(undefined4 *)(iVar1 + 0xd4),
             **(undefined4 **)(_UNK_00fe444c + 0xfe442c));
  return;
}

