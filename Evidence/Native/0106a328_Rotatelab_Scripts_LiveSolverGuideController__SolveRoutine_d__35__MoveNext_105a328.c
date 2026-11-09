/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController.<SolveRoutine>d__35$$MoveNext
bool Rotatelab_Scripts_LiveSolverGuideController__SolveRoutine_d__35__MoveNext (Rotatelab_Scripts_LiveSolverGuideController__SolveRoutine_d__35_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController.<SolveRoutine>d__35$$MoveNext
   bool Rotatelab_Scripts_LiveSolverGuideController__SolveRoutine_d__35__MoveNext
   (Rotatelab_Scripts_LiveSolverGuideController__SolveRoutine_d__35_o* __this, const MethodInfo*
   method); */

undefined4
Rotatelab_Scripts_LiveSolverGuideController__SolveRoutine_d__35__MoveNext_105a328(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  
  pcVar8 = (char *)(_UNK_0106a640 + 0x106a340);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a644 + 0x106a354));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a648 + 0x106a360));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a64c + 0x106a36c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a650 + 0x106a378));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a654 + 0x106a384));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a658 + 0x106a390));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a65c + 0x106a39c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a660 + 0x106a3a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a664 + 0x106a3b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a668 + 0x106a3c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a66c + 0x106a3cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a670 + 0x106a3d8));
    *pcVar8 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar9 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar9 + 0x34) = 0;
    thunk_FUN_00ec5080((undefined4 *)(iVar9 + 0x34),0);
    puVar2 = (undefined4 *)(iVar9 + 0x38);
    *puVar2 = 0;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
      *(undefined4 *)(param_1 + 8) = 1;
      return 1;
    }
    puVar2 = *(undefined4 **)(_UNK_0106a674 + 0x106a43c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar2);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = *(undefined4 *)(iVar1 + 0x18);
    if (*(int *)(**(int **)(_UNK_0106a678 + 0x106a460) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar10,0,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_0106a67c + 0x106a4ec) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar10 = Rotatelab_Scripts_LiveSnapshotBuilder__BuildLevel_1053d28();
      uVar3 = Rotatelab_Scripts_LiveSnapshotBuilder__CollectShootableCells_1058248();
      if (iVar9 != 0) {
        iVar1 = *(int *)(iVar9 + 0x3c);
        puVar2 = *(undefined4 **)(_UNK_0106a680 + 0x106a52c);
        *(int *)(iVar9 + 0x3c) = iVar1 + 1;
        uVar4 = thunk_FUN_00f00cdc(*puVar2);
        System_Action_object____ctor_1f11414
                  (uVar4,iVar9,**(undefined4 **)(_UNK_0106a684 + 0x106a54c),0);
        uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106a688 + 0x106a560));
        System_Action_object____ctor_1f11414
                  (uVar5,iVar9,**(undefined4 **)(_UNK_0106a68c + 0x106a57c),0);
        uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106a690 + 0x106a590));
        System_Action_object____ctor_1f11414
                  (uVar6,iVar9,**(undefined4 **)(_UNK_0106a694 + 0x106a5ac),0);
        uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106a698 + 0x106a5c0));
        System_Action_object____ctor_1f11414
                  (uVar7,iVar9,**(undefined4 **)(_UNK_0106a69c + 0x106a5dc),0);
        if (*(int *)(**(int **)(_UNK_0106a6a0 + 0x106a5f0) + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar10 = Rotatelab_Scripts_RemoteSolverClient__Solve_105a6a4
                           (uVar10,uVar3,iVar1,uVar4,uVar5,uVar6,uVar7);
        *(undefined4 *)(param_1 + 0xc) = uVar10;
        thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar10);
        *(undefined4 *)(param_1 + 8) = 2;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar2 = (undefined4 *)(iVar9 + 0x34);
    *puVar2 = 0;
  }
  thunk_FUN_00ec5080(puVar2,0);
  return 0;
}

