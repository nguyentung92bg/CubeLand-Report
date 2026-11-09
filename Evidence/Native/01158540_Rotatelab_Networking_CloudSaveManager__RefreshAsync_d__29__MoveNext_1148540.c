/* IL2CPP: Rotatelab.Networking.CloudSaveManager.<RefreshAsync>d__29$$MoveNext
void Rotatelab_Networking_CloudSaveManager__RefreshAsync_d__29__MoveNext (Rotatelab_Networking_CloudSaveManager__RefreshAsync_d__29_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager.<RefreshAsync>d__29$$MoveNext
   void Rotatelab_Networking_CloudSaveManager__RefreshAsync_d__29__MoveNext
   (Rotatelab_Networking_CloudSaveManager__RefreshAsync_d__29_o __this, const MethodInfo* method);
    */

void Rotatelab_Networking_CloudSaveManager__RefreshAsync_d__29__MoveNext_1148540(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined8 uStack_58;
  int iStack_50;
  undefined4 uStack_44;
  undefined8 uStack_40;
  int iStack_38;
  undefined8 uStack_30;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_01158e50 + 0x1158558);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01158e54 + 0x115856c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01158e58 + 0x1158578));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01158e5c + 0x1158584));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01158e60 + 0x1158590));
    *pcVar7 = '\x01';
  }
  iVar10 = param_1[3];
  uStack_30 = 0;
  iStack_28 = 0;
  uStack_40 = 0;
  iStack_38 = 0;
  uStack_44 = 0;
  if (*param_1 == 0) {
    uStack_30 = *(undefined8 *)(param_1 + 5);
    *param_1 = -1;
    iStack_28 = param_1[7];
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[7] = 0;
LAB_011586ac:
    piVar8 = (int *)uStack_30;
    if ((int *)uStack_30 == (int *)0x0) {
LAB_011588a0:
      iVar1 = uStack_30._4_4_;
    }
    else {
      iVar9 = (int)(short)iStack_28;
      iVar1 = *(int *)(**(int **)(_UNK_01158e70 + 0x11586c4) + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0x14);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768(iVar1);
      }
      iVar2 = *piVar8;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
            goto LAB_011588b4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar8,iVar1,0);
LAB_011588b4:
      iVar1 = (*(code *)*puVar3)(piVar8,iVar9,puVar3[1]);
    }
    if (iVar1 == 0) {
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Networking_CloudSaveManager__MigrateDataFromRemoteHiroValuesAsync_1143d50
                (&uStack_58,iVar10,param_1[4]);
      iStack_38 = iStack_50;
      uStack_40 = uStack_58;
      uStack_58 = 0;
      iStack_50 = 0;
      if ((*(byte *)(*(int *)(**(int **)(_UNK_01158e74 + 0x115890c) + 0x10) + 0xbd) & 1) == 0) {
        FUN_00efd768();
      }
      iStack_50 = iStack_38;
      uStack_58 = uStack_40;
      thunk_FUN_00ec5080(&uStack_58,0);
      iStack_28 = iStack_50;
      uStack_30 = uStack_58;
      iVar1 = *(int *)(**(int **)(_UNK_01158e78 + 0x1158964) + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      piVar8 = (int *)uStack_30;
      if ((int *)uStack_30 != (int *)0x0) {
        iVar9 = (int)(short)iStack_28;
        iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 0xc) + 0x10);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = FUN_00efd768();
        }
        iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 4);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = FUN_00efd768(iVar1);
        }
        iVar2 = *piVar8;
        uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar6[-1] == iVar1) {
              puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 200);
              goto LAB_01158cd4;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined4 *)FUN_00efdb38(piVar8,iVar1,1);
LAB_01158cd4:
        iVar1 = (*(code *)*puVar3)(piVar8,iVar9,puVar3[1]);
        if (iVar1 == 0) {
          *param_1 = 1;
          param_1[7] = iStack_28;
          *(undefined8 *)(param_1 + 5) = uStack_30;
          thunk_FUN_00ec5080(param_1 + 5,0);
          func_0x01172cdc(param_1 + 1,&uStack_30,param_1,
                          **(undefined4 **)(_UNK_01158e7c + 0x1158d20));
          return;
        }
        goto LAB_011585f8;
      }
      goto LAB_01158a0c;
    }
  }
  else {
    if (*param_1 != 1) {
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = Rotatelab_Networking_CloudSaveManager__get_Nakama_11417dc();
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(char *)(iVar1 + 0x10) == '\0') goto LAB_01158bb4;
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Networking_CloudSaveManager__LoadFromRemoteAsync_1143b00
                (&uStack_58,iVar10,param_1[4]);
      iStack_38 = iStack_50;
      uStack_40 = uStack_58;
      uStack_58 = 0;
      iStack_50 = 0;
      if ((*(byte *)(*(int *)(**(int **)(_UNK_01158e64 + 0x11587a0) + 0x10) + 0xbd) & 1) == 0) {
        FUN_00efd768();
      }
      iStack_50 = iStack_38;
      uStack_58 = uStack_40;
      thunk_FUN_00ec5080(&uStack_58,0);
      iStack_28 = iStack_50;
      uStack_30 = uStack_58;
      iVar1 = *(int *)(**(int **)(_UNK_01158e68 + 0x11587f8) + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      piVar8 = (int *)uStack_30;
      if ((int *)uStack_30 != (int *)0x0) {
        iVar9 = (int)(short)iStack_28;
        iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 0xc) + 0x10);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = FUN_00efd768();
        }
        iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 4);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = FUN_00efd768(iVar1);
        }
        iVar2 = *piVar8;
        uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar6[-1] == iVar1) {
              puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 200);
              goto LAB_01158c6c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined4 *)FUN_00efdb38(piVar8,iVar1,1);
