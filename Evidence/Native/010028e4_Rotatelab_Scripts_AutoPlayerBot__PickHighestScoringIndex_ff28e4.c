/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$PickHighestScoringIndex
int32_t Rotatelab_Scripts_AutoPlayerBot__PickHighestScoringIndex (Rotatelab_Scripts_AutoPlayerBot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$PickHighestScoringIndex
   int32_t Rotatelab_Scripts_AutoPlayerBot__PickHighestScoringIndex
   (Rotatelab_Scripts_AutoPlayerBot_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_AutoPlayerBot__PickHighestScoringIndex_ff28e4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int iVar5;
  undefined4 unaff_r5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 unaff_r11;
  uint uVar9;
  int iVar10;
  undefined4 unaff_lr;
  
  pcVar6 = (char *)(_UNK_01002b98 + 0x10028fc);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002b9c + 0x1002910));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002ba0 + 0x100291c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002ba4 + 0x1002928));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002ba8 + 0x1002934));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002bac + 0x1002940));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002bb0 + 0x100294c));
    *pcVar6 = '\x01';
  }
  Rotatelab_Scripts_AutoPlayerBot__CountOuterColors_ff2bec(param_1);
  iVar5 = *(int *)(param_1 + 0x38);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar5 + 0xc) = 0;
  iVar7 = -0x80000000;
  *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
  iVar5 = 0;
  puVar8 = *(undefined4 **)(_UNK_01002bb4 + 0x1002994);
  do {
    if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x30) + 0xc) <= iVar5) {
      iVar5 = *(int *)(param_1 + 0x38);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar9 = UnityEngine_Random__Range_35f8b14(0,*(undefined4 *)(iVar5 + 0xc),0);
      if (*(uint *)(iVar5 + 0xc) <= uVar9) {
        System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_2b955c8
                  (0,uVar9,**(undefined4 **)(_UNK_01002bc0 + 0x1002b84),extraout_r3,unaff_r4,
                   unaff_r5,unaff_r11,unaff_lr);
      }
      iVar5 = *(int *)(iVar5 + 8);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar5 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      return *(undefined4 *)(iVar5 + uVar9 * 4 + 0x10);
    }
    if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x30),iVar5,*puVar8);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_Scripts_AutoPlayerBot__ColorCount_ff2d3c
                      (param_1,*(undefined4 *)(iVar1 + 0x10c));
    iVar3 = Rotatelab_Scripts_BlasterController__get_IsDoubleColored_1030fb0(iVar1,0);
    if (iVar3 != 0) {
      iVar1 = Rotatelab_Scripts_AutoPlayerBot__ColorCount_ff2d3c
                        (param_1,*(undefined4 *)(iVar1 + 0x110));
      iVar2 = iVar1 + iVar2;
    }
    if (iVar7 < iVar2) {
      iVar1 = *(int *)(param_1 + 0x38);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *(int *)(iVar1 + 0x10);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = iVar7 + 1;
      iVar3 = *(int *)(iVar1 + 8);
      iVar10 = **(int **)(_UNK_01002bb8 + 0x1002ad8);
      *(int *)(iVar1 + 0x10) = iVar7 + 2;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = iVar2;
      if (*(int *)(iVar3 + 0xc) == 0) {
        System_Collections_Generic_List_int___AddWithResize_261b948
                  (iVar1,iVar5,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
      }
      else {
        *(undefined4 *)(iVar1 + 0xc) = 1;
LAB_01002b0c:
        *(int *)(iVar3 + 0x10) = iVar5;
      }
    }
    else if (iVar2 == iVar7) {
      iVar1 = *(int *)(param_1 + 0x38);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = *(int *)(iVar1 + 8);
      uVar9 = *(uint *)(iVar1 + 0xc);
      piVar4 = *(int **)(_UNK_01002bbc + 0x1002a70);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar9 < *(uint *)(iVar3 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar9 + 1;
        iVar3 = iVar3 + uVar9 * 4;
        goto LAB_01002b0c;
      }
      System_Collections_Generic_List_int___AddWithResize_261b948
                (iVar1,iVar5,*(undefined4 *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38));
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

