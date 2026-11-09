/* IL2CPP: Rotatelab.Networking.PushNotificationManager.<SendTokenToSatoriAsync>d__9$$MoveNext
void Rotatelab_Networking_PushNotificationManager__SendTokenToSatoriAsync_d__9__MoveNext (Rotatelab_Networking_PushNotificationManager__SendTokenToSatoriAsync_d__9_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.PushNotificationManager.<SendTokenToSatoriAsync>d__9$$MoveNext
   void Rotatelab_Networking_PushNotificationManager__SendTokenToSatoriAsync_d__9__MoveNext
   (Rotatelab_Networking_PushNotificationManager__SendTokenToSatoriAsync_d__9_o __this, const
   MethodInfo* method); */

void Rotatelab_Networking_PushNotificationManager__SendTokenToSatoriAsync_d__9__MoveNext_fe6808
               (int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int *piStack_48;
  uint uStack_44;
  undefined4 uStack_3c;
  int *piStack_38;
  uint uStack_34;
  int *piStack_30;
  uint uStack_2c;
  
  pcVar9 = (char *)(_UNK_00ff7088 + 0xff6820);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff708c + 0xff6834));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7090 + 0xff6840));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7094 + 0xff684c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff7098 + 0xff6858));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff709c + 0xff6864));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff70a0 + 0xff6870));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff70a4 + 0xff687c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff70a8 + 0xff6888));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff70ac + 0xff6894));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff70b0 + 0xff68a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff70b4 + 0xff68ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff70b8 + 0xff68b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff70bc + 0xff68c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff70c0 + 0xff68d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff70c4 + 0xff68dc));
    *pcVar9 = '\x01';
  }
  piVar7 = param_1 + 4;
  piVar8 = param_1 + 6;
  uStack_2c = 0;
  piStack_30 = (int *)0x0;
  uStack_34 = 0;
  piStack_38 = (int *)0x0;
  uStack_3c = 0;
  if (*param_1 == 0) {
    piVar12 = (int *)*piVar7;
    uVar10 = param_1[5];
    *param_1 = -1;
    *piVar7 = 0;
    param_1[5] = 0;
    piStack_30 = piVar12;
    uStack_2c = uVar10;
LAB_00ff6b94:
    pcVar9 = (char *)(_UNK_00ff70f4 + 0xff6ba0);
    if (*pcVar9 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00ff70f8 + 0xff6bb4));
      *pcVar9 = '\x01';
    }
    if (piVar12 != (int *)0x0) {
      iVar1 = *piVar12;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_00ff70fc + 0xff6bd4)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xd0);
            goto LAB_00ff6c1c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar12,**(int **)(_UNK_00ff70fc + 0xff6bd4),2);
LAB_00ff6c1c:
      (*(code *)*puVar3)(piVar12,(int)(short)uVar10,puVar3[1]);
    }
    iVar1 = param_1[3];
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff7100 + 0xff6c40));
    System_Func_UniTask____ctor_2395d44(uVar4,iVar1,**(undefined4 **)(_UNK_00ff7104 + 0xff6c54),0);
    if (*(int *)(**(int **)(_UNK_00ff7108 + 0xff6c70) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Networking_HiroController__ExecuteTask_114cc9c(&piStack_48,uVar4,3,0,0x40000000,0,0,0)
    ;
    uVar10 = uStack_44;
    piVar7 = piStack_48;
    uStack_44 = 0;
    piStack_48 = (int *)0x0;
    if ((*(byte *)(*(int *)(**(int **)(_UNK_00ff710c + 0xff6cbc) + 0x10) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    piStack_48 = piVar7;
    uStack_44 = uVar10;
    thunk_FUN_00ec5080(&piStack_48,0);
    uStack_34 = uStack_44;
    piStack_38 = piStack_48;
    iVar1 = *(int *)(**(int **)(_UNK_00ff7110 + 0xff6cf8) + 0x10);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    uVar10 = uStack_44 & 0xff;
    if (piStack_48 == (int *)0x0) goto joined_r0x00ff6e5c;
    iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 0xc) + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 4);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768(iVar1);
    }
    iVar2 = *piStack_48;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar1) {
          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 200);
          goto LAB_00ff6db0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piStack_48,iVar1,1);
