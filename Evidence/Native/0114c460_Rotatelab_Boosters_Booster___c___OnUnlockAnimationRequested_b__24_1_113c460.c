/* IL2CPP: Rotatelab.Boosters.Booster.<>c$$<OnUnlockAnimationRequested>b__24_1
void Rotatelab_Boosters_Booster___c___OnUnlockAnimationRequested_b__24_1 (Rotatelab_Boosters_Booster___c_o* __this, Rotatelab_Boosters_Booster_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.Booster.<>c$$<OnUnlockAnimationRequested>b__24_1
   void Rotatelab_Boosters_Booster___c___OnUnlockAnimationRequested_b__24_1
   (Rotatelab_Boosters_Booster___c_o* __this, Rotatelab_Boosters_Booster_o* this, const MethodInfo*
   method); */

void Rotatelab_Boosters_Booster___c___OnUnlockAnimationRequested_b__24_1_113c460
               (undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0114c564 + 0x114c478);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c568 + 0x114c48c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c56c + 0x114c498));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c570 + 0x114c4a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c574 + 0x114c4b0));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0114c578 + 0x114c4c4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = RemoteVariableSO_bool___op_Implicit_1a81fac
                    (*(undefined4 *)(iVar1 + 0x1c),**(undefined4 **)(_UNK_0114c57c + 0x114c4e4));
  if (iVar1 != 0) {
    piVar3 = *(int **)(_UNK_0114c580 + 0x114c500);
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar3;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 200);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_object__bool__bool___Raise_23a61d0
              (iVar1,*(undefined4 *)(param_2 + 0x10),0,0,
               **(undefined4 **)(_UNK_0114c584 + 0x114c550));
  }
  return;
}

