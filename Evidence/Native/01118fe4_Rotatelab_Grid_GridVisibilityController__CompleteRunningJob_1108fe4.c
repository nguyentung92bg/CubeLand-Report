/* IL2CPP: Rotatelab.Grid.GridVisibilityController$$CompleteRunningJob
void Rotatelab_Grid_GridVisibilityController__CompleteRunningJob (Rotatelab_Grid_GridVisibilityController_o* __this, UnityEngine_Camera_o* camera, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0268e9b0) */
/* WARNING: Removing unreachable block (ram,0x010059c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridVisibilityController$$CompleteRunningJob
   void Rotatelab_Grid_GridVisibilityController__CompleteRunningJob
   (Rotatelab_Grid_GridVisibilityController_o* __this, UnityEngine_Camera_o* camera, const
   MethodInfo* method); */

void Rotatelab_Grid_GridVisibilityController__CompleteRunningJob_1108fe4
               (int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  char *pcVar4;
  int iVar5;
  undefined4 unaff_r5;
  uint uVar6;
  undefined4 unaff_r6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined4 unaff_r7;
  int iVar10;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  uint uVar11;
  int iVar12;
  undefined4 unaff_r11;
  int iVar13;
  undefined4 unaff_lr;
  
  pcVar4 = (char *)(_UNK_011192f0 + 0x1119000);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011192f4 + 0x1119014));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011192f8 + 0x1119020));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011192fc + 0x111902c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01119300 + 0x1119038));
    *pcVar4 = '\x01';
  }
  Unity_Jobs_JobHandle__Complete_359b688(param_1 + 0x48,0);
  iVar5 = *(int *)(param_1 + 0x5c);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar5 + 0xc);
  *(undefined4 *)(iVar5 + 0xc) = 0;
  *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
  if (0 < iVar3) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar5 + 8),0,iVar3,0);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = *(uint *)(*(int *)(param_1 + 0x10) + 0xc);
  if (-1 < (int)(uVar6 - 1)) {
    iVar5 = uVar6 << 2;
    iVar3 = param_1;
    do {
      iVar7 = *(int *)(param_1 + 0x10);
      iVar13 = *(int *)(*(int *)(param_1 + 0x38) + iVar5 + -4);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar6 = uVar6 - 1;
      if (*(uint *)(iVar7 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar1 = iVar5 * 3;
      iVar7 = *(int *)(iVar7 + iVar1 + 4);
      if (iVar7 != 0) {
        bVar9 = false;
        if (iVar13 == 2) {
          iVar10 = *(int *)(param_1 + 0x10);
          if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar10 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          bVar9 = *(int *)(iVar10 + iVar1 + 8) == 0;
        }
        Rotatelab_Scripts_BaseTargetableController__SetVisibleOnScreen_ff59b8(iVar7,bVar9,0);
        if (*(char *)(iVar7 + 0x20) != '\0') {
          iVar10 = *(int *)(param_1 + 0x5c);
          if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar12 = *(int *)(iVar10 + 8);
          uVar11 = *(uint *)(iVar10 + 0xc);
          piVar2 = *(int **)(_UNK_01119304 + 0x1119170);
          *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
          if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          param_1 = iVar3;
          if (uVar11 < *(uint *)(iVar12 + 0xc)) {
            *(uint *)(iVar10 + 0xc) = uVar11 + 1;
            piVar2 = (int *)(iVar12 + uVar11 * 4 + 0x10);
            *piVar2 = iVar7;
            thunk_FUN_00ec5080(piVar2,iVar7);
            iVar3 = param_1;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_267dae0
                      (iVar10,iVar7,
                       *(undefined4 *)(*(int *)(*(int *)(*piVar2 + 0x10) + 0x60) + 0x38));
            iVar3 = param_1;
          }
        }
      }
      iVar7 = *(int *)(param_1 + 0x10);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar13 == 2) {
        bVar9 = true;
        if (*(uint *)(iVar7 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
      }
      else {
        if (*(uint *)(iVar7 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        bVar9 = iVar13 == -1;
      }
      iVar5 = iVar5 + -4;
      *(bool *)(iVar7 + iVar1 + 0xc) = bVar9;
    } while (0 < (int)uVar6);
  }
  uVar8 = *(undefined4 *)(param_1 + 0x60);
  if (*(int *)(**(int **)(_UNK_01119308 + 0x1119230) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = UnityEngine_Object__op_Inequality_36018e4(uVar8,0,0);
  if (iVar5 == 0) {
    return;
  }
  iVar5 = Rotatelab_Grid_GridVisibilityController__IsOffGridTargetableVisible_1109d3c
                    (param_1,param_2);
  iVar3 = *(int *)(param_1 + 0x60);
  if (iVar5 == 0) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((*(char *)(iVar3 + 0x20) != '\0') &&
       (iVar5 = UnityEngine_Time__get_frameCount_35fd3d8(0,0,0), 3 < iVar5 - *(int *)(iVar3 + 0x1c))
       ) {
      *(undefined1 *)(iVar3 + 0x20) = 0;
    }
    return;
  }
  if (iVar3 != 0) {
    Rotatelab_Scripts_BaseTargetableController__SetVisibleOnScreen_ff59b8(iVar3,1,0);
    iVar5 = *(int *)(param_1 + 0x5c);
    uVar8 = *(undefined4 *)(param_1 + 0x60);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(iVar5 + 0xc);
    if (*(int *)(iVar5 + 8) != 0) {
      if (iVar3 == *(int *)(*(int *)(iVar5 + 8) + 0xc)) {
        System_Collections_Generic_List_object___EnsureCapacity_267e0f0
                  (iVar5,iVar3 + 1,
                   *(undefined4 *)
                    (*(int *)(*(int *)(**(int **)(_UNK_0111930c + 0x11192b4) + 0x10) + 0x60) + 0x3c)
                  );
        iVar3 = *(int *)(iVar5 + 0xc);
      }
      iVar7 = *(int *)(iVar5 + 8);
      if (0 < iVar3) {
        System_Array__Copy_2b96ff4
                  (iVar7,0,iVar7,1,iVar3,0,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8,unaff_r9,
                   unaff_r11,unaff_lr);
        iVar7 = *(int *)(iVar5 + 8);
      }
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar7 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(undefined4 *)(iVar7 + 0x10) = uVar8;
      thunk_FUN_00ec5080((undefined4 *)(iVar7 + 0x10),uVar8);
      *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + 1;
      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

