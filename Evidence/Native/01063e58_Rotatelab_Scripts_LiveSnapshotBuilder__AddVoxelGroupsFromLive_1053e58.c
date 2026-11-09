/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$AddVoxelGroupsFromLive
void Rotatelab_Scripts_LiveSnapshotBuilder__AddVoxelGroupsFromLive (Rotatelab_Scripts_LevelDataWire_o* level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$AddVoxelGroupsFromLive
   void Rotatelab_Scripts_LiveSnapshotBuilder__AddVoxelGroupsFromLive
   (Rotatelab_Scripts_LevelDataWire_o* level, const MethodInfo* method); */

void Rotatelab_Scripts_LiveSnapshotBuilder__AddVoxelGroupsFromLive_1053e58(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  uint *puVar9;
  bool bVar10;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_01064400 + 0x1063e70);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01064404 + 0x1063e84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01064408 + 0x1063e90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106440c + 0x1063e9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01064410 + 0x1063ea8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01064414 + 0x1063eb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01064418 + 0x1063ec0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106441c + 0x1063ecc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01064420 + 0x1063ed8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01064424 + 0x1063ee4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01064428 + 0x1063ef0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106442c + 0x1063efc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01064430 + 0x1063f08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01064434 + 0x1063f14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01064438 + 0x1063f20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106443c + 0x1063f2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01064440 + 0x1063f38));
    *pcVar6 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_3c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  piStack_2c = piStack_3c;
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01064444 + 0x1063f58));
  System_Collections_Generic_Dictionary_int__object____ctor_1fcf05c
            (iVar1,**(undefined4 **)(_UNK_01064448 + 0x1063f7c));
  iStack_28 = iVar1;
  thunk_FUN_00ec5080(&iStack_28,iVar1);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0106444c + 0x1063fa0));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_58,*(int *)(iVar1 + 0x58),**(undefined4 **)(_UNK_01064450 + 0x1063fdc));
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  piStack_2c = piStack_4c;
  puVar8 = *(undefined4 **)(_UNK_01064454 + 0x1064004);
  puVar9 = *(uint **)(_UNK_01064458 + 0x106400c);
  while( true ) {
    do {
      do {
        do {
          iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                            (&uStack_38,*puVar8);
          piVar5 = piStack_2c;
          if (iVar1 == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                      (&uStack_38,**(undefined4 **)(_UNK_01064464 + 0x1064148));
            iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                              (**(undefined4 **)(_UNK_0106446c + 0x106415c));
            if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (*(int *)(iVar1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            System_Collections_Generic_List_object___GetEnumerator_267e7a4
                      (&uStack_58,*(int *)(iVar1 + 0x60),
                       **(undefined4 **)(_UNK_01064470 + 0x1064198));
            uStack_48 = uStack_58;
            uStack_44 = uStack_54;
            uStack_40 = uStack_50;
            piStack_3c = piStack_4c;
            puVar8 = *(undefined4 **)(_UNK_01064474 + 0x10641c4);
            while( true ) {
              do {
                iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                                  (&uStack_48,*puVar8);
                piVar5 = piStack_3c;
                if (iVar1 == 0) {
                  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                            (&uStack_48,**(undefined4 **)(_UNK_01064480 + 0x10642d4));
                  if (iStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f078d4();
                  }
                  uVar3 = System_Collections_Generic_Dictionary_int__object___get_Values_1fcf8b0
                                    (iStack_28,**(undefined4 **)(_UNK_01064488 + 0x10642fc));
                  uVar3 = System_Linq_Enumerable__ToList_object__1478b2c
                                    (uVar3,**(undefined4 **)(_UNK_0106448c + 0x1064310));
                  if (param_1 != 0) {
                    *(undefined4 *)(param_1 + 0x14) = uVar3;
                    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x14),uVar3);
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f078d4();
                }
                if (piStack_3c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f078d4();
                }
              } while ((char)piStack_3c[7] != '\0');
              if (*(int *)(**(int **)(_UNK_01064478 + 0x10641fc) + 0x74) == 0) {
                FUN_00ec3934();
              }
              iVar1 = Rotatelab_Scripts_LiveSnapshotBuilder___AddVoxelGroupsFromLive_g__GroupFor_17_0_1056a20
                                (0,&iStack_28);
              if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              iVar1 = *(int *)(iVar1 + 0x10);
              Rotatelab_Scripts_WallController__get_Position_105e270(&uStack_58,piVar5,0);
              uVar3 = Rotatelab_Scripts_LiveSnapshotBuilder__ToWire_1053a30
                                (uStack_58,uStack_54,uStack_50);
              if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              iVar7 = *(int *)(iVar1 + 8);
              uVar2 = *(uint *)(iVar1 + 0xc);
              piVar5 = *(int **)(_UNK_0106447c + 0x1064278);
              *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
              if (iVar7 == 0) break;
              if (uVar2 < *(uint *)(iVar7 + 0xc)) {
                *(uint *)(iVar1 + 0xc) = uVar2 + 1;
                puVar4 = (undefined4 *)(iVar7 + uVar2 * 4 + 0x10);
                *puVar4 = uVar3;
                thunk_FUN_00ec5080(puVar4,uVar3);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_267dae0
                          (iVar1,uVar3,
                           *(undefined4 *)(*(int *)(*(int *)(*piVar5 + 0x10) + 0x60) + 0x38));
              }
            }
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
        } while (piStack_2c == (int *)0x0);
        uVar2 = *puVar9;
      } while ((uint)*(byte *)(*piStack_2c + 0xb8) < (uint)*(byte *)(uVar2 + 0xb8));
      bVar10 = *(uint *)(*(int *)(*piStack_2c + 100) + (uint)*(byte *)(uVar2 + 0xb8) * 4 + -4) !=
               uVar2;
      if (!bVar10) {
        uVar2 = (uint)*(byte *)(piStack_2c + 6);
      }
    } while (bVar10 || uVar2 != 0);
    iVar1 = piStack_2c[5];
    if (*(int *)(**(int **)(_UNK_0106445c + 0x1064068) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar3 = Rotatelab_Scripts_LiveSnapshotBuilder__MapColor_1053880(iVar1);
    iVar1 = Rotatelab_Scripts_LiveSnapshotBuilder___AddVoxelGroupsFromLive_g__GroupFor_17_0_1056a20
                      (uVar3,&iStack_28);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    Rotatelab_Scripts_VoxelController__get_Position_105d1e4(&uStack_58,piVar5,0);
    uVar3 = Rotatelab_Scripts_LiveSnapshotBuilder__ToWire_1053a30(uStack_58,uStack_54,uStack_50);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(iVar1 + 8);
    uVar2 = *(uint *)(iVar1 + 0xc);
    piVar5 = *(int **)(_UNK_01064460 + 0x10640ec);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar7 == 0) break;
    if (uVar2 < *(uint *)(iVar7 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar2 + 1;
      puVar4 = (undefined4 *)(iVar7 + uVar2 * 4 + 0x10);
      *puVar4 = uVar3;
      thunk_FUN_00ec5080(puVar4,uVar3);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar1,uVar3,*(undefined4 *)(*(int *)(*(int *)(*piVar5 + 0x10) + 0x60) + 0x38));
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

