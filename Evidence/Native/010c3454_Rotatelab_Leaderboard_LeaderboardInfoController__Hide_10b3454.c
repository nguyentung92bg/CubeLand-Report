/* IL2CPP: Rotatelab.Leaderboard.LeaderboardInfoController$$Hide
void Rotatelab_Leaderboard_LeaderboardInfoController__Hide (Rotatelab_Leaderboard_LeaderboardInfoController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LeaderboardInfoController$$Hide
   void Rotatelab_Leaderboard_LeaderboardInfoController__Hide
   (Rotatelab_Leaderboard_LeaderboardInfoController_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_LeaderboardInfoController__Hide_10b3454(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
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
  
  pcVar3 = (char *)(_UNK_010c3754 + 0x10c346c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c3758 + 0x10c3480));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c375c + 0x10c348c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c3760 + 0x10c3498));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c3764 + 0x10c34a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c3768 + 0x10c34b0));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc(*(int *)(param_1 + 0x24),0,0);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc(*(int *)(param_1 + 0x1c),0,0);
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc(*(int *)(param_1 + 0x20),0,0);
  PrimeTween_Sequence__Stop_2cf07bc((undefined4 *)(param_1 + 0x38),0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  if (*(int *)(**(int **)(_UNK_010c376c + 0x10c356c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684(&uStack_58,uVar4,0,0x3dcccccd,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_58,&uStack_38,uStack_58,uStack_54,uStack_50,uStack_4c,0);
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  PrimeTween_Tween__Alpha_2ce7b44
            (&uStack_68,*(undefined4 *)(param_1 + 0x10),0,0x3dcccccd,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_68,&uStack_38,uStack_68,uStack_64,uStack_60,uStack_5c,0);
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  uVar4 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  piVar7 = *(int **)(_UNK_010c3770 + 0x10c3688);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar2[6];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar5 = *puVar2;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c3774 + 0x10c36d0));
    System_Action_object____ctor_1f11414(iVar6,uVar5,**(undefined4 **)(_UNK_010c3778 + 0x10c36f0),0)
    ;
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 0x18);
    *piVar7 = iVar6;
    thunk_FUN_00ec5080(piVar7,iVar6);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_48,&uStack_38,uVar4,iVar6,0,**(undefined4 **)(_UNK_010c377c + 0x10c3724));
  *(undefined4 *)(param_1 + 0x38) = uStack_48;
  *(undefined4 *)(param_1 + 0x3c) = uStack_44;
  *(undefined4 *)(param_1 + 0x40) = uStack_40;
  *(undefined4 *)(param_1 + 0x44) = uStack_3c;
  thunk_FUN_00ec5080(param_1 + 0x40,0);
  return;
}

