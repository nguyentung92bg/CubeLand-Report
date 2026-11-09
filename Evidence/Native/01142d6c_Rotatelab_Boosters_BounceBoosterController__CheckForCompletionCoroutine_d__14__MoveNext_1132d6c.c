/* IL2CPP: Rotatelab.Boosters.BounceBoosterController.<CheckForCompletionCoroutine>d__14$$MoveNext
bool Rotatelab_Boosters_BounceBoosterController__CheckForCompletionCoroutine_d__14__MoveNext (Rotatelab_Boosters_BounceBoosterController__CheckForCompletionCoroutine_d__14_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BounceBoosterController.<CheckForCompletionCoroutine>d__14$$MoveNext
   bool Rotatelab_Boosters_BounceBoosterController__CheckForCompletionCoroutine_d__14__MoveNext
   (Rotatelab_Boosters_BounceBoosterController__CheckForCompletionCoroutine_d__14_o* __this, const
   MethodInfo* method); */

undefined4
Rotatelab_Boosters_BounceBoosterController__CheckForCompletionCoroutine_d__14__MoveNext_1132d6c
          (int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  pcVar2 = (char *)(_UNK_01142e4c + 0x1142d80);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01142e50 + 0x1142d94));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 8) != 1) {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0x7fffffff;
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  puVar4 = *(undefined4 **)(_UNK_01142e54 + 0x1142dd0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
  if (iVar1 != 0) {
    uVar3 = 0;
    iVar1 = Rotatelab_GameExtensions__OccupiedDockCount_fb4db0(*(undefined4 *)(iVar1 + 0x48),0);
    if (iVar1 <= *(int *)(param_1 + 0x10)) {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar3 = Rotatelab_GameExtensions__OccupiedDockCount_fb4db0(*(undefined4 *)(iVar1 + 0x48),0);
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = uVar3;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
      uVar3 = 1;
      *(undefined4 *)(param_1 + 8) = 1;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

