/* IL2CPP: Rotatelab.Networking.CloudSaveManager.<MigrateDataFromRemoteHiroValuesAsync>d__43$$MoveNext
void Rotatelab_Networking_CloudSaveManager__MigrateDataFromRemoteHiroValuesAsync_d__43__MoveNext (Rotatelab_Networking_CloudSaveManager__MigrateDataFromRemoteHiroValuesAsync_d__43_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01157dc0) */
/* WARNING: Removing unreachable block (ram,0x01157db4) */
/* WARNING: Removing unreachable block (ram,0x01157a88) */
/* WARNING: Removing unreachable block (ram,0x01157a94) */
/* WARNING: Removing unreachable block (ram,0x0115808c) */
/* WARNING: Removing unreachable block (ram,0x01158098) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP:
   Rotatelab.Networking.CloudSaveManager.<MigrateDataFromRemoteHiroValuesAsync>d__43$$MoveNext
   void Rotatelab_Networking_CloudSaveManager__MigrateDataFromRemoteHiroValuesAsync_d__43__MoveNext
   (Rotatelab_Networking_CloudSaveManager__MigrateDataFromRemoteHiroValuesAsync_d__43_o __this,
   const MethodInfo* method); */

void Rotatelab_Networking_CloudSaveManager__MigrateDataFromRemoteHiroValuesAsync_d__43__MoveNext_114759c
               (uint *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_64;
  uint *puStack_60;
  int **ppiStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *piStack_3c;
  uint uStack_38;
  uint uStack_34;
  
  pcVar10 = (char *)(_UNK_0115843c + 0x11575bc);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01158440 + 0x11575d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01158444 + 0x11575dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01158448 + 0x11575e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115844c + 0x11575f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01158450 + 0x1157600));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01158454 + 0x115760c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01158458 + 0x1157618));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115845c + 0x1157624));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01158460 + 0x1157630));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01158464 + 0x115763c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01158468 + 0x1157648));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115846c + 0x1157654));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01158470 + 0x1157660));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01158474 + 0x115766c));
    *pcVar10 = '\x01';
  }
  uStack_34 = *param_1;
  uVar11 = param_1[4];
  uStack_38 = 0;
  piStack_3c = (int *)0x0;
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_54 = 0;
  if (uStack_34 == 0) {
    uStack_38 = param_1[6];
    *param_1 = 0xffffffff;
    param_1[6] = 0;
    uStack_34 = 0xffffffff;
  }
  else {
    if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = Rotatelab_Networking_CloudSaveManager__get_Nakama_11417dc();
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01158478 + 0x11576cc));
    Rotatelab_Networking_HiroServices_EmptyRequest___ctor_ff1218(uVar2,0);
    iVar3 = Rotatelab_Networking_HiroServices_CubeLandServiceClient__GetLegacyPlayerDataAsync_ff1228
                      (uVar1,uVar2,param_1[5],0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_38 = System_Threading_Tasks_Task_object___GetAwaiter_1b58780
                          (iVar3,**(undefined4 **)(_UNK_0115847c + 0x115770c));
    iVar3 = System_Runtime_CompilerServices_TaskAwaiter_object___get_IsCompleted_1b45ac8
                      (&uStack_38,**(undefined4 **)(_UNK_01158480 + 0x1157720));
    if (iVar3 == 0) {
      *param_1 = 0;
      uStack_34 = 0;
      param_1[6] = uStack_38;
      thunk_FUN_00ec5080(param_1 + 6,0);
      func_0x01172bb0(param_1 + 1,&uStack_38,param_1,**(undefined4 **)(_UNK_01158484 + 0x1157760));
      return;
    }
  }
  iVar3 = System_Runtime_CompilerServices_TaskAwaiter_object___GetResult_1b45b3c
                    (&uStack_38,**(undefined4 **)(_UNK_01158488 + 0x115779c));
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115848c + 0x11577b4));
  Rotatelab_Networking_CloudSaveData___ctor_1141350();
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar5 = (int *)Rotatelab_Networking_HiroServices_GetLegacyPlayerDataResponse__get_Economy_ff0cec
                            (iVar3,0);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *piVar5;
  uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_01158490 + 0x11577f8)) {
        puVar7 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
        goto LAB_01157840;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined4 *)FUN_00efdb38(piVar5,**(int **)(_UNK_01158490 + 0x11577f8),0);
LAB_01157840:
  piStack_3c = (int *)(*(code *)*puVar7)(piVar5,puVar7[1]);
  ppiStack_5c = &piStack_3c;
  puStack_60 = &uStack_34;
  uStack_64 = 0;
  do {
    piVar5 = piStack_3c;
    if (piStack_3c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *piStack_3c;
    uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_0115849c + 0x11578ac)) {
          puVar7 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
          goto LAB_011578f4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined4 *)FUN_00efdb38(piStack_3c,**(int **)(_UNK_0115849c + 0x11578ac),0);
