/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$OnNetworkConnectivityChanged
void Rotatelab_Scripts_ControllerFirebase__OnNetworkConnectivityChanged (Rotatelab_Scripts_ControllerFirebase_o* __this, bool online, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$OnNetworkConnectivityChanged
   void Rotatelab_Scripts_ControllerFirebase__OnNetworkConnectivityChanged
   (Rotatelab_Scripts_ControllerFirebase_o* __this, bool online, const MethodInfo* method); */

void Rotatelab_Scripts_ControllerFirebase__OnNetworkConnectivityChanged_1060568
               (undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  pcVar3 = (char *)(_UNK_01070624 + 0x107057c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070628 + 0x1070590));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107062c + 0x107059c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070630 + 0x10705a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070634 + 0x10705b4));
    *pcVar3 = '\x01';
  }
  puVar4 = *(undefined4 **)(_UNK_01070638 + 0x10705d0);
  puVar6 = *(undefined4 **)(_UNK_01070640 + 0x10705e4);
  if (param_2 != 0) {
    puVar6 = *(undefined4 **)(_UNK_0107063c + 0x10705dc);
  }
  Firebase_Crashlytics_Crashlytics__SetCustomKey_11f9628(*puVar4,*puVar6,0);
  uVar2 = *puVar6;
  uVar5 = *puVar4;
  if (*(int *)(**(int **)(_UNK_01070644 + 0x10705f8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar3 = (char *)(_UNK_011ed400 + 0x11ed3b8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011ed404 + 0x11ed3cc),uVar2,0);
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_011ed408 + 0x11ed3e0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar3 = (char *)(_UNK_011ed4d8 + 0x11ed424);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011ed4dc + 0x11ed438));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011ed4e0 + 0x11ed444));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_011ed4e4 + 0x11ed458) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE__SetUserProperty_11def88(uVar5,uVar2);
  if (*(int *)(**(int **)(_UNK_011ed4e8 + 0x11ed480) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Firebase_AppUtilPINVOKE_SWIGPendingException__get_Pending_11e1f60(0);
  if (iVar1 == 0) {
    return;
  }
  thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_011ed4ec + 0x11ed4ac));
  FUN_00b89ed8();
  uVar2 = Firebase_AppUtilPINVOKE_SWIGPendingException__Retrieve_11e1ff8(0);
  uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_011ed4f0 + 0x11ed4c8));
  func_0x00ec3920(uVar2,uVar5);
                    /* WARNING: Subroutine does not return */
  FUN_00ec3760();
}

