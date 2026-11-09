/* IL2CPP: Rotatelab.Scripts.LevelManager.<InitializeAsync>d__31$$MoveNext
void Rotatelab_Scripts_LevelManager__InitializeAsync_d__31__MoveNext (Rotatelab_Scripts_LevelManager__InitializeAsync_d__31_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager.<InitializeAsync>d__31$$MoveNext
   void Rotatelab_Scripts_LevelManager__InitializeAsync_d__31__MoveNext
   (Rotatelab_Scripts_LevelManager__InitializeAsync_d__31_o __this, const MethodInfo* method); */

void Rotatelab_Scripts_LevelManager__InitializeAsync_d__31__MoveNext_106aaf0(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  longlong lVar14;
  undefined8 uStack_60;
  int iStack_58;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  int iStack_40;
  undefined8 uStack_38;
  int iStack_30;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar8 = (char *)(_UNK_0107b544 + 0x107ab08);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107b548 + 0x107ab1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107b54c + 0x107ab28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107b550 + 0x107ab34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107b554 + 0x107ab40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107b558 + 0x107ab4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107b55c + 0x107ab58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107b560 + 0x107ab64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107b564 + 0x107ab70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107b568 + 0x107ab7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107b56c + 0x107ab88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107b570 + 0x107ab94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107b574 + 0x107aba0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107b578 + 0x107abac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107b57c + 0x107abb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107b580 + 0x107abc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107b584 + 0x107abd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107b588 + 0x107abdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107b58c + 0x107abe8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107b590 + 0x107abf4));
    *pcVar8 = '\x01';
  }
  iVar10 = param_1[3];
  iStack_24 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  iStack_30 = 0;
  uStack_48 = 0;
  iStack_40 = 0;
  uStack_4c = 0;
  if (*param_1 == 0) {
    *param_1 = -1;
    iStack_24 = param_1[4];
    param_1[4] = 0;
LAB_0107b014:
    Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_321c1ec(&iStack_24,0);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = Rotatelab_Scripts_LevelManager__get_CurrentLevelIndex_106645c();
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_LevelManager__LoadLevelDataAsync_1066564(&uStack_60,iVar10,uVar5,1);
    iStack_40 = iStack_58;
    uStack_48 = uStack_60;
    uStack_60 = 0;
    iStack_58 = 0;
    if ((*(byte *)(*(int *)(**(int **)(_UNK_0107b5c0 + 0x107b06c) + 0x10) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    iStack_58 = iStack_40;
    uStack_60 = uStack_48;
    thunk_FUN_00ec5080(&uStack_60,0);
    iStack_30 = iStack_58;
    uStack_38 = uStack_60;
    iVar2 = *(int *)(**(int **)(_UNK_0107b5c4 + 0x107b0c4) + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    piVar9 = (int *)uStack_38;
    if ((int *)uStack_38 != (int *)0x0) {
      iVar13 = (int)(short)iStack_30;
      iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0x60) + 0xc) + 0x10);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = FUN_00efd768();
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 4);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = FUN_00efd768(iVar2);
      }
      iVar3 = *piVar9;
      uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar2) {
            puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 200);
            goto LAB_0107b1a8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piVar9,iVar2,1);
