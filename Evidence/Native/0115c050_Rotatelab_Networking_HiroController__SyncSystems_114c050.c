/* IL2CPP: Rotatelab.Networking.HiroController$$SyncSystems
void Rotatelab_Networking_HiroController__SyncSystems (Rotatelab_Networking_HiroController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$SyncSystems
   void Rotatelab_Networking_HiroController__SyncSystems (Rotatelab_Networking_HiroController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Networking_HiroController__SyncSystems_114c050(void)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piStack_38;
  undefined4 uStack_34;
  undefined4 uStack_28;
  int *in_stack_fffffff0;
  undefined4 in_stack_fffffff4;
  
  pcVar8 = (char *)(_UNK_0115c0c4 + 0x115c064);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115c0c8 + 0x115c078));
    *pcVar8 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0115c0cc + 0x115c08c));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Networking_CloudSaveManager__SendToRemoteAsync_1143a20(&stack0xfffffff0,iVar2,0);
  pcVar8 = (char *)(_UNK_0322e2a4 + 0x322dea4);
  if (*pcVar8 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2a8 + 0x322deb8),in_stack_fffffff4,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2ac + 0x322dec4));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2b0 + 0x322ded0));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2b4 + 0x322dedc));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2b8 + 0x322dee8));
    *pcVar8 = '\x01';
  }
  piVar9 = *(int **)(_UNK_0322e2bc + 0x322df00);
  uStack_28 = 0;
  if (*(int *)(*piVar9 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  piStack_38 = in_stack_fffffff0;
  uStack_34 = in_stack_fffffff4;
  thunk_FUN_00ec5080(&piStack_38,0);
  pcVar8 = (char *)(_UNK_0322e2c0 + 0x322df38);
  if (*pcVar8 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2c4 + 0x322df50));
    *pcVar8 = '\x01';
  }
  if (*(int *)(*piVar9 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar8 = (char *)(_UNK_0322e2c8 + 0x322df78);
  if (*pcVar8 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2cc + 0x322df8c));
    *pcVar8 = '\x01';
  }
  sVar1 = (short)uStack_34;
  if (piStack_38 != (int *)0x0) {
    iVar2 = *piStack_38;
    piVar9 = *(int **)(_UNK_0322e2d0 + 0x322dfac);
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    iVar4 = *piVar9;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar4) {
          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_0322dff4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)thunk_FUN_00efdb38(piStack_38,iVar4,0);
LAB_0322dff4:
    iVar2 = (*(code *)*puVar3)(piStack_38,(int)sVar1,puVar3[1]);
    if (iVar2 == 0) {
      piVar7 = *(int **)(_UNK_0322e2e8 + 0x322e0a0);
      iVar2 = *piVar7;
      if (*(int *)(iVar2 + 0x74) == 0) {
        thunk_FUN_00ec3934();
        iVar2 = *piVar7;
      }
      puVar3 = *(undefined4 **)(iVar2 + 0x5c);
      iVar4 = puVar3[2];
      if (iVar4 == 0) {
        if (*(int *)(iVar2 + 0x74) == 0) {
          thunk_FUN_00ec3934();
          puVar3 = *(undefined4 **)(*piVar7 + 0x5c);
        }
        uVar10 = *puVar3;
        iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0322e2ec + 0x322e0e8));
        System_Action_object____ctor_1f11414
                  (iVar4,uVar10,**(undefined4 **)(_UNK_0322e2f0 + 0x322e108),0);
        piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 8);
        *piVar7 = iVar4;
        thunk_FUN_00ec5080(piVar7,iVar4);
      }
      uVar10 = Cysharp_Threading_Tasks_Internal_StateTuple__Create_UniTask_Awaiter__15bd574
                         (piStack_38,uStack_34,**(undefined4 **)(_UNK_0322e2f4 + 0x322e134));
      pcVar8 = (char *)(_UNK_0322e2f8 + 0x322e14c);
      if (*pcVar8 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2fc + 0x322e160));
        *pcVar8 = '\x01';
      }
      iVar2 = *piStack_38;
      iVar5 = *piVar9;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar9[-1] == iVar5) {
            puVar3 = (undefined4 *)(iVar2 + *piVar9 * 8 + 200);
            goto LAB_0322e1dc;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)thunk_FUN_00efdb38(piStack_38,iVar5,1);
LAB_0322e1dc:
      (*(code *)*puVar3)(piStack_38,iVar4,uVar10,(int)sVar1,puVar3[1]);
      return;
    }
  }
  pcVar8 = (char *)(_UNK_0322e2d4 + 0x322e024);
  if (*pcVar8 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2d8 + 0x322e038));
    *pcVar8 = '\x01';
  }
  if (piStack_38 != (int *)0x0) {
    iVar2 = *piStack_38;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_0322e2dc + 0x322e058)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xd0);
          goto LAB_0322e1b8;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)thunk_FUN_00efdb38(piStack_38,**(int **)(_UNK_0322e2dc + 0x322e058),2);
LAB_0322e1b8:
    (*(code *)*puVar3)(piStack_38,(int)sVar1,puVar3[1]);
  }
  return;
}

