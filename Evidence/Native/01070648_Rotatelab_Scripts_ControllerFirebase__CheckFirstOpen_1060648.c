/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$CheckFirstOpen
void Rotatelab_Scripts_ControllerFirebase__CheckFirstOpen (Rotatelab_Scripts_ControllerFirebase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$CheckFirstOpen
   void Rotatelab_Scripts_ControllerFirebase__CheckFirstOpen
   (Rotatelab_Scripts_ControllerFirebase_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ControllerFirebase__CheckFirstOpen_1060648(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte bStack_21;
  
  pcVar4 = (char *)(_UNK_010708c4 + 0x107065c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010708c8 + 0x1070670));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010708cc + 0x107067c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010708d0 + 0x1070688));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010708d4 + 0x1070694));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010708d8 + 0x10706a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010708dc + 0x10706ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010708e0 + 0x10706b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010708e4 + 0x10706c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010708e8 + 0x10706d0));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_010708ec + 0x10706e4);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  if (*(char *)(*(int *)(iVar1 + 0x5c) + 1) != '\0') {
    puVar6 = *(undefined4 **)(_UNK_010708f0 + 0x107071c);
    iVar1 = Rotatelab_Save_SaveManager__GetBool_107f0d4(*puVar6,0,0);
    puVar7 = *(undefined4 **)(_UNK_010708f4 + 0x1070734);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    bStack_21 = (byte)iVar1 ^ 1;
    uVar3 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_010708f8 + 0x107074c) + 0x14),&bStack_21);
    uVar3 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_010708fc + 0x1070768),uVar3,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Debugging_CreativeCanvasController__LogMessage_110e8d8(iVar2,uVar3,0);
    if (iVar1 == 0) {
      iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01070900 + 0x10707a0));
      AdjustSdk_AdjustEvent___ctor_f9b4cc(iVar1,**(undefined4 **)(_UNK_01070904 + 0x10707b8),0);
      piVar5 = *(int **)(_UNK_01070908 + 0x10707cc);
      iVar2 = *piVar5;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar5;
      }
      piVar5 = *(int **)(_UNK_0107090c + 0x10707ec);
      uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x78);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        FUN_00ec3934(*piVar5);
      }
      pcVar4 = (char *)(_UNK_01070910 + 0x1070814);
      if (*pcVar4 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01070914 + 0x1070828));
        *pcVar4 = '\x01';
      }
      iVar2 = *piVar5;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar5;
      }
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      AdjustSdk_AdjustEvent__AddPartnerParameter_f9b58c
                (iVar1,uVar3,**(undefined4 **)(iVar2 + 0x5c),0);
      AdjustSdk_Adjust__TrackEvent_f89a80(iVar1,0);
      Rotatelab_Save_SaveManager__SetBool_107f178(*puVar6,1,0);
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Debugging_CreativeCanvasController__LogMessage_110e8d8
                (iVar1,**(undefined4 **)(_UNK_01070918 + 0x10708b4),0);
    }
  }
  return;
}

