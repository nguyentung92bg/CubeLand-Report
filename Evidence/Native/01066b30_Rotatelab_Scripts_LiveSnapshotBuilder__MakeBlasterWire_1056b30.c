/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$MakeBlasterWire
Rotatelab_Scripts_BlasterWire_o* Rotatelab_Scripts_LiveSnapshotBuilder__MakeBlasterWire (Rotatelab_Scripts_BasePlaceableController_o* placeable, int32_t* uid, System_Collections_Generic_Dictionary_BlasterController__BlasterWire__o* wireByBlaster, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$MakeBlasterWire
   Rotatelab_Scripts_BlasterWire_o* Rotatelab_Scripts_LiveSnapshotBuilder__MakeBlasterWire
   (Rotatelab_Scripts_BasePlaceableController_o* placeable, int32_t* uid,
   System_Collections_Generic_Dictionary_BlasterController__BlasterWire__o* wireByBlaster, const
   MethodInfo* method); */

int Rotatelab_Scripts_LiveSnapshotBuilder__MakeBlasterWire_1056b30
              (int *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  int *piVar15;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar8 = (char *)(_UNK_010671a4 + 0x1066b50);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010671a8 + 0x1066b64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010671ac + 0x1066b70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010671b0 + 0x1066b7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010671b4 + 0x1066b88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010671b8 + 0x1066b94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010671bc + 0x1066ba0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010671c0 + 0x1066bac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010671c4 + 0x1066bb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010671c8 + 0x1066bc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010671cc + 0x1066bd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010671d0 + 0x1066bdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010671d4 + 0x1066be8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010671d8 + 0x1066bf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010671dc + 0x1066c00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010671e0 + 0x1066c0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010671e4 + 0x1066c18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010671e8 + 0x1066c24));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar9 = 0;
  uStack_38 = 0;
  if (param_1 != (int *)0x0) {
    iVar9 = *param_1;
    uVar13 = (uint)*(byte *)(**(int **)(_UNK_010671ec + 0x1066c48) + 0xb8);
    uVar2 = (uint)*(byte *)(iVar9 + 0xb8);
    if ((uVar2 < uVar13) ||
       (*(int *)(*(int *)(iVar9 + 100) + uVar13 * 4 + -4) != **(int **)(_UNK_010671ec + 0x1066c48)))
    {
      uVar13 = (uint)*(byte *)(**(int **)(_UNK_01067200 + 0x1066c84) + 0xb8);
      if ((uVar2 < uVar13) ||
         (*(int *)(*(int *)(iVar9 + 100) + uVar13 * 4 + -4) != **(int **)(_UNK_01067200 + 0x1066c84)
         )) {
        uVar13 = (uint)*(byte *)(**(int **)(_UNK_01067230 + 0x1066cb0) + 0xb8);
        if ((uVar2 < uVar13) ||
           (*(int *)(*(int *)(iVar9 + 100) + uVar13 * 4 + -4) !=
            **(int **)(_UNK_01067230 + 0x1066cb0))) {
          uVar13 = (uint)*(byte *)(**(int **)(_UNK_01067238 + 0x1066cdc) + 0xb8);
          if (uVar2 < uVar13) {
            return 0;
          }
          if (*(int *)(*(int *)(iVar9 + 100) + uVar13 * 4 + -4) !=
              **(int **)(_UNK_01067238 + 0x1066cdc)) {
            return 0;
          }
          iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106723c + 0x1066d08));
          Rotatelab_Scripts_BlasterWire___ctor_105c4a4(iVar9,0);
          iVar11 = *param_2;
          *param_2 = iVar11 + 1;
          if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar3 = 2;
        }
        else {
          iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01067234 + 0x10670f4));
          Rotatelab_Scripts_BlasterWire___ctor_105c4a4(iVar9,0);
          iVar11 = *param_2;
          *param_2 = iVar11 + 1;
          if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar3 = 1;
        }
        *(undefined4 *)(iVar9 + 0x14) = uVar3;
        *(int *)(iVar9 + 8) = iVar11;
      }
      else {
        iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01067204 + 0x1066eac));
        Rotatelab_Scripts_BlasterWire___ctor_105c4a4(iVar9,0);
        iVar11 = *param_2;
        *param_2 = iVar11 + 1;
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        puVar4 = *(undefined4 **)(_UNK_01067208 + 0x1066ee4);
        *(undefined4 *)(iVar9 + 0x14) = 7;
        *(int *)(iVar9 + 8) = iVar11;
        iVar11 = thunk_FUN_00f00cdc(*puVar4);
        System_Collections_Generic_List_object____ctor_267d274
                  (iVar11,**(undefined4 **)(_UNK_0106720c + 0x1066f00));
        piVar15 = (int *)(iVar9 + 0x24);
        *piVar15 = iVar11;
        thunk_FUN_00ec5080(piVar15,iVar11);
        if (param_1[0x17] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Collections_Generic_List_object___GetEnumerator_267e7a4
                  (&uStack_48,param_1[0x17],**(undefined4 **)(_UNK_01067210 + 0x1066f40));
        uStack_38 = uStack_48;
        uStack_34 = puStack_44;
        uStack_30 = uStack_40;
        iStack_2c = iStack_3c;
        uStack_48 = 0;
        puStack_44 = &uStack_38;
        while (iVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                                 (&uStack_38,**(undefined4 **)(_UNK_01067220 + 0x1066f68)),
              iVar11 = iStack_2c, iVar5 != 0) {
          iVar10 = *piVar15;
          iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01067214 + 0x1066f8c));
          Rotatelab_Scripts_BlasterWire___ctor_105c4a4(iVar5,0);
          iVar12 = *param_2;
          *param_2 = iVar12 + 1;
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          *(int *)(iVar5 + 8) = iVar12;
          if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar3 = *(undefined4 *)(iVar11 + 0x10c);
          if (*(int *)(**(int **)(_UNK_01067218 + 0x1066fd0) + 0x74) == 0) {
            FUN_00ec3934();
          }
          uVar3 = Rotatelab_Scripts_LiveSnapshotBuilder__MapColor_1053880(uVar3);
          uVar6 = *(undefined4 *)(iVar11 + 0x114);
          *(undefined4 *)(iVar5 + 0xc) = uVar3;
          *(undefined4 *)(iVar5 + 0x10) = uVar6;
          if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar11 = *(int *)(iVar10 + 8);
          uVar2 = *(uint *)(iVar10 + 0xc);
          piVar7 = *(int **)(_UNK_0106721c + 0x1067020);
          *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
          if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar2 < *(uint *)(iVar11 + 0xc)) {
            *(uint *)(iVar10 + 0xc) = uVar2 + 1;
            piVar7 = (int *)(iVar11 + uVar2 * 4 + 0x10);
            *piVar7 = iVar5;
            thunk_FUN_00ec5080(piVar7,iVar5);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_267dae0
                      (iVar10,iVar5,
                       *(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                  (&uStack_38,**(undefined4 **)(_UNK_01067224 + 0x106707c));
        if (*piVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (0 < *(int *)(*piVar15 + 0xc)) {
          if (*piVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar11 = System_Collections_Generic_List_object___get_Item_267d814
                             (*piVar15,0,**(undefined4 **)(_UNK_0106722c + 0x10670c0));
          if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar11 + 0xc);
        }
      }
    }
    else {
      bVar14 = false;
      uVar13 = (uint)*(byte *)(**(int **)(_UNK_010671f0 + 0x1066d48) + 0xb8);
      if (uVar13 <= uVar2) {
        bVar14 = *(int *)(*(int *)(iVar9 + 100) + uVar13 * 4 + -4) ==
                 **(int **)(_UNK_010671f0 + 0x1066d48);
      }
      iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010671f4 + 0x1066d74));
      Rotatelab_Scripts_BlasterWire___ctor_105c4a4(iVar9,0);
      iVar11 = *param_2;
      *param_2 = iVar11 + 1;
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar15 = *(int **)(_UNK_010671f8 + 0x1066da8);
      iVar10 = param_1[0x43];
      iVar5 = *(int *)(*piVar15 + 0x74);
      *(int *)(iVar9 + 8) = iVar11;
      if (iVar5 == 0) {
        FUN_00ec3934();
      }
      uVar3 = Rotatelab_Scripts_LiveSnapshotBuilder__MapColor_1053880(iVar10);
      *(undefined4 *)(iVar9 + 0xc) = uVar3;
      uVar3 = 0;
      if (bVar14 != false) {
        uVar3 = 8;
      }
      *(int *)(iVar9 + 0x10) = param_1[0x45];
      *(undefined4 *)(iVar9 + 0x14) = uVar3;
      uVar3 = 0;
      iVar11 = Rotatelab_Scripts_BlasterController__get_IsDoubleColored_1030fb0(param_1,0);
      if (iVar11 != 0) {
        iVar11 = param_1[0x44];
        if (*(int *)(*piVar15 + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar3 = Rotatelab_Scripts_LiveSnapshotBuilder__MapColor_1053880(iVar11);
      }
      iVar11 = param_1[6];
      *(bool *)(iVar9 + 0x20) = bVar14;
      uVar1 = *(undefined1 *)((int)param_1 + 0xc2);
      *(undefined4 *)(iVar9 + 0x18) = uVar3;
      *(undefined1 *)(iVar9 + 0x22) = uVar1;
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = *piVar15;
      iVar10 = *(int *)(iVar5 + 0x74);
      *(undefined1 *)(iVar9 + 0x21) = *(undefined1 *)(iVar11 + 0x25);
      if (iVar10 == 0) {
        FUN_00ec3934();
        iVar5 = *piVar15;
      }
      uVar3 = Rotatelab_Scripts_LiveSnapshotBuilder__ReflectHp_10539b0
                        (*(undefined4 *)(*(int *)(iVar5 + 0x5c) + 4),param_1);
      *(undefined4 *)(iVar9 + 0x1c) = uVar3;
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_Dictionary_object__object___set_Item_2069314
                (param_3,param_1,iVar9,**(undefined4 **)(_UNK_010671fc + 0x1066e94));
    }
  }
  return iVar9;
}

