/* IL2CPP: Rotatelab.Scripts.DockManager$$get_ShootingBlasterCount
int32_t Rotatelab_Scripts_DockManager__get_ShootingBlasterCount (Rotatelab_Scripts_DockManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$get_ShootingBlasterCount
   int32_t Rotatelab_Scripts_DockManager__get_ShootingBlasterCount (Rotatelab_Scripts_DockManager_o*
   __this, const MethodInfo* method); */

int Rotatelab_Scripts_DockManager__get_ShootingBlasterCount_10044e4(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_r4;
  int *piVar8;
  undefined4 unaff_r5;
  char *pcVar9;
  int iVar10;
  undefined4 unaff_r6;
  undefined4 uVar11;
  undefined4 unaff_r7;
  int *piVar12;
  int iVar13;
  
  pcVar9 = (char *)(_UNK_01014610 + 0x10144f8);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014614 + 0x101450c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014618 + 0x1014518));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101461c + 0x1014524));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014620 + 0x1014530));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014624 + 0x101453c));
    *pcVar9 = '\x01';
  }
  piVar12 = *(int **)(_UNK_01014628 + 0x1014550);
  piVar8 = *(int **)(param_1 + 0x50);
  iVar2 = *piVar12;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar12;
  }
  puVar5 = *(undefined4 **)(iVar2 + 0x5c);
  iVar10 = puVar5[1];
  if (iVar10 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar5 = *(undefined4 **)(*piVar12 + 0x5c);
    }
    uVar11 = *puVar5;
    iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101462c + 0x101459c));
    System_Predicate_object____ctor_1876380
              (iVar10,uVar11,**(undefined4 **)(_UNK_01014630 + 0x10145bc),0);
    piVar12 = (int *)(*(int *)(*piVar12 + 0x5c) + 4);
    *piVar12 = iVar10;
    thunk_FUN_00ec5080(piVar12,iVar10);
  }
  if (*(int *)(**(int **)(_UNK_01014634 + 0x10145e4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = **(int **)(_UNK_01014638 + 0x1014604);
  if (*(int *)(iVar2 + 0x1c) == 0) {
    FUN_00efd7c4(iVar2);
  }
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(iVar2 + 0x1c) + 4);
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = FUN_00efd768(iVar6);
  }
  iVar3 = *piVar8;
  uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar12[-1] == iVar6) {
        puVar5 = (undefined4 *)(iVar3 + *piVar12 * 8 + 0xc0);
        goto LAB_014964d0;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 2;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined4 *)FUN_00efdb38(piVar8,iVar6,0);
LAB_014964d0:
  iVar3 = (*(code *)*puVar5)(piVar8,puVar5[1],(code *)*puVar5,puVar5[1],unaff_r4,unaff_r5,unaff_r6,
                             unaff_r7);
  iVar13 = 0;
  iVar6 = iVar3 + -1;
  if (-1 < iVar3 + -1) {
    do {
      iVar3 = **(int **)(iVar2 + 0x1c);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = FUN_00efd768(iVar3);
      }
      iVar4 = *piVar8;
      uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar12[-1] == iVar3) {
            puVar5 = (undefined4 *)(iVar4 + *piVar12 * 8 + 0xc0);
            goto LAB_01496558;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined4 *)FUN_00efdb38(piVar8,iVar3,0);
LAB_01496558:
      uVar11 = (*(code *)*puVar5)(piVar8,iVar6,puVar5[1]);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = (**(code **)(iVar10 + 0xc))
                        (*(undefined4 *)(iVar10 + 0x20),uVar11,*(undefined4 *)(iVar10 + 0x14));
      iVar13 = iVar13 + iVar3;
      bVar1 = 0 < iVar6;
      iVar6 = iVar6 + -1;
    } while (bVar1);
  }
  return iVar13;
}

