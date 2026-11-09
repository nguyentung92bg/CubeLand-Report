/* IL2CPP: Rotatelab.UI.AdBreakController$$ShouldShow
bool Rotatelab_UI_AdBreakController__ShouldShow (Rotatelab_UI_AdBreakController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.AdBreakController$$ShouldShow
   bool Rotatelab_UI_AdBreakController__ShouldShow (Rotatelab_UI_AdBreakController_o* __this, const
   MethodInfo* method); */

bool Rotatelab_UI_AdBreakController__ShouldShow_1116be4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_r1;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_01126ca8 + 0x1126bf8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01126cac + 0x1126c0c));
    *pcVar3 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_01126cb0 + 0x1126c20);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (0 < *(int *)(*(int *)(iVar1 + 0x50) + 0xc)) {
    uVar4 = *(undefined4 *)(param_1 + 0x30);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x50) + 0xc);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    FUN_00f88884(uVar4,uVar2);
    return extraout_r1 == 0;
  }
  return false;
}

