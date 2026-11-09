/* IL2CPP: Rotatelab.Scripts.LevelManager$$QuitLevel
void Rotatelab_Scripts_LevelManager__QuitLevel (Rotatelab_Scripts_LevelManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager$$QuitLevel
   void Rotatelab_Scripts_LevelManager__QuitLevel (Rotatelab_Scripts_LevelManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_LevelManager__QuitLevel_1068a38(int param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  pcVar2 = (char *)(_UNK_01078b60 + 0x1078a50);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01078b64 + 0x1078a64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01078b68 + 0x1078a70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01078b6c + 0x1078a7c));
    *pcVar2 = '\x01';
  }
  puVar4 = *(undefined4 **)(_UNK_01078b70 + 0x1078a90);
  uVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
  if ((int)uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar3 = *(int **)((int)uVar5 + 0x10);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar3 + 0xf8))
            (piVar3,(int)((ulonglong)uVar5 >> 0x20),0,0,*(undefined4 *)(*piVar3 + 0xfc));
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_int___set_Value_1a8b820
            (*(int *)(iVar1 + 0x20),0,**(undefined4 **)(_UNK_01078b74 + 0x1078b08));
  piVar3 = *(int **)(_UNK_01078b78 + 0x1078b1c);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction__Raise_fc08b8(iVar1,0);
  pcVar2 = (char *)(_UNK_01078ca0 + 0x1078b90);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01078ca4 + 0x1078ba4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01078ca8 + 0x1078bb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01078cac + 0x1078bbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01078cb0 + 0x1078bc8));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01078cb4 + 0x1078bdc));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_PlaceableManager__ClearPlaceables_10431e4(iVar1,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01078cb8 + 0x1078c08));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_DockManager__ClearDocks_1008efc(iVar1,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01078cbc + 0x1078c34));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_ObjectManager__ClearObject_102ca58(iVar1,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01078cc0 + 0x1078c64));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LevelStateManager__ResetGameState_10169c8(iVar1,0);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}

