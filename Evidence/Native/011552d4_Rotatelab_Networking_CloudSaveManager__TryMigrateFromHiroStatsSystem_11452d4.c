/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$TryMigrateFromHiroStatsSystem
void Rotatelab_Networking_CloudSaveManager__TryMigrateFromHiroStatsSystem (Rotatelab_Networking_CloudSaveManager_o* __this, Rotatelab_Networking_CloudSaveData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01155bf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$TryMigrateFromHiroStatsSystem
   void Rotatelab_Networking_CloudSaveManager__TryMigrateFromHiroStatsSystem
   (Rotatelab_Networking_CloudSaveManager_o* __this, Rotatelab_Networking_CloudSaveData_o* data,
   const MethodInfo* method); */

void Rotatelab_Networking_CloudSaveManager__TryMigrateFromHiroStatsSystem_11452d4
               (undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  int *piStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01155da8 + 0x11552f0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01155dac + 0x1155304));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01155db0 + 0x1155310));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01155db4 + 0x115531c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01155db8 + 0x1155328));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01155dbc + 0x1155334));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01155dc0 + 0x1155340));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01155dc4 + 0x115534c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01155dc8 + 0x1155358));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01155dcc + 0x1155364));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01155dd0 + 0x1155370));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01155dd4 + 0x115537c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01155dd8 + 0x1155388));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01155ddc + 0x1155394));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01155de0 + 0x11553a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01155de4 + 0x11553ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01155de8 + 0x11553b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01155dec + 0x11553c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01155df0 + 0x11553d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01155df4 + 0x11553dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01155df8 + 0x11553e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01155dfc + 0x11553f4));
    *pcVar7 = '\x01';
  }
  uStack_6c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_68 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  iStack_2c = 0;
  piStack_30 = (int *)0x0;
  uStack_38._4_4_ = 0;
  uStack_38._0_4_ = 0;
  uStack_3c = 0;
  uStack_70 = 0;
  uStack_74 = 0;
  piVar12 = *(int **)(_UNK_01155e00 + 0x1155444);
  uStack_7c = 0;
  uStack_80 = 0;
  iVar2 = *piVar12;
  uStack_5c = uStack_6c;
  uStack_58 = uStack_68;
  uStack_54 = uStack_64;
  uStack_4c = uStack_6c;
  uStack_48 = uStack_68;
  uStack_44 = uStack_64;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar12;
  }
  iVar2 = Rotatelab_Networking_CloudSaveManager__TryReadHiroCache_object__143ab6c
                    (param_1,**(undefined4 **)(iVar2 + 0x5c),&uStack_28,
                     **(undefined4 **)(_UNK_01155e04 + 0x1155474));
  uVar3 = uStack_28;
  if (iVar2 == 0) {
    return;
  }
  piVar9 = *(int **)(_UNK_01155e08 + 0x1155494);
  iVar2 = *piVar9;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar9;
  }
  puVar4 = *(undefined4 **)(iVar2 + 0x5c);
  iVar8 = puVar4[4];
  if (iVar8 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar4 = *(undefined4 **)(*piVar9 + 0x5c);
    }
    uVar10 = *puVar4;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01155e0c + 0x11554e0));
    Rotatelab_Extensions_DictionaryValueConverter_object__object__long____ctor_1f74284
              (iVar8,uVar10,**(undefined4 **)(_UNK_01155e10 + 0x1155500),0);
    piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 0x10);
    *piVar9 = iVar8;
    thunk_FUN_00ec5080(piVar9,iVar8);
  }
  if (*(int *)(**(int **)(_UNK_01155e14 + 0x1155528) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = Rotatelab_Extensions__ConvertAllValues_object__object__long__14853e4
                    (uVar3,iVar8,**(undefined4 **)(_UNK_01155e18 + 0x1155548));
  iVar8 = *piVar12;
  if (*(int *)(iVar8 + 0x74) == 0) {
    FUN_00ec3934();
    iVar8 = *piVar12;
  }
  iVar8 = Rotatelab_Networking_CloudSaveManager__TryReadHiroCache_object__143ab6c
                    (param_1,*(undefined4 *)(*(int *)(iVar8 + 0x5c) + 8),&iStack_2c,
                     **(undefined4 **)(_UNK_01155e1c + 0x1155580));
  if (iVar8 != 0) {
    if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar12 = (int *)Hiro_StatUpdateRequest__get_Private_28ea174(iStack_2c,0);
    if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = *piVar12;
    uVar5 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01155e20 + 0x11555d0)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar9 * 8 + 0xc0);
          goto LAB_0115561c;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar12,**(int **)(_UNK_01155e20 + 0x11555d0),0);
