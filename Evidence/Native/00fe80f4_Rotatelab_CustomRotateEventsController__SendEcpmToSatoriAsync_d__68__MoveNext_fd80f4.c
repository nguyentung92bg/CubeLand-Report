/* IL2CPP: Rotatelab.CustomRotateEventsController.<SendEcpmToSatoriAsync>d__68$$MoveNext
void Rotatelab_CustomRotateEventsController__SendEcpmToSatoriAsync_d__68__MoveNext (Rotatelab_CustomRotateEventsController__SendEcpmToSatoriAsync_d__68_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController.<SendEcpmToSatoriAsync>d__68$$MoveNext
   void Rotatelab_CustomRotateEventsController__SendEcpmToSatoriAsync_d__68__MoveNext
   (Rotatelab_CustomRotateEventsController__SendEcpmToSatoriAsync_d__68_o __this, const MethodInfo*
   method); */

void Rotatelab_CustomRotateEventsController__SendEcpmToSatoriAsync_d__68__MoveNext_fd80f4
               (int *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  uint uVar12;
  int *piVar13;
  int *piStack_48;
  uint uStack_44;
  undefined4 uStack_3c;
  int *piStack_38;
  uint uStack_34;
  int *piStack_30;
  uint uStack_2c;
  
  pcVar8 = (char *)(_UNK_00fe8bac + 0xfe810c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe8bb0 + 0xfe8120));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe8bb4 + 0xfe812c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe8bb8 + 0xfe8138));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe8bbc + 0xfe8144));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe8bc0 + 0xfe8150));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe8bc4 + 0xfe815c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe8bc8 + 0xfe8168));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe8bcc + 0xfe8174));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe8bd0 + 0xfe8180));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe8bd4 + 0xfe818c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe8bd8 + 0xfe8198));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe8bdc + 0xfe81a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe8be0 + 0xfe81b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe8be4 + 0xfe81bc));
    *pcVar8 = '\x01';
  }
  iVar4 = *param_1;
  piVar13 = param_1 + 5;
  piVar7 = param_1 + 7;
  uStack_2c = 0;
  piStack_30 = (int *)0x0;
  uStack_34 = 0;
  piStack_38 = (int *)0x0;
  uStack_3c = 0;
  if (iVar4 == 0) {
    piStack_30 = (int *)*piVar13;
    uStack_2c = param_1[6];
    *param_1 = -1;
    *piVar13 = 0;
    param_1[6] = 0;
LAB_00fe84a0:
    pcVar8 = (char *)(_UNK_00fe8c14 + 0xfe84ac);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00fe8c18 + 0xfe84c0));
      *pcVar8 = '\x01';
    }
    piVar10 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      iVar4 = *piStack_30;
      uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
      iVar9 = (int)(short)uStack_2c;
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_00fe8c1c + 0xfe84e4)) {
            puVar3 = (undefined4 *)(iVar4 + *piVar6 * 8 + 0xd0);
            goto LAB_00fe8530;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00fe8c1c + 0xfe84e4),2);
