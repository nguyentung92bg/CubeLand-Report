/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$GetDimmableRenderers
void Rotatelab_Scripts_ShrinkingCoverController__GetDimmableRenderers (Rotatelab_Scripts_ShrinkingCoverController_o* __this, System_Collections_Generic_HashSet_Renderer__o* renderers, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02431f10) */
/* WARNING: Removing unreachable block (ram,0x02431ec8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$GetDimmableRenderers
   void Rotatelab_Scripts_ShrinkingCoverController__GetDimmableRenderers
   (Rotatelab_Scripts_ShrinkingCoverController_o* __this,
   System_Collections_Generic_HashSet_Renderer__o* renderers, const MethodInfo* method); */

undefined4
Rotatelab_Scripts_ShrinkingCoverController__GetDimmableRenderers_1051844(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint extraout_r1;
  int iVar6;
  uint extraout_r1_00;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  char *pcVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  
  pcVar13 = (char *)(_UNK_010618f4 + 0x106185c);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010618f8 + 0x1061870));
    *pcVar13 = '\x01';
  }
  Rotatelab_Scripts_BaseTargetableController__GetDimmableRenderers_ff5a80(param_1,param_2,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_HashSet_object___Add_2420ac8
            (param_2,*(undefined4 *)(param_1 + 0x40),**(undefined4 **)(_UNK_010618fc + 0x10618a4));
  uVar10 = *(undefined4 *)(param_1 + 0x44);
  iVar7 = *(int *)(*(int *)(*(int *)(**(int **)(_UNK_01061904 + 0x10618e8) + 0x10) + 0x60) + 0x54);
  if (*(int *)(param_2 + 8) == 0) {
    System_Collections_Generic_HashSet_object___Initialize_2421890
              (param_2,0,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
  }
  iVar1 = System_Collections_Generic_HashSet_object___InternalGetHashCode_24233ec
                    (param_2,uVar10,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x58))
  ;
  iVar11 = *(int *)(param_2 + 8);
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  FUN_00f88884(iVar1,*(undefined4 *)(iVar11 + 0xc));
  iVar16 = *(int *)(param_2 + 0xc);
  if (*(uint *)(iVar11 + 0xc) <= extraout_r1) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  uVar15 = *(int *)(iVar11 + extraout_r1 * 4 + 0x10) - 1;
  if (-1 < (int)uVar15) {
    iVar11 = iVar16 + 0x10;
    iVar14 = 0;
    do {
      if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar16 + 0xc) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      if (*(int *)(iVar11 + uVar15 * 0xc) == iVar1) {
        piVar12 = *(int **)(param_2 + 0x1c);
        if (*(uint *)(iVar16 + 0xc) <= uVar15) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        uVar2 = *(undefined4 *)(iVar11 + uVar15 * 0xc + 8);
        if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x10);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = FUN_00efd768(iVar6);
        }
        iVar3 = *piVar12;
        uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar9[-1] == iVar6) {
              puVar4 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
              goto LAB_02431d64;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined4 *)FUN_00efdb38(piVar12,iVar6,0);
LAB_02431d64:
        iVar6 = (*(code *)*puVar4)(piVar12,uVar2,uVar10,puVar4[1]);
        if (iVar6 != 0) {
          return 0;
        }
        if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
      }
      if ((int)*(uint *)(iVar16 + 0xc) <= iVar14) {
        thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02431fe8 + 0x2431fb0));
        uVar10 = thunk_FUN_00f00cdc();
        uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02431fec + 0x2431fc4));
        System_InvalidOperationException___ctor_2b6e948(uVar10,uVar2,0);
        func_0x00ec3920(uVar10,iVar7);
                    /* WARNING: Subroutine does not return */
        FUN_00ec3760();
      }
      if (*(uint *)(iVar16 + 0xc) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar14 = iVar14 + 1;
      uVar15 = *(uint *)(iVar11 + uVar15 * 0xc + 4);
    } while (uVar15 < 0x80000000);
  }
  uVar8 = *(uint *)(param_2 + 0x18);
  uVar15 = extraout_r1;
  if ((int)uVar8 < 0) {
    if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_2 + 0x14) == *(int *)(iVar16 + 0xc)) {
      System_Collections_Generic_HashSet_object___IncreaseCapacity_2421974
                (param_2,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0xc0));
      iVar16 = *(int *)(param_2 + 0xc);
      if (*(int *)(param_2 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar8 = *(uint *)(param_2 + 0x14);
      uVar2 = *(undefined4 *)(*(int *)(param_2 + 8) + 0xc);
      *(uint *)(param_2 + 0x14) = uVar8 + 1;
      FUN_00f88884(iVar1,uVar2);
      uVar15 = extraout_r1_00;
      if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
    }
    else {
      uVar8 = *(uint *)(param_2 + 0x14);
      *(uint *)(param_2 + 0x14) = uVar8 + 1;
    }
  }
  else {
    if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar16 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(iVar16 + uVar8 * 0xc + 0x14);
  }
  if (*(uint *)(iVar16 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(int *)(iVar16 + 0x10 + uVar8 * 0xc) = iVar1;
  uVar5 = *(uint *)(iVar16 + 0xc);
  if (uVar5 <= uVar8) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  iVar7 = iVar16 + 0x10 + uVar8 * 0xc;
  puVar4 = (undefined4 *)(iVar7 + 8);
  *puVar4 = uVar10;
  if (uVar5 <= uVar8) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  thunk_FUN_00ec5080(puVar4,uVar10);
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar15) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  if (uVar8 < *(uint *)(iVar16 + 0xc)) {
    iVar11 = *(int *)(param_2 + 8);
    *(int *)(iVar7 + 4) = *(int *)(iVar1 + uVar15 * 4 + 0x10) + -1;
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar15 < *(uint *)(iVar11 + 0xc)) {
      *(uint *)(iVar11 + uVar15 * 4 + 0x10) = uVar8 + 1;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

