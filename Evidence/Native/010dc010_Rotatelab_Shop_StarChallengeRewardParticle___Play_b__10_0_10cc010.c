/* IL2CPP: Rotatelab.Shop.StarChallengeRewardParticle$$<Play>b__10_0
void Rotatelab_Shop_StarChallengeRewardParticle___Play_b__10_0 (Rotatelab_Shop_StarChallengeRewardParticle_o* __this, float f, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeRewardParticle$$<Play>b__10_0
   void Rotatelab_Shop_StarChallengeRewardParticle___Play_b__10_0
   (Rotatelab_Shop_StarChallengeRewardParticle_o* __this, float f, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeRewardParticle___Play_b__10_0_10cc010
               (int param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar2 = (char *)(_UNK_039b37ec + 0x39b3770);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039b37f0 + 0x39b3784),param_2,0);
    *pcVar2 = '\x01';
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar1 + 8);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar1,0);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_039b37f4 + 0x39b37bc);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_039b37f8 + 0x39b37cc);
    *(code **)(_UNK_039b37fc + 0x39b37dc) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x039b37e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar3,param_2);
  return;
}

