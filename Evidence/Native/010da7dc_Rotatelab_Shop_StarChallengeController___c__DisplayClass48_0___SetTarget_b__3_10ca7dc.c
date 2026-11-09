/* IL2CPP: Rotatelab.Shop.StarChallengeController.<>c__DisplayClass48_0$$<SetTarget>b__3
void Rotatelab_Shop_StarChallengeController___c__DisplayClass48_0___SetTarget_b__3 (Rotatelab_Shop_StarChallengeController___c__DisplayClass48_0_o* __this, Rotatelab_UI_SlicedFilledImage_o* i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController.<>c__DisplayClass48_0$$<SetTarget>b__3
   void Rotatelab_Shop_StarChallengeController___c__DisplayClass48_0___SetTarget_b__3
   (Rotatelab_Shop_StarChallengeController___c__DisplayClass48_0_o* __this,
   Rotatelab_UI_SlicedFilledImage_o* i, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeController___c__DisplayClass48_0___SetTarget_b__3_10ca7dc
               (int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(*(int *)(param_1 + 0x14) + 8),
                                     (byte)(in_fpscr >> 0x16) & 3);
  fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x10),(byte)(in_fpscr >> 0x16) & 3);
  fVar5 = fVar5 / fVar4;
  pcVar3 = (char *)(_UNK_01130678 + 0x11305f4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113067c + 0x1130608),fVar5,0);
    *pcVar3 = '\x01';
  }
  bVar1 = fVar5 < 0.0;
  if (1.0 < fVar5) {
    fVar5 = 1.0;
  }
  if (bVar1) {
    fVar5 = _UNK_01130674;
  }
  iVar2 = Rotatelab_UI_SlicedFilledImage_SetPropertyUtility__SetStruct_float__168579c
                    (param_2 + 0x22,fVar5,**(undefined4 **)(_UNK_01130680 + 0x1130624));
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01130668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x1a0))(param_2,*(undefined4 *)(*param_2 + 0x1a4));
    return;
  }
  return;
}

