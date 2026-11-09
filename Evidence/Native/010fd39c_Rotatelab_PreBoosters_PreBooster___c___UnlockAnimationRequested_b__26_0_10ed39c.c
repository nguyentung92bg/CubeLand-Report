/* IL2CPP: Rotatelab.PreBoosters.PreBooster.<>c$$<UnlockAnimationRequested>b__26_0
void Rotatelab_PreBoosters_PreBooster___c___UnlockAnimationRequested_b__26_0 (Rotatelab_PreBoosters_PreBooster___c_o* __this, Rotatelab_PreBoosters_PreBooster_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.PreBoosters.PreBooster.<>c$$<UnlockAnimationRequested>b__26_0
   void Rotatelab_PreBoosters_PreBooster___c___UnlockAnimationRequested_b__26_0
   (Rotatelab_PreBoosters_PreBooster___c_o* __this, Rotatelab_PreBoosters_PreBooster_o* this, const
   MethodInfo* method); */

void Rotatelab_PreBoosters_PreBooster___c___UnlockAnimationRequested_b__26_0_10ed39c
               (undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_010fd404 + 0x10fd3b0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fd408 + 0x10fd3c4));
    *pcVar3 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(param_2 + 0x34);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Animator__StringToHash_3591078
                    (**(undefined4 **)(_UNK_010fd40c + 0x10fd3f8),
                     **(undefined4 **)(_UNK_010fd40c + 0x10fd3f8),0);
  UnityEngine_Animator__Play_35915e4(iVar2,uVar1,0xffffffff,0xff800000);
  return;
}

