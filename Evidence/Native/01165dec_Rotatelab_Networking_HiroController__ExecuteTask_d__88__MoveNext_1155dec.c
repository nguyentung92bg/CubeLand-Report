/* IL2CPP: Rotatelab.Networking.HiroController.<ExecuteTask>d__88$$MoveNext
void Rotatelab_Networking_HiroController__ExecuteTask_d__88__MoveNext (Rotatelab_Networking_HiroController__ExecuteTask_d__88_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController.<ExecuteTask>d__88$$MoveNext
   void Rotatelab_Networking_HiroController__ExecuteTask_d__88__MoveNext
   (Rotatelab_Networking_HiroController__ExecuteTask_d__88_o __this, const MethodInfo* method); */

void Rotatelab_Networking_HiroController__ExecuteTask_d__88__MoveNext_1155dec(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined1 uVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  int *piStack_50;
  int iStack_4c;
  undefined4 uStack_3c;
  int *piStack_38;
  int iStack_34;
  
  pcVar7 = (char *)(_UNK_0116686c + 0x1165e0c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01166870 + 0x1165e20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01166874 + 0x1165e2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01166878 + 0x1165e38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116687c + 0x1165e44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01166880 + 0x1165e50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01166884 + 0x1165e5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01166888 + 0x1165e68));
    *pcVar7 = '\x01';
  }
  iVar11 = *param_1;
  iStack_34 = 0;
  piStack_38 = (int *)0x0;
  uStack_3c = 0;
  pcVar7 = (char *)(_UNK_0116688c + 0x1165e94);
  if (iVar11 == 0) {
    piStack_38 = (int *)param_1[0xc];
    iStack_34 = param_1[0xd];
    iVar11 = -1;
    *param_1 = -1;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    goto LAB_01166110;
  }
  if (iVar11 == 1) {
LAB_011661f8:
    piStack_38 = (int *)param_1[0xc];
    iStack_34 = param_1[0xd];
    *param_1 = -1;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  else {
    if (iVar11 == 2) {
      piStack_38 = (int *)param_1[0xc];
      iStack_34 = param_1[0xd];
      iVar11 = -1;
      *param_1 = -1;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      func_0x011729c4(&piStack_38,0);
      iVar8 = param_1[10];
      fVar13 = (float)param_1[8];
      if (*(int *)(**(int **)(_UNK_011668ec + 0x1165edc) + 0x74) == 0) {
        FUN_00ec3934();
      }
      fVar12 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
      iVar8 = (int)(fVar13 * fVar12);
      if (fVar13 * fVar12 == _UNK_011662b0) {
        iVar8 = -0x80000000;
      }
      iVar8 = System_Math__Min_2b6fffc(iVar8,60000,0);
      iVar3 = param_1[0xb] + 1;
    }
    else {
      if (param_1[4] != 0) {
        Rotatelab_Networking_StopwatchEvent__Start_fe8fe4(param_1[4],0);
      }
      iVar3 = 0;
      iVar8 = 500;
    }
    param_1[10] = iVar8;
    param_1[0xb] = iVar3;
    if (param_1[9] <= iVar3) {
      uVar6 = 0;
      if (param_1[4] != 0) {
        Rotatelab_Networking_StopwatchEvent__Complete_fe9014(param_1[4],0);
      }
      goto LAB_01166418;
    }
    while( true ) {
      iVar8 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_011668b4 + 0x11661b8));
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar8 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar8 = Hiro_NetworkMonitor__get_Online_296750c(*(int *)(iVar8 + 0x2c),0);
      if ((iVar8 != 0) || (((char)param_1[5] != '\0' && (param_1[0xb] < 1)))) break;
      uVar1 = UnityEngine_Random__Range_35f8b14(1000,3000,0);
      piVar10 = *(int **)(_UNK_01166890 + 0x1165fc8);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        FUN_00ec3934();
      }
      Cysharp_Threading_Tasks_UniTask__Delay_32169f8(&piStack_50,uVar1,1,8,0,0,0);
      thunk_FUN_00ec5080(&piStack_50,0);
      pcVar9 = (char *)(_UNK_01166894 + 0x1166028);
      iStack_34 = iStack_4c;
      piStack_38 = piStack_50;
      if (*pcVar9 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01166898 + 0x1166048));
        *pcVar9 = '\x01';
      }
      if (*(int *)(*piVar10 + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar9 = (char *)(_UNK_0116689c + 0x1166070);
      if (*pcVar9 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_011668a0 + 0x1166084));
        *pcVar9 = '\x01';
      }
      piVar10 = piStack_38;
      if (piStack_38 != (int *)0x0) {
        iVar8 = *piStack_38;
        uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
        iVar3 = (int)(short)iStack_34;
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_011668a4 + 0x11660a8)) {
              puVar2 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
              goto LAB_011660f4;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_011668a4 + 0x11660a8),0);
