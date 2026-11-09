/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$OnLightModeToggleChanged
void Rotatelab_Debugging_CreativeCanvasController__OnLightModeToggleChanged (Rotatelab_Debugging_CreativeCanvasController_o* __this, bool isOn, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$OnLightModeToggleChanged
   void Rotatelab_Debugging_CreativeCanvasController__OnLightModeToggleChanged
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, bool isOn, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__OnLightModeToggleChanged_110c358
               (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int *piStack_1c;
  
  pcVar6 = (char *)(_UNK_0111c41c + 0x111c36c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111c420 + 0x111c380));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111c424 + 0x111c38c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111c428 + 0x111c398));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(_UNK_0111c42c + 0x111c3ac);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  if (**(int **)(iVar3 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_bool___set_Value_1a8af9c
            (**(int **)(iVar3 + 0x5c),param_2,**(undefined4 **)(_UNK_0111c430 + 0x111c3e4));
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0111c434 + 0x111c3f8));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_0101d7f8 + 0x101d5e0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101d7fc + 0x101d5f4),0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101d800 + 0x101d600));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101d804 + 0x101d60c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101d808 + 0x101d618));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101d80c + 0x101d624));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101d810 + 0x101d630));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101d814 + 0x101d63c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101d818 + 0x101d648));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101d81c + 0x101d654));
    *pcVar6 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_1c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0101d820 + 0x101d670));
  piVar7 = *(int **)(_UNK_0101d824 + 0x101d688);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  uVar2 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (**(undefined4 **)(iVar1 + 0x5c),**(undefined4 **)(_UNK_0101d828 + 0x101d6ac));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_EnvironmentThemeObjects__SetLightMode_100d844(iVar3,uVar2);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0101d82c + 0x101d6dc));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_28,*(int *)(iVar3 + 0x50),**(undefined4 **)(_UNK_0101d830 + 0x101d710));
  puVar5 = *(undefined4 **)(_UNK_0101d834 + 0x101d730);
  piVar7 = *(int **)(_UNK_0101d838 + 0x101d738);
  while (iVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                           (&uStack_28,*puVar5), iVar3 != 0) {
    if (piStack_1c != (int *)0x0) {
      uVar4 = (uint)*(byte *)(*piVar7 + 0xb8);
      if ((uVar4 <= *(byte *)(*piStack_1c + 0xb8)) &&
         (*(int *)(*(int *)(*piStack_1c + 100) + uVar4 * 4 + -4) == *piVar7)) {
        Rotatelab_Scripts_BlasterDockController__RefreshLightMode_100d098();
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_28,**(undefined4 **)(_UNK_0101d83c + 0x101d794));
  return;
}

