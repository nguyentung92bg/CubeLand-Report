/* IL2CPP: Rotatelab.Shop.StarChallengeController$$get_JewelSo
Rotatelab_Shop_StarChallengeSO_o* Rotatelab_Shop_StarChallengeController__get_JewelSo (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$get_JewelSo
   Rotatelab_Shop_StarChallengeSO_o* Rotatelab_Shop_StarChallengeController__get_JewelSo
   (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Shop_StarChallengeController__get_JewelSo_10c6e5c(int param_1)

{
  int iVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 uVar2;
  undefined4 unaff_r4;
  char *pcVar3;
  int iVar4;
  undefined4 unaff_r5;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  
  pcVar3 = (char *)(_UNK_010d6fbc + 0x10d6e70);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6fc0 + 0x10d6e84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6fc4 + 0x10d6e90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6fc8 + 0x10d6e9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6fcc + 0x10d6ea8));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x4c);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010d6fd0 + 0x10d6ebc));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = *(uint *)(*(int *)(iVar1 + 0x80) + 0x14);
  if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar7 = *(int **)(_UNK_010d6fd4 + 0x10d6f04);
  iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 0xc);
  uVar2 = extraout_r3;
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
    uVar2 = extraout_r3_00;
  }
  uVar5 = iVar1 - 1;
  pcVar3 = (char *)(_UNK_010d6fd8 + 0x10d6f28);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6fdc + 0x10d6f3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6fe0 + 0x10d6f48));
    *pcVar3 = '\x01';
    uVar2 = extraout_r3_01;
  }
  if (0x7fffffff < uVar5) {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_Math__ThrowMinMaxException_int__14c12a4
              (0,uVar5,**(undefined4 **)(_UNK_010d6fe4 + 0x10d6f7c));
    uVar2 = extraout_r3_02;
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((int)uVar6 < (int)uVar5) {
    uVar5 = uVar6;
  }
  if ((int)uVar6 < 0) {
    uVar5 = 0;
  }
  if (*(uint *)(iVar4 + 0xc) <= uVar5) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_2b955c8
              (0,uVar5,**(undefined4 **)(_UNK_010d6fe8 + 0x10d6fac),uVar2,unaff_r4,unaff_r5);
  }
  iVar1 = *(int *)(iVar4 + 8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  return *(undefined4 *)(iVar1 + uVar5 * 4 + 0x10);
}

