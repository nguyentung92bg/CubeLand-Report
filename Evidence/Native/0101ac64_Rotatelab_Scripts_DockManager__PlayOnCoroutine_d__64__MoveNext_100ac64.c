/* IL2CPP: Rotatelab.Scripts.DockManager.<PlayOnCoroutine>d__64$$MoveNext
bool Rotatelab_Scripts_DockManager__PlayOnCoroutine_d__64__MoveNext (Rotatelab_Scripts_DockManager__PlayOnCoroutine_d__64_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager.<PlayOnCoroutine>d__64$$MoveNext
   bool Rotatelab_Scripts_DockManager__PlayOnCoroutine_d__64__MoveNext
   (Rotatelab_Scripts_DockManager__PlayOnCoroutine_d__64_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_DockManager__PlayOnCoroutine_d__64__MoveNext_100ac64(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  int *piStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar5 = (char *)(_UNK_0101b17c + 0x101ac80);
  iStack_28 = param_1;
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b180 + 0x101ac94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b184 + 0x101aca0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b188 + 0x101acac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b18c + 0x101acb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b190 + 0x101acc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b194 + 0x101acd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b198 + 0x101acdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b19c + 0x101ace8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b1a0 + 0x101acf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b1a4 + 0x101ad00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b1a8 + 0x101ad0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b1ac + 0x101ad18));
    *pcVar5 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x10);
  piStack_30 = &iStack_28;
  iStack_2c = 0;
  uStack_34 = 0;
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
    if (*(char *)(param_1 + 0x1c) != '\0') {
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Scripts_DockManager__AddExtraSlot_1007dd0(iVar6);
    }
    piVar4 = *(int **)(_UNK_0101b1d8 + 0x101af14);
    iVar6 = *piVar4;
    if (*(int *)(iVar6 + 0x74) == 0) {
      FUN_00ec3934();
      iVar6 = *piVar4;
    }
    iVar6 = *(int *)(*(int *)(iVar6 + 0x5c) + 0xc4);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction__Raise_fc08b8(iVar6,0);
    Rotatelab_Scripts_DockManager__PlayOnCoroutine_d__64____m__Finally2_100b1e0(iStack_28);
    uVar3 = 0;
    Rotatelab_Scripts_DockManager__PlayOnCoroutine_d__64____m__Finally1_100b23c(iStack_28);
  }
  else if (*(int *)(param_1 + 8) == 0) {
    puVar1 = *(undefined4 **)(_UNK_0101b1b0 + 0x101ad5c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = Rotatelab_Scripts_LevelStateManager_PauseGameScope__Get_1017c20();
    *(undefined4 *)(iStack_28 + 0x20) = uVar3;
    thunk_FUN_00ec5080();
    iVar2 = **(int **)(_UNK_0101b1b4 + 0x101ad94);
    *(undefined4 *)(iStack_28 + 8) = 0xfffffffd;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Pool_ListPool_object___Get_257b7b0
              (&uStack_40,&iStack_2c,**(undefined4 **)(_UNK_0101b1b8 + 0x101adb8));
    *(undefined4 *)(iStack_28 + 0x24) = uStack_40;
    *(undefined4 *)(iStack_28 + 0x28) = uStack_3c;
    thunk_FUN_00ec5080((undefined4 *)(iStack_28 + 0x24),0);
    *(undefined4 *)(iStack_28 + 8) = 0xfffffffc;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(iVar6 + 0x44);
    uVar7 = 0;
    while( true ) {
      iVar8 = iStack_2c;
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(iVar2 + 0xc) <= (int)uVar7) break;
      if (*(uint *)(iVar2 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar8 = *(int *)(iVar2 + 0x10 + uVar7 * 4);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar8 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                        (iVar8,**(undefined4 **)(_UNK_0101b1bc + 0x101ae48));
      if (iVar8 != 0) {
        if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar9 = *(int *)(iStack_2c + 8);
        uVar10 = *(uint *)(iStack_2c + 0xc);
        piVar4 = *(int **)(_UNK_0101b1c0 + 0x101ae8c);
        *(int *)(iStack_2c + 0x10) = *(int *)(iStack_2c + 0x10) + 1;
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar10 < *(uint *)(iVar9 + 0xc)) {
          *(uint *)(iStack_2c + 0xc) = uVar10 + 1;
          piVar4 = (int *)(iVar9 + uVar10 * 4 + 0x10);
          *piVar4 = iVar8;
          thunk_FUN_00ec5080(piVar4,iVar8);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_267dae0
                    (iStack_2c,iVar8,
                     *(undefined4 *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38));
        }
      }
      uVar7 = uVar7 + 1;
    }
    piVar4 = *(int **)(_UNK_0101b1c4 + 0x101af6c);
    iVar2 = *piVar4;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar4;
    }
    puVar1 = *(undefined4 **)(iVar2 + 0x5c);
    iVar9 = puVar1[0xd];
    if (iVar9 == 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        puVar1 = *(undefined4 **)(*piVar4 + 0x5c);
      }
      uVar3 = *puVar1;
      iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101b1c8 + 0x101afc8));
      System_Comparison_object____ctor_1f2562c
                (iVar9,uVar3,**(undefined4 **)(_UNK_0101b1cc + 0x101afdc),0);
      piVar4 = (int *)(*(int *)(*piVar4 + 0x5c) + 0x34);
      *piVar4 = iVar9;
      thunk_FUN_00ec5080(piVar4,iVar9);
    }
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___Sort_267f704
              (iVar8,iVar9,**(undefined4 **)(_UNK_0101b1d0 + 0x101b018));
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_Scripts_DockManager__GetPlayOnBlasterCount_1007594
                      (iVar6,*(undefined4 *)(iStack_28 + 0x18));
    if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar2 < *(int *)(iStack_2c + 0xc)) {
      if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_object___RemoveRange_267f49c
                (iStack_2c,iVar2,*(int *)(iStack_2c + 0xc) - iVar2,
                 **(undefined4 **)(_UNK_0101b1d4 + 0x101b08c));
    }
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = Rotatelab_Scripts_DockManager__MoveBlastersToGhostDocksCoroutine_1006c3c
                      (iVar6,iStack_2c);
    *(undefined4 *)(iStack_28 + 0xc) = uVar3;
    thunk_FUN_00ec5080();
    uVar3 = 1;
    *(undefined4 *)(iStack_28 + 8) = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