LAB_00ff6db0:
    uVar6 = (int)uStack_44 >> 0x10;
    iVar1 = (*(code *)*puVar3)(piStack_48,uVar6,puVar3[1]);
    piVar7 = piStack_48;
    if (iVar1 == 0) {
      *piVar8 = (int)piStack_48;
      param_1[7] = uStack_44;
      *param_1 = 1;
      thunk_FUN_00ec5080(piVar8,0);
      func_0x010124dc(param_1 + 1,&piStack_38,param_1,**(undefined4 **)(_UNK_00ff7114 + 0xff6e88));
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff70c8 + 0xff6970));
      System_Object___ctor_2bb93bc(iVar1,0);
      param_1[3] = iVar1;
      thunk_FUN_00ec5080(param_1 + 3,iVar1);
      iVar1 = param_1[2];
      if (param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar12 = (int *)(param_1[3] + 8);
      *piVar12 = iVar1;
      thunk_FUN_00ec5080(piVar12,iVar1);
      piVar12 = *(int **)(_UNK_00ff70cc + 0xff69bc);
      iVar1 = *piVar12;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar12;
      }
      puVar3 = *(undefined4 **)(iVar1 + 0x5c);
      iVar2 = puVar3[3];
      if (iVar2 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          FUN_00ec3934();
          puVar3 = *(undefined4 **)(*piVar12 + 0x5c);
        }
        uVar4 = *puVar3;
        iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff70d0 + 0xff6a08));
        System_Func_bool____ctor_23938dc(iVar2,uVar4,**(undefined4 **)(_UNK_00ff70d4 + 0xff6a1c),0);
        piVar12 = (int *)(*(int *)(*piVar12 + 0x5c) + 0xc);
        *piVar12 = iVar2;
        thunk_FUN_00ec5080(piVar12,iVar2);
      }
      piVar11 = *(int **)(_UNK_00ff70d8 + 0xff6a4c);
      if (*(int *)(*piVar11 + 0x74) == 0) {
        FUN_00ec3934();
      }
      Cysharp_Threading_Tasks_UniTask__WaitUntil_3217d44(&piStack_48,iVar2,8,0,0,0);
      thunk_FUN_00ec5080(&piStack_48,0);
      uVar6 = uStack_44;
      piVar12 = piStack_48;
      pcVar9 = (char *)(_UNK_00ff70dc + 0xff6aa8);
      uStack_2c = uStack_44;
      piStack_30 = piStack_48;
      if (*pcVar9 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_00ff70e0 + 0xff6ac8));
        *pcVar9 = '\x01';
      }
      if (*(int *)(*piVar11 + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar9 = (char *)(_UNK_00ff70e4 + 0xff6af0);
      if (*pcVar9 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_00ff70e8 + 0xff6b04));
        *pcVar9 = '\x01';
      }
      uVar10 = (uint)(short)uVar6;
      if (piVar12 == (int *)0x0) {
        piVar12 = (int *)0x0;
      }
      else {
        iVar1 = *piVar12;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar11[-1] == **(int **)(_UNK_00ff70ec + 0xff6b28)) {
              puVar3 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
              goto LAB_00ff6b78;
            }
            uVar5 = uVar5 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined4 *)FUN_00efdb38(piVar12,**(int **)(_UNK_00ff70ec + 0xff6b28),0);
LAB_00ff6b78:
        iVar1 = (*(code *)*puVar3)(piVar12,uVar10,puVar3[1]);
        if (iVar1 == 0) {
          *piVar7 = (int)piVar12;
          *param_1 = 0;
          param_1[5] = uVar6;
          thunk_FUN_00ec5080(piVar7,0);
          func_0x010123bc(param_1 + 1,&piStack_30,param_1,
                          **(undefined4 **)(_UNK_00ff70f0 + 0xff6f7c));
          return;
        }
      }
      goto LAB_00ff6b94;
    }
    piStack_38 = (int *)*piVar8;
    uStack_34 = param_1[7];
    *param_1 = -1;
    uVar10 = uStack_34 & 0xff;
    uVar6 = uStack_34 >> 0x10;
    *piVar8 = 0;
    param_1[7] = 0;
    piVar7 = piStack_38;
  }
  if (piVar7 != (int *)0x0) {
    iVar1 = *(int *)(**(int **)(_UNK_00ff7118 + 0xff6de4) + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0x14);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768(iVar1);
    }
    iVar2 = *piVar7;
    uVar10 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar10 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar1) {
          puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_00ff6ea8;
        }
        uVar10 = uVar10 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar7,iVar1,0);
LAB_00ff6ea8:
    uVar10 = (*(code *)*puVar3)(piVar7,(int)(short)uVar6,puVar3[1]);
  }
joined_r0x00ff6e5c:
  if (uVar10 != 0) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_00ff711c + 0xff6ed0));
    if (param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = System_String__Concat_29fee38
                      (**(undefined4 **)(_UNK_00ff7120 + 0xff6ef4),*(undefined4 *)(param_1[3] + 8),0
                      );
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Debugging_CreativeCanvasController__LogMessage_110e8d8(iVar1,uVar4,0);
  }
  *param_1 = -2;
  param_1[3] = 0;
  thunk_FUN_00ec5080(param_1 + 3,0);
  func_0x00fcef34(param_1 + 1,0);
  return;
}

