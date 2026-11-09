/* IL2CPP: Rotatelab.Networking.PushNotificationManager.<InitializeAsync>d__4$$MoveNext
void Rotatelab_Networking_PushNotificationManager__InitializeAsync_d__4__MoveNext (Rotatelab_Networking_PushNotificationManager__InitializeAsync_d__4_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.PushNotificationManager.<InitializeAsync>d__4$$MoveNext
   void Rotatelab_Networking_PushNotificationManager__InitializeAsync_d__4__MoveNext
   (Rotatelab_Networking_PushNotificationManager__InitializeAsync_d__4_o __this, const MethodInfo*
   method); */

void Rotatelab_Networking_PushNotificationManager__InitializeAsync_d__4__MoveNext_fe5938
               (int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int *piStack_48;
  int iStack_44;
  undefined4 uStack_38;
  undefined1 uStack_31;
  int *piStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_00ff6234 + 0xff5950);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff6238 + 0xff5964));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff623c + 0xff5970));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff6240 + 0xff597c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff6244 + 0xff5988));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff6248 + 0xff5994));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff624c + 0xff59a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff6250 + 0xff59ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff6254 + 0xff59b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff6258 + 0xff59c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff625c + 0xff59d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff6260 + 0xff59dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff6264 + 0xff59e8));
    *pcVar6 = '\x01';
  }
  iStack_2c = 0;
  piStack_30 = (int *)0x0;
  uStack_31 = 0;
  uStack_38 = 0;
  iVar11 = param_1[2];
  pcVar6 = (char *)(_UNK_00ff6268 + 0xff5a1c);
  if (*param_1 == 0) {
    piStack_30 = (int *)param_1[3];
    iStack_2c = param_1[4];
    *param_1 = -1;
    param_1[3] = 0;
    param_1[4] = 0;
LAB_00ff5a64:
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00ff6298 + 0xff5a7c));
      *pcVar6 = '\x01';
    }
    piVar7 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      iVar1 = *piStack_30;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar10 = (int)(short)iStack_2c;
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_00ff629c + 0xff5aa0)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd0);
            goto LAB_00ff5cd4;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00ff629c + 0xff5aa0),2);
