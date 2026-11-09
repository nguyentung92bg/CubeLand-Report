/* IL2CPP: Rotatelab.Networking.HiroController$$Awake
void Rotatelab_Networking_HiroController__Awake (Rotatelab_Networking_HiroController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0115a28c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$Awake
   void Rotatelab_Networking_HiroController__Awake (Rotatelab_Networking_HiroController_o* __this,
   const MethodInfo* method); */

void Rotatelab_Networking_HiroController__Awake_1149570(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int extraout_r1;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  char *pcVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined4 uStack_30;
  int **ppiStack_2c;
  int *apiStack_28 [4];
  
  pcVar16 = (char *)(_UNK_011596a0 + 0x1159588);
  if (*pcVar16 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011596a4 + 0x115959c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011596a8 + 0x11595a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011596ac + 0x11595b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011596b0 + 0x11595c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011596b4 + 0x11595cc));
    *pcVar16 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_011596b8 + 0x11595e0));
  uVar3 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (*(int *)(**(int **)(_UNK_011596bc + 0x1159608) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Object__DontDestroyOnLoad_3609c1c(uVar3,0);
  bVar2 = Rotatelab_Save_SaveManager__GetBool_107f0d4
                    (**(undefined4 **)(_UNK_011596c0 + 0x1159638),0,0);
  puVar4 = *(undefined4 **)(_UNK_011596c4 + 0x115964c);
  *(byte *)(param_1 + 0x65) = bVar2 ^ 1;
  uVar3 = thunk_FUN_00f00cdc(*puVar4);
  Rotatelab_Networking_StopwatchEvent___ctor_fe8d78
            (uVar3,**(undefined4 **)(_UNK_011596c8 + 0x115966c),0,1);
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x68),uVar3);
  Rotatelab_Networking_HiroController__InitializeDeviceID_11496cc(param_1);
  pcVar16 = (char *)(_UNK_0115a2dc + 0x11598d4);
  if (*pcVar16 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a2e0 + 0x11598e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a2e4 + 0x11598f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a2e8 + 0x1159900));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a2ec + 0x115990c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a2f0 + 0x1159918));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a2f4 + 0x1159924));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a2f8 + 0x1159930));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a2fc + 0x115993c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a300 + 0x1159948));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a304 + 0x1159954));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a308 + 0x1159960));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a30c + 0x115996c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a310 + 0x1159978));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a314 + 0x1159984));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a318 + 0x1159990));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a31c + 0x115999c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a320 + 0x11599a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a324 + 0x11599b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a328 + 0x11599c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a32c + 0x11599cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a330 + 0x11599d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a334 + 0x11599e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a338 + 0x11599f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a33c + 0x11599fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a340 + 0x1159a08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a344 + 0x1159a14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a348 + 0x1159a20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a34c + 0x1159a2c));
    *pcVar16 = '\x01';
  }
  iVar10 = 0x58;
  piVar14 = *(int **)(_UNK_0115a350 + 0x1159a44);
  iVar9 = 0x50;
  iVar5 = *piVar14;
  if (*(char *)(param_1 + 100) == '\0') {
    iVar9 = 0x4c;
    iVar10 = 0x54;
  }
  iVar18 = *(int *)(param_1 + iVar9);
  iVar9 = *(int *)(param_1 + iVar10);
  apiStack_28[0] = (int *)0x0;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar14;
  }
  uVar1 = *(undefined1 *)(*(int *)(iVar5 + 0x5c) + 0x78);
  iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a354 + 0x1159a90));
  System_Object___ctor_2bb93bc(iVar5,0);
  *(undefined1 *)(iVar5 + 8) = uVar1;
  *(int *)(param_1 + 0x30) = iVar5;
  thunk_FUN_00ec5080((int *)(param_1 + 0x30),iVar5);
  iVar5 = *(int *)(**(int **)(_UNK_0115a358 + 0x1159ac8) + 0x74);
  if (iVar5 == 0) {
    FUN_00ec3934();
    iVar5 = extraout_r1;
  }
  System_TimeSpan__FromSeconds_2b8a42c(&uStack_30,iVar5,0,0x40240000,0);
  uVar22 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a35c + 0x1159b00));
  iVar5 = (int)uVar22;
  Hiro_NakamaClientNetworkProbe___ctor_2961f0c
            (iVar5,(int)((ulonglong)uVar22 >> 0x20),uStack_30,ppiStack_2c,0,0);
  piVar14 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_0115a360 + 0x1159b2c),2);
  piVar15 = *(int **)(_UNK_0115a364 + 0x1159b40);
  iVar10 = *piVar15;
  if (*(int *)(iVar10 + 0x74) == 0) {
    FUN_00ec3934();
    iVar10 = *piVar15;
  }
  iVar10 = **(int **)(iVar10 + 0x5c);
  if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar10 != 0) &&
     (iVar6 = thunk_FUN_00f00bc8(iVar10,*(undefined4 *)(*piVar14 + 0x20)), iVar6 == 0)) {
    uVar3 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar3,0);
  }
  if (piVar14[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar14[4] = iVar10;
  thunk_FUN_00ec5080(piVar14 + 4,iVar10);
  if ((iVar5 != 0) &&
     (iVar10 = thunk_FUN_00f00bc8(iVar5,*(undefined4 *)(*piVar14 + 0x20)), iVar10 == 0)) {
    uVar3 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar3,0);
  }
  if ((uint)piVar14[3] < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar14[5] = iVar5;
  thunk_FUN_00ec5080(piVar14 + 5,iVar5);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a368 + 0x1159c0c));
  Hiro_NetworkMonitor___ctor_2967884(uVar3,piVar14,0);
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x2c),uVar3);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar19 = *(undefined4 *)(iVar18 + 8);
  uVar21 = *(undefined4 *)(iVar18 + 0xc);
  uVar20 = *(undefined4 *)(iVar18 + 0x10);
  uVar17 = *(undefined4 *)(iVar18 + 0x14);
  iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a36c + 0x1159c5c));
  System_Object___ctor_2bb93bc(iVar10,0);
  puVar4 = *(undefined4 **)(_UNK_0115a370 + 0x1159c88);
  *(undefined2 *)(iVar10 + 8) = 0;
  uVar7 = thunk_FUN_00f00cdc(*puVar4);
  Nakama_Client___ctor_2c1470c(uVar7,uVar19,uVar21,uVar20,uVar17,iVar10,1,0);
  uVar17 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a374 + 0x1159ccc));
  Hiro_NakamaSystem_AuthorizerFunc___ctor_2962b7c
            (uVar17,param_1,**(undefined4 **)(_UNK_0115a378 + 0x1159ce8),0);
  uVar19 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a37c + 0x1159cfc));
  Hiro_NakamaSystem___ctor_2963100(uVar19,uVar3,uVar7,uVar17,iVar5,0);
  *(undefined4 *)(param_1 + 0x20) = uVar19;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x20),uVar19);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar21 = *(undefined4 *)(iVar9 + 8);
  uVar19 = *(undefined4 *)(iVar9 + 0xc);
  uVar17 = *(undefined4 *)(iVar9 + 0x10);
  uVar20 = *(undefined4 *)(iVar9 + 0x14);
  iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a380 + 0x1159d5c));
  System_Object___ctor_2bb93bc(iVar9,0);
  puVar4 = *(undefined4 **)(_UNK_0115a384 + 0x1159d8c);
  *(undefined2 *)(iVar9 + 8) = 0;
  uVar7 = thunk_FUN_00f00cdc(*puVar4);
  Satori_Client___ctor_2d0c530(uVar7,uVar21,uVar19,uVar17,uVar20,iVar9,1,0);
  uVar17 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a388 + 0x1159dc8));
  Hiro_SatoriSystem_AuthorizerFunc___ctor_296d790
            (uVar17,param_1,**(undefined4 **)(_UNK_0115a38c + 0x1159de4),0);
  iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a390 + 0x1159df8));
  Hiro_SatoriSystem___ctor_296b460(iVar9,uVar3,uVar7,uVar17,1,0);
  piVar14 = (int *)(param_1 + 0x24);
  *piVar14 = iVar9;
  thunk_FUN_00ec5080(piVar14,iVar9);
  if (*piVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar15 = *(int **)(*piVar14 + 0x10);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a394 + 0x1159e44));
  Satori_RetryConfiguration___ctor_2d165e0(uVar3,0,0,0);
  if (piVar15 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar9 = *piVar15;
  uVar11 = (uint)*(ushort *)(iVar9 + 0xb6);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(int *)(iVar9 + 0x58) + 4);
    do {
      if (piVar12[-1] == **(int **)(_UNK_0115a398 + 0x1159e7c)) {
        puVar4 = (undefined4 *)(iVar9 + *piVar12 * 8 + 0xc0);
        goto LAB_01159ec4;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 2;
    } while (uVar11 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(piVar15,**(int **)(_UNK_0115a398 + 0x1159e7c),0);
LAB_01159ec4:
  (*(code *)*puVar4)(piVar15,uVar3,puVar4[1]);
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  uVar17 = *(undefined4 *)(param_1 + 0x30);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a39c + 0x1159eec));
  Hiro_RewardMailboxSystem___ctor_296a9d8(uVar3,uVar17,uVar7,0);
  puVar4 = (undefined4 *)(param_1 + 0x28);
  *puVar4 = uVar3;
  thunk_FUN_00ec5080(puVar4,uVar3);
  uVar7 = *(undefined4 *)(param_1 + 0x2c);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a3a0 + 0x1159f2c));
  Hiro_Unity_PlayerPrefsStorage___ctor_28feaa4(uVar3,0);
  uVar17 = *(undefined4 *)(param_1 + 0x30);
  iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a3a4 + 0x1159f4c));
  Hiro_System_Systems___ctor_29789bc
            (iVar9,**(undefined4 **)(_UNK_0115a3a8 + 0x1159f68),uVar7,uVar3,uVar17,0);
  piVar15 = (int *)(param_1 + 0x1c);
  *piVar15 = iVar9;
  thunk_FUN_00ec5080(piVar15,iVar9);
  if (*piVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Hiro_System_Systems__Add_2978ec4(*piVar15,*(undefined4 *)(param_1 + 0x20),0);
  if (*piVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Hiro_System_Systems__Add_2978ec4(*piVar15,*piVar14,0);
  if (*piVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Hiro_System_Systems__Add_2978ec4(*piVar15,*puVar4,0);
  if (*piVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar14 = *(int **)(*piVar15 + 0x24);
  if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar9 = *piVar14;
  uVar11 = (uint)*(ushort *)(iVar9 + 0xb6);
  if (uVar11 != 0) {
    piVar15 = (int *)(*(int *)(iVar9 + 0x58) + 4);
    do {
      if (piVar15[-1] == **(int **)(_UNK_0115a3ac + 0x115a024)) {
        puVar4 = (undefined4 *)(iVar9 + *piVar15 * 8 + 0xc0);
        goto LAB_0115a06c;
      }
      uVar11 = uVar11 - 1;
      piVar15 = piVar15 + 2;
    } while (uVar11 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(piVar14,**(int **)(_UNK_0115a3ac + 0x115a024),0);
LAB_0115a06c:
  apiStack_28[0] = (int *)(*(code *)*puVar4)(piVar14,puVar4[1]);
  ppiStack_2c = apiStack_28;
  uStack_30 = 0;
  piVar15 = *(int **)(_UNK_0115a3b0 + 0x115a0a0);
  piVar12 = *(int **)(_UNK_0115a3b4 + 0x115a0a8);
  piVar14 = *(int **)(_UNK_0115a3b8 + 0x115a0b0);
  do {
    piVar8 = apiStack_28[0];
    if (apiStack_28[0] == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *apiStack_28[0];
    uVar11 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar13[-1] == *piVar15) {
          puVar4 = (undefined4 *)(iVar9 + *piVar13 * 8 + 0xc0);
          goto LAB_0115a108;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 2;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(apiStack_28[0],*piVar15,0);
LAB_0115a108:
    iVar9 = (*(code *)*puVar4)(piVar8,puVar4[1]);
    piVar8 = apiStack_28[0];
    if (iVar9 == 0) {
      if (apiStack_28[0] == (int *)0x0) {
        return;
      }
      iVar9 = *apiStack_28[0];
      uVar11 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar11 == 0) goto LAB_0115a258;
      piVar14 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      break;
    }
    if (apiStack_28[0] == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *apiStack_28[0];
    uVar11 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar13[-1] == *piVar12) {
          puVar4 = (undefined4 *)(iVar9 + *piVar13 * 8 + 0xc0);
          goto LAB_0115a180;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 2;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(apiStack_28[0],*piVar12,0);
LAB_0115a180:
    uVar3 = (*(code *)*puVar4)(piVar8,puVar4[1]);
    piVar8 = (int *)thunk_FUN_00f00bc8(uVar3,*piVar14);
    if (piVar8 != (int *)0x0) {
      iVar9 = *piVar8;
      iVar5 = *piVar14;
      uVar11 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar13[-1] == iVar5) {
            puVar4 = (undefined4 *)(iVar9 + *piVar13 * 8 + 0xd0);
            goto LAB_0115a1f4;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 2;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piVar8,iVar5,2);
LAB_0115a1f4:
      (*(code *)*puVar4)(piVar8,puVar4[1]);
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar14 = piVar14 + 2;
    if (uVar11 == 0) break;
    if (piVar14[-1] == **(int **)(_UNK_0115a3bc + 0x115a22c)) {
      puVar4 = (undefined4 *)(iVar9 + *piVar14 * 8 + 0xc0);
      goto LAB_0115a274;
    }
  }
LAB_0115a258:
  puVar4 = (undefined4 *)FUN_00efdb38(apiStack_28[0],**(int **)(_UNK_0115a3bc + 0x115a22c),0);
LAB_0115a274:
  (*(code *)*puVar4)(piVar8,puVar4[1]);
  return;
}