LAB_0107b1a8:
      iVar2 = (*(code *)*puVar4)(piVar9,iVar13,puVar4[1]);
      if (iVar2 == 0) {
        *param_1 = 1;
        param_1[7] = iStack_30;
        *(undefined8 *)(param_1 + 5) = uStack_38;
        thunk_FUN_00ec5080(param_1 + 5,0);
        func_0x01080b64(param_1 + 1,&uStack_38,param_1,**(undefined4 **)(_UNK_0107b5c8 + 0x107b28c))
        ;
        return;
      }
      goto LAB_0107b1c8;
    }
  }
  else {
    if (*param_1 != 1) {
      piVar9 = *(int **)(_UNK_0107b594 + 0x107ac90);
      iVar2 = *piVar9;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar9;
      }
      iVar2 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                        (**(undefined4 **)(iVar2 + 0x5c),
                         **(undefined4 **)(_UNK_0107b598 + 0x107acb4));
      if (iVar2 != 0) {
        if (*(int *)(*piVar9 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar2 = Rotatelab_Scripts_LevelManager__get_IsInRoundMode_105fc68();
        if (iVar2 == 0) {
          piVar7 = *(int **)(_UNK_0107b59c + 0x107ad64);
          iVar2 = *piVar7;
          if (*(int *)(iVar2 + 0x74) == 0) {
            FUN_00ec3934();
            iVar2 = *piVar7;
          }
          if (**(int **)(iVar2 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          Rotatelab_GameAction__Raise_fc08b8(**(int **)(iVar2 + 0x5c),0);
          if (*(int *)(*piVar9 + 0x74) == 0) {
            FUN_00ec3934();
          }
          iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          piVar7 = *(int **)(iVar2 + 0x18);
          if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          lVar14 = (**(code **)(*piVar7 + 0xf0))(piVar7,*(undefined4 *)(*piVar7 + 0xf4));
          (**(code **)(*piVar7 + 0xf8))
                    (piVar7,(int)((ulonglong)lVar14 >> 0x20),(int)(lVar14 + 1),
                     (int)((ulonglong)(lVar14 + 1) >> 0x20),*(undefined4 *)(*piVar7 + 0xfc));
        }
        else {
          if (*(int *)(*piVar9 + 0x74) == 0) {
            FUN_00ec3934();
          }
          iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          piVar7 = *(int **)(iVar2 + 0x1c);
          if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          lVar14 = (**(code **)(*piVar7 + 0xf0))(piVar7,*(undefined4 *)(*piVar7 + 0xf4));
          (**(code **)(*piVar7 + 0xf8))
                    (piVar7,(int)((ulonglong)lVar14 >> 0x20),(int)(lVar14 + 1),
                     (int)((ulonglong)(lVar14 + 1) >> 0x20),*(undefined4 *)(*piVar7 + 0xfc));
        }
        iVar2 = *piVar9;
        if (*(int *)(iVar2 + 0x74) == 0) {
          FUN_00ec3934();
          iVar2 = *piVar9;
        }
        if (**(int **)(iVar2 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Save_SavedValue_bool___set_Value_1a8af9c
                  (**(int **)(iVar2 + 0x5c),0,**(undefined4 **)(_UNK_0107b5a0 + 0x107ae40));
      }
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Scripts_LevelManager__RefreshLevelsData_1067ff8(iVar10);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar1 = Rotatelab_Scripts_LevelManager__get_IsInRoundMode_105fc68();
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(undefined1 *)(iVar10 + 0x10) = uVar1;
      Rotatelab_Scripts_LevelManager__RefreshRoundMode_10685a0(iVar10);
      Rotatelab_Scripts_LevelManager__OnSatoriFlagsRefreshed_10682dc(iVar10);
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0107b5a4 + 0x107aea8));
      piVar9 = *(int **)(_UNK_0107b5a8 + 0x107aebc);
      uVar5 = thunk_FUN_00f00cdc(*piVar9);
      System_Action___ctor_2b10bac(uVar5,iVar10,**(undefined4 **)(_UNK_0107b5ac + 0x107aed0),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_RemoteConfigManager__add_OnSatoriFlagsRefreshed_1073b50(iVar2,uVar5,0);
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0107b5b0 + 0x107af08));
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar11 = (int *)(iVar2 + 0x20);
      iVar2 = *piVar11;
      uVar5 = thunk_FUN_00f00cdc(*piVar9);
      System_Action___ctor_2b10bac(uVar5,iVar10,**(undefined4 **)(_UNK_0107b5b4 + 0x107af38),0);
      piVar7 = (int *)System_Delegate__Combine_2bbca94(iVar2,uVar5,0);
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
        *piVar11 = 0;
      }
      else {
        iVar2 = *piVar9;
        if (*piVar7 != iVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00ec3e28(piVar7);
        }
        *piVar11 = (int)piVar7;
        if (*piVar7 != iVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00ec3e28(piVar7);
        }
      }
      thunk_FUN_00ec5080(piVar11,piVar7);
      if (*(int *)(**(int **)(_UNK_0107b5b8 + 0x107afd4) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uStack_28 = Cysharp_Threading_Tasks_UniTask__Yield_3216554(0);
      iStack_24 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_321c1d4(&uStack_28,0);
      iVar2 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_321c1e4(&iStack_24,0);
      if (iVar2 == 0) {
        uVar5 = **(undefined4 **)(_UNK_0107b5bc + 0x107b17c);
        *param_1 = 0;
        param_1[4] = iStack_24;
        func_0x01080a44(param_1 + 1,&iStack_24,param_1,uVar5);
        return;
      }
      goto LAB_0107b014;
    }
    uStack_38 = *(undefined8 *)(param_1 + 5);
    iStack_30 = param_1[7];
    *param_1 = -1;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[7] = 0;
    piVar9 = (int *)uStack_38;
LAB_0107b1c8:
    if (piVar9 != (int *)0x0) {
      iVar13 = (int)(short)iStack_30;
      iVar2 = *(int *)(**(int **)(_UNK_0107b5cc + 0x107b1dc) + 0x10);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = FUN_00efd768();
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x14);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = FUN_00efd768(iVar2);
      }
      iVar3 = *piVar9;
      uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar2) {
            puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
            goto LAB_0107b2ac;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piVar9,iVar2,0);
LAB_0107b2ac:
      uVar5 = (*(code *)*puVar4)(piVar9,iVar13,puVar4[1]);
      goto LAB_0107b2c8;
    }
  }
  uVar5 = uStack_38._4_4_;
LAB_0107b2c8:
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar10 + 0x18) = uVar5;
  thunk_FUN_00ec5080((undefined4 *)(iVar10 + 0x18),uVar5);
  piVar9 = *(int **)(_UNK_0107b5d0 + 0x107b2f0);
  iVar2 = *piVar9;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar9;
  }
  uVar12 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x118);
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0107b5d4 + 0x107b318));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar5,iVar10,**(undefined4 **)(_UNK_0107b5d8 + 0x107b32c),0);
  uVar5 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                    (uVar12,uVar5,**(undefined4 **)(_UNK_0107b5dc + 0x107b348));
  *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x118) = uVar5;
  thunk_FUN_00ec5080();
  iVar10 = _UNK_0107b5e0;
  *param_1 = -2;
  if (*(char *)(iVar10 + 0x107b37c) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107b5e4 + 0x107b390));
    *(char *)(iVar10 + 0x107b37c) = '\x01';
  }
  piVar9 = (int *)param_1[1];
  if (piVar9 != (int *)0x0) {
    iVar10 = *piVar9;
    uVar6 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0107b5e8 + 0x107b3b4)) {
          puVar4 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xd0);
          goto LAB_0107b3fc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_0107b5e8 + 0x107b3b4),2);
LAB_0107b3fc:
    (*(code *)*puVar4)(piVar9,puVar4[1]);
  }
  return;
}