LAB_0115561c:
    piStack_30 = (int *)(*(code *)*puVar4)(piVar12,puVar4[1]);
    piVar12 = *(int **)(_UNK_01155e24 + 0x115564c);
    do {
      piVar9 = piStack_30;
      if (piStack_30 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar8 = *piStack_30;
      uVar5 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_01155e3c + 0x1155668)) {
            puVar4 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xc0);
            goto LAB_011556b0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_01155e3c + 0x1155668),0);
LAB_011556b0:
      iVar8 = (*(code *)*puVar4)(piVar9,puVar4[1]);
      piVar9 = piStack_30;
      if (iVar8 == 0) {
        piVar12 = *(int **)(_UNK_01155e40 + 0x1155b80);
        if (piStack_30 == (int *)0x0) break;
        iVar8 = *piStack_30;
        uVar5 = (uint)*(ushort *)(iVar8 + 0xb6);
        if (uVar5 == 0) goto LAB_01155bbc;
        piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        goto LAB_01155ba4;
      }
      if (piStack_30 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar8 = *piStack_30;
      uVar5 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_01155e28 + 0x11556e8)) {
            puVar4 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xc0);
            goto LAB_01155730;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_01155e28 + 0x11556e8),0);
LAB_01155730:
      piVar9 = (int *)(*(code *)*puVar4)(piVar9,puVar4[1]);
      if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar8 = *piVar9;
      uVar5 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar12) {
            puVar4 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xc0);
            goto LAB_011557a0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piVar9,*piVar12,0);
LAB_011557a0:
      uVar3 = (*(code *)*puVar4)(piVar9,puVar4[1]);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_Dictionary_object__long___TryGetValue_2063e48
                (iVar2,uVar3,&uStack_38,**(undefined4 **)(_UNK_01155e2c + 0x11557cc));
      if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar8 = *piVar9;
      uVar5 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar12) {
            puVar4 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xd0);
            goto LAB_01155838;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piVar9,*piVar12,2);
