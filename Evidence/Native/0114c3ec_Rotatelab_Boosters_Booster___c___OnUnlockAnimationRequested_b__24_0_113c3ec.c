/* IL2CPP: Rotatelab.Boosters.Booster.<>c$$<OnUnlockAnimationRequested>b__24_0
void Rotatelab_Boosters_Booster___c___OnUnlockAnimationRequested_b__24_0 (Rotatelab_Boosters_Booster___c_o* __this, Rotatelab_Boosters_Booster_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.Booster.<>c$$<OnUnlockAnimationRequested>b__24_0
   void Rotatelab_Boosters_Booster___c___OnUnlockAnimationRequested_b__24_0
   (Rotatelab_Boosters_Booster___c_o* __this, Rotatelab_Boosters_Booster_o* this, const MethodInfo*
   method); */

void Rotatelab_Boosters_Booster___c___OnUnlockAnimationRequested_b__24_0_113c3ec
               (undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0114c454 + 0x114c400);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c458 + 0x114c414));
    *pcVar3 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(param_2 + 0x30);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Animator__StringToHash_3591078
                    (**(undefined4 **)(_UNK_0114c45c + 0x114c448),
                     **(undefined4 **)(_UNK_0114c45c + 0x114c448),0);
  UnityEngine_Animator__Play_35915e4(iVar2,uVar1,0xffffffff,0xff800000);
  return;
}

