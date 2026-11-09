/* IL2CPP: Rotatelab.Boosters.Magnet3DController$$UpdateAnimationState
void Rotatelab_Boosters_Magnet3DController__UpdateAnimationState (Rotatelab_Boosters_Magnet3DController_o* __this, int32_t newState, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.Magnet3DController$$UpdateAnimationState
   void Rotatelab_Boosters_Magnet3DController__UpdateAnimationState
   (Rotatelab_Boosters_Magnet3DController_o* __this, int32_t newState, const MethodInfo* method); */

void Rotatelab_Boosters_Magnet3DController__UpdateAnimationState_11317f4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_20 [16];
  
  pcVar3 = (char *)(_UNK_011419c4 + 0x1141810);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011419c8 + 0x1141824));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011419cc + 0x1141830));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011419d0 + 0x114183c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011419d4 + 0x1141848));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011419d8 + 0x1141854));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011419dc + 0x1141860));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011419e0 + 0x114186c));
    *pcVar3 = '\x01';
  }
  if (param_2 == 2) {
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Animator__Play_35915ac
              (*(int *)(param_1 + 0x18),**(undefined4 **)(_UNK_011419f0 + 0x1141944),1,0,0);
    uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011419f4 + 0x114195c));
    System_Action___ctor_2b10bac(uVar1,param_1,**(undefined4 **)(_UNK_011419f8 + 0x1141978),0);
    if (*(int *)(**(int **)(_UNK_011419fc + 0x114198c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Delay_2ce9f2c(auStack_20,0x3dcccccd,uVar1,0,0,0);
  }
  else {
    if (param_2 == 1) {
      iVar2 = *(int *)(param_1 + 0x18);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar1 = **(undefined4 **)(_UNK_011419ec + 0x1141900);
    }
    else {
      if (param_2 != 0) {
        return;
      }
      if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Animator__Play_35915ac
                (*(int *)(param_1 + 0x18),**(undefined4 **)(_UNK_011419e4 + 0x11418b4),1,0,0);
      iVar2 = *(int *)(param_1 + 0x18);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar1 = **(undefined4 **)(_UNK_011419e8 + 0x11418dc);
    }
    UnityEngine_Animator__Play_35915ac(iVar2,uVar1,0,0,0);
  }
  return;
}

