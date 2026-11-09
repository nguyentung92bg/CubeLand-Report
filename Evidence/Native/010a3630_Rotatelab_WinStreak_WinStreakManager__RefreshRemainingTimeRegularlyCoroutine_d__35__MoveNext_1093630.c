/* IL2CPP: Rotatelab.WinStreak.WinStreakManager.<RefreshRemainingTimeRegularlyCoroutine>d__35$$MoveNext
bool Rotatelab_WinStreak_WinStreakManager__RefreshRemainingTimeRegularlyCoroutine_d__35__MoveNext (Rotatelab_WinStreak_WinStreakManager__RefreshRemainingTimeRegularlyCoroutine_d__35_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.WinStreak.WinStreakManager.<RefreshRemainingTimeRegularlyCoroutine>d__35$$MoveNext
   bool Rotatelab_WinStreak_WinStreakManager__RefreshRemainingTimeRegularlyCoroutine_d__35__MoveNext
   (Rotatelab_WinStreak_WinStreakManager__RefreshRemainingTimeRegularlyCoroutine_d__35_o* __this,
   const MethodInfo* method); */

undefined4
Rotatelab_WinStreak_WinStreakManager__RefreshRemainingTimeRegularlyCoroutine_d__35__MoveNext_1093630
          (int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  double dVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_010a39c0 + 0x10a3648);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a39c4 + 0x10a365c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a39c8 + 0x10a3668));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a39cc + 0x10a3674));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a39d0 + 0x10a3680));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a39d4 + 0x10a368c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a39d8 + 0x10a3698));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a39dc + 0x10a36a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a39e0 + 0x10a36b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a39e4 + 0x10a36bc));
    *pcVar4 = '\x01';
  }
  uVar1 = 0;
  iVar5 = *(int *)(param_1 + 0x10);
  uStack_24 = 0;
  uStack_28 = 0;
  if (*(uint *)(param_1 + 8) < 3) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(iVar5 + 0x44) == '\0') {
      if (*(int *)(**(int **)(_UNK_010a39e8 + 0x10a3814) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar1 = Rotatelab_BetterWaitForSeconds__WaitRealtime_107c72c(0x3f800000,0);
      *(undefined4 *)(param_1 + 0xc) = uVar1;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar1);
      uVar1 = 1;
      *(undefined4 *)(param_1 + 8) = 1;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar8 = *(undefined4 *)(param_1 + 0x1c);
      if (*(int *)(**(int **)(_UNK_010a39ec + 0x10a370c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      System_DateTime__get_Now_2b4a124(&uStack_30,0);
      System_DateTime__op_Subtraction_2b4c068
                (&uStack_28,uStack_2c,uVar1,uVar8,uStack_30,uStack_2c,0);
      if (*(int *)(**(int **)(_UNK_010a39f0 + 0x10a3758) + 0x74) == 0) {
        FUN_00ec3934();
      }
      dVar10 = (double)System_TimeSpan__get_TotalSeconds_2b89cf0(&uStack_28,0);
      if (dVar10 <= 0.0) {
        piVar6 = *(int **)(_UNK_010a39f4 + 0x10a3858);
        uVar1 = *(undefined4 *)(iVar5 + 0x28);
        iVar2 = *piVar6;
        if (*(int *)(iVar2 + 0x74) == 0) {
          FUN_00ec3934();
          iVar2 = *piVar6;
        }
        puVar3 = *(undefined4 **)(iVar2 + 0x5c);
        iVar7 = puVar3[3];
        if (iVar7 == 0) {
          if (*(int *)(iVar2 + 0x74) == 0) {
            FUN_00ec3934();
            puVar3 = *(undefined4 **)(*piVar6 + 0x5c);
          }
          uVar8 = *puVar3;
          iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a39f8 + 0x10a38a4));
          System_Action_object____ctor_1f11414
                    (iVar7,uVar8,**(undefined4 **)(_UNK_010a39fc + 0x10a38c4),0);
          piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 0xc);
          *piVar6 = iVar7;
          thunk_FUN_00ec5080(piVar6,iVar7);
        }
        if (*(int *)(**(int **)(_UNK_010a3a00 + 0x10a38ec) + 0x74) == 0) {
          FUN_00ec3934();
        }
        Rotatelab_Extensions__ForEach_object__1487260
                  (uVar1,iVar7,**(undefined4 **)(_UNK_010a3a04 + 0x10a390c));
        Rotatelab_WinStreak_WinStreakManager__Refresh_10921e0(iVar5);
        uVar1 = 0;
      }
      else {
        iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_010a3a08 + 0x10a3790));
        uVar8 = uStack_24;
        uVar1 = uStack_28;
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(*(int *)(iVar2 + 0x14) + 0x10) == 0) {
          if (*(int *)(**(int **)(_UNK_010a3a0c + 0x10a3934) + 0x74) == 0) {
            FUN_00ec3934();
          }
          uVar9 = 0;
          uVar1 = Rotatelab_Extensions__GetTimeText_fc3638(uVar1,uVar8,0);
          iVar5 = *(int *)(iVar5 + 0x28);
          while( true ) {
            if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if ((int)*(uint *)(iVar5 + 0xc) <= (int)uVar9) break;
            if (*(uint *)(iVar5 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f07924();
            }
            piVar6 = *(int **)(iVar5 + 0x10 + uVar9 * 4);
            if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            (**(code **)(*piVar6 + 0x2b0))(piVar6,uVar1,*(undefined4 *)(*piVar6 + 0x2b4));
            uVar9 = uVar9 + 1;
          }
        }
        if (*(int *)(**(int **)(_UNK_010a3a10 + 0x10a37cc) + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar1 = Rotatelab_BetterWaitForSeconds__WaitRealtime_107c72c(0x3f800000,0);
        *(undefined4 *)(param_1 + 0xc) = uVar1;
        thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar1);
        *(undefined4 *)(param_1 + 8) = 2;
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

