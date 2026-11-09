/* IL2CPP: Rotatelab.Networking.CloudSaveManager.<SendToRemoteAsync>d__35$$MoveNext
void Rotatelab_Networking_CloudSaveManager__SendToRemoteAsync_d__35__MoveNext (Rotatelab_Networking_CloudSaveManager__SendToRemoteAsync_d__35_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01159274) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager.<SendToRemoteAsync>d__35$$MoveNext
   void Rotatelab_Networking_CloudSaveManager__SendToRemoteAsync_d__35__MoveNext
   (Rotatelab_Networking_CloudSaveManager__SendToRemoteAsync_d__35_o __this, const MethodInfo*
   method); */

void Rotatelab_Networking_CloudSaveManager__SendToRemoteAsync_d__35__MoveNext_1148ea4(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined4 uStack_50;
  uint *puStack_4c;
  uint *puStack_48;
  undefined4 uStack_44;
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  uint *puStack_2c;
  uint *puStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  pcVar8 = (char *)(_UNK_0115947c + 0x1158ebc);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01159480 + 0x1158ed0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01159484 + 0x1158edc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01159488 + 0x1158ee8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115948c + 0x1158ef4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01159490 + 0x1158f00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01159494 + 0x1158f0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01159498 + 0x1158f18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115949c + 0x1158f24));
    *pcVar8 = '\x01';
  }
  uStack_1c = *param_1;
  puStack_2c = *(uint **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  puStack_28 = *(uint **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = param_1[3];
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  if (uStack_1c == 0) {
LAB_01159208:
    puStack_48 = &uStack_20;
    puStack_4c = &uStack_1c;
    uStack_50 = 0;
    uStack_34 = param_1[5];
    *param_1 = 0xffffffff;
    param_1[5] = 0;
    uStack_1c = 0xffffffff;
LAB_01159224:
    System_Runtime_CompilerServices_TaskAwaiter_object___GetResult_1b45b3c
              (&uStack_34,**(undefined4 **)(_UNK_011594a0 + 0x1159230));
    iVar1 = 0xb;
  }
  else {
    if (uStack_20 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Networking_CloudSaveManager__get_Nakama_11417dc();
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(iVar1 + 0x10) == '\0') goto LAB_01159288;
    if (uStack_20 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Networking_CloudSaveManager__get_Monitor_114183c();
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Hiro_NetworkMonitor__get_Online_296750c(iVar1,0);
    if (iVar1 == 0) goto LAB_01159288;
    if (uStack_20 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(uStack_20 + 0x11) == '\0') goto LAB_01159288;
    if (uStack_20 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(uStack_20 + 0x12) != '\0') goto LAB_01159288;
    if (uStack_20 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(uStack_20 + 0x14);
    if (*(int *)(**(int **)(_UNK_011594a4 + 0x115901c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_DateTimeOffset__get_UtcNow_2b4da3c(&uStack_50,0);
    uStack_30 = uStack_50;
    puStack_2c = puStack_4c;
    puStack_28 = puStack_48;
    uStack_24 = uStack_44;
    uVar9 = System_DateTimeOffset__ToUnixTimeSeconds_2b4faac(&uStack_30,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined8 *)(iVar1 + 0x10) = uVar9;
    if (uStack_20 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined1 *)(uStack_20 + 0x12) = 1;
    puStack_48 = &uStack_20;
    puStack_4c = &uStack_1c;
    uStack_50 = 0;
    if (uStack_1c == 0) goto LAB_01159208;
    if (uStack_20 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = Rotatelab_Networking_CloudSaveManager__get_Nakama_11417dc();
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011594a8 + 0x11590d0));
    Nakama_WriteStorageObject___ctor_2c26bfc(iVar1,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar1 + 8) = **(undefined4 **)(_UNK_011594ac + 0x11590f8);
    thunk_FUN_00ec5080();
    *(undefined4 *)(iVar1 + 0xc) = **(undefined4 **)(_UNK_011594b0 + 0x1159110);
    uVar3 = thunk_FUN_00ec5080();
    if (uStack_20 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = Rotatelab_Networking_CloudSaveManager__SerializeData_1143c64
                      (uVar3,*(undefined4 *)(uStack_20 + 0x14));
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
    thunk_FUN_00ec5080();
    *(undefined4 *)(iVar1 + 0x10) = 1;
    *(undefined4 *)(iVar1 + 0x14) = 1;
    iVar1 = Rotatelab_GameExtensions__WriteStorageObjectAsync_fb5c80(uVar2,iVar1,0,param_1[4],0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_34 = System_Threading_Tasks_Task_object___GetAwaiter_1b58780
                          (iVar1,**(undefined4 **)(_UNK_011594b4 + 0x1159188));
    iVar1 = System_Runtime_CompilerServices_TaskAwaiter_object___get_IsCompleted_1b45ac8
                      (&uStack_34,**(undefined4 **)(_UNK_011594b8 + 0x115919c));
    if (iVar1 != 0) goto LAB_01159224;
    param_1[5] = uStack_34;
    *param_1 = 0;
    uStack_1c = 0;
    thunk_FUN_00ec5080(param_1 + 5,0);
    iVar1 = 10;
    func_0x01172dfc(param_1 + 1,&uStack_34,param_1,**(undefined4 **)(_UNK_011594bc + 0x11591e0));
  }
  if (0x7fffffff < uStack_1c) {
    if (*puStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined1 *)(*puStack_48 + 0x12) = 0;
  }
  if (iVar1 != 0 && iVar1 != 0xb) {
    return;
  }
LAB_01159288:
  iVar1 = _UNK_011594c0;
  *param_1 = 0xfffffffe;
  if (*(char *)(iVar1 + 0x115929c) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011594c4 + 0x11592b0));
    *(char *)(iVar1 + 0x115929c) = '\x01';
  }
  piVar7 = (int *)param_1[1];
  if (piVar7 != (int *)0x0) {
    iVar1 = *piVar7;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_011594c8 + 0x11592d4)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xd0);
          goto LAB_0115931c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar7,**(int **)(_UNK_011594c8 + 0x11592d4),2);
LAB_0115931c:
    (*(code *)*puVar4)(piVar7,puVar4[1]);
  }
  return;
}

