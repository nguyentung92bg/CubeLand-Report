/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$OnLevelLoaded
void Rotatelab_Debugging_CreativeCanvasController__OnLevelLoaded (Rotatelab_Debugging_CreativeCanvasController_o* __this, Rotatelab_SoLevelData_o* level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$OnLevelLoaded
   void Rotatelab_Debugging_CreativeCanvasController__OnLevelLoaded
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, Rotatelab_SoLevelData_o* level, const
   MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__OnLevelLoaded_110bcf0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  short sStack_2e;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_0111bf58 + 0x111bd0c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111bf5c + 0x111bd20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111bf60 + 0x111bd2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111bf64 + 0x111bd38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111bf68 + 0x111bd44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111bf6c + 0x111bd50));
    *pcVar6 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_0111bf70 + 0x111bd68);
  iStack_28 = 0;
  uStack_2c = 0;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = Rotatelab_Scripts_LevelManager__get_CurrentLevelIndex_106645c(iVar2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LevelManager__GetLevelABTestVariantInfo_106a0bc
            (iVar1,uVar3,&iStack_28,&uStack_2c,0);
  if (*(int *)(param_1 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = TMPro_TMP_Dropdown__get_options_34d49d4(*(int *)(param_1 + 0xa0),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar2) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar1 + 8),0,iVar2,0);
  }
  if (0 < iStack_28) {
    iVar2 = 0;
    puVar7 = *(undefined4 **)(_UNK_0111bf74 + 0x111be40);
    piVar10 = *(int **)(_UNK_0111bf78 + 0x111be48);
    do {
      sStack_2e = (short)iVar2 + 0x41;
      uVar3 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_0111bf7c + 0x111be54) + 0x44),&sStack_2e);
      uVar3 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_0111bf80 + 0x111be74),uVar3,0);
      uVar4 = thunk_FUN_00f00cdc(*puVar7);
      TMPro_TMP_Dropdown_OptionData___ctor_34d5870(uVar4,uVar3,0);
      iVar8 = *(int *)(iVar1 + 8);
      uVar11 = *(uint *)(iVar1 + 0xc);
      iVar9 = *piVar10;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar11 < *(uint *)(iVar8 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar11 + 1;
        puVar5 = (undefined4 *)(iVar8 + uVar11 * 4 + 0x10);
        *puVar5 = uVar4;
        thunk_FUN_00ec5080(puVar5,uVar4);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (iVar1,uVar4,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iStack_28);
  }
  if (*(int *)(param_1 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  TMPro_TMP_Dropdown__set_options_34d49f0(*(int *)(param_1 + 0xa0),iVar1,0);
  if (*(int *)(param_1 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  TMPro_TMP_Dropdown__SetValueWithoutNotify_34d4c2c(*(int *)(param_1 + 0xa0),uStack_2c,0);
  return;
}

