/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$SpawnPrefab<object>
Il2CppObject* Rotatelab_Scripts_PlaceableManager__SpawnPrefab_object_ (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_BlasterData_o* data, Il2CppObject* prefab, UnityEngine_Vector3_o localPosition, UnityEngine_Vector2Int_o index, const MethodInfo_1535370* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$SpawnPrefab<object>
   Il2CppObject* Rotatelab_Scripts_PlaceableManager__SpawnPrefab_object_
   (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_BlasterData_o* data, Il2CppObject*
   prefab, UnityEngine_Vector3_o localPosition, UnityEngine_Vector2Int_o index, const
   MethodInfo_1535370* method); */

int Rotatelab_Scripts_PlaceableManager__SpawnPrefab_object__1535370
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iStack_2c;
  short sStack_26;
  
  if (*(int *)(param_9 + 0x1c) == 0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01545570 + 0x15453a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01545574 + 0x15453b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01545578 + 0x15453bc));
    if (*(int *)(param_9 + 0x1c) == 0) {
      FUN_00efd7c4(param_9);
    }
  }
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(**(int **)(_UNK_0154557c + 0x15453dc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__Instantiate_object__14d4e4c
                    (param_3,uVar5,0,*(undefined4 *)(*(int *)(param_9 + 0x1c) + 4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_transform_35fe190(iVar1,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localPosition_3613c6c(iVar2,param_4,param_5,param_6,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x18),param_2);
  *(undefined4 *)(iVar1 + 0x1c) = param_7;
  *(int *)(iVar1 + 0x20) = param_8;
  sStack_26 = (short)param_7 + 0x61;
  iVar2 = *(int *)(_UNK_01545580 + 0x1545494);
  uVar5 = FUN_00ec393c(*(undefined4 *)(iVar2 + 0x44),&sStack_26);
  iStack_2c = param_8 + 1;
  uVar3 = FUN_00ec393c(*(undefined4 *)(iVar2 + 0x24),&iStack_2c);
  uVar5 = System_String__Format_2a0c264(**(undefined4 **)(_UNK_01545584 + 0x15454d0),uVar5,uVar3,0);
  *(undefined4 *)(iVar1 + 0x24) = uVar5;
  thunk_FUN_00ec5080();
  iVar2 = *(int *)(param_1 + 0xb4);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(iVar2 + 8);
  uVar7 = *(uint *)(iVar2 + 0xc);
  piVar4 = *(int **)(_UNK_01545588 + 0x1545518);
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar7 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar2 + 0xc) = uVar7 + 1;
    piVar4 = (int *)(iVar6 + uVar7 * 4 + 0x10);
    *piVar4 = iVar1;
    thunk_FUN_00ec5080(piVar4,iVar1);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar2,iVar1,*(undefined4 *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38));
  }
  return iVar1;
}

