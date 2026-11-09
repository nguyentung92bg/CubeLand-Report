/* IL2CPP: Rotatelab.Networking.HiroController$$AuthenticateGooglePlayGamesAsync
Cysharp_Threading_Tasks_UniTask_SignInStatus__o Rotatelab_Networking_HiroController__AuthenticateGooglePlayGamesAsync (Rotatelab_Networking_HiroController_o* __this, System_TimeSpan_o timeout, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$AuthenticateGooglePlayGamesAsync
   Cysharp_Threading_Tasks_UniTask_SignInStatus__o
   Rotatelab_Networking_HiroController__AuthenticateGooglePlayGamesAsync
   (Rotatelab_Networking_HiroController_o* __this, System_TimeSpan_o timeout, const MethodInfo*
   method); */

void Rotatelab_Networking_HiroController__AuthenticateGooglePlayGamesAsync_114b0fc
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
  
  pcVar6 = (char *)(_UNK_0115b2e0 + 0x115b11c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b2e4 + 0x115b130));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b2e8 + 0x115b13c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b2ec + 0x115b148));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b2f0 + 0x115b154));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b2f4 + 0x115b160));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b2f8 + 0x115b16c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b2fc + 0x115b178));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b300 + 0x115b184));
    *pcVar6 = '\x01';
  }
  iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115b304 + 0x115b198));
  System_Object___ctor_2bb93bc(iVar3,0);
  iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115b308 + 0x115b1b4));
  Cysharp_Threading_Tasks_UniTaskCompletionSource_Int32Enum____ctor_1c3d2c8
            (iVar4,**(undefined4 **)(_UNK_0115b30c + 0x115b1c8));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar7 = (int *)(iVar3 + 8);
  *piVar7 = iVar4;
  thunk_FUN_00ec5080(piVar7,iVar4);
  iVar4 = GooglePlayGames_PlayGamesPlatform__get_Instance_288e738(0);
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115b310 + 0x115b208));
  System_Action_Int32Enum____ctor_1f10670
            (uVar5,iVar3,**(undefined4 **)(_UNK_0115b314 + 0x115b224),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  GooglePlayGames_PlayGamesPlatform__Authenticate_288ebe0(iVar4,uVar5,0);
  if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Cysharp_Threading_Tasks_UniTaskCompletionSource_Int32Enum___get_Task_1c3d2e4
            (&uStack_30,*piVar7,**(undefined4 **)(_UNK_0115b318 + 0x115b268));
  uVar2 = uStack_28;
  uVar1 = uStack_2c;
  uVar5 = uStack_30;
  if (*(int *)(**(int **)(_UNK_0115b31c + 0x115b280) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__WithTimeout_Int32Enum__148c800
            (&uStack_30,uVar5,uVar1,uVar2,param_3,param_4,1,
             **(undefined4 **)(_UNK_0115b320 + 0x115b2ac));
  *(undefined4 *)(param_1 + 1) = uStack_28;
  *param_1 = CONCAT44(uStack_2c,uStack_30);
  return;
}

