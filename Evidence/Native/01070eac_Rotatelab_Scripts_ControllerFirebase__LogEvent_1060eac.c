/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$LogEvent
void Rotatelab_Scripts_ControllerFirebase__LogEvent (System_String_o* eventName, Firebase_Analytics_Parameter_array* parameters, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$LogEvent
   void Rotatelab_Scripts_ControllerFirebase__LogEvent (System_String_o* eventName,
   Firebase_Analytics_Parameter_array* parameters, const MethodInfo* method); */

void Rotatelab_Scripts_ControllerFirebase__LogEvent_1060eac(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  byte *pbVar6;
  int iStack_14;
  
  pbVar6 = (byte *)(_UNK_01070fe8 + 0x1070ecc);
  uVar1 = (uint)*pbVar6;
  iStack_14 = param_2;
  if (uVar1 == 0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070fec + 0x1070ee0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070ff0 + 0x1070eec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070ff4 + 0x1070ef8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070ff8 + 0x1070f04));
    uVar1 = 1;
    *pbVar6 = 1;
  }
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
  }
  if (param_2 != 0 && uVar1 != 0) {
    if (0x19 < (int)uVar1) {
      System_Array__Resize_object__138a144
                (&iStack_14,0x19,**(undefined4 **)(_UNK_01070ffc + 0x1070f64));
      uVar3 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_01071000 + 0x1070f80),param_1,0);
      if (*(int *)(**(int **)(_UNK_01071004 + 0x1070f94) + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Debug__LogError_35b238c(uVar3,0);
      param_2 = iStack_14;
    }
    if (*(int *)(**(int **)(_UNK_01071008 + 0x1070fc0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Firebase_Analytics_FirebaseAnalytics__LogEvent_11dca58(param_1,param_2,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_0107100c + 0x1070f28) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_011ec96c + 0x11ec928);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011ec970 + 0x11ec93c),0);
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_011ec974 + 0x11ec950) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_011eca3c + 0x11ec98c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011eca40 + 0x11ec9a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011eca44 + 0x11ec9ac));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_011eca48 + 0x11ec9c0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE__LogEvent__SWIG_4_11dee10(param_1);
  if (*(int *)(**(int **)(_UNK_011eca4c + 0x11ec9e4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = Firebase_AppUtilPINVOKE_SWIGPendingException__get_Pending_11e1f60(0);
  if (iVar2 != 0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_011eca50 + 0x11eca10));
    FUN_00b89ed8();
    uVar3 = Firebase_AppUtilPINVOKE_SWIGPendingException__Retrieve_11e1ff8(0);
    uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_011eca54 + 0x11eca2c));
    func_0x00ec3920(uVar3,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_00ec3760();
  }
  return;
}

