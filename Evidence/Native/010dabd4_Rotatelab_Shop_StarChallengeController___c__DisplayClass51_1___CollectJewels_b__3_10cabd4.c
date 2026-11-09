/* IL2CPP: Rotatelab.Shop.StarChallengeController.<>c__DisplayClass51_1$$<CollectJewels>b__3
void Rotatelab_Shop_StarChallengeController___c__DisplayClass51_1___CollectJewels_b__3 (Rotatelab_Shop_StarChallengeController___c__DisplayClass51_1_o* __this, TMPro_TMP_Text_o* i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController.<>c__DisplayClass51_1$$<CollectJewels>b__3
   void Rotatelab_Shop_StarChallengeController___c__DisplayClass51_1___CollectJewels_b__3
   (Rotatelab_Shop_StarChallengeController___c__DisplayClass51_1_o* __this, TMPro_TMP_Text_o* i,
   const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeController___c__DisplayClass51_1___CollectJewels_b__3_10cabd4
               (int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_010dacb8 + 0x10dabf0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dacbc + 0x10dac04));
    *pcVar4 = '\x01';
  }
  iStack_14 = (int)*(float *)(param_1 + 8);
  if (*(float *)(param_1 + 8) == _UNK_010dacb4) {
    iStack_14 = -0x80000000;
  }
  uVar1 = System_Int32__ToString_2b6b9ec(&iStack_14,0);
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0xc);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_Int32__ToString_2b6b9ec(iVar3 + 8,0);
  uVar1 = System_String__Concat_2a0b574(uVar1,**(undefined4 **)(_UNK_010dacc0 + 0x10dac7c),uVar2,0);
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*param_2 + 0x2b0))(param_2,uVar1,*(undefined4 *)(*param_2 + 0x2b4));
  return;
}

