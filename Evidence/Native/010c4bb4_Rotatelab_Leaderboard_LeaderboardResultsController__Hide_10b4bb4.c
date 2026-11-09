/* IL2CPP: Rotatelab.Leaderboard.LeaderboardResultsController$$Hide
void Rotatelab_Leaderboard_LeaderboardResultsController__Hide (Rotatelab_Leaderboard_LeaderboardResultsController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LeaderboardResultsController$$Hide
   void Rotatelab_Leaderboard_LeaderboardResultsController__Hide
   (Rotatelab_Leaderboard_LeaderboardResultsController_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_LeaderboardResultsController__Hide_10b4bb4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int extraout_r1;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_010c4f2c + 0x10c4bcc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4f30 + 0x10c4be0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4f34 + 0x10c4bec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4f38 + 0x10c4bf8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4f3c + 0x10c4c04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4f40 + 0x10c4c10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4f44 + 0x10c4c1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4f48 + 0x10c4c28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4f4c + 0x10c4c34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4f50 + 0x10c4c40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4f54 + 0x10c4c4c));
    *pcVar5 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar6 = *(int **)(_UNK_010c4f58 + 0x10c4c68);
  uStack_30 = 0;
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x114);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar1,1,**(undefined4 **)(_UNK_010c4f5c + 0x10c4ca4));
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010c4f60 + 0x10c4cb8));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_HomePageCoordinator__NotifyClosed_107a584(iVar1,*(undefined4 *)(param_1 + 0x18),0);
  piVar6 = *(int **)(param_1 + 0x14);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_010c4f64 + 0x10c4d00)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xf0);
        goto LAB_010c4d48;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(piVar6,**(int **)(_UNK_010c4f64 + 0x10c4d00),6);
LAB_010c4d48:
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_40,1,0,1,0,0,0);
  uVar8 = *(undefined4 *)(param_1 + 0x1c);
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  if (*(int *)(**(int **)(_UNK_010c4f68 + 0x10c4d90) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Alpha_2ce7b44(&uStack_50,uVar8,0,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_50,&uStack_30,uStack_50,uStack_4c,uStack_48,uStack_44,0);
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_28 = uStack_48;
  uStack_24 = uStack_44;
  uVar8 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  piVar6 = *(int **)(_UNK_010c4f6c + 0x10c4e38);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar7 = puVar2[1];
  if (iVar7 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar6 + 0x5c);
    }
    uVar9 = *puVar2;
    iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c4f70 + 0x10c4e80));
    System_Action_object____ctor_1f11414(iVar7,uVar9,**(undefined4 **)(_UNK_010c4f74 + 0x10c4ea0),0)
    ;
    piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 4);
    *piVar6 = iVar7;
    thunk_FUN_00ec5080(piVar6,iVar7);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_40,&uStack_30,uVar8,iVar7,0,**(undefined4 **)(_UNK_010c4f78 + 0x10c4ed8));
  iVar1 = *(int *)(**(int **)(_UNK_010c4f7c + 0x10c4ef4) + 0x74);
  if (iVar1 == 0) {
    FUN_00ec3934();
    iVar1 = extraout_r1;
  }
  Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
            (&uStack_40,iVar1,uStack_40,uStack_3c,uStack_38,uStack_34,0);
  return;
}

