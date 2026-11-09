/* IL2CPP: Rotatelab.WinStreak.RewardParticle$$Awake
void Rotatelab_WinStreak_RewardParticle__Awake (Rotatelab_WinStreak_RewardParticle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.WinStreak.RewardParticle$$Awake
   void Rotatelab_WinStreak_RewardParticle__Awake (Rotatelab_WinStreak_RewardParticle_o* __this,
   const MethodInfo* method); */

void Rotatelab_WinStreak_RewardParticle__Awake_1090cd8(int param_1)

{
  int iVar1;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localPosition_3613b6c(&uStack_20,iVar1,0);
  *(undefined4 *)(param_1 + 0x24) = uStack_18;
  *(undefined8 *)(param_1 + 0x1c) = uStack_20;
  return;
}

