/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$CanCheckLevelState
bool Rotatelab_Scripts_LevelStateManager__CanCheckLevelState (Rotatelab_Scripts_LevelStateManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$CanCheckLevelState
   bool Rotatelab_Scripts_LevelStateManager__CanCheckLevelState
   (Rotatelab_Scripts_LevelStateManager_o* __this, const MethodInfo* method); */

uint Rotatelab_Scripts_LevelStateManager__CanCheckLevelState_1017774(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar5 = (char *)(_UNK_0102794c + 0x1027788);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027950 + 0x102779c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027954 + 0x10277a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027958 + 0x10277b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102795c + 0x10277c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027960 + 0x10277cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027964 + 0x10277d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027968 + 0x10277e4));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_Scripts_LevelStateManager__get_IsPaused_100e3e4(param_1);
  uVar3 = 0;
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0102796c + 0x102780c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar3 = 0;
    iVar1 = Rotatelab_Boosters_BaseBoosterController__IsAnyBoosterActive_113256c(0);
    if (iVar1 == 0) {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01027970 + 0x102783c));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar3 = 0;
      iVar1 = Rotatelab_UI_PopupManager__get_IsAnyPopupVisible_1124e44(iVar1,0);
      if (iVar1 == 0) {
        iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_01027974 + 0x1027874));
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar8 = *(int **)(_UNK_01027978 + 0x1027894);
        iVar4 = *(int *)(iVar1 + 0x50);
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
          iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0102797c + 0x10278e0));
          System_Predicate_object____ctor_1876380
                    (iVar6,uVar7,**(undefined4 **)(_UNK_01027980 + 0x1027900),0);
          piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 8);
          *piVar8 = iVar6;
          thunk_FUN_00ec5080(piVar8,iVar6);
        }
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar3 = System_Collections_Generic_List_object___Exists_267e190
                          (iVar4,iVar6,**(undefined4 **)(_UNK_01027984 + 0x1027938));
        uVar3 = uVar3 ^ 1;
      }
    }
  }
  return uVar3;
}

