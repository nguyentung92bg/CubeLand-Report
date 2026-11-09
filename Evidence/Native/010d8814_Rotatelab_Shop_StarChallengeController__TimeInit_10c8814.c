/* IL2CPP: Rotatelab.Shop.StarChallengeController$$TimeInit
void Rotatelab_Shop_StarChallengeController__TimeInit (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$TimeInit
   void Rotatelab_Shop_StarChallengeController__TimeInit (Rotatelab_Shop_StarChallengeController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeController__TimeInit_10c8814(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  char *pcVar6;
  int iVar7;
  double dVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_010d8994 + 0x10d8830);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8998 + 0x10d8844));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d899c + 0x10d8850));
    *pcVar6 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  if (*(int *)(**(int **)(_UNK_010d89a0 + 0x10d8868) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Now_2b4a124(&uStack_30,0);
  uVar3 = uStack_2c;
  uVar2 = uStack_30;
  Rotatelab_Shop_StarChallengeController__get_LastStarChallengeSystemDateSaved_10c7150(&uStack_30);
  System_DateTime__op_Subtraction_2b4c068(&uStack_28,uStack_2c,uVar2,uVar3,uStack_30,uStack_2c,0);
  if (*(int *)(**(int **)(_UNK_010d89a4 + 0x10d88c4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar8 = (double)System_TimeSpan__get_TotalSeconds_2b89cf0(&uStack_28,0);
  pcVar6 = (char *)(_UNK_010d89a8 + 0x10d88f0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d89ac + 0x10d8904));
    *pcVar6 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010d89b0 + 0x10d891c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = Rotatelab_Shop_StarChallengeController__get_StarRemainingSecond_10c6fec(param_1);
  fVar5 = (float)FUN_01f4f1b4((float)dVar8);
  fVar1 = _UNK_010d8990;
  *(int *)(param_1 + 0x58) = iVar4;
  iVar7 = (int)fVar5;
  if (fVar5 == fVar1) {
    iVar7 = -0x80000000;
  }
  if (iVar7 < iVar4) {
    *(int *)(param_1 + 0x58) = iVar4 - iVar7;
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x50);
    Rotatelab_Shop_StarChallengeController__ResetStarChallenges_10c8618(param_1);
  }
  return;
}

