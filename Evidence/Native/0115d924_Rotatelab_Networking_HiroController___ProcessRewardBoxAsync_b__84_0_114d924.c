/* IL2CPP: Rotatelab.Networking.HiroController$$<ProcessRewardBoxAsync>b__84_0
bool Rotatelab_Networking_HiroController___ProcessRewardBoxAsync_b__84_0 (Rotatelab_Networking_HiroController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$<ProcessRewardBoxAsync>b__84_0
   bool Rotatelab_Networking_HiroController___ProcessRewardBoxAsync_b__84_0
   (Rotatelab_Networking_HiroController_o* __this, const MethodInfo* method); */

bool Rotatelab_Networking_HiroController___ProcessRewardBoxAsync_b__84_0_114d924(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0115d998 + 0x115d938);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115d99c + 0x115d94c));
    *pcVar2 = '\x01';
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0115d9a0 + 0x115d96c));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    return *(char *)(iVar1 + 0x11) != '\0';
  }
  return false;
}