LAB_00fe8530:
      (*(code *)*puVar3)(piVar10,iVar9,puVar3[1]);
    }
    iVar4 = param_1[3];
    uVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fe8c20 + 0xfe8558));
    System_Func_UniTask____ctor_2395d44(uVar11,iVar4,**(undefined4 **)(_UNK_00fe8c24 + 0xfe856c),0);
    if (*(int *)(**(int **)(_UNK_00fe8c28 + 0xfe8588) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Networking_HiroController__ExecuteTask_114cc9c
              (&piStack_48,uVar11,3,0,0x40000000,0,0,0);
    uVar5 = uStack_44;
    piVar10 = piStack_48;
    uStack_44 = 0;
    piStack_48 = (int *)0x0;
    if ((*(byte *)(*(int *)(**(int **)(_UNK_00fe8c2c + 0xfe85d4) + 0x10) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    piStack_48 = piVar10;
    uStack_44 = uVar5;
    thunk_FUN_00ec5080(&piStack_48,0);
    uVar1 = uStack_44;
    piVar10 = piStack_48;
    uStack_34 = uStack_44;
    piStack_38 = piStack_48;
    uVar2 = *(uint *)(**(int **)(_UNK_00fe8c30 + 0xfe8610) + 0x10);
    if ((*(byte *)(uVar2 + 0xbd) & 1) == 0) {
      uVar2 = FUN_00efd768();
    }
    uVar12 = uVar1 & 0xff;
    if (piVar10 == (int *)0x0) {
LAB_00fe8774:
      uVar5 = (uint)(uVar12 != 0);
    }
    else {
      iVar4 = *(int *)(*(int *)(*(int *)(uVar2 + 0x60) + 0xc) + 0x10);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = FUN_00efd768();
      }
      iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 4);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = FUN_00efd768(iVar4);
      }
      iVar9 = *piVar10;
      uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar4) {
            puVar3 = (undefined4 *)(iVar9 + *piVar6 * 8 + 200);
            goto LAB_00fe86c8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar10,iVar4,1);
LAB_00fe86c8:
      uVar5 = (int)uVar1 >> 0x10;
      uVar2 = (*(code *)*puVar3)(piVar10,uVar5,puVar3[1]);
      if (uVar2 == 0) {
        *piVar7 = (int)piVar10;
        param_1[8] = uVar1;
        *param_1 = 1;
        thunk_FUN_00ec5080(piVar7,0);
        func_0x00ff4b68(param_1 + 1,&piStack_38,param_1,**(undefined4 **)(_UNK_00fe8c34 + 0xfe87a4))
        ;
        return;
      }
LAB_00fe86ec:
      if (piVar10 == (int *)0x0) goto LAB_00fe8774;
      iVar4 = *(int *)(**(int **)(_UNK_00fe8c38 + 0xfe8700) + 0x10);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = FUN_00efd768();
      }
      iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 0x14);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = FUN_00efd768(iVar4);
      }
      iVar9 = *piVar10;
      uVar2 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar4) {
            puVar3 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
            goto LAB_00fe87c4;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar10,iVar4,0);
LAB_00fe87c4:
      uVar2 = (*(code *)*puVar3)(piVar10,(int)(short)uVar5,puVar3[1]);
      uVar5 = uVar2;
    }
    if (uVar5 != 0) {
      uVar2 = (uint)*(byte *)(param_1 + 4);
    }
    if (uVar5 == 0 || uVar2 == 0) goto LAB_00fe8a30;
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_00fe8c3c + 0xfe87f8));
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_RemoteConfigManager__RefreshSatoriFlagsAsync_10747f4(&piStack_48,iVar4,0);
    piVar7 = *(int **)(_UNK_00fe8c40 + 0xfe8828);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    thunk_FUN_00ec5080(&piStack_48,0);
    pcVar8 = (char *)(_UNK_00fe8c44 + 0xfe8864);
    uStack_2c = uStack_44;
    piStack_30 = piStack_48;
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00fe8c48 + 0xfe8884));
      *pcVar8 = '\x01';
    }
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar8 = (char *)(_UNK_00fe8c4c + 0xfe88ac);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00fe8c50 + 0xfe88c0));
      *pcVar8 = '\x01';
    }
    piVar7 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      iVar4 = *piStack_30;
      uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
      iVar9 = (int)(short)uStack_2c;
      if (uVar5 != 0) {
        piVar10 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_00fe8c54 + 0xfe88e4)) {
            puVar3 = (undefined4 *)(iVar4 + *piVar10 * 8 + 0xc0);
            goto LAB_00fe8970;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00fe8c54 + 0xfe88e4),0);