LAB_011578f4:
    iVar6 = (*(code *)*puVar7)(piVar5,puVar7[1]);
    piVar5 = piStack_3c;
    if (iVar6 == 0) {
      if ((uStack_34 < 0x80000000) || (piVar5 = *ppiStack_5c, piVar5 == (int *)0x0))
      goto LAB_01157a80;
      iVar6 = *piVar5;
      uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar8 == 0) goto LAB_01157a54;
      piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      break;
    }
    if (piStack_3c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *piStack_3c;
    uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01158494 + 0x115792c)) {
          puVar7 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
          goto LAB_01157974;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined4 *)FUN_00efdb38(piStack_3c,**(int **)(_UNK_01158494 + 0x115792c),0);
LAB_01157974:
    (*(code *)*puVar7)(&uStack_70,piVar5,puVar7[1]);
    uStack_44 = uStack_6c;
    uStack_48 = uStack_70;
    System_Collections_Generic_KeyValuePair_object__object___Deconstruct_255febc
              (&uStack_48,&uStack_4c,&uStack_50,**(undefined4 **)(_UNK_01158498 + 0x115799c));
    uVar1 = uStack_4c;
    System_Int64__Parse_2b6d878(uStack_50,0);
    if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Networking_CloudSaveManager__MigrateHiroLongValue_11461d4(uVar11,uVar4,uVar1);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 2;
    if (uVar8 == 0) break;
    if (piVar9[-1] == **(int **)(_UNK_011584a0 + 0x1157a28)) {
      puVar7 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
      goto LAB_01157a70;
    }
  }
LAB_01157a54:
  puVar7 = (undefined4 *)FUN_00efdb38(piVar5,**(int **)(_UNK_011584a0 + 0x1157a28),0);
LAB_01157a70:
  (*(code *)*puVar7)(piVar5,puVar7[1]);
LAB_01157a80:
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(uVar4 + 0x58);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar12 = Rotatelab_Networking_HiroServices_GetLegacyPlayerDataResponse__get_LivesInfiniteDuration_ff0c60
                     (iVar3,0);
  uVar1 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_ObservableEnergy__GrantInfiniteEnergy_fb3a88(iVar6,uVar1,(int)uVar12,uVar1,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar5 = (int *)Rotatelab_Networking_HiroServices_GetLegacyPlayerDataResponse__get_Inventory_ff0d8c
                            (iVar3,0);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *piVar5;
  uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_011584a4 + 0x1157b2c)) {
        puVar7 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
        goto LAB_01157b74;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined4 *)FUN_00efdb38(piVar5,**(int **)(_UNK_011584a4 + 0x1157b2c),0);
LAB_01157b74:
  piStack_3c = (int *)(*(code *)*puVar7)(piVar5,puVar7[1]);
  ppiStack_5c = &piStack_3c;
  puStack_60 = &uStack_34;
  uStack_64 = 0;
  do {
    piVar5 = piStack_3c;
    if (piStack_3c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *piStack_3c;
    uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_011584b0 + 0x1157bd4)) {
          puVar7 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
          goto LAB_01157c1c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined4 *)FUN_00efdb38(piStack_3c,**(int **)(_UNK_011584b0 + 0x1157bd4),0);
LAB_01157c1c:
    iVar6 = (*(code *)*puVar7)(piVar5,puVar7[1]);
    piVar5 = piStack_3c;
    if (iVar6 == 0) {
      if ((uStack_34 < 0x80000000) || (piVar5 = *ppiStack_5c, piVar5 == (int *)0x0))
      goto LAB_01157dac;
      iVar6 = *piVar5;
      uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar8 == 0) goto LAB_01157d80;
      piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      break;
    }
    if (piStack_3c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *piStack_3c;
    uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_011584a8 + 0x1157c54)) {
          puVar7 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
          goto LAB_01157c9c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined4 *)FUN_00efdb38(piStack_3c,**(int **)(_UNK_011584a8 + 0x1157c54),0);
LAB_01157c9c:
    (*(code *)*puVar7)(&uStack_70,piVar5,puVar7[1]);
    uStack_44 = uStack_6c;
    uStack_48 = uStack_70;
    System_Collections_Generic_KeyValuePair_object__object___Deconstruct_255febc
              (&uStack_48,&uStack_50,&uStack_4c,**(undefined4 **)(_UNK_011584ac + 0x1157cc8));
    uVar1 = uStack_50;
    System_Int64__Parse_2b6d878(uStack_4c,0);
    if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Networking_CloudSaveManager__MigrateHiroLongValue_11461d4(uVar11,uVar4,uVar1);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 2;
    if (uVar8 == 0) break;
    if (piVar9[-1] == **(int **)(_UNK_011584b4 + 0x1157d54)) {
      puVar7 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
      goto LAB_01157d9c;
    }
  }
