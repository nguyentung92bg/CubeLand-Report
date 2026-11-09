/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$TryMigrateFromHiroEnergiesSystem
void Rotatelab_Networking_CloudSaveManager__TryMigrateFromHiroEnergiesSystem (Rotatelab_Networking_CloudSaveManager_o* __this, Rotatelab_Networking_CloudSaveData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$TryMigrateFromHiroEnergiesSystem
   void Rotatelab_Networking_CloudSaveManager__TryMigrateFromHiroEnergiesSystem
   (Rotatelab_Networking_CloudSaveManager_o* __this, Rotatelab_Networking_CloudSaveData_o* data,
   const MethodInfo* method); */

void Rotatelab_Networking_CloudSaveManager__TryMigrateFromHiroEnergiesSystem_1144430
               (undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar5 = (char *)(_UNK_01154870 + 0x115444c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01154874 + 0x1154460));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01154878 + 0x115446c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115487c + 0x1154478));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01154880 + 0x1154484));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01154884 + 0x1154490));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01154888 + 0x115449c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115488c + 0x11544a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01154890 + 0x11544b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01154894 + 0x11544c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01154898 + 0x11544cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115489c + 0x11544d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011548a0 + 0x11544e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011548a4 + 0x11544f0));
    *pcVar5 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar6 = *(int **)(_UNK_011548a8 + 0x1154510);
  iStack_28 = 0;
  iStack_2c = 0;
  iVar1 = *piVar6;
  iStack_30 = 0;
  uStack_40 = 0;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  iVar1 = Rotatelab_Networking_CloudSaveManager__TryReadHiroCache_object__143ab6c
                    (param_1,**(undefined4 **)(iVar1 + 0x5c),&iStack_28,
                     **(undefined4 **)(_UNK_011548ac + 0x1154548));
  if (iVar1 != 0) {
    if (iStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue_206b35c
                      (iStack_28,**(undefined4 **)(_UNK_011548b4 + 0x1154588),&iStack_2c,
                       **(undefined4 **)(_UNK_011548b0 + 0x115457c));
    uVar9 = 0;
    if (iVar1 != 0) {
      if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *(int *)(iStack_2c + 0x28);
      if (iVar1 == 0) {
        uVar9 = 0;
      }
      else {
        piVar6 = *(int **)(_UNK_011548b8 + 0x11545c8);
        iVar2 = *piVar6;
        if (*(int *)(iVar2 + 0x74) == 0) {
          FUN_00ec3934();
          iVar2 = *piVar6;
        }
        puVar3 = *(undefined4 **)(iVar2 + 0x5c);
        iVar8 = puVar3[1];
        if (iVar8 == 0) {
          if (*(int *)(iVar2 + 0x74) == 0) {
            FUN_00ec3934();
            puVar3 = *(undefined4 **)(*piVar6 + 0x5c);
          }
          uVar7 = *puVar3;
          iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011548bc + 0x1154610));
          System_Predicate_object____ctor_1876380
                    (iVar8,uVar7,**(undefined4 **)(_UNK_011548c0 + 0x1154630),0);
          piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 4);
          *piVar6 = iVar8;
          thunk_FUN_00ec5080(piVar6,iVar8);
        }
        if (*(int *)(**(int **)(_UNK_011548c4 + 0x1154658) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar1 = Rotatelab_Extensions__TryFind_object__14899b0
                          (iVar1,iVar8,&iStack_30,**(undefined4 **)(_UNK_011548c8 + 0x115467c));
        uVar9 = 0;
        if (iVar1 != 0) {
          if (iStack_30 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar9 = Hiro_EnergyModifier__get_EndTimeSec_2926b14(iStack_30,0);
        }
      }
    }
    uVar7 = UnityEngine_PlayerPrefs__GetString_35f70c4
                      (**(undefined4 **)(_UNK_011548d0 + 0x11546e4),
                       **(undefined4 **)(_UNK_011548cc + 0x11546d8),0);
    uVar10 = System_Int64__Parse_2b6d878(uVar7,0);
    if (*(int *)(**(int **)(_UNK_011548d4 + 0x1154704) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar9 = System_Math__Max_2b6fe2c
                      ((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                       (int)((ulonglong)uVar10 >> 0x20),0);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(param_2 + 0x58);
    if (*(int *)(**(int **)(_UNK_011548d8 + 0x115474c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_DateTimeOffset__get_UtcNow_2b4da3c(&uStack_50,0);
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uVar10 = System_DateTimeOffset__ToUnixTimeSeconds_2b4faac(&uStack_40,0);
    iVar2 = (int)((ulonglong)uVar10 >> 0x20);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_ObservableEnergy__GrantInfiniteEnergy_fb3a88
              (iVar1,iVar2,(uint)uVar9 - (uint)uVar10,
               (int)((ulonglong)uVar9 >> 0x20) - (iVar2 + (uint)((uint)uVar9 < (uint)uVar10)),0);
    piVar6 = *(int **)(param_2 + 0x58);
    iVar1 = Rotatelab_ObservableBool__op_Implicit_fac238(*(undefined4 *)(param_2 + 0x30),0);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = 5;
    if (iVar1 != 0) {
      uVar7 = 10;
    }
    pcVar4 = *(code **)(*piVar6 + 0x118);
    (*pcVar4)(piVar6,pcVar4,uVar7,0,*(undefined4 *)(*piVar6 + 0x11c));
    piVar6 = *(int **)(param_2 + 0x58);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar9 = (**(code **)(*piVar6 + 0x110))(piVar6,*(undefined4 *)(*piVar6 + 0x114));
    uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
    (**(code **)(*piVar6 + 0xf8))(piVar6,uVar7,(int)uVar9,uVar7,*(undefined4 *)(*piVar6 + 0xfc));
    piVar6 = *(int **)(_UNK_011548dc + 0x1154844);
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar6;
    }
    UnityEngine_PlayerPrefs__DeleteKey_35f76ec(**(undefined4 **)(iVar1 + 0x5c),0);
  }
  return;
}

