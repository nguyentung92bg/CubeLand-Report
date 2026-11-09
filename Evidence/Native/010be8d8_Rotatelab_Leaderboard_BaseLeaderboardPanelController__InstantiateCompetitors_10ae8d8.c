/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$InstantiateCompetitors
void Rotatelab_Leaderboard_BaseLeaderboardPanelController__InstantiateCompetitors (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$InstantiateCompetitors
   void Rotatelab_Leaderboard_BaseLeaderboardPanelController__InstantiateCompetitors
   (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_BaseLeaderboardPanelController__InstantiateCompetitors_10ae8d8
               (int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_r6;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  
  pcVar3 = (char *)(_UNK_010beb80 + 0x10be8f0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010beb84 + 0x10be904));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010beb88 + 0x10be910));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010beb8c + 0x10be91c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010beb90 + 0x10be928));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010beb94 + 0x10be934));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010beb98 + 0x10be940));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010beb9c + 0x10be94c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010beba0 + 0x10be958));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010beba4 + 0x10be964));
    *pcVar3 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010beba8 + 0x10be978);
  iVar5 = *(int *)(param_1 + 0x28);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar2[2];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar7 = *puVar2;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010bebac + 0x10be9c4));
    System_Action_object____ctor_1f11414(iVar6,uVar7,**(undefined4 **)(_UNK_010bebb0 + 0x10be9e4),0)
    ;
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 8);
    *piVar8 = iVar6;
    thunk_FUN_00ec5080(piVar8,iVar6);
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___ForEach_267e6f0
            (iVar5,iVar6,**(undefined4 **)(_UNK_010bebb4 + 0x10bea1c));
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar5) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar1 + 8),0,iVar5,0);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x20);
  uVar4 = 0;
  puVar2 = *(undefined4 **)(_UNK_010bebb8 + 0x10bea84);
  while( true ) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar4) {
      iVar1 = Rotatelab_Leaderboard_BaseLeaderboardPanelController__InstantiateCompetitor_object__143203c
                        (param_1,*(undefined4 *)(param_1 + 0x34),
                         **(undefined4 **)(_UNK_010bebbc + 0x10beae8));
      piVar8 = (int *)(param_1 + 0x38);
      *piVar8 = iVar1;
      thunk_FUN_00ec5080(piVar8,iVar1);
      if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Leaderboard_PlayerCompetitor__SetData_10af8f8
                (*piVar8,*(undefined4 *)(param_1 + 0x10));
      iVar1 = *(int *)(param_1 + 0x24);
      if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0xc);
      fVar10 = *(float *)(param_1 + 0x2c);
      if (*(int *)(**(int **)(_UNK_010bebc0 + 0x10beb44) + 0x74) == 0) {
        FUN_00ec3934();
      }
      fVar9 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
      fVar10 = fVar10 * fVar9;
      if (iVar1 != 0) {
        UnityEngine_RectTransform__get_sizeDelta_3613710(&stack0xffffffe8,iVar1,0);
        UnityEngine_RectTransform__set_sizeDelta_3613820(iVar1,unaff_r6,fVar10,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4(0,fVar10,0);
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar7 = *(undefined4 *)(iVar1 + 0x10 + uVar4 * 4);
    iVar5 = Rotatelab_Leaderboard_BaseLeaderboardPanelController__InstantiateCompetitor_object__143203c
                      (param_1,*(undefined4 *)(param_1 + 0x30),*puVar2);
    if (iVar5 == 0) break;
    Rotatelab_Leaderboard_BotCompetitor__SetData_10af8bc(iVar5,uVar7);
    uVar4 = uVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

