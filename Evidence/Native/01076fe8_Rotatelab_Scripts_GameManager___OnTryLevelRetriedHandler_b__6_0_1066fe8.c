/* IL2CPP: Rotatelab.Scripts.GameManager$$<OnTryLevelRetriedHandler>b__6_0
void Rotatelab_Scripts_GameManager___OnTryLevelRetriedHandler_b__6_0 (Rotatelab_Scripts_GameManager_o* __this, bool success, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.GameManager$$<OnTryLevelRetriedHandler>b__6_0
   void Rotatelab_Scripts_GameManager___OnTryLevelRetriedHandler_b__6_0
   (Rotatelab_Scripts_GameManager_o* __this, bool success, const MethodInfo* method); */

void Rotatelab_Scripts_GameManager___OnTryLevelRetriedHandler_b__6_0_1066fe8
               (undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar7 = (char *)(_UNK_0107706c + 0x1076ffc);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01077070 + 0x1077010));
    *pcVar7 = '\x01';
  }
  if (param_2 == 0) {
    piVar5 = *(int **)(_UNK_01077074 + 0x1077034);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar5;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x88);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00fd08d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  pcVar7 = (char *)(_UNK_0107694c + 0x10767d4);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076950 + 0x10767e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076954 + 0x10767f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076958 + 0x1076800));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107695c + 0x107680c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076960 + 0x1076818));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076964 + 0x1076824));
    *pcVar7 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01076968 + 0x1076838));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Networking_CloudSaveManager__ApplyPendingRemoteData_1142ac0(iVar1,0);
  if (iVar1 != 0) {
    puVar6 = *(undefined4 **)(_UNK_0107696c + 0x107686c);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = Rotatelab_Scripts_LevelManager__get_CurrentLevelIndex_106645c();
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_LevelManager__LoadLevelDataAsync_1066564(&uStack_24,iVar1,uVar3,1);
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget_object__16504f0
              (uStack_24,uStack_20,uStack_1c,**(undefined4 **)(_UNK_01076970 + 0x10768c0));
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01076974 + 0x10768d0));
  uVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01076978 + 0x10768e4));
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0107697c + 0x10768f8));
  System_Action___ctor_2b10bac(uVar4,uVar3,**(undefined4 **)(_UNK_01076980 + 0x1076918),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_UIManager__SetMainCanvas_1126b6c(iVar1,1,1,uVar4,0);
  return;
}