LAB_01157d80:
  puVar7 = (undefined4 *)FUN_00efdb38(piVar5,**(int **)(_UNK_011584b4 + 0x1157d54),0);
LAB_01157d9c:
  (*(code *)*puVar7)(piVar5,puVar7[1]);
LAB_01157dac:
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar5 = (int *)Rotatelab_Networking_HiroServices_GetLegacyPlayerDataResponse__get_Stats_ff0e2c
                            (iVar3,0);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *piVar5;
  uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_011584b8 + 0x1157e04)) {
        puVar7 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
        goto LAB_01157e4c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined4 *)FUN_00efdb38(piVar5,**(int **)(_UNK_011584b8 + 0x1157e04),0);
LAB_01157e4c:
  piStack_3c = (int *)(*(code *)*puVar7)(piVar5,puVar7[1]);
  ppiStack_5c = &piStack_3c;
  puStack_60 = &uStack_34;
  uStack_64 = 0;
  do {
    piVar5 = piStack_3c;
    if (piStack_3c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *piStack_3c;
    uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_011584c4 + 0x1157ea8)) {
          puVar7 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
          goto LAB_01157ef0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined4 *)FUN_00efdb38(piStack_3c,**(int **)(_UNK_011584c4 + 0x1157ea8),0);
LAB_01157ef0:
    iVar6 = (*(code *)*puVar7)(piVar5,puVar7[1]);
    piVar5 = piStack_3c;
    if (iVar6 == 0) {
      if ((uStack_34 < 0x80000000) || (piVar5 = *ppiStack_5c, piVar5 == (int *)0x0))
      goto LAB_01158084;
      iVar6 = *piVar5;
      uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar11 == 0) goto LAB_01158058;
      piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      break;
    }
    if (piStack_3c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *piStack_3c;
    uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_011584bc + 0x1157f28)) {
          puVar7 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
          goto LAB_01157f70;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined4 *)FUN_00efdb38(piStack_3c,**(int **)(_UNK_011584bc + 0x1157f28),0);
LAB_01157f70:
    (*(code *)*puVar7)(&uStack_70,piVar5,puVar7[1]);
    uStack_44 = uStack_6c;
    uStack_48 = uStack_70;
    System_Collections_Generic_KeyValuePair_object__object___Deconstruct_255febc
              (&uStack_48,&uStack_4c,&uStack_50,**(undefined4 **)(_UNK_011584c0 + 0x1157f9c));
    uVar1 = uStack_4c;
    System_Int64__Parse_2b6d878(uStack_50,0);
    if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Networking_CloudSaveManager__MigrateHiroLongValue_11461d4(uVar11,uVar4,uVar1);
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar9 = piVar9 + 2;
    if (uVar11 == 0) break;
    if (piVar9[-1] == **(int **)(_UNK_011584c8 + 0x115802c)) {
      puVar7 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
      goto LAB_01158074;
    }
  }
LAB_01158058:
  puVar7 = (undefined4 *)FUN_00efdb38(piVar5,**(int **)(_UNK_011584c8 + 0x115802c),0);
LAB_01158074:
  (*(code *)*puVar7)(piVar5,puVar7[1]);
LAB_01158084:
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar12 = *(undefined8 *)(iVar3 + 0x18);
  uVar1 = **(undefined4 **)(_UNK_011584cc + 0x11580cc);
  *(undefined8 *)(uVar4 + 0xc0) = *(undefined8 *)(iVar3 + 0x10);
  *(undefined8 *)(uVar4 + 200) = uVar12;
  uVar1 = System_String__Format_2a0c264
                    (uVar1,*(undefined4 *)(uVar4 + 0x18),*(undefined4 *)(uVar4 + 0x1c),0);
  if (*(int *)(**(int **)(_UNK_011584d0 + 0x1158100) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Debug__LogWarning_35b0090(uVar1,0);
  piVar5 = (int *)param_1[1];
  *param_1 = 0xfffffffe;
  if (piVar5 == (int *)0x0) {
    param_1[3] = uVar4;
    thunk_FUN_00ec5080(param_1 + 3,uVar4);
  }
  else {
    iVar3 = *(int *)(**(int **)(_UNK_011584dc + 0x115813c) + 0x10);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768();
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 4);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768(iVar3);
    }
    iVar6 = *piVar5;
    uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar9[-1] == iVar3) {
          puVar7 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xd0);
          goto LAB_011581d0;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined4 *)FUN_00efdb38(piVar5,iVar3,2);
LAB_011581d0:
    (*(code *)*puVar7)(piVar5,uVar4,puVar7[1]);
  }
  return;
}

