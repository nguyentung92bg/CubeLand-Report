/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$TryMigrateDataFromHiroCache
void Rotatelab_Networking_CloudSaveManager__TryMigrateDataFromHiroCache (Rotatelab_Networking_CloudSaveManager_o* __this, Rotatelab_Networking_CloudSaveData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$TryMigrateDataFromHiroCache
   void Rotatelab_Networking_CloudSaveManager__TryMigrateDataFromHiroCache
   (Rotatelab_Networking_CloudSaveManager_o* __this, Rotatelab_Networking_CloudSaveData_o* data,
   const MethodInfo* method); */

void Rotatelab_Networking_CloudSaveManager__TryMigrateDataFromHiroCache_1142798
               (undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  Rotatelab_Networking_CloudSaveManager__TryMigrateFromHiroEconomySystem_1143e6c();
  Rotatelab_Networking_CloudSaveManager__TryMigrateFromHiroEnergiesSystem_1144430(param_1,param_2);
  Rotatelab_Networking_CloudSaveManager__TryMigrateFromHiroInventorySystem_11448e0(param_1,param_2);
  Rotatelab_Networking_CloudSaveManager__TryMigrateFromHiroStatsSystem_11452d4(param_1,param_2);
  pcVar3 = (char *)(_UNK_01156170 + 0x1155e7c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156174 + 0x1155e90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156178 + 0x1155e9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115617c + 0x1155ea8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156180 + 0x1155eb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156184 + 0x1155ec0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156188 + 0x1155ecc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115618c + 0x1155ed8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156190 + 0x1155ee4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156194 + 0x1155ef0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156198 + 0x1155efc));
    *pcVar3 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_0115619c + 0x1155f1c);
  puVar4 = *(undefined4 **)(_UNK_011561a0 + 0x1155f28);
  uStack_2c = 0;
  iStack_30 = 0;
  uStack_34 = 0;
  iVar2 = Rotatelab_Networking_CloudSaveManager__TryReadHiroCache_object__143ab6c
                    (param_1,*puVar7,&uStack_2c,*puVar4);
  if (iVar2 == 0) {
    return;
  }
  iStack_30 = 0;
  iVar2 = Rotatelab_Networking_CloudSaveManager__TryReadHiroCache_object__143ab6c
                    (param_1,**(undefined4 **)(_UNK_011561a4 + 0x1155f50),&uStack_34,*puVar4);
  uVar1 = uStack_34;
  if (iVar2 == 0) {
LAB_01156040:
    uVar1 = uStack_2c;
    piVar8 = *(int **)(_UNK_011561bc + 0x115604c);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar8;
    }
    puVar4 = *(undefined4 **)(iVar2 + 0x5c);
    iVar5 = puVar4[6];
    if (iVar5 == 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        puVar4 = *(undefined4 **)(*piVar8 + 0x5c);
      }
      uVar6 = *puVar4;
      iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011561c0 + 0x1156098));
      System_Predicate_object____ctor_1876380
                (iVar5,uVar6,**(undefined4 **)(_UNK_011561c4 + 0x11560b8),0);
      piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0x18);
      *piVar8 = iVar5;
      thunk_FUN_00ec5080(piVar8,iVar5);
    }
    if (*(int *)(**(int **)(_UNK_011561c8 + 0x11560e0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Extensions__TryFind_object__14899b0
              (uVar1,iVar5,&iStack_30,**(undefined4 **)(_UNK_011561cc + 0x1156104));
    if (iStack_30 == 0) goto LAB_01156158;
  }
  else {
    piVar8 = *(int **)(_UNK_011561a8 + 0x1155f74);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar8;
    }
    puVar4 = *(undefined4 **)(iVar2 + 0x5c);
    iVar5 = puVar4[5];
    if (iVar5 == 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        puVar4 = *(undefined4 **)(*piVar8 + 0x5c);
      }
      uVar6 = *puVar4;
      iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011561ac + 0x1155fc0));
      System_Predicate_object____ctor_1876380
                (iVar5,uVar6,**(undefined4 **)(_UNK_011561b0 + 0x1155fe0),0);
      piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0x14);
      *piVar8 = iVar5;
      thunk_FUN_00ec5080(piVar8,iVar5);
    }
    if (*(int *)(**(int **)(_UNK_011561b4 + 0x1156008) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Extensions__TryFind_object__14899b0
              (uVar1,iVar5,&iStack_30,**(undefined4 **)(_UNK_011561b8 + 0x115602c));
    if (iStack_30 == 0) goto LAB_01156040;
  }
  iVar2 = Nakama_TinyJson_JsonParser__FromJson_object__14a855c
                    (*(undefined4 *)(iStack_30 + 0x18),**(undefined4 **)(_UNK_011561d0 + 0x1156124))
  ;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar9 = *(undefined8 *)(iVar2 + 8);
  *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(iVar2 + 0x10);
  *(undefined8 *)(param_2 + 200) = uVar9;
LAB_01156158:
  UnityEngine_PlayerPrefs__DeleteKey_35f76ec(*puVar7,0);
  return;
}

