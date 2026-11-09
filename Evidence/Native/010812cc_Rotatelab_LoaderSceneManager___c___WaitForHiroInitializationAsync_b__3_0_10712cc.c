/* IL2CPP: Rotatelab.LoaderSceneManager.<>c$$<WaitForHiroInitializationAsync>b__3_0
bool Rotatelab_LoaderSceneManager___c___WaitForHiroInitializationAsync_b__3_0 (Rotatelab_LoaderSceneManager___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.LoaderSceneManager.<>c$$<WaitForHiroInitializationAsync>b__3_0
   bool Rotatelab_LoaderSceneManager___c___WaitForHiroInitializationAsync_b__3_0
   (Rotatelab_LoaderSceneManager___c_o* __this, const MethodInfo* method); */

undefined1 Rotatelab_LoaderSceneManager___c___WaitForHiroInitializationAsync_b__3_0_10712cc(void)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01081320 + 0x10812dc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01081324 + 0x10812f0));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01081328 + 0x1081304));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(undefined1 *)(iVar1 + 0x10);
}

