/* IL2CPP: Rotatelab.RemoteConfigManager.<ActivateRemoteConfigAsync>d__51$$MoveNext
void Rotatelab_RemoteConfigManager__ActivateRemoteConfigAsync_d__51__MoveNext (Rotatelab_RemoteConfigManager__ActivateRemoteConfigAsync_d__51_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager.<ActivateRemoteConfigAsync>d__51$$MoveNext
   void Rotatelab_RemoteConfigManager__ActivateRemoteConfigAsync_d__51__MoveNext
   (Rotatelab_RemoteConfigManager__ActivateRemoteConfigAsync_d__51_o __this, const MethodInfo*
   method); */

void Rotatelab_RemoteConfigManager__ActivateRemoteConfigAsync_d__51__MoveNext_1075ae4(uint *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 uVar7;
  char *pcVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_3c;
  uint *puStack_38;
  uint **ppuStack_34;
  uint auStack_30 [5];
  uint *puStack_1c;
  
  pcVar8 = (char *)(_UNK_010863d0 + 0x1085b00);
  puStack_1c = param_1;
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010863d4 + 0x1085b14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010863d8 + 0x1085b20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010863dc + 0x1085b2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010863e0 + 0x1085b38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010863e4 + 0x1085b44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010863e8 + 0x1085b50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010863ec + 0x1085b5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010863f0 + 0x1085b68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010863f4 + 0x1085b74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010863f8 + 0x1085b80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010863fc + 0x1085b8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01086400 + 0x1085b98));
    *pcVar8 = '\x01';
  }
  auStack_30[4] = *param_1;
  uVar9 = param_1[5];
  auStack_30[3] = 0;
  auStack_30[2] = 0;
  if (auStack_30[4] == 0) {
LAB_01085d10:
    ppuStack_34 = &puStack_1c;
    puStack_38 = auStack_30 + 4;
    iStack_3c = 0;
    auStack_30[3] = puStack_1c[7];
    puStack_1c[7] = 0;
    auStack_30[4] = 0xffffffff;
    *puStack_1c = 0xffffffff;
  }
  else {
    uVar11 = param_1[4];
    uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01086418 + 0x1085bd4));
    Rotatelab_Networking_StopwatchEvent___ctor_fe8d78
              (uVar1,**(undefined4 **)(_UNK_0108641c + 0x1085be8),uVar11,1,0);
    puStack_1c[6] = uVar1;
    thunk_FUN_00ec5080(puStack_1c + 6,uVar1);
    ppuStack_34 = &puStack_1c;
    puStack_38 = auStack_30 + 4;
    iStack_3c = 0;
    if (auStack_30[4] == 0) goto LAB_01085d10;
    if (*(int *)(**(int **)(_UNK_01086420 + 0x1085c40) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = Firebase_RemoteConfig_FirebaseRemoteConfig__get_DefaultInstance_120ee10(0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Firebase_RemoteConfig_FirebaseRemoteConfig__ActivateAsync_120eeac(iVar2,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    auStack_30[3] =
         System_Threading_Tasks_Task_bool___GetAwaiter_1b55440
                   (iVar2,**(undefined4 **)(_UNK_01086424 + 0x1085c90));
    iVar2 = System_Runtime_CompilerServices_TaskAwaiter_bool___get_IsCompleted_1b45828
                      (auStack_30 + 3,**(undefined4 **)(_UNK_01086428 + 0x1085ca4));
    if (iVar2 == 0) {
      uVar7 = 0;
      auStack_30[4] = 0;
      *puStack_1c = 0;
      puStack_1c[7] = auStack_30[3];
      thunk_FUN_00ec5080(puStack_1c + 7,0);
      iVar2 = 5;
      func_0x0109f810(puStack_1c + 1,auStack_30 + 3,puStack_1c,
                      **(undefined4 **)(_UNK_0108642c + 0x1085ce8));
      goto LAB_01085e4c;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter_bool___GetResult_1b4589c
            (auStack_30 + 3,**(undefined4 **)(_UNK_01086404 + 0x1085d3c));
  if (*(int *)(**(int **)(_UNK_01086408 + 0x1085d50) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = Firebase_RemoteConfig_FirebaseRemoteConfig__get_DefaultInstance_120ee10(0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = Firebase_RemoteConfig_FirebaseRemoteConfig__get_AllValues_120f87c(iVar2,0);
  if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar5 = (undefined4 *)(uVar9 + 0x10);
  *puVar5 = uVar3;
  thunk_FUN_00ec5080(puVar5,uVar3);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0108640c + 0x1085db0));
  iVar4 = Firebase_RemoteConfig_FirebaseRemoteConfig__get_DefaultInstance_120ee10(0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = Firebase_RemoteConfig_FirebaseRemoteConfig__get_Info_120fc28(iVar4,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_48 = *(undefined4 *)(iVar4 + 0x10);
  uStack_44 = *(undefined4 *)(iVar4 + 0x14);
  uVar3 = FUN_00ec393c(**(undefined4 **)(_UNK_01086410 + 0x1085dfc),&uStack_48);
  uVar3 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_01086414 + 0x1085e1c),uVar3,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Debugging_CreativeCanvasController__LogMessage_110e8d8(iVar2,uVar3,0);
  uVar7 = 1;
  iVar2 = 6;
LAB_01085e4c:
  if ((0x7fffffff < *puStack_38) && (piVar10 = (int *)(*ppuStack_34)[6], piVar10 != (int *)0x0)) {
    iVar4 = *piVar10;
    uVar9 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar9 != 0) {
      piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_0108644c + 0x1085e80)) {
          puVar5 = (undefined4 *)(iVar4 + *piVar6 * 8 + 0xc0);
          goto LAB_01085ec8;
        }
        uVar9 = uVar9 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)FUN_00efdb38(piVar10,**(int **)(_UNK_0108644c + 0x1085e80),0);
LAB_01085ec8:
    (*(code *)*puVar5)(piVar10,puVar5[1]);
  }
  if (iStack_3c != 0) {
    FUN_00ec3a6c();
  }
  if (iVar2 == 6) {
    *puStack_1c = 0xfffffffe;
    puStack_1c[6] = 0;
    thunk_FUN_00ec5080();
    piVar10 = (int *)puStack_1c[1];
    if (piVar10 == (int *)0x0) {
      *(undefined1 *)(puStack_1c + 3) = uVar7;
    }
    else {
      iVar2 = *(int *)(**(int **)(_UNK_0108645c + 0x1085fe4) + 0x10);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = FUN_00efd768();
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 4);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = FUN_00efd768(iVar2);
      }
      iVar4 = *piVar10;
      uVar9 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar9 != 0) {
        piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar2) {
            puVar5 = (undefined4 *)(iVar4 + *piVar6 * 8 + 0xd0);
            goto LAB_010860ac;
          }
          uVar9 = uVar9 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined4 *)FUN_00efdb38(piVar10,iVar2,2);
LAB_010860ac:
      (*(code *)*puVar5)(piVar10,uVar7,puVar5[1]);
    }
  }
  else if (iVar2 == 0) {
    uVar9 = auStack_30[auStack_30[2] + -1];
    *puStack_1c = 0xfffffffe;
    puStack_1c[6] = 0;
    thunk_FUN_00ec5080();
    puVar12 = puStack_1c;
    iVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01086454 + 0x1085f30));
    piVar10 = (int *)puVar12[1];
    if (piVar10 == (int *)0x0) {
      puVar12 = puVar12 + 2;
      *puVar12 = uVar9;
      thunk_FUN_00ec5080(puVar12,uVar9);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x10);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = FUN_00efd768();
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 4);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = FUN_00efd768(iVar2);
      }
      iVar4 = *piVar10;
      uVar1 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar2) {
            puVar5 = (undefined4 *)(iVar4 + *piVar6 * 8 + 0xd8);
            goto LAB_01086080;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar1 != 0);
      }
      puVar5 = (undefined4 *)FUN_00efdb38(piVar10,iVar2,3);
LAB_01086080:
      (*(code *)*puVar5)(piVar10,uVar9,puVar5[1]);
    }
  }
  return;
}

