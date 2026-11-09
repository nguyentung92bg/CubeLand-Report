/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$AddDockedWire
void Rotatelab_Scripts_LiveSnapshotBuilder__AddDockedWire (Rotatelab_Scripts_LevelDataWire_o* level, Rotatelab_Scripts_BlasterController_o* blaster, int32_t dockIndex, bool isPilot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$AddDockedWire
   void Rotatelab_Scripts_LiveSnapshotBuilder__AddDockedWire (Rotatelab_Scripts_LevelDataWire_o*
   level, Rotatelab_Scripts_BlasterController_o* blaster, int32_t dockIndex, bool isPilot, const
   MethodInfo* method); */

void Rotatelab_Scripts_LiveSnapshotBuilder__AddDockedWire_1057240
               (int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  
  pcVar5 = (char *)(_UNK_010674b4 + 0x1067260);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010674b8 + 0x1067278));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010674bc + 0x1067284));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010674c0 + 0x1067290));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010674c4 + 0x106729c));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010674c8 + 0x10672b0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = UnityEngine_Object__op_Equality_36033f4(param_2,0,0);
  if (iVar3 == 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar10 = 0;
    iVar3 = Rotatelab_Scripts_BlasterController__get_IsDoubleColored_1030fb0(param_2,0);
    if (iVar3 != 0) {
      piVar6 = *(int **)(_UNK_010674cc + 0x1067308);
      iVar3 = *piVar6;
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        iVar3 = *piVar6;
      }
      iVar10 = Rotatelab_Scripts_LiveSnapshotBuilder__ReflectHp_10539b0
                         (*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x20),param_2);
    }
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(param_2 + 0x114);
    iVar3 = iVar7;
    if (iVar7 < 1) {
      iVar3 = iVar10 + -1;
    }
    if (iVar3 < 0 == (iVar7 < 1 && SBORROW4(iVar10,1))) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar11 = *(int *)(param_1 + 0x20);
      iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010674d0 + 0x1067364));
      Rotatelab_Scripts_DockedWire___ctor_105c314(iVar3,0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = 0x10c;
      if (iVar7 < 1) {
        iVar4 = 0x110;
      }
      piVar6 = *(int **)(_UNK_010674d4 + 0x106739c);
      *(undefined4 *)(iVar3 + 8) = param_3;
      uVar9 = *(undefined4 *)(param_2 + iVar4);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar9 = Rotatelab_Scripts_LiveSnapshotBuilder__MapColor_1053880(uVar9);
      *(undefined4 *)(iVar3 + 0xc) = uVar9;
      if (iVar7 < 1) {
        *(int *)(iVar3 + 0x10) = iVar10;
        iVar10 = 0;
        uVar9 = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(param_2 + 0x114);
        uVar9 = 0;
        iVar7 = Rotatelab_Scripts_BlasterController__get_IsDoubleColored_1030fb0(param_2,0);
        if (iVar7 != 0) {
          uVar9 = *(undefined4 *)(param_2 + 0x110);
          if (*(int *)(*piVar6 + 0x74) == 0) {
            FUN_00ec3934();
          }
          uVar9 = Rotatelab_Scripts_LiveSnapshotBuilder__MapColor_1053880(uVar9);
        }
      }
      *(undefined4 *)(iVar3 + 0x14) = uVar9;
      *(undefined1 *)(iVar3 + 0x1c) = param_4;
      *(int *)(iVar3 + 0x18) = iVar10;
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = *(int *)(iVar11 + 8);
      uVar8 = *(uint *)(iVar11 + 0xc);
      piVar6 = *(int **)(_UNK_010674d8 + 0x106745c);
      *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar8 < *(uint *)(iVar10 + 0xc)) {
        *(uint *)(iVar11 + 0xc) = uVar8 + 1;
        piVar6 = (int *)(iVar10 + uVar8 * 4 + 0x10);
        *piVar6 = iVar3;
      }
      else {
        uVar8 = *(uint *)(iVar11 + 0xc);
        System_Collections_Generic_List_object___EnsureCapacity_267e0f0
                  (iVar11,uVar8 + 1,
                   *(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38) +
                                      0x10) + 0x60) + 0x3c));
        iVar10 = *(int *)(iVar11 + 8);
        *(uint *)(iVar11 + 0xc) = uVar8 + 1;
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        piVar6 = (int *)(iVar10 + uVar8 * 4 + 0x10);
        *piVar6 = iVar3;
      }
      if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
        puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar6 >> 0x11) * 4 + 0xf547cc);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = *puVar2 | 1 << (((uint)piVar6 & 0x1ffff) >> 0xc);
        return;
      }
      return;
    }
  }
  return;
}

