/* IL2CPP: Rotatelab.Scripts.ObjectManager$$MarkVoxelsToDestroyByPropeller
System_Collections_Generic_List_VoxelController__o* Rotatelab_Scripts_ObjectManager__MarkVoxelsToDestroyByPropeller (Rotatelab_Scripts_ObjectManager_o* __this, Rotatelab_Scripts_VoxelController_o* targetVoxel, int32_t voxelCountToDestroy, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$MarkVoxelsToDestroyByPropeller
   System_Collections_Generic_List_VoxelController__o*
   Rotatelab_Scripts_ObjectManager__MarkVoxelsToDestroyByPropeller
   (Rotatelab_Scripts_ObjectManager_o* __this, Rotatelab_Scripts_VoxelController_o* targetVoxel,
   int32_t voxelCountToDestroy, const MethodInfo* method); */

int Rotatelab_Scripts_ObjectManager__MarkVoxelsToDestroyByPropeller_102e81c
              (int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  uint *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_0103ef4c + 0x103e83c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ef50 + 0x103e850));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ef54 + 0x103e85c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ef58 + 0x103e868));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ef5c + 0x103e874));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ef60 + 0x103e880));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ef64 + 0x103e88c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ef68 + 0x103e898));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ef6c + 0x103e8a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ef70 + 0x103e8b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ef74 + 0x103e8bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ef78 + 0x103e8c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ef7c + 0x103e8d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ef80 + 0x103e8e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ef84 + 0x103e8ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ef88 + 0x103e8f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ef8c + 0x103e904));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ef90 + 0x103e910));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ef94 + 0x103e91c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ef98 + 0x103e928));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103ef9c + 0x103e934));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103efa0 + 0x103e940));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103efa4 + 0x103e94c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103efa8 + 0x103e958));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103efac + 0x103e964));
    *pcVar6 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar11 = 0;
  uStack_40 = 0;
  iStack_28 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0103efb0 + 0x103e984));
  System_Object___ctor_2bb93bc(iVar2,0);
  piVar7 = *(int **)(_UNK_0103efb4 + 0x103e9c0);
  uVar9 = *(undefined4 *)(param_1 + 0x50);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = UnityEngine_Object__op_Equality_36033f4(uVar9,0,0);
  if (iVar3 == 0) {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar11 = 0;
    iVar3 = UnityEngine_Object__op_Equality_36033f4(param_2,0,0);
    if (iVar3 == 0) {
      iVar11 = *(int *)(param_1 + 0x7c);
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = *(int *)(iVar11 + 8);
      uVar5 = *(uint *)(iVar11 + 0xc);
      piVar7 = *(int **)(_UNK_0103efb8 + 0x103ea50);
      *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar5 < *(uint *)(iVar3 + 0xc)) {
        *(uint *)(iVar11 + 0xc) = uVar5 + 1;
        piVar7 = (int *)(iVar3 + uVar5 * 4 + 0x10);
        *piVar7 = param_2;
        thunk_FUN_00ec5080(piVar7,param_2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (iVar11,param_2,*(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38))
        ;
      }
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar11 = UnityEngine_Component__get_transform_35fe190(param_2,0);
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__get_position_36149b0(&uStack_60,iVar11,0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(undefined4 *)(iVar2 + 0x10) = uStack_58;
      *(ulonglong *)(iVar2 + 8) = CONCAT44(puStack_5c,uStack_60);
      if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x58) + 0xc);
      iVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0103efbc + 0x103eb10));
      System_Collections_Generic_List_object____ctor_267d2e8
                (iVar11,uVar9,**(undefined4 **)(_UNK_0103efc0 + 0x103eb2c));
      iVar3 = 0;
      puVar12 = *(undefined4 **)(_UNK_0103efc4 + 0x103eb44);
      puVar10 = *(uint **)(_UNK_0103efc8 + 0x103eb4c);
      while( true ) {
        if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(*(int *)(param_1 + 0x58) + 0xc) <= iVar3) break;
        if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar7 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                                  (*(int *)(param_1 + 0x58),iVar3,*puVar12);
        if (piVar7 != (int *)0x0) {
          uVar5 = *puVar10;
          if ((uint)*(byte *)(uVar5 + 0xb8) <= (uint)*(byte *)(*piVar7 + 0xb8)) {
            bVar14 = *(uint *)(*(int *)(*piVar7 + 100) + (uint)*(byte *)(uVar5 + 0xb8) * 4 + -4) ==
                     uVar5;
            if (bVar14) {
              uVar5 = (uint)*(byte *)(piVar7 + 6);
            }
            if (bVar14 && uVar5 == 0) {
              if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              iVar8 = *(int *)(iVar11 + 8);
              uVar5 = *(uint *)(iVar11 + 0xc);
              piVar4 = *(int **)(_UNK_0103efcc + 0x103ebf8);
              *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
              if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              if (uVar5 < *(uint *)(iVar8 + 0xc)) {
                *(uint *)(iVar11 + 0xc) = uVar5 + 1;
                piVar4 = (int *)(iVar8 + uVar5 * 4 + 0x10);
                *piVar4 = (int)piVar7;
                thunk_FUN_00ec5080(piVar4,piVar7);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_267dae0
                          (iVar11,piVar7,
                           *(undefined4 *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38));
              }
            }
          }
        }
        iVar3 = iVar3 + 1;
      }
      uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0103efd0 + 0x103ec5c));
      System_Comparison_object____ctor_1f2562c
                (uVar9,iVar2,**(undefined4 **)(_UNK_0103efd4 + 0x103ec74),0);
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_object___Sort_267f704
                (iVar11,uVar9,**(undefined4 **)(_UNK_0103efd8 + 0x103ec98));
      iVar2 = *(int *)(iVar11 + 0xc);
      if (param_3 < *(int *)(iVar11 + 0xc)) {
        iVar2 = param_3;
      }
      if (iVar2 == 0) {
        iVar11 = 0;
      }
      else {
        iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0103efe0 + 0x103ece8));
        System_Collections_Generic_Dictionary_Int32Enum__int____ctor_1ff9064
                  (iVar3,**(undefined4 **)(_UNK_0103efe4 + 0x103ecfc));
        if (0 < iVar2) {
          iVar8 = 0;
          puVar13 = *(undefined4 **)(_UNK_0103efe8 + 0x103ed24);
          puVar12 = *(undefined4 **)(_UNK_0103efec + 0x103ed2c);
          do {
            if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            piVar7 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                                      (iVar11,iVar8,**(undefined4 **)(_UNK_0103eff0 + 0x103ed44));
            if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            (**(code **)(*piVar7 + 0x110))(piVar7,*(undefined4 *)(*piVar7 + 0x114));
            if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            System_Collections_Generic_Dictionary_Int32Enum__int___TryGetValue_1ffb8dc
                      (iVar3,piVar7[5],&iStack_28,*puVar13);
            if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            System_Collections_Generic_Dictionary_Int32Enum__int___set_Item_1ff9aa4
                      (iVar3,piVar7[5],iStack_28 + 1,*puVar12);
            iVar8 = iVar8 + 1;
          } while (iVar2 != iVar8);
        }
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Collections_Generic_Dictionary_Int32Enum__int___GetEnumerator_1ff9f50
                  (&uStack_40,iVar3,**(undefined4 **)(_UNK_0103eff4 + 0x103edec));
        uStack_60 = 0;
        puVar12 = *(undefined4 **)(_UNK_0103eff8 + 0x103ee18);
        puStack_5c = &uStack_40;
        while (iVar3 = System_Collections_Generic_Dictionary_Enumerator_Int32Enum__int___MoveNext_21dbd5c
                                 (&uStack_40,**(undefined4 **)(_UNK_0103f000 + 0x103ee20)),
              iVar3 != 0) {
          uStack_44 = uStack_30;
          uStack_48 = uStack_34;
          System_Collections_Generic_KeyValuePair_Int32Enum__int___Deconstruct_255eeb8
                    (&uStack_48,&uStack_4c,&uStack_50,**(undefined4 **)(_UNK_0103effc + 0x103ee40));
          uVar1 = uStack_4c;
          uVar9 = uStack_50;
          iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar12);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          Rotatelab_Scripts_PlaceableManager__ConsumeBulletsOfQueuedBlastersExternally_104903c
                    (iVar3,uVar1,uVar9,1,0);
        }
        System_Collections_Generic_Dictionary_Enumerator_Int32Enum__int___Dispose_21dbe94
                  (&uStack_40,**(undefined4 **)(_UNK_0103f004 + 0x103eea4));
        if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Collections_Generic_List_object___RemoveRange_267f49c
                  (iVar11,iVar2,*(int *)(iVar11 + 0xc) - iVar2,
                   **(undefined4 **)(_UNK_0103f00c + 0x103eed4));
      }
    }
  }
  return iVar11;
}