LAB_011660f4:
        iVar8 = (*(code *)*puVar2)(piVar10,iVar3,puVar2[1]);
        if (iVar8 == 0) {
          param_1[0xd] = iStack_34;
          *param_1 = 0;
          param_1[0xc] = (int)piStack_38;
          thunk_FUN_00ec5080(param_1 + 0xc,0);
          func_0x01173de0(param_1 + 1,&piStack_38,param_1,
                          **(undefined4 **)(_UNK_011668a8 + 0x1166584));
          return;
        }
      }
LAB_01166110:
      if (*pcVar7 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_011668ac + 0x1166128));
        *pcVar7 = '\x01';
      }
      piVar10 = piStack_38;
      if (piStack_38 != (int *)0x0) {
        iVar8 = *piStack_38;
        uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
        iVar3 = (int)(short)iStack_34;
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_011668b0 + 0x116614c)) {
              puVar2 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xd0);
              goto LAB_01166198;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_011668b0 + 0x116614c),2);
LAB_01166198:
        (*(code *)*puVar2)(piVar10,iVar3,puVar2[1]);
      }
    }
    if (iVar11 == 1) goto LAB_011661f8;
    iVar11 = param_1[6];
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(iVar11 + 0xc))
              (&piStack_50,*(undefined4 *)(iVar11 + 0x20),*(undefined4 *)(iVar11 + 0x14));
    piVar10 = *(int **)(_UNK_011668b8 + 0x11662e4);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      FUN_00ec3934();
    }
    thunk_FUN_00ec5080(&piStack_50,0);
    pcVar9 = (char *)(_UNK_011668bc + 0x1166320);
    iStack_34 = iStack_4c;
    piStack_38 = piStack_50;
    if (*pcVar9 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_011668c0 + 0x1166340));
      *pcVar9 = '\x01';
    }
    if (*(int *)(*piVar10 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar9 = (char *)(_UNK_011668c4 + 0x1166368);
    if (*pcVar9 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_011668c8 + 0x116637c));
      *pcVar9 = '\x01';
    }
    piVar10 = piStack_38;
    if (piStack_38 != (int *)0x0) {
      iVar11 = *piStack_38;
      uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
      iVar8 = (int)(short)iStack_34;
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_011668cc + 0x11663a0)) {
            puVar2 = (undefined4 *)(iVar11 + *piVar5 * 8 + 0xc0);
            goto LAB_011664f4;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_011668cc + 0x11663a0),0);
LAB_011664f4:
      iVar11 = (*(code *)*puVar2)(piVar10,iVar8,puVar2[1]);
      if (iVar11 == 0) {
        param_1[0xd] = iStack_34;
        param_1[0xc] = (int)piStack_38;
        *param_1 = 1;
        thunk_FUN_00ec5080(param_1 + 0xc,0);
        func_0x01173de0(param_1 + 1,&piStack_38,param_1,**(undefined4 **)(_UNK_011668d0 + 0x1166540)
                       );
        return;
      }
    }
  }
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011668d4 + 0x1166230));
    *pcVar7 = '\x01';
  }
  piVar10 = piStack_38;
  if (piStack_38 != (int *)0x0) {
    iVar11 = *piStack_38;
    uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
    iVar8 = (int)(short)iStack_34;
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_011668d8 + 0x1166254)) {
          puVar2 = (undefined4 *)(iVar11 + *piVar5 * 8 + 0xd0);
          goto LAB_011663ec;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_011668d8 + 0x1166254),2);
LAB_011663ec:
    (*(code *)*puVar2)(piVar10,iVar8,puVar2[1]);
  }
  uVar6 = 1;
  if (param_1[4] != 0) {
    Rotatelab_Networking_StopwatchEvent__Complete_fe9014(param_1[4],0);
  }
LAB_01166418:
  piVar10 = (int *)param_1[1];
  *param_1 = -2;
  if (piVar10 == (int *)0x0) {
    *(undefined1 *)(param_1 + 3) = uVar6;
  }
  else {
    iVar11 = *(int *)(**(int **)(_UNK_011668fc + 0x1166438) + 0x10);
    if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
      iVar11 = FUN_00efd768();
    }
    iVar11 = *(int *)(*(int *)(iVar11 + 0x60) + 4);
    if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
      iVar11 = FUN_00efd768(iVar11);
    }
    iVar8 = *piVar10;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar5[-1] == iVar11) {
          puVar2 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xd0);
          goto LAB_011664c0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar10,iVar11,2);
LAB_011664c0:
    (*(code *)*puVar2)(piVar10,uVar6,puVar2[1]);
  }
  return;
}

