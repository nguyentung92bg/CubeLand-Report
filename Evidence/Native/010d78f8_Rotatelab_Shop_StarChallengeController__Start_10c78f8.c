/* IL2CPP: Rotatelab.Shop.StarChallengeController$$Start
void Rotatelab_Shop_StarChallengeController__Start (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$Start
   void Rotatelab_Shop_StarChallengeController__Start (Rotatelab_Shop_StarChallengeController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeController__Start_10c78f8(int param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_010d79a4 + 0x10d7910);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d79a8 + 0x10d7924));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d79ac + 0x10d7930));
    *pcVar2 = '\x01';
  }
  Rotatelab_Shop_StarChallengeController__CheckStarChallengeActive_10c79b8(param_1);
  piVar3 = *(int **)(_UNK_010d79b0 + 0x10d794c);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xd8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_object__Int32Enum__int___Raise_23a644c
            (iVar1,*(undefined4 *)(param_1 + 0x44),2,0,**(undefined4 **)(_UNK_010d79b4 + 0x10d7990))
  ;
  return;
}

