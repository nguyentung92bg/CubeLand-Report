/* IL2CPP: Rotatelab.RemoteConfigManager$$TryRefreshSatoriFlagsOnLevelThreshold
void Rotatelab_RemoteConfigManager__TryRefreshSatoriFlagsOnLevelThreshold (Rotatelab_RemoteConfigManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager$$TryRefreshSatoriFlagsOnLevelThreshold
   void Rotatelab_RemoteConfigManager__TryRefreshSatoriFlagsOnLevelThreshold
   (Rotatelab_RemoteConfigManager_o* __this, const MethodInfo* method); */

void Rotatelab_RemoteConfigManager__TryRefreshSatoriFlagsOnLevelThreshold_10749fc(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  int *piStack_38;
  undefined4 uStack_34;
  undefined4 uStack_28;
  int *in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  pcVar8 = (char *)(_UNK_01084ac4 + 0x1084a14);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01084ac8 + 0x1084a28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01084acc + 0x1084a34));
    *pcVar8 = '\x01';
  }
  iVar9 = *(int *)(param_1 + 0x94);
  if (*(int *)(**(int **)(_UNK_01084ad0 + 0x1084a48) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  uVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar9 = System_Collections_Generic_HashSet_int___Remove_24181e0
                    (iVar9,uVar2,**(undefined4 **)(_UNK_01084ad4 + 0x1084a8c));
  if (iVar9 == 0) {
    return;
  }
  Rotatelab_RemoteConfigManager__RefreshSatoriFlagsAsync_10747f4(&stack0xffffffe8,param_1);
  pcVar8 = (char *)(_UNK_0322e2a4 + 0x322dea4);
  if (*pcVar8 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2a8 + 0x322deb8),in_stack_ffffffec,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2ac + 0x322dec4));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2b0 + 0x322ded0));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2b4 + 0x322dedc));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2b8 + 0x322dee8));
    *pcVar8 = '\x01';
  }
  piVar10 = *(int **)(_UNK_0322e2bc + 0x322df00);
  uStack_28 = 0;
  if (*(int *)(*piVar10 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  piStack_38 = in_stack_ffffffe8;
  uStack_34 = in_stack_ffffffec;
  thunk_FUN_00ec5080(&piStack_38,0);
  pcVar8 = (char *)(_UNK_0322e2c0 + 0x322df38);
  if (*pcVar8 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2c4 + 0x322df50));
    *pcVar8 = '\x01';
  }
  if (*(int *)(*piVar10 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar8 = (char *)(_UNK_0322e2c8 + 0x322df78);
  if (*pcVar8 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2cc + 0x322df8c));
    *pcVar8 = '\x01';
  }
  sVar1 = (short)uStack_34;
  if (piStack_38 != (int *)0x0) {
    iVar9 = *piStack_38;
    piVar10 = *(int **)(_UNK_0322e2d0 + 0x322dfac);
    uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
    iVar4 = *piVar10;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar4) {
          puVar3 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
          goto LAB_0322dff4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)thunk_FUN_00efdb38(piStack_38,iVar4,0);
LAB_0322dff4:
    iVar9 = (*(code *)*puVar3)(piStack_38,(int)sVar1,puVar3[1]);
    if (iVar9 == 0) {
      piVar7 = *(int **)(_UNK_0322e2e8 + 0x322e0a0);
      iVar9 = *piVar7;
      if (*(int *)(iVar9 + 0x74) == 0) {
        thunk_FUN_00ec3934();
        iVar9 = *piVar7;
      }
      puVar3 = *(undefined4 **)(iVar9 + 0x5c);
      iVar4 = puVar3[2];
      if (iVar4 == 0) {
        if (*(int *)(iVar9 + 0x74) == 0) {
          thunk_FUN_00ec3934();
          puVar3 = *(undefined4 **)(*piVar7 + 0x5c);
        }
        uVar2 = *puVar3;
        iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0322e2ec + 0x322e0e8));
        System_Action_object____ctor_1f11414
                  (iVar4,uVar2,**(undefined4 **)(_UNK_0322e2f0 + 0x322e108),0);
        piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 8);
        *piVar7 = iVar4;
        thunk_FUN_00ec5080(piVar7,iVar4);
      }
      uVar2 = Cysharp_Threading_Tasks_Internal_StateTuple__Create_UniTask_Awaiter__15bd574
                        (piStack_38,uStack_34,**(undefined4 **)(_UNK_0322e2f4 + 0x322e134));
      pcVar8 = (char *)(_UNK_0322e2f8 + 0x322e14c);
      if (*pcVar8 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2fc + 0x322e160));
        *pcVar8 = '\x01';
      }
      iVar9 = *piStack_38;
      iVar5 = *piVar10;
      uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar10[-1] == iVar5) {
            puVar3 = (undefined4 *)(iVar9 + *piVar10 * 8 + 200);
            goto LAB_0322e1dc;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)thunk_FUN_00efdb38(piStack_38,iVar5,1);
LAB_0322e1dc:
      (*(code *)*puVar3)(piStack_38,iVar4,uVar2,(int)sVar1,puVar3[1]);
      return;
    }
  }
  pcVar8 = (char *)(_UNK_0322e2d4 + 0x322e024);
  if (*pcVar8 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2d8 + 0x322e038));
    *pcVar8 = '\x01';
  }
  if (piStack_38 != (int *)0x0) {
    iVar9 = *piStack_38;
    uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_0322e2dc + 0x322e058)) {
          puVar3 = (undefined4 *)(iVar9 + *piVar10 * 8 + 0xd0);
          goto LAB_0322e1b8;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)thunk_FUN_00efdb38(piStack_38,**(int **)(_UNK_0322e2dc + 0x322e058),2);
LAB_0322e1b8:
    (*(code *)*puVar3)(piStack_38,(int)sVar1,puVar3[1]);
  }
  return;
}

