/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$.cctor
void Rotatelab_Leaderboard_MidGameLeaderboardManager___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$.cctor
   void Rotatelab_Leaderboard_MidGameLeaderboardManager___cctor (const MethodInfo* method); */

void Rotatelab_Leaderboard_MidGameLeaderboardManager___cctor_10b82f8(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_010c83d4 + 0x10c8308);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c83d8 + 0x10c831c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c83dc + 0x10c8328));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c83e0 + 0x10c8334));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c83e4 + 0x10c8340));
    *pcVar5 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c83e8 + 0x10c8354));
  Rotatelab_GameAction___ctor_fdbff0(uVar3,0,0);
  piVar6 = *(int **)(_UNK_010c83ec + 0x10c8378);
  **(undefined4 **)(*piVar6 + 0x5c) = uVar3;
  thunk_FUN_00ec5080(*(undefined4 *)(*piVar6 + 0x5c),uVar3);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c83f0 + 0x10c8398));
  Rotatelab_Save_SavedInt___ctor_10796b8(uVar3,**(undefined4 **)(_UNK_010c83f4 + 0x10c83b4),0,0);
  puVar4 = (undefined4 *)(*(int *)(*piVar6 + 0x5c) + 4);
  *puVar4 = uVar3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

