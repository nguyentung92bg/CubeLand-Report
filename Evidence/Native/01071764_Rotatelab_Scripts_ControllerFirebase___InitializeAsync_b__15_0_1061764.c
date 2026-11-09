/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$<InitializeAsync>b__15_0
void Rotatelab_Scripts_ControllerFirebase___InitializeAsync_b__15_0 (Rotatelab_Scripts_ControllerFirebase_o* __this, Il2CppObject* sender, Hiro_NetworkMonitorEventArgs_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$<InitializeAsync>b__15_0
   void Rotatelab_Scripts_ControllerFirebase___InitializeAsync_b__15_0
   (Rotatelab_Scripts_ControllerFirebase_o* __this, Il2CppObject* sender,
   Hiro_NetworkMonitorEventArgs_o* e, const MethodInfo* method); */

void Rotatelab_Scripts_ControllerFirebase___InitializeAsync_b__15_0_1061764
               (undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  cVar1 = *(char *)(param_3 + 0xc);
  pcVar4 = (char *)(_UNK_01070624 + 0x107057c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070628 + 0x1070590));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107062c + 0x107059c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070630 + 0x10705a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070634 + 0x10705b4));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_01070638 + 0x10705d0);
  puVar7 = *(undefined4 **)(_UNK_01070640 + 0x10705e4);
  if (cVar1 != '\0') {
    puVar7 = *(undefined4 **)(_UNK_0107063c + 0x10705dc);
  }
  Firebase_Crashlytics_Crashlytics__SetCustomKey_11f9628(*puVar5,*puVar7,0);
  uVar3 = *puVar7;
  uVar6 = *puVar5;
  if (*(int *)(**(int **)(_UNK_01070644 + 0x10705f8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar4 = (char *)(_UNK_011ed400 + 0x11ed3b8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011ed404 + 0x11ed3cc),uVar3,0);
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_011ed408 + 0x11ed3e0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar4 = (char *)(_UNK_011ed4d8 + 0x11ed424);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011ed4dc + 0x11ed438));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011ed4e0 + 0x11ed444));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_011ed4e4 + 0x11ed458) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE__SetUserProperty_11def88(uVar6,uVar3);
  if (*(int *)(**(int **)(_UNK_011ed4e8 + 0x11ed480) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = Firebase_AppUtilPINVOKE_SWIGPendingException__get_Pending_11e1f60(0);
  if (iVar2 == 0) {
    return;
  }
  thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_011ed4ec + 0x11ed4ac));
  FUN_00b89ed8();
  uVar3 = Firebase_AppUtilPINVOKE_SWIGPendingException__Retrieve_11e1ff8(0);
  uVar6 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_011ed4f0 + 0x11ed4c8));
  func_0x00ec3920(uVar3,uVar6);
                    /* WARNING: Subroutine does not return */
  FUN_00ec3760();
}