LAB_00ff5cd4:
      (*(code *)*puVar2)(piVar7,iVar10,puVar2[1]);
    }
    piVar7 = *(int **)(_UNK_00ff62a0 + 0xff5cf4);
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar7;
    }
    puVar2 = *(undefined4 **)(iVar1 + 0x5c);
    iVar10 = puVar2[2];
    if (iVar10 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        puVar2 = *(undefined4 **)(*piVar7 + 0x5c);
      }
      uVar3 = *puVar2;
      iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff62a4 + 0xff5d40));
      System_Func_bool____ctor_23938dc(iVar10,uVar3,**(undefined4 **)(_UNK_00ff62a8 + 0xff5d54),0);
      piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 8);
      *piVar7 = iVar10;
      thunk_FUN_00ec5080(piVar7,iVar10);
    }
    piVar7 = *(int **)(_UNK_00ff62ac + 0xff5d84);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Cysharp_Threading_Tasks_UniTask__WaitUntil_3217d44(&piStack_48,iVar10,8,0,0,0);
    thunk_FUN_00ec5080(&piStack_48,0);
    pcVar8 = (char *)(_UNK_00ff62b0 + 0xff5de0);
    iStack_2c = iStack_44;
    piStack_30 = piStack_48;
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00ff62b4 + 0xff5e00));
      *pcVar8 = '\x01';
    }
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar8 = (char *)(_UNK_00ff62b8 + 0xff5e28);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00ff62bc + 0xff5e3c));
      *pcVar8 = '\x01';
    }
    piVar7 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      iVar1 = *piStack_30;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar10 = (int)(short)iStack_2c;
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_00ff62c0 + 0xff5e60)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_00ff5eac;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00ff62c0 + 0xff5e60),0);
LAB_00ff5eac:
      iVar1 = (*(code *)*puVar2)(piVar7,iVar10,puVar2[1]);
      if (iVar1 == 0) {
        param_1[4] = iStack_2c;
        *param_1 = 1;
        param_1[3] = (int)piStack_30;
        thunk_FUN_00ec5080(param_1 + 3,0);
        func_0x0101217c(param_1 + 1,&piStack_30,param_1,**(undefined4 **)(_UNK_00ff62c4 + 0xff60c0))
        ;
        return;
      }
    }
  }
  else {
    if (*param_1 != 1) {
      piVar7 = *(int **)(_UNK_00ff626c + 0xff5aec);
      iVar1 = *piVar7;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar7;
      }
      if (*(char *)(*(int *)(iVar1 + 0x5c) + 1) == '\0') goto LAB_00ff6074;
      piVar7 = *(int **)(_UNK_00ff6270 + 0xff5b1c);
      iVar1 = *piVar7;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar7;
      }
      puVar2 = *(undefined4 **)(iVar1 + 0x5c);
      iVar10 = puVar2[1];
      if (iVar10 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          FUN_00ec3934();
          puVar2 = *(undefined4 **)(*piVar7 + 0x5c);
        }
        uVar3 = *puVar2;
        iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff6274 + 0xff5b68));
        System_Func_bool____ctor_23938dc(iVar10,uVar3,**(undefined4 **)(_UNK_00ff6278 + 0xff5b7c),0)
        ;
        piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
        *piVar7 = iVar10;
        thunk_FUN_00ec5080(piVar7,iVar10);
      }
      piVar7 = *(int **)(_UNK_00ff627c + 0xff5bac);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        FUN_00ec3934();
      }
      Cysharp_Threading_Tasks_UniTask__WaitUntil_3217d44(&piStack_48,iVar10,8,0,0,0);
      thunk_FUN_00ec5080(&piStack_48,0);
      pcVar8 = (char *)(_UNK_00ff6280 + 0xff5c08);
      iStack_2c = iStack_44;
      piStack_30 = piStack_48;
      if (*pcVar8 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_00ff6284 + 0xff5c28));
        *pcVar8 = '\x01';
      }
      if (*(int *)(*piVar7 + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar8 = (char *)(_UNK_00ff6288 + 0xff5c50);
      if (*pcVar8 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_00ff628c + 0xff5c64));
        *pcVar8 = '\x01';
      }
      piVar7 = piStack_30;
      if (piStack_30 != (int *)0x0) {
        iVar1 = *piStack_30;
        uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
        iVar10 = (int)(short)iStack_2c;
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_00ff6290 + 0xff5c88)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto LAB_00ff60e0;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00ff6290 + 0xff5c88),0);
LAB_00ff60e0:
        iVar1 = (*(code *)*puVar2)(piVar7,iVar10,puVar2[1]);
        if (iVar1 == 0) {
          param_1[4] = iStack_2c;
          *param_1 = 0;
          param_1[3] = (int)piStack_30;
          thunk_FUN_00ec5080(param_1 + 3,0);
          func_0x0101217c(param_1 + 1,&piStack_30,param_1,
                          **(undefined4 **)(_UNK_00ff6294 + 0xff612c));
          return;
        }
      }
      goto LAB_00ff5a64;
    }
    piStack_30 = (int *)param_1[3];
    iStack_2c = param_1[4];
    *param_1 = -1;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff62c8 + 0xff5ee0));
    *pcVar6 = '\x01';
  }
  piVar7 = piStack_30;
  if (piStack_30 != (int *)0x0) {
    iVar1 = *piStack_30;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar10 = (int)(short)iStack_2c;
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_00ff62cc + 0xff5f04)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd0);
          goto LAB_00ff5f50;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00ff62cc + 0xff5f04),2);
LAB_00ff5f50:
    (*(code *)*puVar2)(piVar7,iVar10,puVar2[1]);
  }
  if (*(int *)(**(int **)(_UNK_00ff62d0 + 0xff5f74) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar3,0);
  piVar7 = *(int **)(_UNK_00ff62d4 + 0xff5fa4);
  iVar10 = *piVar7;
  if (*(int *)(iVar10 + 0x74) == 0) {
    FUN_00ec3934();
    iVar10 = *piVar7;
  }
  if (iVar1 < *(int *)(*(int *)(iVar10 + 0x5c) + 0x30)) {
    piVar7 = *(int **)(_UNK_00ff62d8 + 0xff5fd4);
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar7;
    }
    uVar9 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x120);
    uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff62dc + 0xff5ffc));
    System_Action_Int32Enum__bool____ctor_1f185a4
              (uVar3,iVar11,**(undefined4 **)(_UNK_00ff62e0 + 0xff6010),0);
    uVar3 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                      (uVar9,uVar3,**(undefined4 **)(_UNK_00ff62e4 + 0xff602c));
    *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x120) = uVar3;
    thunk_FUN_00ec5080();
  }
  else {
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_31 = Rotatelab_Networking_PushNotificationManager__RegisterToTokenReceivedEventAsync_fe52b4
                          (iVar11);
    Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_31,0);
  }
LAB_00ff6074:
  *param_1 = -2;
  func_0x00fcef34(param_1 + 1,0);
  return;
}

