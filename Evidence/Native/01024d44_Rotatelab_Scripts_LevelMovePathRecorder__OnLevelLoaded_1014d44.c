/* IL2CPP: Rotatelab.Scripts.LevelMovePathRecorder$$OnLevelLoaded
void Rotatelab_Scripts_LevelMovePathRecorder__OnLevelLoaded (Rotatelab_SoLevelData_o* levelData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelMovePathRecorder$$OnLevelLoaded
   void Rotatelab_Scripts_LevelMovePathRecorder__OnLevelLoaded (Rotatelab_SoLevelData_o* levelData,
   const MethodInfo* method); */

void Rotatelab_Scripts_LevelMovePathRecorder__OnLevelLoaded_1014d44(void)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  
  pcVar7 = (char *)(_UNK_01025020 + 0x1024d54);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025024 + 0x1024d68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025028 + 0x1024d74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102502c + 0x1024d80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025030 + 0x1024d8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025034 + 0x1024d98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025038 + 0x1024da4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102503c + 0x1024db0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025040 + 0x1024dbc));
    *pcVar7 = '\x01';
  }
  piVar10 = *(int **)(_UNK_01025044 + 0x1024dd0);
  iVar3 = *piVar10;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar10;
  }
  iVar3 = **(int **)(iVar3 + 0x5c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(iVar3 + 0xc);
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (0 < iVar6) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar3 + 8),0,iVar6,0);
  }
  if (*(int *)(**(int **)(_UNK_01025048 + 0x1024e2c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  uVar4 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar4,0);
  iVar3 = *(int *)(*piVar10 + 0x5c);
  puVar5 = *(undefined4 **)(_UNK_0102504c + 0x1024e64);
  *(undefined4 *)(iVar3 + 4) = uVar4;
  *(undefined1 *)(iVar3 + 8) = 1;
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
  if (*(int *)(**(int **)(_UNK_01025050 + 0x1024e84) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar6 = UnityEngine_Object__op_Inequality_36018e4(iVar3,0,0);
  if (iVar6 != 0) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(iVar3 + 0x55) != '\0') {
      iVar6 = *piVar10;
      if (*(int *)(iVar6 + 0x74) == 0) {
        FUN_00ec3934();
        iVar6 = *piVar10;
      }
      iVar6 = **(int **)(iVar6 + 0x5c);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar9 = *(int *)(iVar6 + 8);
      uVar8 = *(uint *)(iVar6 + 0xc);
      iVar11 = **(int **)(_UNK_01025054 + 0x1024efc);
      puVar5 = *(undefined4 **)(_UNK_01025058 + 0x1024f1c);
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
      uVar4 = *puVar5;
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar8 < *(uint *)(iVar9 + 0xc)) {
        *(uint *)(iVar6 + 0xc) = uVar8 + 1;
        puVar5 = (undefined4 *)(iVar9 + uVar8 * 4 + 0x10);
        *puVar5 = uVar4;
        thunk_FUN_00ec5080(puVar5,uVar4);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (iVar6,uVar4,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
      }
    }
    if (*(char *)(iVar3 + 0x54) != '\0') {
      iVar3 = *piVar10;
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        iVar3 = *piVar10;
      }
      iVar3 = **(int **)(iVar3 + 0x5c);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar6 = *(int *)(iVar3 + 8);
      uVar8 = *(uint *)(iVar3 + 0xc);
      iVar9 = **(int **)(_UNK_0102505c + 0x1024fac);
      puVar5 = *(undefined4 **)(_UNK_01025060 + 0x1024fcc);
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      uVar4 = *puVar5;
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar8 < *(uint *)(iVar6 + 0xc)) {
        *(uint *)(iVar3 + 0xc) = uVar8 + 1;
        puVar5 = (undefined4 *)(iVar6 + uVar8 * 4 + 0x10);
        *puVar5 = uVar4;
      }
      else {
        uVar8 = *(uint *)(iVar3 + 0xc);
        System_Collections_Generic_List_object___EnsureCapacity_267e0f0
                  (iVar3,uVar8 + 1,
                   *(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38) +
                                      0x10) + 0x60) + 0x3c));
        iVar6 = *(int *)(iVar3 + 8);
        *(uint *)(iVar3 + 0xc) = uVar8 + 1;
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar6 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        puVar5 = (undefined4 *)(iVar6 + uVar8 * 4 + 0x10);
        *puVar5 = uVar4;
      }
      if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
        puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
        return;
      }
      return;
    }
  }
  return;
}

