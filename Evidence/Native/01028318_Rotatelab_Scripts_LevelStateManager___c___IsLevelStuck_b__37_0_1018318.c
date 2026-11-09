/* IL2CPP: Rotatelab.Scripts.LevelStateManager.<>c$$<IsLevelStuck>b__37_0
bool Rotatelab_Scripts_LevelStateManager___c___IsLevelStuck_b__37_0 (Rotatelab_Scripts_LevelStateManager___c_o* __this, Rotatelab_Scripts_BaseBlasterDockController_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager.<>c$$<IsLevelStuck>b__37_0
   bool Rotatelab_Scripts_LevelStateManager___c___IsLevelStuck_b__37_0
   (Rotatelab_Scripts_LevelStateManager___c_o* __this,
   Rotatelab_Scripts_BaseBlasterDockController_o* e, const MethodInfo* method); */

bool Rotatelab_Scripts_LevelStateManager___c___IsLevelStuck_b__37_0_1018318
               (undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01028388 + 0x102832c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102838c + 0x1028340));
    *pcVar2 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                    (param_2,**(undefined4 **)(_UNK_01028390 + 0x1028360));
  if (iVar1 != 0) {
    return *(char *)(iVar1 + 0xc1) != '\0';
  }
  return false;
}

