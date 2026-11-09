/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$<PostProcessLoadedData>b__46_1
Rotatelab_Leaderboard_BotData_o* Rotatelab_Leaderboard_BaseLeaderboardManager_object____PostProcessLoadedData_b__46_1 (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, System_String_o* name, const MethodInfo_1DDF970* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$<PostProcessLoadedData>b__46_1
   Rotatelab_Leaderboard_BotData_o*
   Rotatelab_Leaderboard_BaseLeaderboardManager_object____PostProcessLoadedData_b__46_1
   (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, System_String_o* name, const
   MethodInfo_1DDF970* method); */

int Rotatelab_Leaderboard_BaseLeaderboardManager_object____PostProcessLoadedData_b__46_1_1ddf970
              (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar3 = (char *)(_UNK_01defaa4 + 0x1def984);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01defaa8 + 0x1def998));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01defaac + 0x1def9a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01defab0 + 0x1def9b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01defab4 + 0x1def9bc));
    *pcVar3 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01defab8 + 0x1def9d0));
  Rotatelab_Leaderboard_BotData___ctor_10b1524(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 8) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 8),param_2);
  puVar5 = *(undefined4 **)(_UNK_01defabc + 0x1defa08);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = *(undefined4 *)(iVar2 + 0x28);
  if (*(int *)(**(int **)(_UNK_01defac0 + 0x1defa28) + 0x74) == 0) {
    FUN_00ec3934();
  }
  puVar6 = *(undefined4 **)(_UNK_01defac4 + 0x1defa4c);
  uVar4 = Rotatelab_Extensions__PickRandom_object__1487798(uVar4,*puVar6);
  *(undefined4 *)(iVar1 + 0xc) = uVar4;
  thunk_FUN_00ec5080();
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_Extensions__PickRandom_object__1487798(*(undefined4 *)(iVar2 + 0x40),*puVar6);
  *(undefined4 *)(iVar1 + 0x10) = uVar4;
  thunk_FUN_00ec5080();
  uVar4 = Rotatelab_Leaderboard_BaseLeaderboardManager_object___GetRandomSeed_1ddf920();
  *(undefined4 *)(iVar1 + 0x20) = uVar4;
  return iVar1;
}

