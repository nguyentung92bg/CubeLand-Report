/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$Initialize
void Rotatelab_Leaderboard_BaseLeaderboardPanelController__Initialize (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, Rotatelab_Leaderboard_ILeaderboardManager_o* manager, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$Initialize
   void Rotatelab_Leaderboard_BaseLeaderboardPanelController__Initialize
   (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this,
   Rotatelab_Leaderboard_ILeaderboardManager_o* manager, const MethodInfo* method); */

void Rotatelab_Leaderboard_BaseLeaderboardPanelController__Initialize_10ae1c4
               (int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  pcVar7 = (char *)(_UNK_010be48c + 0x10be1e0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010be490 + 0x10be1f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010be494 + 0x10be200));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010be498 + 0x10be20c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010be49c + 0x10be218));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010be4a0 + 0x10be224));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010be4a4 + 0x10be230));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010be4a8 + 0x10be23c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010be4ac + 0x10be248));
    *pcVar7 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x14) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x14),param_2);
  uVar8 = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)(**(int **)(_UNK_010be4b0 + 0x10be270) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar8,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_anchoredPosition_3613500(auStack_20,iVar1,0);
  *(undefined4 *)(param_1 + 0x20) = uStack_1c;
  iVar1 = Rotatelab_Extensions__RectTransform_fc1bd0(*(undefined4 *)(param_1 + 0x30),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_sizeDelta_3613710(auStack_20,iVar1,0);
  *(undefined4 *)(param_1 + 0x2c) = uStack_1c;
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0xb4);
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *param_2;
  uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_010be4b4 + 0x10be31c)) {
        puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xe8);
        goto LAB_010be364;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(param_2,**(int **)(_UNK_010be4b4 + 0x10be31c),5);
LAB_010be364:
  uVar8 = (*(code *)*puVar3)(param_2,puVar3[1]);
  puVar3 = *(undefined4 **)(_UNK_010be4b8 + 0x10be384);
  uVar4 = thunk_FUN_00f00cdc(*puVar3);
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar4,uVar8,**(undefined4 **)(_UNK_010be4bc + 0x10be3a0),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar1,uVar4,0);
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0xb4);
  uVar8 = thunk_FUN_00f00cdc(*puVar3);
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar8,param_1,**(undefined4 **)(_UNK_010be4c0 + 0x10be3f8),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar1,uVar8,0);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x48);
  uVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010be4c4 + 0x10be438));
  UnityEngine_Events_UnityAction_Vector2____ctor_1c60160
            (uVar8,param_1,**(undefined4 **)(_UNK_010be4c8 + 0x10be458),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent_Vector2___AddListener_1c62e34
            (iVar1,uVar8,**(undefined4 **)(_UNK_010be4cc + 0x10be47c));
  return;
}

