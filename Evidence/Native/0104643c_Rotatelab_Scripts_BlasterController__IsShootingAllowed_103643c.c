/* IL2CPP: Rotatelab.Scripts.BlasterController$$IsShootingAllowed
bool Rotatelab_Scripts_BlasterController__IsShootingAllowed (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$IsShootingAllowed
   bool Rotatelab_Scripts_BlasterController__IsShootingAllowed
   (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method); */

bool Rotatelab_Scripts_BlasterController__IsShootingAllowed_103643c(int param_1)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01046534 + 0x1046450);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01046538 + 0x1046464));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104653c + 0x1046470));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01046540 + 0x104647c));
    *pcVar3 = '\x01';
  }
  if (*(char *)(param_1 + 0xc0) == '\0') {
    bVar2 = false;
  }
  else {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01046544 + 0x104649c));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    bVar2 = false;
    iVar1 = Rotatelab_Scripts_LevelStateManager__get_IsPaused_100e3e4(iVar1,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_01046548 + 0x10464d4) + 0x74) == 0) {
        FUN_00ec3934();
      }
      bVar2 = false;
      iVar1 = Rotatelab_Boosters_BaseBoosterController__IsAnyBoosterActive_113256c(0);
      if (iVar1 == 0) {
        iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_0104654c + 0x1046504));
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        bVar2 = *(char *)(iVar1 + 0x1c) == '\0';
      }
    }
  }
  return bVar2;
}

