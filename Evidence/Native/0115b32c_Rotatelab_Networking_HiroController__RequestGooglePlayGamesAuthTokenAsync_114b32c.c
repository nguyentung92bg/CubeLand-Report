/* IL2CPP: Rotatelab.Networking.HiroController$$RequestGooglePlayGamesAuthTokenAsync
Cysharp_Threading_Tasks_UniTask_string__o Rotatelab_Networking_HiroController__RequestGooglePlayGamesAuthTokenAsync (Rotatelab_Networking_HiroController_o* __this, System_TimeSpan_o timeout, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$RequestGooglePlayGamesAuthTokenAsync
   Cysharp_Threading_Tasks_UniTask_string__o
   Rotatelab_Networking_HiroController__RequestGooglePlayGamesAuthTokenAsync
   (Rotatelab_Networking_HiroController_o* __this, System_TimeSpan_o timeout, const MethodInfo*
   method); */

void Rotatelab_Networking_HiroController__RequestGooglePlayGamesAuthTokenAsync_114b32c
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_0115b514 + 0x115b34c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b518 + 0x115b360));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b51c + 0x115b36c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b520 + 0x115b378));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b524 + 0x115b384));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b528 + 0x115b390));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b52c + 0x115b39c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b530 + 0x115b3a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b534 + 0x115b3b4));
    *pcVar6 = '\x01';
  }
  iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115b538 + 0x115b3c8));
  System_Object___ctor_2bb93bc(iVar3,0);
  iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115b53c + 0x115b3e4));
  Cysharp_Threading_Tasks_UniTaskCompletionSource_object____ctor_1c3dc08
            (iVar4,**(undefined4 **)(_UNK_0115b540 + 0x115b3f8));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar7 = (int *)(iVar3 + 8);
  *piVar7 = iVar4;
  thunk_FUN_00ec5080(piVar7,iVar4);
  iVar4 = GooglePlayGames_PlayGamesPlatform__get_Instance_288e738(0);
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115b544 + 0x115b438));
  System_Action_object____ctor_1f11414(uVar5,iVar3,**(undefined4 **)(_UNK_0115b548 + 0x115b454),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  GooglePlayGames_PlayGamesPlatform__RequestServerSideAccess_288ed5c(iVar4,0,uVar5,0);
  if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Cysharp_Threading_Tasks_UniTaskCompletionSource_object___get_Task_1c3dc24
            (&uStack_30,*piVar7,**(undefined4 **)(_UNK_0115b54c + 0x115b49c));
  uVar2 = uStack_28;
  uVar1 = uStack_2c;
  uVar5 = uStack_30;
  if (*(int *)(**(int **)(_UNK_0115b550 + 0x115b4b4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__WithTimeout_object__148c900
            (&uStack_30,uVar5,uVar1,uVar2,param_3,param_4,0,
             **(undefined4 **)(_UNK_0115b554 + 0x115b4e0));
  *(undefined4 *)(param_1 + 1) = uStack_28;
  *param_1 = CONCAT44(uStack_2c,uStack_30);
  return;
}

