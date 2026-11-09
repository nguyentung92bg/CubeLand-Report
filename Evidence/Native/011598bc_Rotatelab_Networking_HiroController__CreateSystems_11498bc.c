/* IL2CPP: Rotatelab.Networking.HiroController$$CreateSystems
void Rotatelab_Networking_HiroController__CreateSystems (Rotatelab_Networking_HiroController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0115a28c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$CreateSystems
   void Rotatelab_Networking_HiroController__CreateSystems (Rotatelab_Networking_HiroController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Networking_HiroController__CreateSystems_11498bc(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int extraout_r1;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  char *pcVar13;
  int *piVar14;
  int *piVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined4 uStack_30;
  int **ppiStack_2c;
  int *piStack_28;
  
  pcVar13 = (char *)(_UNK_0115a2dc + 0x11598d4);
  if (*pcVar13 == '\0') {
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
    *pcVar13 = '\x01';
  }
  iVar9 = 0x58;
  piVar14 = *(int **)(_UNK_0115a350 + 0x1159a44);
  iVar8 = 0x50;
  iVar2 = *piVar14;
  if (*(char *)(param_1 + 100) == '\0') {
    iVar8 = 0x4c;
    iVar9 = 0x54;
  }
  iVar17 = *(int *)(param_1 + iVar8);
  iVar8 = *(int *)(param_1 + iVar9);
  piStack_28 = (int *)0x0;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar14;
  }
  uVar1 = *(undefined1 *)(*(int *)(iVar2 + 0x5c) + 0x78);
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a354 + 0x1159a90));
  System_Object___ctor_2bb93bc(iVar2,0);
  *(undefined1 *)(iVar2 + 8) = uVar1;
  *(int *)(param_1 + 0x30) = iVar2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x30),iVar2);
  iVar2 = *(int *)(**(int **)(_UNK_0115a358 + 0x1159ac8) + 0x74);
  if (iVar2 == 0) {
    FUN_00ec3934();
    iVar2 = extraout_r1;
  }
  System_TimeSpan__FromSeconds_2b8a42c(&uStack_30,iVar2,0,0x40240000,0);
  uVar21 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a35c + 0x1159b00));
  iVar2 = (int)uVar21;
  Hiro_NakamaClientNetworkProbe___ctor_2961f0c
            (iVar2,(int)((ulonglong)uVar21 >> 0x20),uStack_30,ppiStack_2c,0,0);
  piVar14 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_0115a360 + 0x1159b2c),2);
  piVar15 = *(int **)(_UNK_0115a364 + 0x1159b40);
  iVar9 = *piVar15;
  if (*(int *)(iVar9 + 0x74) == 0) {
    FUN_00ec3934();
    iVar9 = *piVar15;
  }
  iVar9 = **(int **)(iVar9 + 0x5c);
  if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar9 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar9,*(undefined4 *)(*piVar14 + 0x20)), iVar3 == 0)) {
    uVar4 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar4,0);
  }
  if (piVar14[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar14[4] = iVar9;
  thunk_FUN_00ec5080(piVar14 + 4,iVar9);
  if ((iVar2 != 0) &&
     (iVar9 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar14 + 0x20)), iVar9 == 0)) {
    uVar4 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar4,0);
  }
  if ((uint)piVar14[3] < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar14[5] = iVar2;
  thunk_FUN_00ec5080(piVar14 + 5,iVar2);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a368 + 0x1159c0c));
  Hiro_NetworkMonitor___ctor_2967884(uVar4,piVar14,0);
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x2c),uVar4);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar18 = *(undefined4 *)(iVar17 + 8);
  uVar20 = *(undefined4 *)(iVar17 + 0xc);
  uVar19 = *(undefined4 *)(iVar17 + 0x10);
  uVar16 = *(undefined4 *)(iVar17 + 0x14);
  iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a36c + 0x1159c5c));
  System_Object___ctor_2bb93bc(iVar9,0);
  puVar5 = *(undefined4 **)(_UNK_0115a370 + 0x1159c88);
  *(undefined2 *)(iVar9 + 8) = 0;
  uVar6 = thunk_FUN_00f00cdc(*puVar5);
  Nakama_Client___ctor_2c1470c(uVar6,uVar18,uVar20,uVar19,uVar16,iVar9,1,0);
  uVar16 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a374 + 0x1159ccc));
  Hiro_NakamaSystem_AuthorizerFunc___ctor_2962b7c
            (uVar16,param_1,**(undefined4 **)(_UNK_0115a378 + 0x1159ce8),0);
  uVar18 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a37c + 0x1159cfc));
  Hiro_NakamaSystem___ctor_2963100(uVar18,uVar4,uVar6,uVar16,iVar2,0);
  *(undefined4 *)(param_1 + 0x20) = uVar18;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x20),uVar18);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar20 = *(undefined4 *)(iVar8 + 8);
  uVar18 = *(undefined4 *)(iVar8 + 0xc);
  uVar16 = *(undefined4 *)(iVar8 + 0x10);
  uVar19 = *(undefined4 *)(iVar8 + 0x14);
  iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a380 + 0x1159d5c));
  System_Object___ctor_2bb93bc(iVar8,0);
  puVar5 = *(undefined4 **)(_UNK_0115a384 + 0x1159d8c);
  *(undefined2 *)(iVar8 + 8) = 0;
  uVar6 = thunk_FUN_00f00cdc(*puVar5);
  Satori_Client___ctor_2d0c530(uVar6,uVar20,uVar18,uVar16,uVar19,iVar8,1,0);
  uVar16 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a388 + 0x1159dc8));
  Hiro_SatoriSystem_AuthorizerFunc___ctor_296d790
            (uVar16,param_1,**(undefined4 **)(_UNK_0115a38c + 0x1159de4),0);
  iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a390 + 0x1159df8));
  Hiro_SatoriSystem___ctor_296b460(iVar8,uVar4,uVar6,uVar16,1,0);
  piVar14 = (int *)(param_1 + 0x24);
  *piVar14 = iVar8;
  thunk_FUN_00ec5080(piVar14,iVar8);
  if (*piVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar15 = *(int **)(*piVar14 + 0x10);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a394 + 0x1159e44));
  Satori_RetryConfiguration___ctor_2d165e0(uVar4,0,0,0);
  if (piVar15 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *piVar15;
  uVar10 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar11[-1] == **(int **)(_UNK_0115a398 + 0x1159e7c)) {
        puVar5 = (undefined4 *)(iVar8 + *piVar11 * 8 + 0xc0);
        goto LAB_01159ec4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined4 *)FUN_00efdb38(piVar15,**(int **)(_UNK_0115a398 + 0x1159e7c),0);
LAB_01159ec4:
  (*(code *)*puVar5)(piVar15,uVar4,puVar5[1]);
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  uVar16 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a39c + 0x1159eec));
  Hiro_RewardMailboxSystem___ctor_296a9d8(uVar4,uVar16,uVar6,0);
  puVar5 = (undefined4 *)(param_1 + 0x28);
  *puVar5 = uVar4;
  thunk_FUN_00ec5080(puVar5,uVar4);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a3a0 + 0x1159f2c));
  Hiro_Unity_PlayerPrefsStorage___ctor_28feaa4(uVar4,0);
  uVar16 = *(undefined4 *)(param_1 + 0x30);
  iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a3a4 + 0x1159f4c));
  Hiro_System_Systems___ctor_29789bc
            (iVar8,**(undefined4 **)(_UNK_0115a3a8 + 0x1159f68),uVar6,uVar4,uVar16,0);
  piVar15 = (int *)(param_1 + 0x1c);
  *piVar15 = iVar8;
  thunk_FUN_00ec5080(piVar15,iVar8);
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
  Hiro_System_Systems__Add_2978ec4(*piVar15,*puVar5,0);
  if (*piVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar14 = *(int **)(*piVar15 + 0x24);
  if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *piVar14;
  uVar10 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar10 != 0) {
    piVar15 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar15[-1] == **(int **)(_UNK_0115a3ac + 0x115a024)) {
        puVar5 = (undefined4 *)(iVar8 + *piVar15 * 8 + 0xc0);
        goto LAB_0115a06c;
      }
      uVar10 = uVar10 - 1;
      piVar15 = piVar15 + 2;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined4 *)FUN_00efdb38(piVar14,**(int **)(_UNK_0115a3ac + 0x115a024),0);
LAB_0115a06c:
  piStack_28 = (int *)(*(code *)*puVar5)(piVar14,puVar5[1]);
  ppiStack_2c = &piStack_28;
  uStack_30 = 0;
  piVar15 = *(int **)(_UNK_0115a3b0 + 0x115a0a0);
  piVar11 = *(int **)(_UNK_0115a3b4 + 0x115a0a8);
  piVar14 = *(int **)(_UNK_0115a3b8 + 0x115a0b0);
  do {
    piVar7 = piStack_28;
    if (piStack_28 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = *piStack_28;
    uVar10 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar12[-1] == *piVar15) {
          puVar5 = (undefined4 *)(iVar8 + *piVar12 * 8 + 0xc0);
          goto LAB_0115a108;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined4 *)FUN_00efdb38(piStack_28,*piVar15,0);
LAB_0115a108:
    iVar8 = (*(code *)*puVar5)(piVar7,puVar5[1]);
    piVar7 = piStack_28;
    if (iVar8 == 0) {
      if (piStack_28 == (int *)0x0) {
        return;
      }
      iVar8 = *piStack_28;
      uVar10 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar10 == 0) goto LAB_0115a258;
      piVar14 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      break;
    }
    if (piStack_28 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = *piStack_28;
    uVar10 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar12[-1] == *piVar11) {
          puVar5 = (undefined4 *)(iVar8 + *piVar12 * 8 + 0xc0);
          goto LAB_0115a180;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined4 *)FUN_00efdb38(piStack_28,*piVar11,0);
LAB_0115a180:
    uVar4 = (*(code *)*puVar5)(piVar7,puVar5[1]);
    piVar7 = (int *)thunk_FUN_00f00bc8(uVar4,*piVar14);
    if (piVar7 != (int *)0x0) {
      iVar8 = *piVar7;
      iVar2 = *piVar14;
      uVar10 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar12[-1] == iVar2) {
            puVar5 = (undefined4 *)(iVar8 + *piVar12 * 8 + 0xd0);
            goto LAB_0115a1f4;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined4 *)FUN_00efdb38(piVar7,iVar2,2);
LAB_0115a1f4:
      (*(code *)*puVar5)(piVar7,puVar5[1]);
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar14 = piVar14 + 2;
    if (uVar10 == 0) break;
    if (piVar14[-1] == **(int **)(_UNK_0115a3bc + 0x115a22c)) {
      puVar5 = (undefined4 *)(iVar8 + *piVar14 * 8 + 0xc0);
      goto LAB_0115a274;
    }
  }
LAB_0115a258:
  puVar5 = (undefined4 *)FUN_00efdb38(piStack_28,**(int **)(_UNK_0115a3bc + 0x115a22c),0);
LAB_0115a274:
  (*(code *)*puVar5)(piVar7,puVar5[1]);
  return;
}

