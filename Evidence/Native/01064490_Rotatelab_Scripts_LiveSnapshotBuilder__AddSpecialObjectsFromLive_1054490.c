/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$AddSpecialObjectsFromLive
void Rotatelab_Scripts_LiveSnapshotBuilder__AddSpecialObjectsFromLive (Rotatelab_Scripts_LevelDataWire_o* level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$AddSpecialObjectsFromLive
   void Rotatelab_Scripts_LiveSnapshotBuilder__AddSpecialObjectsFromLive
   (Rotatelab_Scripts_LevelDataWire_o* level, const MethodInfo* method); */

void Rotatelab_Scripts_LiveSnapshotBuilder__AddSpecialObjectsFromLive_1054490(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  bool bVar16;
  undefined4 uStack_78;
  undefined4 *puStack_74;
  undefined4 uStack_70;
  int *piStack_6c;
  undefined4 uStack_68;
  undefined4 *puStack_64;
  undefined4 uStack_60;
  int *piStack_5c;
  undefined4 uStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  
  pcVar5 = (char *)(_UNK_010652e0 + 0x10644a8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010652e4 + 0x10644bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010652e8 + 0x10644c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010652ec + 0x10644d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010652f0 + 0x10644e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010652f4 + 0x10644ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010652f8 + 0x10644f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010652fc + 0x1064504));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01065508 + 0x1064510));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106550c + 0x106451c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01065510 + 0x1064528));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01065514 + 0x1064534));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01065518 + 0x1064540));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106551c + 0x106454c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01065520 + 0x1064558));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01065524 + 0x1064564));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01065528 + 0x1064570));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106552c + 0x106457c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106557c + 0x1064588));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01065580 + 0x1064594));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01065584 + 0x10645a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01065588 + 0x10645ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106558c + 0x10645b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01065590 + 0x10645c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01065594 + 0x10645d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01065598 + 0x10645dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106559c + 0x10645e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010655a0 + 0x10645f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010655a4 + 0x1064600));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010655a8 + 0x106460c));
    *pcVar5 = '\x01';
  }
  puStack_64 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_5c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  puStack_54 = puStack_64;
  uStack_50 = uStack_60;
  piStack_4c = piStack_5c;
  puStack_44 = puStack_64;
  uStack_40 = uStack_60;
  piStack_3c = piStack_5c;
  uStack_34 = puStack_64;
  uStack_30 = uStack_60;
  piStack_2c = piStack_5c;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010655ac + 0x1064628));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 0x50);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__GetComponentsInChildren_object__143ff14
                    (iVar1,1,**(undefined4 **)(_UNK_010655b0 + 0x1064678));
  uVar11 = 0;
  do {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar2 + 0xc) <= (int)uVar11) {
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = UnityEngine_Component__GetComponentsInChildren_object__143ff14
                        (iVar1,1,**(undefined4 **)(_UNK_01065824 + 0x1064830));
      uVar11 = 0;
      do {
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((int)*(uint *)(iVar2 + 0xc) <= (int)uVar11) {
          iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                            (**(undefined4 **)(_UNK_01065994 + 0x1064a48));
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(int *)(iVar2 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          System_Collections_Generic_List_object___GetEnumerator_267e7a4
                    (&uStack_78,*(int *)(iVar2 + 0x5c),**(undefined4 **)(_UNK_01065998 + 0x1064a80))
          ;
          uStack_38 = uStack_78;
          uStack_34 = puStack_74;
          uStack_30 = uStack_70;
          piStack_2c = piStack_6c;
          uStack_78 = 0;
          puVar12 = *(undefined4 **)(_UNK_0106599c + 0x1064ab0);
          puStack_74 = &uStack_38;
          while( true ) {
            do {
              iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                                (&uStack_38,*puVar12);
              piVar6 = piStack_2c;
              if (iVar2 == 0) {
                System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                          (&uStack_38,**(undefined4 **)(_UNK_010659ac + 0x1064bec));
                iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                                  (**(undefined4 **)(_UNK_010659b4 + 0x1064c00));
                if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f078d4();
                }
                if (*(int *)(iVar2 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f078d4();
                }
                System_Collections_Generic_List_object___GetEnumerator_267e7a4
                          (&uStack_78,*(int *)(iVar2 + 0x68),
                           **(undefined4 **)(_UNK_010659b8 + 0x1064c34));
                uStack_48 = uStack_78;
                puStack_44 = puStack_74;
                uStack_40 = uStack_70;
                piStack_3c = piStack_6c;
                uStack_78 = 0;
                puVar12 = *(undefined4 **)(_UNK_010659bc + 0x1064c64);
                puStack_74 = &uStack_48;
                while( true ) {
                  do {
                    iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                                      (&uStack_48,*puVar12);
                    piVar6 = piStack_3c;
                    if (iVar2 == 0) {
                      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                                (&uStack_48,**(undefined4 **)(_UNK_010659cc + 0x1064dd8));
                      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                                        (**(undefined4 **)(_UNK_010659d4 + 0x1064dec));
                      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                        thunk_FUN_00f078d4();
                      }
                      if (*(int *)(iVar2 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
                        thunk_FUN_00f078d4();
                      }
                      System_Collections_Generic_List_object___GetEnumerator_267e7a4
                                (&uStack_78,*(int *)(iVar2 + 0x58),
                                 **(undefined4 **)(_UNK_010659d8 + 0x1064e20));
                      uStack_58 = uStack_78;
                      puStack_54 = puStack_74;
                      uStack_50 = uStack_70;
                      piStack_4c = piStack_6c;
                      puVar12 = *(undefined4 **)(_UNK_010659dc + 0x1064e4c);
                      puVar14 = *(uint **)(_UNK_010659e0 + 0x1064e54);
                      while( true ) {
                        do {
                          do {
                            do {
                              do {
                                iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                                                  (&uStack_58,*puVar12);
                                piVar6 = piStack_4c;
                                if (iVar2 == 0) {
                                  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                                            (&uStack_58,**(undefined4 **)(_UNK_010659f8 + 0x10650d4)
                                            );
                                  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                                                    (**(undefined4 **)(_UNK_01065a00 + 0x10650e8));
                                  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                                    thunk_FUN_00f078d4();
                                  }
                                  if (*(int *)(iVar2 + 100) == 0) {
                    /* WARNING: Subroutine does not return */
                                    thunk_FUN_00f078d4();
                                  }
                                  System_Collections_Generic_List_object___GetEnumerator_267e7a4
                                            (&uStack_78,*(int *)(iVar2 + 100),
                                             **(undefined4 **)(_UNK_01065a04 + 0x106511c));
                                  uStack_68 = uStack_78;
                                  puStack_64 = puStack_74;
                                  uStack_60 = uStack_70;
                                  piStack_5c = piStack_6c;
                                  uStack_78 = 0;
                                  puVar12 = *(undefined4 **)(_UNK_01065a08 + 0x106514c);
                                  puStack_74 = &uStack_68;
                                  while( true ) {
                                    do {
                                      do {
                                        iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                                                          (&uStack_68,*puVar12);
                                        piVar6 = piStack_5c;
                                        if (iVar2 == 0) {
                                          System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                                                    (&uStack_68,
                                                     **(undefined4 **)(_UNK_01065a20 + 0x106530c));
                                          if (*(int *)(**(int **)(_UNK_01065a28 + 0x1065320) + 0x74)
                                              == 0) {
                                            FUN_00ec3934();
                                          }
                                          Rotatelab_Scripts_LiveSnapshotBuilder__AddLargeCubesFromLive_10574dc
                                                    (param_1);
                                          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                                            thunk_FUN_00f078d4();
                                          }
                                          iVar1 = UnityEngine_Component__GetComponentsInChildren_object__143ff14
                                                            (iVar1,1,**(undefined4 **)
                                                                       (_UNK_01065a2c + 0x1065358));
                                          uVar11 = 0;
                                          do {
                                            if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                                              thunk_FUN_00f078d4();
                                            }
                                            if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar11) {
                                              return;
                                            }
                                            if (*(uint *)(iVar1 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                                              thunk_FUN_00f07924();
                                            }
                                            iVar2 = *(int *)(iVar1 + uVar11 * 4 + 0x10);
                                            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                                              thunk_FUN_00f078d4();
                                            }
                                            iVar3 = UnityEngine_Component__get_gameObject_35fe360
                                                              (iVar2,0);
                                            if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                                              thunk_FUN_00f078d4();
                                            }
                                            iVar3 = UnityEngine_GameObject__get_activeSelf_360212c
                                                              (iVar3,0);
                                            if (iVar3 != 0) {
                                              iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)
                                                                           (_UNK_01065a30 +
                                                                           0x10653e4));
                                              System_Collections_Generic_List_int____ctor_261b0bc
                                                        (iVar3,**(undefined4 **)
                                                                 (_UNK_01065a34 + 0x10653f8));
                                              if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                                                thunk_FUN_00f078d4();
                                              }
                                              iVar4 = 
                                                  UnityEngine_Component__GetComponentsInChildren_object__143ff14
                                                            (iVar2,1,**(undefined4 **)
                                                                       (_UNK_01065a38 + 0x106541c));
                                              iVar8 = 0x7fffffff;
                                              uVar10 = 0;
                                              while( true ) {
                                                if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                                                  thunk_FUN_00f078d4();
                                                }
                                                if ((int)*(uint *)(iVar4 + 0xc) <= (int)uVar10)
                                                break;
                                                if (*(uint *)(iVar4 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                                                  thunk_FUN_00f07924();
                                                }
                                                iVar7 = *(int *)(iVar4 + 0x10 + uVar10 * 4);
                                                if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                                                  thunk_FUN_00f078d4();
                                                }
                                                if (*(char *)(iVar7 + 0x18) == '\0') {
                                                  uVar9 = *(undefined4 *)(iVar7 + 0x14);
                                                  if (*(int *)(**(int **)(_UNK_01065a3c + 0x1065488)
                                                              + 0x74) == 0) {
                                                    FUN_00ec3934();
                                                  }
                                                  uVar9 = 
                                                  Rotatelab_Scripts_LiveSnapshotBuilder__MapColor_1053880
                                                            (uVar9);
                                                  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                                                    thunk_FUN_00f078d4();
                                                  }
                                                  iVar13 = *(int *)(iVar3 + 8);
                                                  uVar15 = *(uint *)(iVar3 + 0xc);
                                                  piVar6 = *(int **)(_UNK_01065a40 + 0x10654dc);
                                                  *(int *)(iVar3 + 0x10) =
                                                       *(int *)(iVar3 + 0x10) + 1;
                                                  if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                                                    thunk_FUN_00f078d4();
                                                  }
                                                  if (uVar15 < *(uint *)(iVar13 + 0xc)) {
                                                    *(uint *)(iVar3 + 0xc) = uVar15 + 1;
                                                    *(undefined4 *)(iVar13 + uVar15 * 4 + 0x10) =
                                                         uVar9;
                                                  }
                                                  else {
                                                                                                        
                                                  System_Collections_Generic_List_int___AddWithResize_261b948
                                                            (iVar3,uVar9,
                                                             *(undefined4 *)
                                                              (*(int *)(*(int *)(*piVar6 + 0x10) +
                                                                       0x60) + 0x38));
                                                  }
                                                  iVar7 = 
                                                  Rotatelab_Scripts_LiveSnapshotBuilder__ReflectHp_10539b0
                                                            (*(undefined4 *)
                                                              (*(int *)(**(int **)(_UNK_01065a44 +
                                                                                  0x106555c) + 0x5c)
                                                              + 0x1c),iVar7);
                                                  if (iVar7 < iVar8) {
                                                    iVar8 = iVar7;
                                                  }
                                                }
                                                uVar10 = uVar10 + 1;
                                              }
                                              if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                                                thunk_FUN_00f078d4();
                                              }
                                              if (*(int *)(iVar3 + 0xc) != 0) {
                                                if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                                                  thunk_FUN_00f078d4();
                                                }
                                                iVar7 = *(int *)(param_1 + 0x18);
                                                iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)
                                                                             (_UNK_01065a48 +
                                                                             0x1065604));
                                                Rotatelab_Scripts_SpecialWire___ctor_105c738
                                                          (iVar4,0);
                                                if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                                                  thunk_FUN_00f078d4();
                                                }
                                                *(int *)(iVar4 + 0x20) = iVar3;
                                                *(undefined4 *)(iVar4 + 8) = 4;
                                                *(int *)(iVar4 + 0x14) = iVar8;
                                                thunk_FUN_00ec5080((int *)(iVar4 + 0x20),iVar3);
                                                if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                                                  thunk_FUN_00f078d4();
                                                }
                                                if (*(int *)(iVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                                                  thunk_FUN_00f078d4();
                                                }
                                                uVar9 = *(undefined4 *)
                                                         (*(int *)(iVar2 + 0x10) + 0x2c);
                                                if (*(int *)(**(int **)(_UNK_01065a4c + 0x1065668) +
                                                            0x74) == 0) {
                                                  FUN_00ec3934();
                                                }
                                                uVar9 = 
                                                  Rotatelab_Scripts_LiveSnapshotBuilder__ToWireVoxels_1053b88
                                                            (uVar9);
                                                *(undefined4 *)(iVar4 + 0x1c) = uVar9;
                                                thunk_FUN_00ec5080();
                                                iVar3 = *(int *)(iVar2 + 0x10);
                                                if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                                                  thunk_FUN_00f078d4();
                                                }
                                                uVar9 = 
                                                  Rotatelab_Scripts_LiveSnapshotBuilder__ToWire_1053adc
                                                            (*(undefined4 *)(iVar3 + 8),
                                                             *(undefined4 *)(iVar3 + 0xc),
                                                             *(undefined4 *)(iVar3 + 0x10));
                                                *(undefined4 *)(iVar4 + 0xc) = uVar9;
                                                thunk_FUN_00ec5080();
                                                iVar2 = *(int *)(iVar2 + 0x10);
                                                if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                                                  thunk_FUN_00f078d4();
                                                }
                                                uVar9 = 
                                                  Rotatelab_Scripts_LiveSnapshotBuilder__ToWire_1053adc
                                                            (*(float *)(iVar2 + 0x14) +
                                                             *(float *)(iVar2 + 0x14),
                                                             *(float *)(iVar2 + 0x18) +
                                                             *(float *)(iVar2 + 0x18),
                                                             *(float *)(iVar2 + 0x1c) +
                                                             *(float *)(iVar2 + 0x1c));
                                                *(undefined4 *)(iVar4 + 0x10) = uVar9;
                                                thunk_FUN_00ec5080();
                                                if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                                                  thunk_FUN_00f078d4();
                                                }
                                                iVar2 = *(int *)(iVar7 + 8);
                                                uVar10 = *(uint *)(iVar7 + 0xc);
                                                piVar6 = *(int **)(_UNK_01065a50 + 0x1065734);
                                                *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
                                                if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                                                  thunk_FUN_00f078d4();
                                                }
                                                if (uVar10 < *(uint *)(iVar2 + 0xc)) {
                                                  *(uint *)(iVar7 + 0xc) = uVar10 + 1;
                                                  piVar6 = (int *)(iVar2 + uVar10 * 4 + 0x10);
                                                  *piVar6 = iVar4;
                                                  thunk_FUN_00ec5080(piVar6,iVar4);
                                                }
                                                else {
                                                  System_Collections_Generic_List_object___AddWithResize_267dae0
                                                            (iVar7,iVar4,
                                                             *(undefined4 *)
                                                              (*(int *)(*(int *)(*piVar6 + 0x10) +
                                                                       0x60) + 0x38));
                                                }
                                              }
                                            }
                                            uVar11 = uVar11 + 1;
                                          } while( true );
                                        }
                                        if (piStack_5c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                                          thunk_FUN_00f078d4();
                                        }
                                      } while ((char)piStack_5c[6] != '\0');
                                      iVar2 = **(int **)(_UNK_01065a0c + 0x1065184);
                                      if (*(int *)(iVar2 + 0x74) == 0) {
                                        FUN_00ec3934();
                                        iVar2 = **(int **)(_UNK_01065a10 + 0x10651a0);
                                      }
                                      iVar2 = Rotatelab_Scripts_LiveSnapshotBuilder__ReflectHp_10539b0
                                                        (*(undefined4 *)
                                                          (*(int *)(iVar2 + 0x5c) + 0x14),piVar6);
                                    } while (iVar2 < 1);
                                    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                                      thunk_FUN_00f078d4();
                                    }
                                    iVar8 = *(int *)(param_1 + 0x18);
                                    iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)
                                                                 (_UNK_01065a14 + 0x10651dc));
                                    Rotatelab_Scripts_SpecialWire___ctor_105c738(iVar3,0);
                                    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                                      thunk_FUN_00f078d4();
                                    }
                                    *(int *)(iVar3 + 0x14) = iVar2;
                                    iVar2 = piVar6[0xe];
                                    *(undefined4 *)(iVar3 + 8) = 6;
                                    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                                      thunk_FUN_00f078d4();
                                    }
                                    uVar9 = *(undefined4 *)(iVar2 + 0x20);
                                    if (*(int *)(**(int **)(_UNK_01065a18 + 0x106521c) + 0x74) == 0)
                                    {
                                      FUN_00ec3934();
                                    }
                                    uVar9 = Rotatelab_Scripts_LiveSnapshotBuilder__MapColor_1053880
                                                      (uVar9);
                                    iVar2 = piVar6[0xe];
                                    *(undefined4 *)(iVar3 + 0x18) = uVar9;
                                    if (iVar2 == 0) break;
                                    uVar9 = Rotatelab_Scripts_LiveSnapshotBuilder__ToWireVoxels_1053b88
                                                      (*(undefined4 *)(iVar2 + 0x28));
                                    *(undefined4 *)(iVar3 + 0x1c) = uVar9;
                                    thunk_FUN_00ec5080();
                                    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                                      thunk_FUN_00f078d4();
                                    }
                                    iVar2 = *(int *)(iVar8 + 8);
                                    uVar11 = *(uint *)(iVar8 + 0xc);
                                    piVar6 = *(int **)(_UNK_01065a1c + 0x1065290);
                                    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
                                    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                                      thunk_FUN_00f078d4();
                                    }
                                    if (uVar11 < *(uint *)(iVar2 + 0xc)) {
                                      *(uint *)(iVar8 + 0xc) = uVar11 + 1;
                                      piVar6 = (int *)(iVar2 + uVar11 * 4 + 0x10);
                                      *piVar6 = iVar3;
                                      thunk_FUN_00ec5080(piVar6,iVar3);
                                    }
                                    else {
                                      System_Collections_Generic_List_object___AddWithResize_267dae0
                                                (iVar8,iVar3,
                                                 *(undefined4 *)
                                                  (*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38)
                                                );
                                    }
                                  }
                    /* WARNING: Subroutine does not return */
                                  thunk_FUN_00f078d4();
                                }
                              } while (piStack_4c == (int *)0x0);
                              uVar11 = *puVar14;
                            } while ((uint)*(byte *)(*piStack_4c + 0xb8) <
                                     (uint)*(byte *)(uVar11 + 0xb8));
                            bVar16 = *(uint *)(*(int *)(*piStack_4c + 100) +
                                               (uint)*(byte *)(uVar11 + 0xb8) * 4 + -4) != uVar11;
                            if (!bVar16) {
                              uVar11 = (uint)*(byte *)(piStack_4c + 6);
                            }
                          } while (bVar16 || uVar11 != 0);
                          iVar2 = **(int **)(_UNK_010659e4 + 0x1064eb0);
                          if (*(int *)(iVar2 + 0x74) == 0) {
                            FUN_00ec3934();
                            iVar2 = **(int **)(_UNK_010659e8 + 0x1064ecc);
                          }
                          iVar2 = Rotatelab_Scripts_LiveSnapshotBuilder__ReflectHp_10539b0
                                            (*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10),piVar6);
                        } while (iVar2 < 1);
                        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                          thunk_FUN_00f078d4();
                        }
                        iVar8 = *(int *)(param_1 + 0x18);
                        iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010659ec + 0x1064f08));
                        Rotatelab_Scripts_SpecialWire___ctor_105c738(iVar3,0);
                        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                          thunk_FUN_00f078d4();
                        }
                        *(int *)(iVar3 + 0x14) = iVar2;
                        iVar2 = piVar6[0xe];
                        *(undefined4 *)(iVar3 + 8) = 5;
                        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                          thunk_FUN_00f078d4();
                        }
                        uVar9 = *(undefined4 *)(iVar2 + 0x2c);
                        if (*(int *)(**(int **)(_UNK_010659f0 + 0x1064f4c) + 0x74) == 0) {
                          FUN_00ec3934();
                        }
                        uVar9 = Rotatelab_Scripts_LiveSnapshotBuilder__MapColor_1053880(uVar9);
                        iVar2 = piVar6[0xe];
                        *(undefined4 *)(iVar3 + 0x18) = uVar9;
                        if (iVar2 == 0) break;
                        uVar9 = Rotatelab_Scripts_LiveSnapshotBuilder__ToWireVoxels_1053b88
                                          (*(undefined4 *)(iVar2 + 0x38));
                        *(undefined4 *)(iVar3 + 0x1c) = uVar9;
                        thunk_FUN_00ec5080();
                        iVar2 = piVar6[0xe];
                        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                          thunk_FUN_00f078d4();
                        }
                        uVar9 = Rotatelab_Scripts_LiveSnapshotBuilder__ToWire_1053adc
                                          (*(float *)(iVar2 + 0x14) + *(float *)(iVar2 + 0x14),
                                           *(float *)(iVar2 + 0x18) + *(float *)(iVar2 + 0x18),
                                           *(float *)(iVar2 + 0x1c) + *(float *)(iVar2 + 0x1c));
                        *(undefined4 *)(iVar3 + 0x10) = uVar9;
                        thunk_FUN_00ec5080();
                        iVar2 = piVar6[0xe];
                        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                          thunk_FUN_00f078d4();
                        }
                        uVar9 = Rotatelab_Scripts_LiveSnapshotBuilder__ToWire_1053adc
                                          (*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),
                                           *(undefined4 *)(iVar2 + 0x10));
                        *(undefined4 *)(iVar3 + 0xc) = uVar9;
                        thunk_FUN_00ec5080();
                        iVar2 = piVar6[0xe];
                        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                          thunk_FUN_00f078d4();
                        }
                        func_0x01011de0(&uStack_78,*(undefined4 *)(iVar2 + 0x20),
                                        *(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0x28),
                                        0);
                        uVar9 = Rotatelab_Scripts_LiveSnapshotBuilder__ToWire_1053a30
                                          (uStack_78,puStack_74,uStack_70);
                        *(undefined4 *)(iVar3 + 0x24) = uVar9;
                        thunk_FUN_00ec5080();
                        if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                          thunk_FUN_00f078d4();
                        }
                        iVar2 = *(int *)(iVar8 + 8);
                        uVar11 = *(uint *)(iVar8 + 0xc);
                        piVar6 = *(int **)(_UNK_010659f4 + 0x1065078);
                        *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
                        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                          thunk_FUN_00f078d4();
                        }
                        if (uVar11 < *(uint *)(iVar2 + 0xc)) {
                          *(uint *)(iVar8 + 0xc) = uVar11 + 1;
                          piVar6 = (int *)(iVar2 + uVar11 * 4 + 0x10);
                          *piVar6 = iVar3;
                          thunk_FUN_00ec5080(piVar6,iVar3);
                        }
                        else {
                          System_Collections_Generic_List_object___AddWithResize_267dae0
                                    (iVar8,iVar3,
                                     *(undefined4 *)
                                      (*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38));
                        }
                      }
                    /* WARNING: Subroutine does not return */
                      thunk_FUN_00f078d4();
                    }
                    if (piStack_3c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                      thunk_FUN_00f078d4();
                    }
                    iVar2 = UnityEngine_Component__get_gameObject_35fe360(piStack_3c,0);
                    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                      thunk_FUN_00f078d4();
                    }
                    iVar2 = UnityEngine_GameObject__get_activeSelf_360212c(iVar2,0);
                  } while (iVar2 == 0);
                  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f078d4();
                  }
                  iVar3 = *(int *)(param_1 + 0x18);
                  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010659c0 + 0x1064cd4));
                  Rotatelab_Scripts_SpecialWire___ctor_105c738(iVar2,0);
                  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f078d4();
                  }
                  *(undefined4 *)(iVar2 + 8) = 8;
                  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f078d4();
                  }
                  iVar8 = piVar6[4];
                  *(int *)(iVar2 + 0x14) = piVar6[0xb];
                  if (iVar8 == 0) break;
                  uVar9 = *(undefined4 *)(iVar8 + 0x28);
                  if (*(int *)(**(int **)(_UNK_010659c4 + 0x1064d24) + 0x74) == 0) {
                    FUN_00ec3934();
                  }
                  uVar9 = Rotatelab_Scripts_LiveSnapshotBuilder__ToWireVoxels_1053b88(uVar9);
                  *(undefined4 *)(iVar2 + 0x1c) = uVar9;
                  thunk_FUN_00ec5080();
                  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f078d4();
                  }
                  iVar8 = *(int *)(iVar3 + 8);
                  uVar11 = *(uint *)(iVar3 + 0xc);
                  piVar6 = *(int **)(_UNK_010659c8 + 0x1064d7c);
                  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
                  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_00f078d4();
                  }
                  if (uVar11 < *(uint *)(iVar8 + 0xc)) {
                    *(uint *)(iVar3 + 0xc) = uVar11 + 1;
                    piVar6 = (int *)(iVar8 + uVar11 * 4 + 0x10);
                    *piVar6 = iVar2;
                    thunk_FUN_00ec5080(piVar6,iVar2);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize_267dae0
                              (iVar3,iVar2,
                               *(undefined4 *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38));
                  }
                }
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              if (piStack_2c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
            } while (piStack_2c[0xd] < 1);
            if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar3 = *(int *)(param_1 + 0x18);
            iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010659a0 + 0x1064afc));
            Rotatelab_Scripts_SpecialWire___ctor_105c738(iVar2,0);
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar8 = piVar6[4];
            *(undefined4 *)(iVar2 + 8) = 3;
            if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            uVar9 = *(undefined4 *)(iVar8 + 0x24);
            if (*(int *)(**(int **)(_UNK_010659a4 + 0x1064b38) + 0x74) == 0) {
              FUN_00ec3934();
            }
            uVar9 = Rotatelab_Scripts_LiveSnapshotBuilder__ToWireVoxels_1053b88(uVar9);
            *(undefined4 *)(iVar2 + 0x1c) = uVar9;
            thunk_FUN_00ec5080();
            if (iVar3 == 0) break;
            iVar8 = *(int *)(iVar3 + 8);
            uVar11 = *(uint *)(iVar3 + 0xc);
            piVar6 = *(int **)(_UNK_010659a8 + 0x1064b90);
            *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
            if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (uVar11 < *(uint *)(iVar8 + 0xc)) {
              *(uint *)(iVar3 + 0xc) = uVar11 + 1;
              piVar6 = (int *)(iVar8 + uVar11 * 4 + 0x10);
              *piVar6 = iVar2;
              thunk_FUN_00ec5080(piVar6,iVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_267dae0
                        (iVar3,iVar2,
                         *(undefined4 *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38));
            }
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar2 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        piVar6 = *(int **)(_UNK_01065848 + 0x1064874);
        iVar8 = *(int *)(iVar2 + 0x10 + uVar11 * 4);
        iVar3 = *piVar6;
        if (*(int *)(iVar3 + 0x74) == 0) {
          FUN_00ec3934();
          iVar3 = *piVar6;
        }
        iVar3 = Rotatelab_Scripts_LiveSnapshotBuilder__ReflectHp_10539b0
                          (*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc),iVar8);
        if (0 < iVar3) {
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar7 = *(int *)(param_1 + 0x18);
          iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01065898 + 0x10648c4));
          Rotatelab_Scripts_SpecialWire___ctor_105c738(iVar4,0);
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          *(int *)(iVar4 + 0x14) = iVar3;
          *(undefined4 *)(iVar4 + 8) = 7;
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar9 = *(undefined4 *)(iVar8 + 0x14);
          if (*(int *)(**(int **)(_UNK_010658f0 + 0x1064908) + 0x74) == 0) {
            FUN_00ec3934();
          }
          uVar9 = Rotatelab_Scripts_LiveSnapshotBuilder__MapColor_1053880(uVar9);
          *(undefined4 *)(iVar4 + 0x18) = uVar9;
          Rotatelab_Scripts_ColorBoxController__get_OccupiedCells_ffbfb4(iVar8,0);
          uVar9 = Rotatelab_Scripts_LiveSnapshotBuilder__ToWireVoxels_1053b88();
          *(undefined4 *)(iVar4 + 0x1c) = uVar9;
          thunk_FUN_00ec5080();
          iVar3 = *(int *)(iVar8 + 0x10);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar9 = Rotatelab_Scripts_LiveSnapshotBuilder__ToWire_1053adc
                            (*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),
                             *(undefined4 *)(iVar3 + 0x10));
          *(undefined4 *)(iVar4 + 0xc) = uVar9;
          thunk_FUN_00ec5080();
          iVar3 = *(int *)(iVar8 + 0x10);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar9 = Rotatelab_Scripts_LiveSnapshotBuilder__ToWire_1053adc
                            (*(float *)(iVar3 + 0x14) + *(float *)(iVar3 + 0x14),
                             *(float *)(iVar3 + 0x18) + *(float *)(iVar3 + 0x18),
                             *(float *)(iVar3 + 0x1c) + *(float *)(iVar3 + 0x1c));
          *(undefined4 *)(iVar4 + 0x10) = uVar9;
          thunk_FUN_00ec5080();
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar3 = *(int *)(iVar7 + 8);
          uVar10 = *(uint *)(iVar7 + 0xc);
          piVar6 = *(int **)(_UNK_01065990 + 0x10649e8);
          *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar10 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(iVar7 + 0xc) = uVar10 + 1;
            piVar6 = (int *)(iVar3 + uVar10 * 4 + 0x10);
            *piVar6 = iVar4;
            thunk_FUN_00ec5080(piVar6,iVar4);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_267dae0
                      (iVar7,iVar4,*(undefined4 *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38)
                      );
          }
        }
        uVar11 = uVar11 + 1;
      } while( true );
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar6 = *(int **)(_UNK_010655b4 + 0x10646c0);
    iVar8 = *(int *)(iVar2 + 0x10 + uVar11 * 4);
    iVar3 = *piVar6;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar6;
    }
    iVar3 = Rotatelab_Scripts_LiveSnapshotBuilder__ReflectHp_10539b0
                      (*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8),iVar8);
    if (0 < iVar3) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *(int *)(param_1 + 0x18);
      iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010655b8 + 0x1064710));
      Rotatelab_Scripts_SpecialWire___ctor_105c738(iVar4,0);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(int *)(iVar4 + 0x14) = iVar3;
      *(undefined4 *)(iVar4 + 8) = 2;
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar9 = *(undefined4 *)(*(int *)(iVar8 + 0x10) + 0x28);
      if (*(int *)(**(int **)(_UNK_010655bc + 0x1064764) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar9 = Rotatelab_Scripts_LiveSnapshotBuilder__ToWireVoxels_1053b88(uVar9);
      *(undefined4 *)(iVar4 + 0x1c) = uVar9;
      thunk_FUN_00ec5080();
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = *(int *)(iVar7 + 8);
      uVar10 = *(uint *)(iVar7 + 0xc);
      piVar6 = *(int **)(_UNK_010657b0 + 0x10647bc);
      *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar10 < *(uint *)(iVar3 + 0xc)) {
        *(uint *)(iVar7 + 0xc) = uVar10 + 1;
        piVar6 = (int *)(iVar3 + uVar10 * 4 + 0x10);
        *piVar6 = iVar4;
        thunk_FUN_00ec5080(piVar6,iVar4);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (iVar7,iVar4,*(undefined4 *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38));
      }
    }
    uVar11 = uVar11 + 1;
  } while( true );
}