LAB_01158c6c:
        iVar1 = (*(code *)*puVar3)(piVar8,iVar9,puVar3[1]);
        if (iVar1 == 0) {
          *param_1 = 0;
          param_1[7] = iStack_28;
          *(undefined8 *)(param_1 + 5) = uStack_30;
          thunk_FUN_00ec5080(param_1 + 5);
          func_0x01172cdc(param_1 + 1,&uStack_30,param_1,
                          **(undefined4 **)(_UNK_01158e6c + 0x1158cb4));
          return;
        }
        goto LAB_011586ac;
      }
      goto LAB_011588a0;
    }
    uStack_30 = *(undefined8 *)(param_1 + 5);
    *param_1 = -1;
    iStack_28 = param_1[7];
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[7] = 0;
LAB_011585f8:
    piVar8 = (int *)uStack_30;
    if ((int *)uStack_30 == (int *)0x0) {
LAB_01158a0c:
      iVar1 = uStack_30._4_4_;
    }
    else {
      iVar9 = (int)(short)iStack_28;
      iVar1 = *(int *)(**(int **)(_UNK_01158e80 + 0x1158610) + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0x14);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768(iVar1);
      }
      iVar2 = *piVar8;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
            goto LAB_01158a20;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar8,iVar1,0);
LAB_01158a20:
      iVar1 = (*(code *)*puVar3)(piVar8,iVar9,puVar3[1]);
    }
  }
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar8 = (int *)(iVar10 + 0x18);
  *piVar8 = iVar1;
  thunk_FUN_00ec5080(piVar8,iVar1);
  if (*piVar8 == 0) {
    Rotatelab_Networking_CloudSaveManager__SetRemoteDataFetched_11437ac(iVar10,0);
  }
  else {
    if (*(int *)(iVar10 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(*(int *)(iVar10 + 0x14) + 0x2c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = Rotatelab_ObservableBool__get_Value_fb2b74(iVar1,0);
    if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = Rotatelab_ObservableBool__op_Implicit_fac238(*(undefined4 *)(*piVar8 + 0x2c),0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_ObservableBool__set_Value_fa6d68(iVar1,uVar5 | uVar4,0);
    iVar1 = Rotatelab_Networking_CloudSaveManager__IsPendingRemoteDataNewer_1143290(iVar10,0);
    if (iVar1 == 0) {
      Rotatelab_Networking_CloudSaveManager__SetRemoteDataFetched_11437ac(iVar10,0);
      *piVar8 = 0;
      thunk_FUN_00ec5080(piVar8,0);
      Rotatelab_Networking_CloudSaveManager__SendToRemoteAsync_1143a20(&uStack_58,iVar10,0);
      Cysharp_Threading_Tasks_UniTaskExtensions__Forget_321de88
                ((undefined4)uStack_58,uStack_58._4_4_,0);
    }
    else {
      if (*(int *)(iVar10 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *(int *)(*(int *)(iVar10 + 0x14) + 0x30);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar5 = Rotatelab_ObservableBool__get_Value_fb2b74(iVar1,0);
      if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = Rotatelab_ObservableBool__op_Implicit_fac238(*(undefined4 *)(*piVar8 + 0x30),0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_ObservableBool__set_Value_fa6d68(iVar1,uVar5 | uVar4,0);
      if (*(char *)(iVar10 + 0x10) == '\0') {
        Rotatelab_Networking_CloudSaveManager__ApplyPendingRemoteData_1142ac0(iVar10);
      }
    }
  }
LAB_01158bb4:
  iVar10 = _UNK_01158e84;
  *param_1 = -2;
  if (*(char *)(iVar10 + 0x1158bc8) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01158e88 + 0x1158bdc));
    *(char *)(iVar10 + 0x1158bc8) = '\x01';
  }
  piVar8 = (int *)param_1[1];
  if (piVar8 != (int *)0x0) {
    iVar10 = *piVar8;
    uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01158e8c + 0x1158c00)) {
          puVar3 = (undefined4 *)(iVar10 + *piVar6 * 8 + 0xd0);
          goto LAB_01158c48;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar8,**(int **)(_UNK_01158e8c + 0x1158c00),2);
LAB_01158c48:
    (*(code *)*puVar3)(piVar8,puVar3[1]);
  }
  return;
}

