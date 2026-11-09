/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$SetCloudRushTo10SecondsBeforeReset
void Rotatelab_Debugging_CreativeCanvasController__SetCloudRushTo10SecondsBeforeReset (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$SetCloudRushTo10SecondsBeforeReset
   void Rotatelab_Debugging_CreativeCanvasController__SetCloudRushTo10SecondsBeforeReset
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__SetCloudRushTo10SecondsBeforeReset_110e774(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_0111e81c + 0x111e788);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111e820 + 0x111e79c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111e824 + 0x111e7a8));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0111e828 + 0x111e7bc));
  piVar5 = *(int **)(_UNK_0111e82c + 0x111e7d0);
  iVar2 = *piVar5;
  iVar3 = *(int *)(iVar2 + 0x74);
  if (iVar3 == 0) {
    FUN_00ec3934();
    iVar2 = *piVar5;
    iVar3 = extraout_r1;
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_CloudRush_CloudRushController__SetTimeLeftForCreative_10de208
            (iVar1,iVar3,**(undefined4 **)(iVar2 + 0x5c),(*(undefined4 **)(iVar2 + 0x5c))[1],0);
  return;
}

