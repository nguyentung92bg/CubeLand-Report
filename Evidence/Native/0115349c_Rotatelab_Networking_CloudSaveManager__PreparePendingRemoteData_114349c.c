/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$PreparePendingRemoteData
void Rotatelab_Networking_CloudSaveManager__PreparePendingRemoteData (Rotatelab_Networking_CloudSaveManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01150c3c) */
/* WARNING: Removing unreachable block (ram,0x01150c44) */
/* WARNING: Removing unreachable block (ram,0x01150c58) */
/* WARNING: Removing unreachable block (ram,0x01150c70) */
/* WARNING: Removing unreachable block (ram,0x01150c74) */
/* WARNING: Removing unreachable block (ram,0x01150c78) */
/* WARNING: Removing unreachable block (ram,0x01150c7c) */
/* WARNING: Removing unreachable block (ram,0x01150c80) */
/* WARNING: Removing unreachable block (ram,0x01150c84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$PreparePendingRemoteData
   void Rotatelab_Networking_CloudSaveManager__PreparePendingRemoteData
   (Rotatelab_Networking_CloudSaveManager_o* __this, const MethodInfo* method); */

void Rotatelab_Networking_CloudSaveManager__PreparePendingRemoteData_114349c(int param_1)

{
  uint uVar1;
  uint uVar2;
  int extraout_r1;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_0115371c + 0x11534b4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01153720 + 0x11534c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01153724 + 0x11534d4));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Networking_CloudSaveData__MigrateToNewestVersion_1140d0c(*(int *)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x18) + 0x2c);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = Rotatelab_ObservableBool__get_Value_fb2b74(iVar5,0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_ObservableBool__op_Implicit_fac238
                    (*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x2c),0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_ObservableBool__set_Value_fa6d68(iVar5,uVar1 | uVar2,0);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x18) + 0x30);
  if (iVar5 != 0) {
    uVar1 = Rotatelab_ObservableBool__get_Value_fb2b74(iVar5,0);
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = Rotatelab_ObservableBool__op_Implicit_fac238
                      (*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x30),0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_ObservableBool__set_Value_fa6d68(iVar5,uVar1 | uVar2,0);
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(float *)(*(int *)(param_1 + 0x18) + 0xe0) <= 0.0) {
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = *(int *)(param_1 + 0x14);
      iVar7 = *(int *)(param_1 + 0x18);
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xe0) =
           *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xe0);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar6 = *(undefined4 *)(iVar5 + 0xe4);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar8 = (undefined4 *)(iVar7 + 0xe4);
      *puVar8 = uVar6;
      thunk_FUN_00ec5080(puVar8,uVar6);
    }
    puVar8 = *(undefined4 **)(_UNK_01153728 + 0x1153650);
    uVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
    if (*(int *)(**(int **)(_UNK_0115372c + 0x1153664) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar5 = UnityEngine_Object__op_Inequality_36018e4(uVar6,0,0);
    if (iVar5 != 0) {
      if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = Rotatelab_ObservableLong__op_Implicit_fa4ff4
                        (*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18),0);
      iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar7 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *(int *)(*(int *)(iVar7 + 0x14) + 0xc);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar5 <= *(int *)(iVar7 + 0xc)) {
        if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar3 = *(int **)(*(int *)(param_1 + 0x18) + 0x1c);
        uVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(piVar3,0);
        pcVar4 = (char *)(_UNK_01150cf8 + 0x1150c38);
        if (*pcVar4 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_01150cfc + 0x1150c9c));
          *pcVar4 = '\x01';
        }
        iVar5 = *(int *)(**(int **)(_UNK_01150d00 + 0x1150cb0) + 0x74);
        if (iVar5 == 0) {
          FUN_00ec3934();
          iVar5 = extraout_r1;
        }
        iVar7 = ((int)uVar1 >> 0x1f) - (uVar1 ^ (int)uVar1 >> 0x1f);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0xf8))
                    (piVar3,iVar5,iVar7,iVar7 >> 0x1f,*(undefined4 *)(*piVar3 + 0xfc));
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

