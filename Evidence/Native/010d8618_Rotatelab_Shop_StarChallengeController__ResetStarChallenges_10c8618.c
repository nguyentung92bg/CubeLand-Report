/* IL2CPP: Rotatelab.Shop.StarChallengeController$$ResetStarChallenges
void Rotatelab_Shop_StarChallengeController__ResetStarChallenges (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$ResetStarChallenges
   void Rotatelab_Shop_StarChallengeController__ResetStarChallenges
   (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeController__ResetStarChallenges_10c8618(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_010d87e0 + 0x10d8630);
  cVar1 = *pcVar4;
  if (cVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d87e4 + 0x10d8644));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d87e8 + 0x10d8650));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d87ec + 0x10d865c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d87f0 + 0x10d8668));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d87f4 + 0x10d8674));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d87f8 + 0x10d8680));
    cVar1 = '\x01';
    *pcVar4 = '\x01';
  }
  Rotatelab_Shop_StarChallengeController__set_CollectedStarAmount_10c70f8(cVar1,0);
  Rotatelab_Shop_StarChallengeController__set_StarRemainingSecond_10c7044
            (param_1,*(undefined4 *)(param_1 + 0x50));
  if (*(int *)(**(int **)(_UNK_010d87fc + 0x10d86a8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar9 = System_DateTime__get_Now_2b4a124(&uStack_20,0);
  Rotatelab_Shop_StarChallengeController__set_LastStarChallengeSystemDateSaved_10c7294
            ((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uStack_20,uStack_1c);
  piVar8 = *(int **)(_UNK_010d8800 + 0x10d86dc);
  iVar5 = *(int *)(param_1 + 0x1c);
  iVar2 = *piVar8;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar8;
  }
  puVar3 = *(undefined4 **)(iVar2 + 0x5c);
  iVar6 = puVar3[6];
  if (iVar6 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar7 = *puVar3;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d8804 + 0x10d8728));
    System_Action_object____ctor_1f11414(iVar6,uVar7,**(undefined4 **)(_UNK_010d8808 + 0x10d8748),0)
    ;
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0x18);
    *piVar8 = iVar6;
    thunk_FUN_00ec5080(piVar8,iVar6);
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___ForEach_267e6f0
            (iVar5,iVar6,**(undefined4 **)(_UNK_010d880c + 0x10d8780));
  Rotatelab_Shop_StarChallengePopup__set_CurrentStarChallengeIndex_10c92f0(0);
  piVar8 = *(int **)(_UNK_010d8810 + 0x10d879c);
  iVar2 = *piVar8;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar8;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x160);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction__Raise_fc08b8(iVar2,0);
  Rotatelab_Shop_StarChallengeController__SetTarget_10c89b4(param_1);
  return;
}

