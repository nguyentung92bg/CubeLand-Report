/* IL2CPP: Rotatelab.LoaderSceneManager.<>c__DisplayClass2_0$$<Start>b__0
bool Rotatelab_LoaderSceneManager___c__DisplayClass2_0___Start_b__0 (Rotatelab_LoaderSceneManager___c__DisplayClass2_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.LoaderSceneManager.<>c__DisplayClass2_0$$<Start>b__0
   bool Rotatelab_LoaderSceneManager___c__DisplayClass2_0___Start_b__0
   (Rotatelab_LoaderSceneManager___c__DisplayClass2_0_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_LoaderSceneManager___c__DisplayClass2_0___Start_b__0_1071378(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  double dVar4;
  
  pcVar2 = (char *)(_UNK_01081400 + 0x108138c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01081404 + 0x10813a0));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01081408 + 0x10813b4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = 1;
  if (*(char *)(iVar1 + 0x10) == '\0') {
    uVar3 = 0;
    dVar4 = (double)UnityEngine_Time__get_realtimeSinceStartupAsDouble_360ca34(0);
    if (*(double *)(param_1 + 0x10) < dVar4) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

