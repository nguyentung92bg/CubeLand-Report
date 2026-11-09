/* IL2CPP: Rotatelab.Leaderboard.CycleData$$get_PlayerRank
int32_t Rotatelab_Leaderboard_CycleData__get_PlayerRank (Rotatelab_Leaderboard_CycleData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.CycleData$$get_PlayerRank
   int32_t Rotatelab_Leaderboard_CycleData__get_PlayerRank (Rotatelab_Leaderboard_CycleData_o*
   __this, const MethodInfo* method); */

int Rotatelab_Leaderboard_CycleData__get_PlayerRank_10ae0e0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar11;
  int *piVar12;
  undefined4 unaff_r6;
  int iVar13;
  
  pcVar11 = (char *)(_UNK_010be1a0 + 0x10be0f4);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010be1a4 + 0x10be108));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010be1a8 + 0x10be114));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010be1ac + 0x10be120));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010be1b0 + 0x10be12c));
    *pcVar11 = '\x01';
  }
  piVar12 = *(int **)(param_1 + 0x20);
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010be1b4 + 0x10be140));
  System_Predicate_object____ctor_1876380
            (iVar2,param_1,**(undefined4 **)(_UNK_010be1b8 + 0x10be160),0);
  if (*(int *)(**(int **)(_UNK_010be1bc + 0x10be174) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar8 = **(int **)(_UNK_010be1c0 + 0x10be194);
  if (*(int *)(iVar8 + 0x1c) == 0) {
    FUN_00efd7c4(iVar8);
  }
  if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(*(int *)(iVar8 + 0x1c) + 4);
  if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = FUN_00efd768(iVar7);
  }
  iVar3 = *piVar12;
  uVar9 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar10[-1] == iVar7) {
        puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
        goto LAB_014964d0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(piVar12,iVar7,0);
LAB_014964d0:
  iVar3 = (*(code *)*puVar4)(piVar12,puVar4[1],(code *)*puVar4,puVar4[1],unaff_r4,unaff_r5,unaff_r6)
  ;
  iVar13 = 0;
  iVar7 = iVar3 + -1;
  if (-1 < iVar3 + -1) {
    do {
      iVar3 = **(int **)(iVar8 + 0x1c);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = FUN_00efd768(iVar3);
      }
      iVar5 = *piVar12;
      uVar9 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar10[-1] == iVar3) {
            puVar4 = (undefined4 *)(iVar5 + *piVar10 * 8 + 0xc0);
            goto LAB_01496558;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piVar12,iVar3,0);
LAB_01496558:
      uVar6 = (*(code *)*puVar4)(piVar12,iVar7,puVar4[1]);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = (**(code **)(iVar2 + 0xc))
                        (*(undefined4 *)(iVar2 + 0x20),uVar6,*(undefined4 *)(iVar2 + 0x14));
      iVar13 = iVar13 + iVar3;
      bVar1 = 0 < iVar7;
      iVar7 = iVar7 + -1;
    } while (bVar1);
  }
  return iVar13;
}

