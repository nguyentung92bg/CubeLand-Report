/* IL2CPP: Rotatelab.Boosters.Magnet3DController$$<UpdateAnimationState>b__6_0
void Rotatelab_Boosters_Magnet3DController___UpdateAnimationState_b__6_0 (Rotatelab_Boosters_Magnet3DController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.Magnet3DController$$<UpdateAnimationState>b__6_0
   void Rotatelab_Boosters_Magnet3DController___UpdateAnimationState_b__6_0
   (Rotatelab_Boosters_Magnet3DController_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_Magnet3DController___UpdateAnimationState_b__6_0_1131a44(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01141ab4 + 0x1141a5c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01141ab8 + 0x1141a70));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Animator__Play_35915ac
            (*(int *)(param_1 + 0x18),**(undefined4 **)(_UNK_01141abc + 0x1141a9c),0,0,0);
  return;
}

