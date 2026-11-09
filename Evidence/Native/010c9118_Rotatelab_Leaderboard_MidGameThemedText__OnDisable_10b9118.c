/* IL2CPP: Rotatelab.Leaderboard.MidGameThemedText$$OnDisable
void Rotatelab_Leaderboard_MidGameThemedText__OnDisable (Rotatelab_Leaderboard_MidGameThemedText_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameThemedText$$OnDisable
   void Rotatelab_Leaderboard_MidGameThemedText__OnDisable
   (Rotatelab_Leaderboard_MidGameThemedText_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_MidGameThemedText__OnDisable_10b9118(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  
  pcVar5 = (char *)(_UNK_010c91e8 + 0x10c912c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c91ec + 0x10c9140));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c91f0 + 0x10c914c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c91f4 + 0x10c9158));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_010c91f8 + 0x10c916c);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  uVar6 = **(undefined4 **)(iVar3 + 0x5c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c91fc + 0x10c9190));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010c9200 + 0x10c91b0),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
  **(undefined4 **)(*piVar7 + 0x5c) = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + (*(uint *)(*piVar7 + 0x5c) >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((*(uint *)(*piVar7 + 0x5c) & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

