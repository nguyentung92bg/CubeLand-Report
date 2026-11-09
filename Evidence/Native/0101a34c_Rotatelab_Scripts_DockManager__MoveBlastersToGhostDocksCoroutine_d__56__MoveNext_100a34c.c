/* IL2CPP: Rotatelab.Scripts.DockManager.<MoveBlastersToGhostDocksCoroutine>d__56$$MoveNext
bool Rotatelab_Scripts_DockManager__MoveBlastersToGhostDocksCoroutine_d__56__MoveNext (Rotatelab_Scripts_DockManager__MoveBlastersToGhostDocksCoroutine_d__56_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager.<MoveBlastersToGhostDocksCoroutine>d__56$$MoveNext
   bool Rotatelab_Scripts_DockManager__MoveBlastersToGhostDocksCoroutine_d__56__MoveNext
   (Rotatelab_Scripts_DockManager__MoveBlastersToGhostDocksCoroutine_d__56_o* __this, const
   MethodInfo* method); */

undefined4
Rotatelab_Scripts_DockManager__MoveBlastersToGhostDocksCoroutine_d__56__MoveNext_100a34c
          (int param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar2 = (char *)(_UNK_0101a9cc + 0x101a368);
  iStack_28 = param_1;
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101a9d0 + 0x101a37c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101a9d4 + 0x101a388));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101a9d8 + 0x101a394));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101a9dc + 0x101a3a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101a9e0 + 0x101a3ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101a9e4 + 0x101a3b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101a9e8 + 0x101a3c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101a9ec + 0x101a3d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101a9f0 + 0x101a3dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101a9f4 + 0x101a3e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101a9f8 + 0x101a3f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101a9fc + 0x101a400));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101aa00 + 0x101a40c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101aa04 + 0x101a418));
    *pcVar2 = '\x01';
  }
  uVar9 = 0;
  iVar8 = *(int *)(param_1 + 0x14);
  piStack_30 = &iStack_28;
  uStack_2c = 0;
  uStack_34 = 0;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    puVar4 = *(undefined4 **)(&UNK_0101a470 + _UNK_0101aa08);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar1 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c(*puVar4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar9 = Rotatelab_UI_UIInputBlocker__BlockInputWithinScope_112443c(iVar1,0);
    *(undefined4 *)(iStack_28 + 0x18) = uVar9;
    thunk_FUN_00ec5080();
    *(undefined4 *)(iStack_28 + 8) = 0xfffffffd;
    if (*(int *)(iStack_28 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_58,*(int *)(iStack_28 + 0x10),
               **(undefined4 **)(&UNK_0101a4cc + _UNK_0101aa0c));
    uStack_48 = uStack_58;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    *(undefined4 *)(iStack_28 + 0x1c) = uStack_58;
    *(undefined4 *)(iStack_28 + 0x20) = uStack_54;
    *(undefined4 *)(iStack_28 + 0x24) = uStack_50;
    *(undefined4 *)(iStack_28 + 0x28) = uStack_4c;
    thunk_FUN_00ec5080((undefined4 *)(iStack_28 + 0x1c),0);
    *(undefined4 *)(iStack_28 + 8) = 0xfffffffc;
    break;
  case 1:
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
    goto code_r0x0101a6a4;
  case 2:
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x2c),0);
    break;
  case 3:
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    Rotatelab_Scripts_DockManager__MoveBlastersToGhostDocksCoroutine_d__56____m__Finally1_100aaa8
              (param_1);
  default:
    goto LAB_0101a66c;
  }
  while( true ) {
    puVar4 = *(undefined4 **)(&UNK_0101a740 + _UNK_0101aa38);
    piVar7 = *(int **)(&UNK_0101a748 + _UNK_0101aa3c);
    puVar10 = *(undefined4 **)(&UNK_0101a750 + _UNK_0101aa40);
    piVar3 = *(int **)(&UNK_0101a758 + _UNK_0101aa44);
    while( true ) {
      iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                        (iStack_28 + 0x1c,*puVar4);
      if (iVar1 == 0) {
        Rotatelab_Scripts_DockManager__MoveBlastersToGhostDocksCoroutine_d__56____m__Finally2_100aa4c
                  ();
        piVar3 = *(int **)(&UNK_0101a628 + _UNK_0101aa48);
        *(undefined4 *)(iStack_28 + 0x1c) = 0;
        *(undefined4 *)(iStack_28 + 0x20) =
             *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        *(undefined4 *)(iStack_28 + 0x24) =
             *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        *(undefined4 *)(iStack_28 + 0x28) =
             *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        if (*(int *)(*piVar3 + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar9 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3e99999a,0);
        *(undefined4 *)(iStack_28 + 0xc) = uVar9;
        thunk_FUN_00ec5080();
        uVar9 = 3;
        goto code_r0x0101a664;
      }
      *(undefined4 *)(iStack_28 + 0x2c) = *(undefined4 *)(iStack_28 + 0x28);
      thunk_FUN_00ec5080();
      if (*(int *)(iStack_28 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(char *)(*(int *)(iStack_28 + 0x2c) + 0xc1) == '\0') break;
      if (*(int *)(*piVar7 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar9 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
      uVar9 = System_String__Format_29ffb6c(*puVar10,uVar9,0);
      uVar5 = *(undefined4 *)(iStack_28 + 0x2c);
      if (*(int *)(*piVar3 + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Debug__LogWarning_35b28b4(uVar9,uVar5,0);
    }
    if (*(int *)(iStack_28 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Scripts_BlasterController__get_IsConnected_1030fd0
                      (*(int *)(iStack_28 + 0x2c),0);
    param_1 = iStack_28;
    if (iVar1 != 0) {
      if (*(int *)(iStack_28 + 0x2c) != 0) {
        Rotatelab_Scripts_BlasterController__BreakAllConnections_10329f4
                  (*(int *)(iStack_28 + 0x2c),0);
        if (*(int *)(**(int **)(&UNK_0101a8e0 + _UNK_0101aa10) + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar9 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3e99999a,0);
        *(undefined4 *)(iStack_28 + 0xc) = uVar9;
        thunk_FUN_00ec5080();
        *(undefined4 *)(iStack_28 + 8) = 1;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
code_r0x0101a6a4:
    if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(*(int *)(param_1 + 0x2c) + 0xc1) == '\0') break;
    if (*(int *)(**(int **)(&UNK_0101a6cc + _UNK_0101aa14) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar9 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
    uVar9 = System_String__Format_29ffb6c(**(undefined4 **)(&UNK_0101a6f4 + _UNK_0101aa18),uVar9,0);
    uVar5 = *(undefined4 *)(iStack_28 + 0x2c);
    if (*(int *)(**(int **)(&UNK_0101a710 + _UNK_0101aa1c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Debug__LogWarning_35b28b4(uVar9,uVar5,0);
  }
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar3 = *(int **)(&UNK_0101a770 + _UNK_0101aa20);
  uVar9 = *(undefined4 *)(iVar8 + 0x48);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  puVar4 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar4[10];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar4 = *(undefined4 **)(*piVar3 + 0x5c);
    }
    uVar5 = *puVar4;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(&UNK_0101a7c0 + _UNK_0101aa24));
    System_Predicate_object____ctor_1876380
              (iVar6,uVar5,**(undefined4 **)(&UNK_0101a7d4 + _UNK_0101aa28),0);
    piVar3 = (int *)(*(int *)(*piVar3 + 0x5c) + 0x28);
    *piVar3 = iVar6;
    thunk_FUN_00ec5080(piVar3,iVar6);
  }
  if (*(int *)(**(int **)(&UNK_0101a804 + _UNK_0101aa2c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__TryFind_object__14899b0
                    (uVar9,iVar6,&uStack_2c,**(undefined4 **)(&UNK_0101a820 + _UNK_0101aa30));
  if (iVar1 != 0) {
    piVar3 = *(int **)(iStack_28 + 0x2c);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar3 + 0x130))(piVar3,uStack_2c,*(undefined4 *)(*piVar3 + 0x134));
    Rotatelab_Scripts_DockManager__RefreshGhostDockVisuals_10071e8(iVar8);
  }
  if (*(int *)(**(int **)(&UNK_0101a87c + _UNK_0101aa34) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar9 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3e4ccccd,0);
  *(undefined4 *)(iStack_28 + 0xc) = uVar9;
  thunk_FUN_00ec5080();
  uVar9 = 2;
code_r0x0101a664:
  *(undefined4 *)(iStack_28 + 8) = uVar9;
  uVar9 = 1;
LAB_0101a66c:
  return uVar9;
}

