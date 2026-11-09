/* IL2CPP: Rotatelab.Scripts.LevelMovePathRecorder$$AppendDockedBlasterIds
void Rotatelab_Scripts_LevelMovePathRecorder__AppendDockedBlasterIds (System_String_o* marker, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelMovePathRecorder$$AppendDockedBlasterIds
   void Rotatelab_Scripts_LevelMovePathRecorder__AppendDockedBlasterIds (System_String_o* marker,
   const MethodInfo* method); */

void Rotatelab_Scripts_LevelMovePathRecorder__AppendDockedBlasterIds_1015430(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  bool bVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  
  pcVar9 = (char *)(_UNK_01025a68 + 0x1025448);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025a6c + 0x102545c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025a70 + 0x1025468));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025a74 + 0x1025474));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025a78 + 0x1025480));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025a7c + 0x102548c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025a80 + 0x1025498));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025a84 + 0x10254a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025a88 + 0x10254b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025a8c + 0x10254bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025a90 + 0x10254c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025a94 + 0x10254d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025a98 + 0x10254e0));
    *pcVar9 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01025a9c + 0x10254fc));
  piVar10 = *(int **)(_UNK_01025aa0 + 0x1025514);
  iVar2 = *piVar10;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar10;
  }
  iVar2 = **(int **)(iVar2 + 0x5c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar11 = *(int *)(iVar2 + 8);
  uVar12 = *(uint *)(iVar2 + 0xc);
  piVar10 = *(int **)(_UNK_01025aa4 + 0x102555c);
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar12 < *(uint *)(iVar11 + 0xc)) {
    *(uint *)(iVar2 + 0xc) = uVar12 + 1;
    puVar3 = (undefined4 *)(iVar11 + uVar12 * 4 + 0x10);
    *puVar3 = param_1;
    thunk_FUN_00ec5080(puVar3,param_1);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar2,param_1,*(undefined4 *)(*(int *)(*(int *)(*piVar10 + 0x10) + 0x60) + 0x38));
  }
  piVar10 = *(int **)(_UNK_01025aa8 + 0x10255b8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar1 + 0x44);
  uVar12 = 0;
  while( true ) {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar2 + 0xc) <= (int)uVar12) {
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_object___GetEnumerator_267e7a4
                (&uStack_48,*(int *)(iVar1 + 0x50),**(undefined4 **)(_UNK_01025ac4 + 0x1025768));
      bVar8 = false;
      uStack_38 = uStack_48;
      uStack_34 = puStack_44;
      uStack_30 = uStack_40;
      piStack_2c = piStack_3c;
      uStack_48 = 0;
      puVar3 = *(undefined4 **)(_UNK_01025ac8 + 0x1025794);
      piVar10 = *(int **)(_UNK_01025acc + 0x102579c);
      puStack_44 = &uStack_38;
      while( true ) {
        do {
          do {
            iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                              (&uStack_38,*puVar3);
            piVar7 = piStack_2c;
            if (iVar1 == 0) {
              System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                        (&uStack_38,**(undefined4 **)(_UNK_01025af8 + 0x10259e8));
              return;
            }
            if (piStack_2c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            uVar12 = (uint)*(byte *)(*piVar10 + 0xb8);
          } while ((uVar12 <= *(byte *)(*piStack_2c + 0xb8)) &&
                  (*(int *)(*(int *)(*piStack_2c + 100) + uVar12 * 4 + -4) == *piVar10));
          uVar4 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                            (piStack_2c,**(undefined4 **)(_UNK_01025ad0 + 0x10257f8));
          if (*(int *)(**(int **)(_UNK_01025ad4 + 0x1025810) + 0x74) == 0) {
            FUN_00ec3934();
          }
          iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar4,0,0);
        } while (iVar1 != 0);
        if (!bVar8) {
          iVar1 = **(int **)(_UNK_01025ad8 + 0x102584c);
          if (*(int *)(iVar1 + 0x74) == 0) {
            FUN_00ec3934();
            iVar1 = **(int **)(_UNK_01025adc + 0x1025868);
          }
          iVar1 = **(int **)(iVar1 + 0x5c);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar2 = *(int *)(iVar1 + 8);
          uVar12 = *(uint *)(iVar1 + 0xc);
          iVar11 = **(int **)(_UNK_01025ae0 + 0x1025888);
          puVar6 = *(undefined4 **)(_UNK_01025ae4 + 0x10258a8);
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          uVar4 = *puVar6;
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar12 < *(uint *)(iVar2 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar12 + 1;
            puVar6 = (undefined4 *)(iVar2 + uVar12 * 4 + 0x10);
            *puVar6 = uVar4;
            thunk_FUN_00ec5080(puVar6,uVar4);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_267dae0
                      (iVar1,uVar4,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38))
            ;
          }
        }
        iVar1 = **(int **)(_UNK_01025ae8 + 0x1025900);
        if (*(int *)(iVar1 + 0x74) == 0) {
          FUN_00ec3934();
          iVar1 = **(int **)(_UNK_01025aec + 0x102591c);
        }
        iVar1 = **(int **)(iVar1 + 0x5c);
        if (piVar7 == (int *)0x0) break;
        iVar2 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                          (piVar7,**(undefined4 **)(_UNK_01025af0 + 0x102593c));
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar4 = *(undefined4 *)(iVar2 + 0x24);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = *(int *)(iVar1 + 8);
        uVar12 = *(uint *)(iVar1 + 0xc);
        piVar7 = *(int **)(_UNK_01025af4 + 0x1025984);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar12 < *(uint *)(iVar2 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar12 + 1;
          bVar8 = true;
          puVar6 = (undefined4 *)(iVar2 + uVar12 * 4 + 0x10);
          *puVar6 = uVar4;
          thunk_FUN_00ec5080(puVar6,uVar4);
        }
        else {
          bVar8 = true;
          System_Collections_Generic_List_object___AddWithResize_267dae0
                    (iVar1,uVar4,*(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
        }
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar11 = *piVar10;
    iVar13 = *(int *)(iVar2 + 0x10 + uVar12 * 4);
    if (*(int *)(iVar11 + 0x74) == 0) {
      FUN_00ec3934();
      iVar11 = *piVar10;
    }
    iVar11 = **(int **)(iVar11 + 0x5c);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                      (iVar13,**(undefined4 **)(_UNK_01025aac + 0x102562c));
    if (*(int *)(**(int **)(_UNK_01025ab0 + 0x1025644) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar5 = UnityEngine_Object__op_Inequality_36018e4(uVar4,0,0);
    puVar3 = *(undefined4 **)(_UNK_01025ab4 + 0x1025674);
    if (iVar5 != 0) {
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar13 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                         (iVar13,**(undefined4 **)(_UNK_01025ab8 + 0x102568c));
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar3 = (undefined4 *)(iVar13 + 0x24);
    }
    uVar4 = *puVar3;
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar13 = *(int *)(iVar11 + 8);
    uVar14 = *(uint *)(iVar11 + 0xc);
    piVar10 = *(int **)(_UNK_01025abc + 0x10256d8);
    *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
    if (iVar13 == 0) break;
    if (uVar14 < *(uint *)(iVar13 + 0xc)) {
      *(uint *)(iVar11 + 0xc) = uVar14 + 1;
      puVar3 = (undefined4 *)(iVar13 + uVar14 * 4 + 0x10);
      *puVar3 = uVar4;
      thunk_FUN_00ec5080(puVar3,uVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar11,uVar4,*(undefined4 *)(*(int *)(*(int *)(*piVar10 + 0x10) + 0x60) + 0x38));
    }
    uVar12 = uVar12 + 1;
    piVar10 = *(int **)(_UNK_01025ac0 + 0x1025734);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

