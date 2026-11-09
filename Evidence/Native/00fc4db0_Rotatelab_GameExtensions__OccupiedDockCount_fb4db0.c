/* IL2CPP: Rotatelab.GameExtensions$$OccupiedDockCount
int32_t Rotatelab_GameExtensions__OccupiedDockCount (System_Collections_Generic_IList_BaseDockController__o* docks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.GameExtensions$$OccupiedDockCount
   int32_t Rotatelab_GameExtensions__OccupiedDockCount
   (System_Collections_Generic_IList_BaseDockController__o* docks, const MethodInfo* method); */

int Rotatelab_GameExtensions__OccupiedDockCount_fb4db0(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar8;
  int iVar9;
  undefined4 unaff_r6;
  undefined4 uVar10;
  undefined4 unaff_r7;
  int *piVar11;
  int iVar12;
  
  pcVar8 = (char *)(_UNK_00fc4ed8 + 0xfc4dc4);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc4edc + 0xfc4dd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc4ee0 + 0xfc4de4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc4ee4 + 0xfc4df0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc4ee8 + 0xfc4dfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc4eec + 0xfc4e08));
    *pcVar8 = '\x01';
  }
  piVar11 = *(int **)(_UNK_00fc4ef0 + 0xfc4e1c);
  iVar2 = *piVar11;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar11;
  }
  puVar5 = *(undefined4 **)(iVar2 + 0x5c);
  iVar9 = puVar5[2];
  if (iVar9 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar5 = *(undefined4 **)(*piVar11 + 0x5c);
    }
    uVar10 = *puVar5;
    iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fc4ef4 + 0xfc4e64));
    System_Predicate_object____ctor_1876380
              (iVar9,uVar10,**(undefined4 **)(_UNK_00fc4ef8 + 0xfc4e84),0);
    piVar11 = (int *)(*(int *)(*piVar11 + 0x5c) + 8);
    *piVar11 = iVar9;
    thunk_FUN_00ec5080(piVar11,iVar9);
  }
  if (*(int *)(**(int **)(_UNK_00fc4efc + 0xfc4eac) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = **(int **)(_UNK_00fc4f00 + 0xfc4ecc);
  if (*(int *)(iVar2 + 0x1c) == 0) {
    FUN_00efd7c4(iVar2);
  }
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(iVar2 + 0x1c) + 4);
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = FUN_00efd768(iVar6);
  }
  iVar3 = *param_1;
  uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar7 != 0) {
    piVar11 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar11[-1] == iVar6) {
        puVar5 = (undefined4 *)(iVar3 + *piVar11 * 8 + 0xc0);
        goto LAB_014964d0;
      }
      uVar7 = uVar7 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined4 *)FUN_00efdb38(param_1,iVar6,0);
LAB_014964d0:
  iVar3 = (*(code *)*puVar5)(param_1,puVar5[1],(code *)*puVar5,puVar5[1],unaff_r4,unaff_r5,unaff_r6,
                             unaff_r7);
  iVar12 = 0;
  iVar6 = iVar3 + -1;
  if (-1 < iVar3 + -1) {
    do {
      iVar3 = **(int **)(iVar2 + 0x1c);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = FUN_00efd768(iVar3);
      }
      iVar4 = *param_1;
      uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar11[-1] == iVar3) {
            puVar5 = (undefined4 *)(iVar4 + *piVar11 * 8 + 0xc0);
            goto LAB_01496558;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined4 *)FUN_00efdb38(param_1,iVar3,0);
LAB_01496558:
      uVar10 = (*(code *)*puVar5)(param_1,iVar6,puVar5[1]);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = (**(code **)(iVar9 + 0xc))
                        (*(undefined4 *)(iVar9 + 0x20),uVar10,*(undefined4 *)(iVar9 + 0x14));
      iVar12 = iVar12 + iVar3;
      bVar1 = 0 < iVar6;
      iVar6 = iVar6 + -1;
    } while (bVar1);
  }
  return iVar12;
}

