/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$GetThemeSprite
UnityEngine_Sprite_o* Rotatelab_Leaderboard_MidGameLeaderboardManager__GetThemeSprite (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, int32_t slot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$GetThemeSprite
   UnityEngine_Sprite_o* Rotatelab_Leaderboard_MidGameLeaderboardManager__GetThemeSprite
   (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, int32_t slot, const MethodInfo*
   method); */

undefined4
Rotatelab_Leaderboard_MidGameLeaderboardManager__GetThemeSprite_10b8264
          (int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_28;
  int aiStack_24 [4];
  
  iVar7 = *(int *)(param_1 + 0x44);
  iVar2 = Rotatelab_Leaderboard_MidGameLeaderboardManager__get_CurrentTheme_10b81a8();
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = (char *)(_UNK_010c815c + 0x10c7f4c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8160 + 0x10c7f60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8164 + 0x10c7f6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8168 + 0x10c7f78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c816c + 0x10c7f84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8170 + 0x10c7f90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8174 + 0x10c7f9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8178 + 0x10c7fa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c817c + 0x10c7fb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8180 + 0x10c7fc0));
    *pcVar4 = '\x01';
  }
  piVar6 = *(int **)(_UNK_010c8184 + 0x10c7fd8);
  uVar9 = *(undefined4 *)(iVar7 + 0xc);
  aiStack_24[0] = 0;
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar8 = puVar3[1];
  if (iVar8 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar6 + 0x5c);
    }
    uVar5 = *puVar3;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c8188 + 0x10c8028));
    System_Func_object__Int32Enum__bool____ctor_239e560
              (iVar8,uVar5,**(undefined4 **)(_UNK_010c818c + 0x10c8048),0);
    piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 4);
    *piVar6 = iVar8;
    thunk_FUN_00ec5080(piVar6,iVar8);
  }
  if (*(int *)(**(int **)(_UNK_010c8190 + 0x10c8070) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__TryFind_object__Int32Enum__1489bc8
                    (uVar9,param_2,iVar8,aiStack_24,**(undefined4 **)(_UNK_010c8194 + 0x10c8098));
  if (iVar1 == 0) {
    uStack_28 = param_2;
    uVar9 = FUN_00ec393c(**(undefined4 **)(_UNK_010c8198 + 0x10c80dc),&uStack_28);
    uVar5 = 0;
    uVar9 = System_String__Format_2a0c264
                      (**(undefined4 **)(_UNK_010c819c + 0x10c80fc),
                       **(undefined4 **)(_UNK_010c81a0 + 0x10c8108),uVar9,0);
    if (*(int *)(**(int **)(_UNK_010c81a4 + 0x10c811c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Debug__LogError_35b24c8(uVar9,iVar7,0);
  }
  else if (iVar2 == 1) {
    if (aiStack_24[0] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = *(undefined4 *)(aiStack_24[0] + 0x10);
  }
  else {
    if (aiStack_24[0] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = *(undefined4 *)(aiStack_24[0] + 0xc);
  }
  return uVar5;
}

