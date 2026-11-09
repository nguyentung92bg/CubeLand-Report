/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$IsPendingRemoteDataNewer
bool Rotatelab_Networking_CloudSaveManager__IsPendingRemoteDataNewer (Rotatelab_Networking_CloudSaveManager_o* __this, bool checkLevelProgressOnly, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$IsPendingRemoteDataNewer
   bool Rotatelab_Networking_CloudSaveManager__IsPendingRemoteDataNewer
   (Rotatelab_Networking_CloudSaveManager_o* __this, bool checkLevelProgressOnly, const MethodInfo*
   method); */

bool Rotatelab_Networking_CloudSaveManager__IsPendingRemoteDataNewer_1143290
               (int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  
  pcVar4 = (char *)(_UNK_01153480 + 0x11532a8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01153484 + 0x11532bc));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  bVar7 = false;
  iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4
                    (*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18),0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4
                    (*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18),0);
  if (iVar2 <= iVar1) {
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_ObservableValue_long___op_Equality_185da44
                      (*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18),
                       *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18),
                       **(undefined4 **)(_UNK_01153488 + 0x115333c));
    bVar7 = true;
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4
                        (*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c),0);
      pcVar4 = (char *)(_UNK_0115348c + 0x1153380);
      if (*pcVar4 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01153490 + 0x1153394));
        *pcVar4 = '\x01';
      }
      piVar6 = *(int **)(_UNK_01153494 + 0x11533a8);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        FUN_00ec3934();
      }
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4
                        (*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1c),0);
      if (*pcVar4 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01153498 + 0x11533f8));
        *pcVar4 = '\x01';
      }
      if (*(int *)(*piVar6 + 0x74) == 0) {
        FUN_00ec3934();
      }
      bVar7 = false;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if ((iVar2 <= iVar1) && (bVar7 = iVar1 != iVar2, iVar1 == iVar2 && param_2 == 0)) {
        iVar1 = *(int *)(param_1 + 0x18);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = *(int *)(param_1 + 0x14);
        iVar5 = *(int *)(iVar1 + 0x14);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = *(int *)(iVar2 + 0x14);
        bVar7 = false;
        bVar8 = *(uint *)(iVar2 + 0x10) < *(uint *)(iVar1 + 0x10);
        if ((int)(iVar3 - (iVar5 + (uint)bVar8)) < 0 !=
            (SBORROW4(iVar3,iVar5) != SBORROW4(iVar3 - iVar5,(uint)bVar8))) {
          bVar7 = true;
        }
      }
    }
  }
  return bVar7;
}

