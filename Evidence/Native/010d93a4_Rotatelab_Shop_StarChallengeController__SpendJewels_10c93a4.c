/* IL2CPP: Rotatelab.Shop.StarChallengeController$$SpendJewels
void Rotatelab_Shop_StarChallengeController__SpendJewels (int64_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$SpendJewels
   void Rotatelab_Shop_StarChallengeController__SpendJewels (int64_t amount, const MethodInfo*
   method); */

void Rotatelab_Shop_StarChallengeController__SpendJewels_10c93a4(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int *piVar4;
  undefined4 unaff_r6;
  char *pcVar5;
  undefined4 unaff_r7;
  int *piVar6;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined8 uVar7;
  
  pcVar5 = (char *)(_UNK_010d94a0 + 0x10d93c0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d94a4 + 0x10d93d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d94a8 + 0x10d93e0));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010d94ac + 0x10d93f4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar6 = *(int **)(iVar1 + 0x10);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = (**(code **)(*piVar6 + 0xf0))(piVar6,*(undefined4 *)(*piVar6 + 0xf4));
  iVar2 = (int)((ulonglong)uVar7 >> 0x20);
  (**(code **)(*piVar6 + 0xf8))
            (piVar6,iVar2,(uint)uVar7 - param_1,iVar2 - (param_2 + (uint)((uint)uVar7 < param_1)),
             *(undefined4 *)(*piVar6 + 0xfc));
  piVar4 = *(int **)(iVar1 + 0x10);
  piVar6 = *(int **)(iVar1 + 0x20);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = (**(code **)(*piVar4 + 0xf0))(piVar4,*(undefined4 *)(*piVar4 + 0xf4));
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = **(int **)(_UNK_010d94b0 + 0x10d9490);
  iVar2 = piVar6[5];
  if (iVar2 != 0) {
    iVar1 = (**(code **)(iVar2 + 0xc))
                      (*(undefined4 *)(iVar2 + 0x20),iVar1,*(undefined4 *)(iVar2 + 0x14),
                       *(code **)(iVar2 + 0xc),unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8,unaff_lr
                      );
  }
  piVar4 = (int *)FUN_013a76ec(*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x24));
  if ((char)piVar6[7] == '\0') {
    iVar2 = (**(code **)(*piVar6 + 0xe0))(piVar6,*(undefined4 *)(*piVar6 + 0xe4));
    piVar6[8] = iVar2;
    *(undefined1 *)(piVar6 + 7) = 1;
  }
  else {
    iVar2 = piVar6[8];
  }
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = (**(code **)(*piVar4 + 0x100))(piVar4,iVar2,iVar1,*(undefined4 *)(*piVar4 + 0x104));
  if (iVar2 == 0) {
    (**(code **)(*piVar6 + 0xe8))(piVar6,iVar1,*(undefined4 *)(*piVar6 + 0xec));
    iVar2 = piVar6[6];
    piVar6[8] = iVar1;
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a9b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),iVar1,*(undefined4 *)(iVar2 + 0x14));
      return;
    }
  }
  return;
}

