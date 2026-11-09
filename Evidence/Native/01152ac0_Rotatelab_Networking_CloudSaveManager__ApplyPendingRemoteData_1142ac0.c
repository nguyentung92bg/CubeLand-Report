/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$ApplyPendingRemoteData
bool Rotatelab_Networking_CloudSaveManager__ApplyPendingRemoteData (Rotatelab_Networking_CloudSaveManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$ApplyPendingRemoteData
   bool Rotatelab_Networking_CloudSaveManager__ApplyPendingRemoteData
   (Rotatelab_Networking_CloudSaveManager_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Networking_CloudSaveManager__ApplyPendingRemoteData_1142ac0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_01153250 + 0x1152ad8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01153254 + 0x1152aec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01153258 + 0x1152af8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115325c + 0x1152b04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01153260 + 0x1152b10));
    *pcVar6 = '\x01';
  }
  uVar8 = 0;
  piVar9 = (int *)(param_1 + 0x18);
  uStack_24 = 0;
  if (*piVar9 != 0) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    iVar1 = Rotatelab_Networking_CloudSaveManager__IsPendingRemoteDataNewer_1143290(param_1,0);
    if (iVar1 == 0) {
      piVar2 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_0115327c + 0x1152e70),6);
      if (*piVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *(int *)(*piVar9 + 0x18);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((iVar7 != 0) &&
         (iVar3 = thunk_FUN_00f00bc8(iVar7,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
        uVar8 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar8,0);
      }
      if (piVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar2[4] = iVar7;
      thunk_FUN_00ec5080(piVar2 + 4,iVar7);
      if (*piVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *(int *)(*piVar9 + 0x1c);
      if ((iVar7 != 0) &&
         (iVar3 = thunk_FUN_00f00bc8(iVar7,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
        uVar8 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar8,0);
      }
      if ((uint)piVar2[3] < 2) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar2[5] = iVar7;
      thunk_FUN_00ec5080(piVar2 + 5,iVar7);
      iVar7 = *piVar9;
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uStack_30 = *(undefined4 *)(iVar7 + 0x10);
      uStack_2c = *(undefined4 *)(iVar7 + 0x14);
      iVar3 = *(int *)(_UNK_01153280 + 0x1152f68);
      iVar7 = FUN_00ec393c(*(undefined4 *)(iVar3 + 0x34),&uStack_30);
      if ((iVar7 != 0) &&
         (iVar5 = thunk_FUN_00f00bc8(iVar7,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)) {
        uVar8 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar8,0);
      }
      if ((uint)piVar2[3] < 3) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar2[6] = iVar7;
      thunk_FUN_00ec5080(piVar2 + 6,iVar7);
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x18);
      if ((iVar7 != 0) &&
         (iVar5 = thunk_FUN_00f00bc8(iVar7,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)) {
        uVar8 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar8,0);
      }
      if ((uint)piVar2[3] < 4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar2[7] = iVar7;
      thunk_FUN_00ec5080(piVar2 + 7,iVar7);
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x1c);
      if ((iVar7 != 0) &&
         (iVar5 = thunk_FUN_00f00bc8(iVar7,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)) {
        uVar8 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar8,0);
      }
      if ((uint)piVar2[3] < 5) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar2[8] = iVar7;
      thunk_FUN_00ec5080(piVar2 + 8,iVar7);
      iVar7 = *(int *)(param_1 + 0x14);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uStack_38 = *(undefined4 *)(iVar7 + 0x10);
      uStack_34 = *(undefined4 *)(iVar7 + 0x14);
      iVar7 = FUN_00ec393c(*(undefined4 *)(iVar3 + 0x34),&uStack_38);
      if ((iVar7 != 0) &&
         (iVar3 = thunk_FUN_00f00bc8(iVar7,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
        uVar8 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar8,0);
      }
      if ((uint)piVar2[3] < 6) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar2[9] = iVar7;
      thunk_FUN_00ec5080(piVar2 + 9,iVar7);
      uVar8 = 0;
      uVar4 = System_String__Format_2a0c308(**(undefined4 **)(_UNK_01153284 + 0x1153110),piVar2,0);
      if (*(int *)(**(int **)(_UNK_01153288 + 0x1153124) + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Debug__LogWarning_35b0090(uVar4,0);
    }
    else {
      uVar8 = Rotatelab_Networking_CloudSaveManager__IsPendingRemoteDataNewer_1143290(param_1,1);
      piVar2 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_01153264 + 0x1152b6c),6);
      if (*piVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *(int *)(*piVar9 + 0x18);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((iVar7 != 0) &&
         (iVar3 = thunk_FUN_00f00bc8(iVar7,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
        uVar4 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar4,0);
      }
      if (piVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar2[4] = iVar7;
      thunk_FUN_00ec5080(piVar2 + 4,iVar7);
      if (*piVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *(int *)(*piVar9 + 0x1c);
      if ((iVar7 != 0) &&
         (iVar3 = thunk_FUN_00f00bc8(iVar7,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
        uVar4 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar4,0);
      }
      if ((uint)piVar2[3] < 2) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar2[5] = iVar7;
      thunk_FUN_00ec5080(piVar2 + 5,iVar7);
      iVar7 = *piVar9;
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uStack_30 = *(undefined4 *)(iVar7 + 0x10);
      uStack_2c = *(undefined4 *)(iVar7 + 0x14);
      iVar3 = *(int *)(_UNK_01153268 + 0x1152c64);
      iVar7 = FUN_00ec393c(*(undefined4 *)(iVar3 + 0x34),&uStack_30);
      if ((iVar7 != 0) &&
         (iVar5 = thunk_FUN_00f00bc8(iVar7,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)) {
        uVar4 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar4,0);
      }
      if ((uint)piVar2[3] < 3) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar2[6] = iVar7;
      thunk_FUN_00ec5080(piVar2 + 6,iVar7);
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x18);
      if ((iVar7 != 0) &&
         (iVar5 = thunk_FUN_00f00bc8(iVar7,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)) {
        uVar4 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar4,0);
      }
      if ((uint)piVar2[3] < 4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar2[7] = iVar7;
      thunk_FUN_00ec5080(piVar2 + 7,iVar7);
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x1c);
      if ((iVar7 != 0) &&
         (iVar5 = thunk_FUN_00f00bc8(iVar7,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)) {
        uVar4 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar4,0);
      }
      if ((uint)piVar2[3] < 5) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar2[8] = iVar7;
      thunk_FUN_00ec5080(piVar2 + 8,iVar7);
      iVar7 = *(int *)(param_1 + 0x14);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uStack_38 = *(undefined4 *)(iVar7 + 0x10);
      uStack_34 = *(undefined4 *)(iVar7 + 0x14);
      iVar7 = FUN_00ec393c(*(undefined4 *)(iVar3 + 0x34),&uStack_38);
      if ((iVar7 != 0) &&
         (iVar3 = thunk_FUN_00f00bc8(iVar7,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
        uVar4 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar4,0);
      }
      if ((uint)piVar2[3] < 6) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar2[9] = iVar7;
      thunk_FUN_00ec5080(piVar2 + 9,iVar7);
      uVar4 = System_String__Format_2a0c308(**(undefined4 **)(_UNK_0115326c + 0x1152e04),piVar2,0);
      if (*(int *)(**(int **)(_UNK_01153270 + 0x1152e20) + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Debug__LogWarning_35b0090(uVar4,0);
      Rotatelab_Networking_CloudSaveManager__PreparePendingRemoteData_114349c(param_1);
      Rotatelab_Networking_CloudSaveManager__OverwriteData_1143730
                (param_1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x14));
      Rotatelab_Networking_CloudSaveManager__SaveToLocal_11427dc(param_1);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    thunk_FUN_00ec5080(piVar9,0);
    Rotatelab_Networking_CloudSaveManager__SetRemoteDataFetched_11437ac(param_1,iVar1);
  }
  return uVar8;
}

