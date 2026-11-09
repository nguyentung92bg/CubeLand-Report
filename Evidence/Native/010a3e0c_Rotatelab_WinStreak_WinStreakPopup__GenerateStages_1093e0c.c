/* IL2CPP: Rotatelab.WinStreak.WinStreakPopup$$GenerateStages
void Rotatelab_WinStreak_WinStreakPopup__GenerateStages (Rotatelab_WinStreak_WinStreakPopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.WinStreakPopup$$GenerateStages
   void Rotatelab_WinStreak_WinStreakPopup__GenerateStages (Rotatelab_WinStreak_WinStreakPopup_o*
   __this, const MethodInfo* method); */

void Rotatelab_WinStreak_WinStreakPopup__GenerateStages_1093e0c(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_r4;
  char *pcVar8;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int *piVar9;
  undefined4 unaff_r7;
  undefined4 uVar10;
  undefined4 unaff_r8;
  int *piVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 unaff_lr;
  
  pcVar8 = (char *)(_UNK_010a40c8 + 0x10a3e24);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a40cc + 0x10a3e38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a40d0 + 0x10a3e44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a40d4 + 0x10a3e50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a40d8 + 0x10a3e5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a40dc + 0x10a3e68));
    *pcVar8 = '\x01';
  }
  piVar11 = (int *)(param_1 + 0x28);
  if (*piVar11 != 0) {
    return;
  }
  iVar3 = Rotatelab_WinStreak_WinStreakPopup__get_Data_1093a68();
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = FUN_00ec388c(**(undefined4 **)(_UNK_010a40e0 + 0x10a3eb8),
                       *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0xc));
  *piVar11 = iVar3;
  thunk_FUN_00ec5080(piVar11,iVar3);
  iVar3 = Rotatelab_WinStreak_WinStreakPopup__get_Data_1093a68();
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 0xc);
  uVar12 = iVar3 - 1;
  if (-1 < (int)uVar12) {
    iVar3 = iVar3 * 4 + 0xc;
    puVar13 = *(undefined4 **)(_UNK_010a40e4 + 0x10a3f14);
    do {
      uVar10 = *(undefined4 *)(param_1 + 0x24);
      piVar9 = *(int **)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x20),0);
      if (*(int *)(**(int **)(_UNK_010a40e8 + 0x10a3f44) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar5 = UnityEngine_Object__Instantiate_object__14d4e4c(uVar10,uVar4,0,*puVar13);
      if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((iVar5 != 0) &&
         (iVar6 = thunk_FUN_00f00bc8(iVar5,*(undefined4 *)(*piVar9 + 0x20)), iVar6 == 0)) {
        uVar10 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar10,0);
      }
      if ((uint)piVar9[3] <= uVar12) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(int *)((int)piVar9 + iVar3) = iVar5;
      thunk_FUN_00ec5080((int *)((int)piVar9 + iVar3),iVar5);
      iVar5 = *piVar11;
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar5 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar6 = *(int *)(iVar5 + iVar3);
      iVar5 = Rotatelab_WinStreak_WinStreakPopup__get_Data_1093a68();
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = *(int *)(iVar5 + 0xc);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar5 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_WinStreak_Stage__Initialize_1090ff8(iVar6,*(undefined4 *)(iVar5 + iVar3));
      iVar3 = iVar3 + -4;
      bVar1 = 0 < (int)uVar12;
      uVar12 = uVar12 - 1;
    } while (bVar1);
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetAsLastSibling_3616da0(*(int *)(param_1 + 0x3c),0);
  uVar10 = *(undefined4 *)(param_1 + 0x20);
  if (*(int *)(**(int **)(_UNK_010a40ec + 0x10a4074) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar10 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar10,0);
  if (*(int *)(**(int **)(_UNK_010a40f0 + 0x10a40a4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar8 = (char *)(_UNK_039c0574 + 0x39c0488);
  if (*pcVar8 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039c0578 + 0x39c049c),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039c057c + 0x39c04a8));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039c0580 + 0x39c04b4));
    *pcVar8 = '\x01';
  }
  piVar11 = *(int **)(_UNK_039c0584 + 0x39c04c8);
  iVar3 = *piVar11;
  if (*(int *)(iVar3 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar3 = *piVar11;
  }
  if (**(int **)(iVar3 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = FUN_01f50754(**(int **)(iVar3 + 0x5c),**(undefined4 **)(_UNK_039c0588 + 0x39c04fc));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_LayoutRebuilder__Initialize_39affc4(iVar3,uVar10);
  UnityEngine_UI_LayoutRebuilder__Rebuild_39b0590(iVar3,1);
  iVar5 = **(int **)(*piVar11 + 0x5c);
  if (iVar5 != 0) {
    iVar7 = **(int **)(_UNK_039c058c + 0x39c0568);
    iVar6 = *(int *)(iVar5 + 0x14);
    if (iVar6 != 0) {
      (**(code **)(iVar6 + 0xc))
                (*(undefined4 *)(iVar6 + 0x20),iVar3,*(undefined4 *)(iVar6 + 0x14),
                 *(code **)(iVar6 + 0xc),unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8,unaff_lr);
    }
    piVar11 = (int *)(iVar5 + 0x24);
    if (*piVar11 == 0) {
      *piVar11 = iVar3;
    }
    else {
      iVar6 = UnityEngine_Pool_ObjectPool_object___get_CountInactive_1857ed0
                        (iVar5,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48));
      if (*(int *)(iVar5 + 0x1c) <= iVar6) {
        iVar6 = *(int *)(iVar5 + 0x18);
        *(int *)(iVar5 + 0x28) = *(int *)(iVar5 + 0x28) + -1;
        if (iVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01476364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar6 + 0xc))
                    (*(undefined4 *)(iVar6 + 0x20),iVar3,*(undefined4 *)(iVar6 + 0x14));
          return;
        }
        return;
      }
      iVar5 = *(int *)(iVar5 + 8);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar6 = *(int *)(iVar5 + 8);
      uVar12 = *(uint *)(iVar5 + 0xc);
      iVar7 = *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x4c);
      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar12 < *(uint *)(iVar6 + 0xc)) {
        *(uint *)(iVar5 + 0xc) = uVar12 + 1;
        piVar11 = (int *)(iVar6 + uVar12 * 4 + 0x10);
        *piVar11 = iVar3;
      }
      else {
        uVar12 = *(uint *)(iVar5 + 0xc);
        System_Collections_Generic_List_object___EnsureCapacity_267e0f0
                  (iVar5,uVar12 + 1,
                   *(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38) +
                                      0x10) + 0x60) + 0x3c));
        iVar6 = *(int *)(iVar5 + 8);
        *(uint *)(iVar5 + 0xc) = uVar12 + 1;
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar6 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        piVar11 = (int *)(iVar6 + uVar12 * 4 + 0x10);
        *piVar11 = iVar3;
      }
    }
    if (*(int *)(_UNK_00f30580 + 0xf30540) == 0) {
      return;
    }
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar11 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar11 & 0x1ffff) >> 0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

