/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$AdvancePin
void Rotatelab_Scripts_LiveSolverGuideController__AdvancePin (Rotatelab_Scripts_LiveSolverGuideController_o* __this, int32_t playedColumn, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$AdvancePin
   void Rotatelab_Scripts_LiveSolverGuideController__AdvancePin
   (Rotatelab_Scripts_LiveSolverGuideController_o* __this, int32_t playedColumn, const MethodInfo*
   method); */

void Rotatelab_Scripts_LiveSolverGuideController__AdvancePin_10592d4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_0106953c + 0x10692f0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01069540 + 0x1069304));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01069544 + 0x1069310));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01069548 + 0x106931c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106954c + 0x1069328));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01069550 + 0x1069334));
    *pcVar6 = '\x01';
  }
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(param_1 + 0x40) + 0xc) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar7 = *(undefined4 **)(_UNK_01069554 + 0x106937c);
  iVar1 = System_Collections_Generic_List_int___get_Item_261b65c
                    (*(int *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),*puVar7);
  if (iVar1 == param_2) {
    iVar1 = *(int *)(param_1 + 0x44) + 1;
    *(int *)(param_1 + 0x44) = iVar1;
    if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar1 < *(int *)(*(int *)(param_1 + 0x40) + 0xc)) {
      uStack_24 = *(undefined4 *)(param_1 + 0x44);
      iVar1 = *(int *)(_UNK_01069558 + 0x10693bc);
      uVar2 = FUN_00ec393c(*(undefined4 *)(iVar1 + 0x24),&uStack_24);
      if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uStack_28 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xc);
      uVar3 = FUN_00ec393c(*(undefined4 *)(iVar1 + 0x24),&uStack_28);
      if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uStack_2c = System_Collections_Generic_List_int___get_Item_261b65c
                            (*(int *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),*puVar7);
      uVar4 = FUN_00ec393c(*(undefined4 *)(iVar1 + 0x24),&uStack_2c);
      uVar2 = System_String__Format_2a0c2b4
                        (**(undefined4 **)(_UNK_0106955c + 0x1069444),uVar2,uVar3,uVar4,0);
      *(undefined4 *)(param_1 + 0x60) = uVar2;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x60),uVar2);
      iVar5 = *(int *)(param_1 + 0x30);
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01069560 + 0x1069474));
      if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = System_Collections_Generic_List_int___get_Item_261b65c
                        (*(int *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),*puVar7);
      if (iVar1 != 0) {
        uVar2 = Rotatelab_Scripts_PlaceableManager__GetFrontBlaster_104ab24(iVar1,uVar2);
        uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_40 = 0;
        uStack_30 = 0;
        System_Nullable_Color____ctor_17d76e8
                  (&uStack_40,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                   *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                   **(undefined4 **)(_UNK_01069564 + 0x10694d8));
        if (iVar5 != 0) {
          Rotatelab_Scripts_BlasterHighlight__ShowOn_ff62f8
                    (iVar5,uVar2,uStack_40,uStack_3c,uStack_38,uStack_34,uStack_30,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  pcVar6 = (char *)(_UNK_01069120 + 0x10690d8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01069124 + 0x10690ec));
    *pcVar6 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 0x10);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(int *)(iVar1 + 0x10) = iVar5 + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

