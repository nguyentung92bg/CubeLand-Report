/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$CollectShootableCells
System_Collections_Generic_List_int____o* Rotatelab_Scripts_LiveSnapshotBuilder__CollectShootableCells (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$CollectShootableCells
   System_Collections_Generic_List_int____o*
   Rotatelab_Scripts_LiveSnapshotBuilder__CollectShootableCells (const MethodInfo* method); */

int Rotatelab_Scripts_LiveSnapshotBuilder__CollectShootableCells_1058248(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  
  pcVar5 = (char *)(_UNK_01068544 + 0x106825c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068548 + 0x1068270));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106854c + 0x106827c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068550 + 0x1068288));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068554 + 0x1068294));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068558 + 0x10682a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106855c + 0x10682ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068560 + 0x10682b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068564 + 0x10682c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068568 + 0x10682d0));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106856c + 0x10682ec));
  System_Collections_Generic_List_object____ctor_267d274
            (iVar1,**(undefined4 **)(_UNK_01068570 + 0x1068304));
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01068574 + 0x1068318));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_48,*(int *)(iVar2 + 0x14),**(undefined4 **)(_UNK_01068578 + 0x1068350));
  uStack_38 = uStack_48;
  uStack_34 = puStack_44;
  uStack_30 = uStack_40;
  piStack_2c = piStack_3c;
  uStack_48 = 0;
  puStack_44 = &uStack_38;
  do {
    do {
      iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                        (&uStack_38,**(undefined4 **)(_UNK_0106857c + 0x106837c));
      piVar4 = piStack_2c;
      if (iVar2 == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                  (&uStack_38,**(undefined4 **)(_UNK_01068588 + 0x10684c4));
        return iVar1;
      }
      if (piStack_2c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = (**(code **)(*piStack_2c + 0xf0))(piStack_2c,*(undefined4 *)(*piStack_2c + 0xf4));
    } while (iVar2 == 0);
    iVar2 = *piVar4;
    iVar2 = (**(code **)(iVar2 + 0x100))(piVar4,*(undefined4 *)(iVar2 + 0x104));
    puVar11 = (undefined4 *)(iVar2 + 0x10);
    uVar12 = 0;
    while( true ) {
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(iVar2 + 0xc) <= (int)uVar12) break;
      if (*(uint *)(iVar2 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar10 = *puVar11;
      uVar6 = puVar11[1];
      uVar8 = puVar11[2];
      if (*(int *)(**(int **)(_UNK_01068580 + 0x1068408) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar6 = Rotatelab_Scripts_LiveSnapshotBuilder__ToWire_1053a30(uVar10,uVar6,uVar8);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *(int *)(iVar1 + 8);
      uVar9 = *(uint *)(iVar1 + 0xc);
      piVar4 = *(int **)(_UNK_01068584 + 0x1068460);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar9 < *(uint *)(iVar7 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar9 + 1;
        puVar3 = (undefined4 *)(iVar7 + uVar9 * 4 + 0x10);
        *puVar3 = uVar6;
        thunk_FUN_00ec5080(puVar3,uVar6);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (iVar1,uVar6,*(undefined4 *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38));
      }
      puVar11 = puVar11 + 3;
      uVar12 = uVar12 + 1;
    }
  } while( true );
}

