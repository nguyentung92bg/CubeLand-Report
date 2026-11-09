/* IL2CPP: Rotatelab.Scripts.GameManager$$OnLevelCompleted
void Rotatelab_Scripts_GameManager__OnLevelCompleted (Rotatelab_Scripts_GameManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.GameManager$$OnLevelCompleted
   void Rotatelab_Scripts_GameManager__OnLevelCompleted (Rotatelab_Scripts_GameManager_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_GameManager__OnLevelCompleted_1066254(void)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar7 = (char *)(_UNK_01076418 + 0x1076268);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107641c + 0x107627c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076420 + 0x1076288));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076424 + 0x1076294));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076428 + 0x10762a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107642c + 0x10762ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076430 + 0x10762b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076434 + 0x10762c4));
    *pcVar7 = '\x01';
  }
  iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01076438 + 0x10762d8));
  System_Object___ctor_2bb93bc(iVar3,0);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0107643c + 0x10762f4));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_Networking_CloudSaveManager__ApplyPendingRemoteData_1142ac0(iVar4,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar8 = *(undefined4 **)(_UNK_01076440 + 0x1076330);
  *(undefined1 *)(iVar3 + 8) = uVar2;
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = Rotatelab_Scripts_LevelManager__get_CurrentLevelIndex_106645c();
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LevelManager__LoadLevelDataAsync_1066564
            (&uStack_24,iVar4,iVar5 + (*(byte *)(iVar3 + 8) ^ 1),1);
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget_object__16504f0
            (uStack_24,uStack_20,uStack_1c,**(undefined4 **)(_UNK_01076444 + 0x1076390));
  uVar2 = Rotatelab_Scripts_GameManager__get_IsMainMenuActive_1065c48();
  puVar8 = *(undefined4 **)(_UNK_01076448 + 0x10763a4);
  *(undefined1 *)(iVar3 + 9) = uVar2;
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  bVar1 = *(byte *)(iVar3 + 9);
  uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0107644c + 0x10763c4));
  System_Action___ctor_2b10bac(uVar6,iVar3,**(undefined4 **)(_UNK_01076450 + 0x10763e4),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_UIManager__SetMainCanvas_1126b6c(iVar4,bVar1 ^ 1,1,uVar6,0);
  return;
}

