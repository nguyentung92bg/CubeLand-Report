/* IL2CPP: Rotatelab.LoaderSceneManager.<>c$$<Start>b__2_3
bool Rotatelab_LoaderSceneManager___c___Start_b__2_3 (Rotatelab_LoaderSceneManager___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.LoaderSceneManager.<>c$$<Start>b__2_3
   bool Rotatelab_LoaderSceneManager___c___Start_b__2_3 (Rotatelab_LoaderSceneManager___c_o* __this,
   const MethodInfo* method); */

bool Rotatelab_LoaderSceneManager___c___Start_b__2_3_1071264(void)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010812c0 + 0x1081274);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010812c4 + 0x1081288));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010812c8 + 0x108129c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(char *)(iVar1 + 0x10) == '\0';
}

