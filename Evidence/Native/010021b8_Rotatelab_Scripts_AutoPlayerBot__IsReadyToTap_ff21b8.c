/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$IsReadyToTap
bool Rotatelab_Scripts_AutoPlayerBot__IsReadyToTap (Rotatelab_Scripts_AutoPlayerBot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$IsReadyToTap
   bool Rotatelab_Scripts_AutoPlayerBot__IsReadyToTap (Rotatelab_Scripts_AutoPlayerBot_o* __this,
   const MethodInfo* method); */

uint Rotatelab_Scripts_AutoPlayerBot__IsReadyToTap_ff21b8(void)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  
  pcVar2 = (char *)(_UNK_010022e0 + 0x10021c8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010022e4 + 0x10021dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010022e8 + 0x10021e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010022ec + 0x10021f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010022f0 + 0x1002200));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010022f4 + 0x1002214));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = 0;
  if ((*(char *)(iVar1 + 0x10) == '\0') &&
     (iVar1 = Rotatelab_Scripts_LevelStateManager__get_IsPaused_100e3e4(iVar1,0), iVar1 == 0)) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010022f8 + 0x1002258));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(iVar1 + 0x1c) == '\0') {
      if (*(int *)(**(int **)(_UNK_010022fc + 0x1002284) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar3 = 0;
      iVar1 = Rotatelab_Boosters_BaseBoosterController__IsAnyBoosterActive_113256c(0);
      if (iVar1 == 0) {
        iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_01002300 + 0x10022b4));
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar3 = Rotatelab_UI_PopupManager__get_IsAnyPopupVisible_1124e44(iVar1,0);
        uVar3 = uVar3 ^ 1;
      }
    }
  }
  return uVar3;
}