LAB_01155838:
      iVar8 = (*(code *)*puVar4)(piVar9,puVar4[1]);
      lVar1 = uStack_38;
      uVar10 = uStack_38._4_4_;
      uVar3 = (undefined4)uStack_38;
      if (iVar8 == 2) {
        if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar8 = *piVar9;
        uVar5 = (uint)*(ushort *)(iVar8 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar12) {
              puVar4 = (undefined4 *)(iVar8 + *piVar6 * 8 + 200);
              goto LAB_01155a6c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)FUN_00efdb38(piVar9,*piVar12,1);
LAB_01155a6c:
        lVar14 = (*(code *)*puVar4)(piVar9,puVar4[1]);
        lVar14 = lVar14 + lVar1;
      }
      else if (iVar8 == 3) {
        iVar8 = *piVar9;
        uVar5 = (uint)*(ushort *)(iVar8 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar12) {
              puVar4 = (undefined4 *)(iVar8 + *piVar6 * 8 + 200);
              goto LAB_011559ac;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)FUN_00efdb38(piVar9,*piVar12,1);
LAB_011559ac:
        uVar13 = (*(code *)*puVar4)(piVar9,puVar4[1]);
        if (*(int *)(**(int **)(_UNK_01155e30 + 0x11559d0) + 0x74) == 0) {
          FUN_00ec3934();
        }
        lVar14 = System_Math__Min_2b70008
                           (uVar3,uVar10,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0);
      }
      else if (iVar8 == 4) {
        iVar8 = *piVar9;
        uVar5 = (uint)*(ushort *)(iVar8 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar12) {
              puVar4 = (undefined4 *)(iVar8 + *piVar6 * 8 + 200);
              goto LAB_01155a0c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)FUN_00efdb38(piVar9,*piVar12,1);
LAB_01155a0c:
        uVar13 = (*(code *)*puVar4)(piVar9,puVar4[1]);
        if (*(int *)(**(int **)(_UNK_01155e34 + 0x1155a30) + 0x74) == 0) {
          FUN_00ec3934();
        }
        lVar14 = System_Math__Max_2b6fe2c
                           (uVar3,uVar10,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0);
      }
      else {
        if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar8 = *piVar9;
        uVar5 = (uint)*(ushort *)(iVar8 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar12) {
              puVar4 = (undefined4 *)(iVar8 + *piVar6 * 8 + 200);
              goto LAB_01155a9c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)FUN_00efdb38(piVar9,*piVar12,1);
LAB_01155a9c:
        lVar14 = (*(code *)*puVar4)(piVar9,puVar4[1]);
      }
      uStack_38 = lVar14;
      if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar8 = *piVar9;
      uVar5 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar12) {
            puVar4 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xc0);
            goto LAB_01155b10;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piVar9,*piVar12,0);
      lVar14 = uStack_38;
LAB_01155b10:
      uStack_38 = lVar14;
      uVar3 = (*(code *)*puVar4)(piVar9,puVar4[1]);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_Dictionary_object__long___set_Item_2061d6c
                (iVar2,uVar3,(undefined4)uStack_38,uStack_38._4_4_,
                 **(undefined4 **)(_UNK_01155e38 + 0x1155b44));
    } while( true );
  }
  goto LAB_01155bf8;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 2;
    if (uVar5 == 0) break;
LAB_01155ba4:
    if (piVar6[-1] == **(int **)(_UNK_01155e44 + 0x1155b90)) {
      puVar4 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xc0);
      goto LAB_01155bd8;
    }
  }
LAB_01155bbc:
  puVar4 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_01155e44 + 0x1155b90),0);
LAB_01155bd8:
  (*(code *)*puVar4)(piVar9,puVar4[1]);
LAB_01155bf8:
  if (iVar2 != 0) {
    System_Collections_Generic_Dictionary_object__long___GetEnumerator_20622b4
              (&uStack_60,iVar2,**(undefined4 **)(_UNK_01155e48 + 0x1155c14));
    puVar4 = *(undefined4 **)(_UNK_01155e4c + 0x1155c44);
    puVar11 = *(undefined4 **)(_UNK_01155e50 + 0x1155c4c);
    while( true ) {
      iVar2 = System_Collections_Generic_Dictionary_Enumerator_object__long___MoveNext_21e6268
                        (&uStack_60,*puVar4);
      if (iVar2 == 0) break;
      uStack_70 = uStack_50;
      uStack_6c = uStack_4c;
      uStack_68 = uStack_48;
      uStack_64 = uStack_44;
      System_Collections_Generic_KeyValuePair_object__long___Deconstruct_255fda8
                (&uStack_70,&uStack_74,&uStack_80,*puVar11);
      Rotatelab_Networking_CloudSaveManager__MigrateHiroLongValue_11461d4
                (uStack_80,param_2,uStack_74);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__long___Dispose_21e63c0
              (&uStack_60,**(undefined4 **)(_UNK_01155e54 + 0x1155ca0));
    iVar2 = *piVar12;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar12;
    }
    UnityEngine_PlayerPrefs__DeleteKey_35f76ec(**(undefined4 **)(iVar2 + 0x5c),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

