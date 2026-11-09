/* IL2CPP: Rotatelab.Scripts.GameManager$$OnQuitLevelHandler
void Rotatelab_Scripts_GameManager__OnQuitLevelHandler (Rotatelab_Scripts_GameManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.GameManager$$OnQuitLevelHandler
   void Rotatelab_Scripts_GameManager__OnQuitLevelHandler (Rotatelab_Scripts_GameManager_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_GameManager__OnQuitLevelHandler_1066b48(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01076b10 + 0x1076998);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076b14 + 0x10769ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076b18 + 0x10769b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076b1c + 0x10769c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076b20 + 0x10769d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076b24 + 0x10769dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076b28 + 0x10769e8));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01076b2c + 0x10769fc));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Networking_CloudSaveManager__ApplyPendingRemoteData_1142ac0(iVar1,0);
  if (iVar1 != 0) {
    puVar6 = *(undefined4 **)(_UNK_01076b30 + 0x1076a30);
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
              (uStack_24,uStack_20,uStack_1c,**(undefined4 **)(_UNK_01076b34 + 0x1076a84));
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01076b38 + 0x1076a94));
  uVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01076b3c + 0x1076aa8));
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01076b40 + 0x1076abc));
  System_Action___ctor_2b10bac(uVar4,uVar3,**(undefined4 **)(_UNK_01076b44 + 0x1076adc),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_UIManager__SetMainCanvas_1126b6c(iVar1,0,1,uVar4,0);
  return;
}