LAB_00fe8970:
      iVar4 = (*(code *)*puVar3)(piVar7,iVar9,puVar3[1]);
      if (iVar4 == 0) {
        *piVar13 = (int)piStack_30;
        param_1[6] = uStack_2c;
        *param_1 = 2;
        thunk_FUN_00ec5080(piVar13,0);
        func_0x00ff4a48(param_1 + 1,&piStack_30,param_1,**(undefined4 **)(_UNK_00fe8c58 + 0xfe8a90))
        ;
        return;
      }
    }
  }
  else {
    if (iVar4 == 1) {
      piVar10 = (int *)*piVar7;
      uStack_34 = param_1[8];
      *param_1 = -1;
      uVar2 = 0;
      uVar12 = uStack_34 & 0xff;
      uVar5 = uStack_34 >> 0x10;
      *piVar7 = 0;
      param_1[8] = 0;
      piStack_38 = piVar10;
      goto LAB_00fe86ec;
    }
    if (iVar4 != 2) {
      iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fe8be8 + 0xfe827c));
      System_Object___ctor_2bb93bc(iVar4,0);
      param_1[3] = iVar4;
      thunk_FUN_00ec5080(param_1 + 3,iVar4);
      iVar4 = param_1[2];
      if (param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar10 = (int *)(param_1[3] + 8);
      *piVar10 = iVar4;
      thunk_FUN_00ec5080(piVar10,iVar4);
      piVar10 = *(int **)(_UNK_00fe8bec + 0xfe82c8);
      iVar4 = *piVar10;
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        iVar4 = *piVar10;
      }
      puVar3 = *(undefined4 **)(iVar4 + 0x5c);
      iVar9 = puVar3[1];
      if (iVar9 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          FUN_00ec3934();
          puVar3 = *(undefined4 **)(*piVar10 + 0x5c);
        }
        uVar11 = *puVar3;
        iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fe8bf0 + 0xfe8314));
        System_Func_bool____ctor_23938dc(iVar9,uVar11,**(undefined4 **)(_UNK_00fe8bf4 + 0xfe8328),0)
        ;
        piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 4);
        *piVar10 = iVar9;
        thunk_FUN_00ec5080(piVar10,iVar9);
      }
      piVar10 = *(int **)(_UNK_00fe8bf8 + 0xfe8358);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        FUN_00ec3934();
      }
      Cysharp_Threading_Tasks_UniTask__WaitUntil_3217d44(&piStack_48,iVar9,8,0,0,0);
      thunk_FUN_00ec5080(&piStack_48,0);
      pcVar8 = (char *)(_UNK_00fe8bfc + 0xfe83b4);
      uStack_2c = uStack_44;
      piStack_30 = piStack_48;
      if (*pcVar8 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fe8c00 + 0xfe83d4));
        *pcVar8 = '\x01';
      }
      if (*(int *)(*piVar10 + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar8 = (char *)(_UNK_00fe8c04 + 0xfe83fc);
      if (*pcVar8 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fe8c08 + 0xfe8410));
        *pcVar8 = '\x01';
      }
      piVar10 = piStack_30;
      if (piStack_30 != (int *)0x0) {
        iVar4 = *piStack_30;
        uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
        iVar9 = (int)(short)uStack_2c;
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_00fe8c0c + 0xfe8434)) {
              puVar3 = (undefined4 *)(iVar4 + *piVar6 * 8 + 0xc0);
              goto LAB_00fe8480;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00fe8c0c + 0xfe8434),0);
LAB_00fe8480:
        iVar4 = (*(code *)*puVar3)(piVar10,iVar9,puVar3[1]);
        if (iVar4 == 0) {
          *piVar13 = (int)piStack_30;
          param_1[6] = uStack_2c;
          *param_1 = 0;
          thunk_FUN_00ec5080(piVar13,0);
          func_0x00ff4a48(param_1 + 1,&piStack_30,param_1,
                          **(undefined4 **)(_UNK_00fe8c10 + 0xfe8950));
          return;
        }
      }
      goto LAB_00fe84a0;
    }
    piStack_30 = (int *)*piVar13;
    uStack_2c = param_1[6];
    *param_1 = -1;
    *piVar13 = 0;
    param_1[6] = 0;
  }
  pcVar8 = (char *)(_UNK_00fe8c5c + 0xfe8998);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe8c60 + 0xfe89ac));
    *pcVar8 = '\x01';
  }
  piVar13 = piStack_30;
  if (piStack_30 != (int *)0x0) {
    iVar4 = *piStack_30;
    uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
    iVar9 = (int)(short)uStack_2c;
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_00fe8c64 + 0xfe89d0)) {
          puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xd0);
          goto LAB_00fe8a1c;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00fe8c64 + 0xfe89d0),2);
LAB_00fe8a1c:
    (*(code *)*puVar3)(piVar13,iVar9,puVar3[1]);
  }
LAB_00fe8a30:
  *param_1 = -2;
  param_1[3] = 0;
  thunk_FUN_00ec5080(param_1 + 3,0);
  func_0x00fcef34(param_1 + 1,0);
  return;
}

