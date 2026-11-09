/* IL2CPP: Rotatelab.PreBoosters.PreBooster.<>c$$<UnlockAnimationRequested>b__26_1
void Rotatelab_PreBoosters_PreBooster___c___UnlockAnimationRequested_b__26_1 (Rotatelab_PreBoosters_PreBooster___c_o* __this, Rotatelab_PreBoosters_PreBooster_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.PreBoosters.PreBooster.<>c$$<UnlockAnimationRequested>b__26_1
   void Rotatelab_PreBoosters_PreBooster___c___UnlockAnimationRequested_b__26_1
   (Rotatelab_PreBoosters_PreBooster___c_o* __this, Rotatelab_PreBoosters_PreBooster_o* this, const
   MethodInfo* method); */

void Rotatelab_PreBoosters_PreBooster___c___UnlockAnimationRequested_b__26_1_10ed410
               (undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_010fd514 + 0x10fd428);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fd518 + 0x10fd43c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fd51c + 0x10fd448));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fd520 + 0x10fd454));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fd524 + 0x10fd460));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010fd528 + 0x10fd474));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = RemoteVariableSO_bool___op_Implicit_1a81fac
                    (*(undefined4 *)(iVar1 + 0x1c),**(undefined4 **)(_UNK_010fd52c + 0x10fd494));
  if (iVar1 != 0) {
    piVar3 = *(int **)(_UNK_010fd530 + 0x10fd4b0);
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
              (iVar1,*(undefined4 *)(param_2 + 0x10),1,0,
               **(undefined4 **)(_UNK_010fd534 + 0x10fd500));
  }
  return;
}

