/* IL2CPP: Rotatelab.Scripts.LevelMovePathRecorder$$GetCompactChunks
System_Collections_Generic_List_string__o* Rotatelab_Scripts_LevelMovePathRecorder__GetCompactChunks (int32_t maxLen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelMovePathRecorder$$GetCompactChunks
   System_Collections_Generic_List_string__o*
   Rotatelab_Scripts_LevelMovePathRecorder__GetCompactChunks (int32_t maxLen, const MethodInfo*
   method); */

int Rotatelab_Scripts_LevelMovePathRecorder__GetCompactChunks_1015de0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar7 = (char *)(_UNK_010261b0 + 0x1025df8);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010261b4 + 0x1025e0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010261b8 + 0x1025e18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010261bc + 0x1025e24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010261c0 + 0x1025e30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010261c4 + 0x1025e3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010261c8 + 0x1025e48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010261cc + 0x1025e54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010261d0 + 0x1025e60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010261d4 + 0x1025e6c));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010261d8 + 0x1025e88));
  System_Collections_Generic_List_object____ctor_267d274
            (iVar1,**(undefined4 **)(_UNK_010261dc + 0x1025ea0));
  piVar2 = (int *)thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010261e0 + 0x1025eb4));
  System_Text_StringBuilder___ctor_2a14a7c(piVar2,param_1,0);
  piVar8 = *(int **)(_UNK_010261e4 + 0x1025ed4);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  if (**(int **)(iVar3 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_48,**(int **)(iVar3 + 0x5c),**(undefined4 **)(_UNK_010261e8 + 0x1025f10));
  uStack_38 = uStack_48;
  uStack_34 = puStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  uStack_48 = 0;
  puStack_44 = &uStack_38;
  while( true ) {
    iVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                      (&uStack_38,**(undefined4 **)(_UNK_010261f0 + 0x1025f3c));
    iVar3 = iStack_2c;
    if (iVar4 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_38,**(undefined4 **)(_UNK_010261f4 + 0x1026060));
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = System_Text_StringBuilder__get_Length_2a1570c(piVar2,0);
      if (0 < iVar3) {
        uVar5 = (**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = *(int *)(iVar1 + 8);
        uVar9 = *(uint *)(iVar1 + 0xc);
        piVar2 = *(int **)(_UNK_010261fc + 0x10260e8);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar9 < *(uint *)(iVar3 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar9 + 1;
          puVar6 = (undefined4 *)(iVar3 + uVar9 * 4 + 0x10);
          *puVar6 = uVar5;
          thunk_FUN_00ec5080(puVar6,uVar5);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_267dae0
                    (iVar1,uVar5,*(undefined4 *)(*(int *)(*(int *)(*piVar2 + 0x10) + 0x60) + 0x38));
        }
      }
      return iVar1;
    }
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = System_Text_StringBuilder__get_Length_2a1570c(piVar2,0);
    if (iVar3 == 0) break;
    if (param_1 < *(int *)(iVar3 + 8) + iVar4) {
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar5 = (**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = *(int *)(iVar1 + 8);
      uVar9 = *(uint *)(iVar1 + 0xc);
      piVar8 = *(int **)(_UNK_010261ec + 0x1025fd8);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar9 < *(uint *)(iVar4 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar9 + 1;
        puVar6 = (undefined4 *)(iVar4 + uVar9 * 4 + 0x10);
        *puVar6 = uVar5;
        thunk_FUN_00ec5080(puVar6,uVar5);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (iVar1,uVar5,*(undefined4 *)(*(int *)(*(int *)(*piVar8 + 0x10) + 0x60) + 0x38));
      }
      System_Text_StringBuilder__Clear_2a15afc(piVar2,0);
    }
    else if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Text_StringBuilder__Append_2a16604(piVar2,iVar3,0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

