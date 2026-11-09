/* IL2CPP: Rotatelab.Shop.StarChallengeRewardParticle$$.ctor
void Rotatelab_Shop_StarChallengeRewardParticle___ctor (Rotatelab_Shop_StarChallengeRewardParticle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeRewardParticle$$.ctor
   void Rotatelab_Shop_StarChallengeRewardParticle___ctor
   (Rotatelab_Shop_StarChallengeRewardParticle_o* __this, const MethodInfo* method); */

int Rotatelab_Shop_StarChallengeRewardParticle___ctor_10cbfd0(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  uVar2 = _UNK_010dc008;
  uVar1 = _UNK_010dc000;
  *(undefined4 *)(param_1 + 0x30) = 0x3ecccccd;
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  *(undefined8 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  pcVar3 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

