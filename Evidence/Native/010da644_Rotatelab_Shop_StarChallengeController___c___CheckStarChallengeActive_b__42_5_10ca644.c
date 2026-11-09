/* IL2CPP: Rotatelab.Shop.StarChallengeController.<>c$$<CheckStarChallengeActive>b__42_5
void Rotatelab_Shop_StarChallengeController___c___CheckStarChallengeActive_b__42_5 (Rotatelab_Shop_StarChallengeController___c_o* __this, Rotatelab_UI_SlicedFilledImage_o* i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01130634) */
/* WARNING: Removing unreachable block (ram,0x0113063c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController.<>c$$<CheckStarChallengeActive>b__42_5
   void Rotatelab_Shop_StarChallengeController___c___CheckStarChallengeActive_b__42_5
   (Rotatelab_Shop_StarChallengeController___c_o* __this, Rotatelab_UI_SlicedFilledImage_o* i, const
   MethodInfo* method); */

void Rotatelab_Shop_StarChallengeController___c___CheckStarChallengeActive_b__42_5_10ca644
               (undefined4 param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar2 = (char *)(_UNK_01130678 + 0x11305f4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113067c + 0x1130608),0,0);
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_UI_SlicedFilledImage_SetPropertyUtility__SetStruct_float__168579c
                    (param_2 + 0x22,0,**(undefined4 **)(_UNK_01130680 + 0x1130624));
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01130668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x1a0))(param_2,*(undefined4 *)(*param_2 + 0x1a4));
  return;
}

