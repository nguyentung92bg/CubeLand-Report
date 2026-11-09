/* IL2CPP: Rotatelab.Shop.StarChallengeController.<>c$$<CheckStarChallengeActive>b__42_3
void Rotatelab_Shop_StarChallengeController___c___CheckStarChallengeActive_b__42_3 (Rotatelab_Shop_StarChallengeController___c_o* __this, TMPro_TMP_Text_o* i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController.<>c$$<CheckStarChallengeActive>b__42_3
   void Rotatelab_Shop_StarChallengeController___c___CheckStarChallengeActive_b__42_3
   (Rotatelab_Shop_StarChallengeController___c_o* __this, TMPro_TMP_Text_o* i, const MethodInfo*
   method); */

void Rotatelab_Shop_StarChallengeController___c___CheckStarChallengeActive_b__42_3_10ca508
               (undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_010da5c4 + 0x10da51c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010da5c8 + 0x10da530));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010da5cc + 0x10da53c));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010da5d0 + 0x10da550));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_Int32__ToString_2b6b9ec(*(int *)(iVar1 + 0x80) + 0xc,0);
  uVar2 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_010da5d4 + 0x10da594),uVar2,0);
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x010da5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x2b0))(param_2,uVar2,*(undefined4 *)(*param_2 + 0x2b4));
  return;
}

