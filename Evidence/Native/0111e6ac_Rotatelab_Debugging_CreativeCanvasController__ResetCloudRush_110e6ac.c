/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$ResetCloudRush
void Rotatelab_Debugging_CreativeCanvasController__ResetCloudRush (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$ResetCloudRush
   void Rotatelab_Debugging_CreativeCanvasController__ResetCloudRush
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__ResetCloudRush_110e6ac(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar2;
  undefined4 *puVar3;
  
  pcVar2 = (char *)(_UNK_0111e760 + 0x111e6bc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111e764 + 0x111e6d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111e768 + 0x111e6dc));
    *pcVar2 = '\x01';
  }
  puVar3 = *(undefined4 **)(_UNK_0111e76c + 0x111e6f0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_CloudRush_CloudRushController__set_CloudRushIsEntryRewardReady_10dc088(iVar1,1,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_CloudRush_CloudRushController__ResetCloudRush_10dcd48(iVar1,0);
  if (*(int *)(**(int **)(_UNK_0111e770 + 0x111e744) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar2 = (char *)(_UNK_035b7160 + 0x35b70f0);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035b7164 + 0x35b7104));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_035b7168 + 0x35b7118) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035b716c + 0x35b7134);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035b7170 + 0x35b7144);
    *(code **)(_UNK_035b7174 + 0x35b7154) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x035b715c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0);
  return;
}

