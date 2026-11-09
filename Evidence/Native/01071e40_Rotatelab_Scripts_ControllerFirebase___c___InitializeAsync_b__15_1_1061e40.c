/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.<>c$$<InitializeAsync>b__15_1
bool Rotatelab_Scripts_ControllerFirebase___c___InitializeAsync_b__15_1 (Rotatelab_Scripts_ControllerFirebase___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.<>c$$<InitializeAsync>b__15_1
   bool Rotatelab_Scripts_ControllerFirebase___c___InitializeAsync_b__15_1
   (Rotatelab_Scripts_ControllerFirebase___c_o* __this, const MethodInfo* method); */

uint Rotatelab_Scripts_ControllerFirebase___c___InitializeAsync_b__15_1_1061e40(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01071ea0 + 0x1071e50);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01071ea4 + 0x1071e64));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01071ea8 + 0x1071e78));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_String__IsNullOrEmpty_2a0a844(*(undefined4 *)(iVar1 + 0x14),0);
  return uVar2 ^ 1;
}

