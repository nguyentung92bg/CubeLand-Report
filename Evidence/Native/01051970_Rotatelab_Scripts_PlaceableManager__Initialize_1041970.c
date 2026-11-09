/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$Initialize
void Rotatelab_Scripts_PlaceableManager__Initialize (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_SoLevelData_o* levelData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$Initialize
   void Rotatelab_Scripts_PlaceableManager__Initialize (Rotatelab_Scripts_PlaceableManager_o*
   __this, Rotatelab_SoLevelData_o* levelData, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__Initialize_1041970(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  int *piStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  
  pcVar7 = (char *)(_UNK_01051dec + 0x1051994);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051df0 + 0x10519a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051df4 + 0x10519b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051df8 + 0x10519c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051dfc + 0x10519cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051e00 + 0x10519d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051e04 + 0x10519e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051e08 + 0x10519f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051e0c + 0x10519fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051e10 + 0x1051a08));
    *pcVar7 = '\x01';
  }
  puStack_3c = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_34 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_2 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(*(int *)(param_2 + 0x88) + 0xc);
  if (*(int *)(param_1 + 0x44) != 0) {
    UnityEngine_Transform__get_localPosition_3613b6c(&uStack_60,*(int *)(param_1 + 0x44),0);
    uVar1 = uStack_58;
    puVar5 = puStack_5c;
    uVar3 = uStack_60;
    iVar8 = *(int *)(param_1 + 0x50);
    fVar12 = *(float *)(param_1 + 0x48);
    if (*(int *)(**(int **)(_UNK_01051e14 + 0x1051a7c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    fVar11 = (float)VectorSignedToFloat(iVar8 + -1,(byte)(in_fpscr >> 0x16) & 3);
    Rotatelab_Extensions__WithX_fc17b4(&uStack_50,uVar3,puVar5,uVar1,fVar12 * fVar11 * -0.5,0);
    puVar5 = *(undefined4 **)(_UNK_01051e18 + 0x1051ae0);
    *(undefined4 *)(param_1 + 0x5c) = uStack_48;
    *(undefined8 *)(param_1 + 0x54) = uStack_50;
    System_Array__Resize_Sequence__138ac60(param_1 + 0xc0,*(undefined4 *)(param_1 + 0x50),*puVar5);
    Rotatelab_Scripts_PlaceableManager__GeneratePlaceables_1041e4c
              (param_1,*(undefined4 *)(param_2 + 0x88));
    if (*(int *)(param_1 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar10 = *(undefined4 **)(_UNK_01051e1c + 0x1051b24);
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_60,*(int *)(param_1 + 0xb4),*puVar10);
    uStack_40 = uStack_60;
    puStack_3c = puStack_5c;
    uStack_38 = uStack_58;
    piStack_34 = piStack_54;
    uStack_60 = 0;
    puVar5 = *(undefined4 **)(_UNK_01051e20 + 0x1051b48);
    piVar9 = *(int **)(_UNK_01051e24 + 0x1051b50);
    puStack_5c = &uStack_40;
    while (iVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                             (&uStack_40,*puVar5), piVar2 = piStack_34, iVar8 != 0) {
      if (piStack_34 != (int *)0x0) {
        iVar8 = *piVar9;
        uVar6 = (uint)*(byte *)(iVar8 + 0xb8);
        if ((uVar6 <= *(byte *)(*piStack_34 + 0xb8)) &&
           (*(int *)(*(int *)(*piStack_34 + 100) + uVar6 * 4 + -4) == iVar8)) {
          Rotatelab_Scripts_BlasterController__CreateConnections_1031d7c(piStack_34,0);
          Rotatelab_Scripts_BlasterController__CreateChainConnections_1032208(piVar2,0);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (&uStack_40,**(undefined4 **)(_UNK_01051e28 + 0x1051bc0));
    if (*(int *)(param_1 + 0xb4) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_267e7a4
                (&uStack_60,*(int *)(param_1 + 0xb4),*puVar10);
      uStack_40 = uStack_60;
      puStack_3c = puStack_5c;
      uStack_38 = uStack_58;
      piStack_34 = piStack_54;
      uStack_60 = 0;
      puStack_5c = &uStack_40;
      while (iVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                               (&uStack_40,*puVar5), piVar2 = piStack_34, iVar8 != 0) {
        if (piStack_34 != (int *)0x0) {
          iVar8 = *piVar9;
          uVar6 = (uint)*(byte *)(iVar8 + 0xb8);
          if ((uVar6 <= *(byte *)(*piStack_34 + 0xb8)) &&
             (*(int *)(*(int *)(*piStack_34 + 100) + uVar6 * 4 + -4) == iVar8)) {
            Rotatelab_Scripts_BlasterController__RefreshAllConnectedBlasters_103252c(piStack_34,0);
            Rotatelab_Scripts_BlasterController__RefreshAllChainedBlasters_1032790(piVar2,0);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_40,**(undefined4 **)(_UNK_01051e30 + 0x1051c70));
      if (*(int *)(**(int **)(_UNK_01051e38 + 0x1051c84) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar3 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
      iVar8 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar3,0);
      iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01051e3c + 0x1051cb4));
      if (iVar4 != 0) {
        if (*(int *)(iVar4 + 0x80) != 0) {
          if (*(int *)(*(int *)(iVar4 + 0x80) + 0xc) <= iVar8) {
            pcVar7 = (char *)(_UNK_01051e40 + 0x1051cf0);
            if (*pcVar7 == '\0') {
              FUN_00ec37c0(*(undefined4 *)(_UNK_01051e44 + 0x1051d04));
              *pcVar7 = '\x01';
            }
            if (**(char **)(**(int **)(_UNK_01051e48 + 0x1051d18) + 0x5c) == '\0') {
              Rotatelab_Scripts_PlaceableManager__DistributeJewelHeists_10420f4(param_1);
            }
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

