/* IL2CPP: Rotatelab.Shop.StarChallengeController.<>c__DisplayClass48_0$$<SetTarget>b__2
void Rotatelab_Shop_StarChallengeController___c__DisplayClass48_0___SetTarget_b__2 (Rotatelab_Shop_StarChallengeController___c__DisplayClass48_0_o* __this, TMPro_TMP_Text_o* i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController.<>c__DisplayClass48_0$$<SetTarget>b__2
   void Rotatelab_Shop_StarChallengeController___c__DisplayClass48_0___SetTarget_b__2
   (Rotatelab_Shop_StarChallengeController___c__DisplayClass48_0_o* __this, TMPro_TMP_Text_o* i,
   const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeController___c__DisplayClass48_0___SetTarget_b__2_10ca728
               (int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_010da7d0 + 0x10da740);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010da7d4 + 0x10da754));
    *pcVar3 = '\x01';
  }
  uVar1 = System_Int32__ToString_2b6b9ec(param_1 + 0x10,0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_Int32__ToString_2b6b9ec(*(int *)(param_1 + 0x14) + 8,0);
  uVar1 = System_String__Concat_2a0b574(uVar1,**(undefined4 **)(_UNK_010da7d8 + 0x10da79c),uVar2,0);
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x010da7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x2b0))(param_2,uVar1,*(undefined4 *)(*param_2 + 0x2b4));
  return;
}

