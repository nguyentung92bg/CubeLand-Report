/* IL2CPP: Rotatelab.CustomRotateEventsController.<SetCampaignUserPropertyAsync>d__79$$MoveNext
void Rotatelab_CustomRotateEventsController__SetCampaignUserPropertyAsync_d__79__MoveNext (Rotatelab_CustomRotateEventsController__SetCampaignUserPropertyAsync_d__79_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController.<SetCampaignUserPropertyAsync>d__79$$MoveNext
   void Rotatelab_CustomRotateEventsController__SetCampaignUserPropertyAsync_d__79__MoveNext
   (Rotatelab_CustomRotateEventsController__SetCampaignUserPropertyAsync_d__79_o __this, const
   MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__SetCampaignUserPropertyAsync_d__79__MoveNext_fd8c7c
               (int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piStack_50;
  uint uStack_4c;
  undefined4 uStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  uint uStack_2c;
  int iStack_24;
  
  pcVar9 = (char *)(_UNK_00fe9818 + 0xfe8c94);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe981c + 0xfe8ca8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe9820 + 0xfe8cb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe9824 + 0xfe8cc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe9828 + 0xfe8ccc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe982c + 0xfe8cd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe9830 + 0xfe8ce4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe9834 + 0xfe8cf0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe9838 + 0xfe8cfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe983c + 0xfe8d08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe9840 + 0xfe8d14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe9844 + 0xfe8d20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe9848 + 0xfe8d2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe984c + 0xfe8d38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe9850 + 0xfe8d44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe9854 + 0xfe8d50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe9858 + 0xfe8d5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe985c + 0xfe8d68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe9860 + 0xfe8d74));
    *pcVar9 = '\x01';
  }
  piVar8 = param_1 + 4;
  piVar6 = param_1 + 6;
  iStack_24 = 0;
  uStack_2c = 0;
  piStack_30 = (int *)0x0;
  uStack_34 = 0;
  piStack_38 = (int *)0x0;
  uStack_3c = 0;
  if (*param_1 == 0) {
    piStack_30 = (int *)*piVar8;
    uStack_2c = param_1[5];
    *param_1 = -1;
    *piVar8 = 0;
    param_1[5] = 0;
LAB_00fe9008:
    pcVar9 = (char *)(_UNK_00fe9890 + 0xfe9014);
    if (*pcVar9 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00fe9894 + 0xfe9028));
      *pcVar9 = '\x01';
    }
    piVar8 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      iVar1 = *piStack_30;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar10 = (int)(short)uStack_2c;
      if (uVar4 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_00fe9898 + 0xfe904c)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xd0);
            goto LAB_00fe9098;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00fe9898 + 0xfe904c),2);
LAB_00fe9098:
      (*(code *)*puVar3)(piVar8,iVar10,puVar3[1]);
    }
    if (param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar3 = (undefined4 *)(param_1[3] + 8);
    *puVar3 = 0;
    thunk_FUN_00ec5080(puVar3,0);
    iVar1 = param_1[3];
    uVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fe989c + 0xfe90e4));
    System_Func_UniTask____ctor_2395d44(uVar11,iVar1,**(undefined4 **)(_UNK_00fe98a0 + 0xfe90f8),0);
    if (*(int *)(**(int **)(_UNK_00fe98a4 + 0xfe9114) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Networking_HiroController__ExecuteTask_114cc9c
              (&piStack_50,uVar11,1,0,0x40000000,0,0,0);
    uVar4 = uStack_4c;
    piVar8 = piStack_50;
    uStack_4c = 0;
    piStack_50 = (int *)0x0;
    if ((*(byte *)(*(int *)(**(int **)(_UNK_00fe98a8 + 0xfe9160) + 0x10) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    piStack_50 = piVar8;
    uStack_4c = uVar4;
    thunk_FUN_00ec5080(&piStack_50,0);
    uStack_34 = uStack_4c;
    piStack_38 = piStack_50;
    iVar1 = *(int *)(**(int **)(_UNK_00fe98ac + 0xfe919c) + 0x10);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    piVar8 = piStack_38;
    if (piStack_38 != (int *)0x0) {
      iVar10 = (int)uStack_34._2_2_;
      iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 0xc) + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768(iVar1);
      }
      iVar2 = *piVar8;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 200);
            goto LAB_00fe9258;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar8,iVar1,1);
LAB_00fe9258:
      iVar1 = (*(code *)*puVar3)(piVar8,iVar10,puVar3[1]);
      if (iVar1 == 0) {
        *piVar6 = (int)piStack_38;
        param_1[7] = uStack_34;
        *param_1 = 1;
        thunk_FUN_00ec5080(piVar6,0);
        func_0x00ff4da8(param_1 + 1,&piStack_38,param_1,**(undefined4 **)(_UNK_00fe98b0 + 0xfe9338))
        ;
        return;
      }
      goto LAB_00fe9278;
    }
  }
  else {
    if (*param_1 != 1) {
      iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fe9864 + 0xfe8e04));
      System_Object___ctor_2bb93bc(iVar1,0);
      param_1[3] = iVar1;
      thunk_FUN_00ec5080(param_1 + 3,iVar1);
      piVar7 = *(int **)(_UNK_00fe9868 + 0xfe8e30);
      iVar1 = *piVar7;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar7;
      }
      puVar3 = *(undefined4 **)(iVar1 + 0x5c);
      iVar10 = puVar3[2];
      if (iVar10 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          FUN_00ec3934();
          puVar3 = *(undefined4 **)(*piVar7 + 0x5c);
        }
        uVar11 = *puVar3;
        iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fe986c + 0xfe8e7c));
        System_Func_bool____ctor_23938dc
                  (iVar10,uVar11,**(undefined4 **)(_UNK_00fe9870 + 0xfe8e90),0);
        piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 8);
        *piVar7 = iVar10;
        thunk_FUN_00ec5080(piVar7,iVar10);
      }
      piVar7 = *(int **)(_UNK_00fe9874 + 0xfe8ec0);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        FUN_00ec3934();
      }
      Cysharp_Threading_Tasks_UniTask__WaitUntil_3217d44(&piStack_50,iVar10,8,0,0,0);
      thunk_FUN_00ec5080(&piStack_50,0);
      pcVar9 = (char *)(_UNK_00fe9878 + 0xfe8f1c);
      uStack_2c = uStack_4c;
      piStack_30 = piStack_50;
      if (*pcVar9 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fe987c + 0xfe8f3c));
        *pcVar9 = '\x01';
      }
      if (*(int *)(*piVar7 + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar9 = (char *)(_UNK_00fe9880 + 0xfe8f64);
      if (*pcVar9 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fe9884 + 0xfe8f78));
        *pcVar9 = '\x01';
      }
      piVar7 = piStack_30;
      if (piStack_30 != (int *)0x0) {
        iVar1 = *piStack_30;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        iVar10 = (int)(short)uStack_2c;
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_00fe9888 + 0xfe8f9c)) {
              puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto LAB_00fe8fe8;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00fe9888 + 0xfe8f9c),0);
LAB_00fe8fe8:
        iVar1 = (*(code *)*puVar3)(piVar7,iVar10,puVar3[1]);
        if (iVar1 == 0) {
          *piVar8 = (int)piStack_30;
          param_1[5] = uStack_2c;
          *param_1 = 0;
          thunk_FUN_00ec5080(piVar8,0);
          func_0x00ff4c88(param_1 + 1,&piStack_30,param_1,
                          **(undefined4 **)(_UNK_00fe988c + 0xfe9634));
          return;
        }
      }
      goto LAB_00fe9008;
    }
    piStack_38 = (int *)*piVar6;
    uStack_34 = param_1[7];
    *param_1 = -1;
    *piVar6 = 0;
    param_1[7] = 0;
LAB_00fe9278:
    piVar8 = piStack_38;
    if (piStack_38 != (int *)0x0) {
      iVar10 = (int)uStack_34._2_2_;
      iVar1 = *(int *)(**(int **)(_UNK_00fe98b4 + 0xfe928c) + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0x14);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768(iVar1);
      }
      iVar2 = *piVar8;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
            goto LAB_00fe9358;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar8,iVar1,0);
LAB_00fe9358:
      uVar4 = (*(code *)*puVar3)(piVar8,iVar10,puVar3[1]);
      goto LAB_00fe9370;
    }
  }
  uVar4 = uStack_34 & 0xff;
LAB_00fe9370:
  if (uVar4 != 0) {
    piVar8 = param_1 + 3;
    if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar6 = *(int **)(*piVar8 + 8);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piVar6;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_00fe98b8 + 0xfe93ac)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_00fe93f4;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar6,**(int **)(_UNK_00fe98b8 + 0xfe93ac),0);
LAB_00fe93f4:
    piVar6 = (int *)(*(code *)*puVar3)(piVar6,puVar3[1]);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piVar6;
    uVar11 = **(undefined4 **)(_UNK_00fe98bc + 0xfe9424);
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_00fe98c0 + 0xfe9430)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xf8);
          goto LAB_00fe9478;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar6,**(int **)(_UNK_00fe98c0 + 0xfe9430),7);
LAB_00fe9478:
    iVar1 = (*(code *)*puVar3)(piVar6,uVar11,&iStack_24,puVar3[1]);
    if ((iVar1 != 0) && (iVar1 = System_String__IsNullOrEmpty_2a0a844(iStack_24,0), iVar1 == 0)) {
      piVar6 = *(int **)(_UNK_00fe98c4 + 0xfe94b8);
      iVar1 = *piVar6;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar6;
      }
      uVar11 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x58);
      if (iStack_24 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = System_String__Split_2a0df50(iStack_24,0x20,0,0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar12 = *(undefined4 *)(iVar1 + 0x10);
      if (*(int *)(**(int **)(_UNK_00fe98c8 + 0xfe9524) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar11,uVar12,0);
    }
    *piVar8 = 0;
    thunk_FUN_00ec5080(piVar8,0);
  }
  iVar1 = _UNK_00fe98cc;
  *param_1 = -2;
  if (*(char *)(iVar1 + 0xfe9570) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe98d0 + 0xfe9584));
    *(char *)(iVar1 + 0xfe9570) = '\x01';
  }
  piVar8 = (int *)param_1[1];
  if (piVar8 != (int *)0x0) {
    iVar1 = *piVar8;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_00fe98d4 + 0xfe95a8)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xd0);
          goto LAB_00fe95f0;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar8,**(int **)(_UNK_00fe98d4 + 0xfe95a8),2);
LAB_00fe95f0:
    (*(code *)*puVar3)(piVar8,puVar3[1]);
  }
  return;
}

