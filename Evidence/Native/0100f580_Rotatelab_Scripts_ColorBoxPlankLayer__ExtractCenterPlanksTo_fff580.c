/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer$$ExtractCenterPlanksTo
void Rotatelab_Scripts_ColorBoxPlankLayer__ExtractCenterPlanksTo (System_Collections_Generic_List_Transform__o* face, UnityEngine_Vector3_o faceCenter, System_Collections_Generic_List_Transform__o* reservedSink, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0268f4b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer$$ExtractCenterPlanksTo
   void Rotatelab_Scripts_ColorBoxPlankLayer__ExtractCenterPlanksTo
   (System_Collections_Generic_List_Transform__o* face, UnityEngine_Vector3_o faceCenter,
   System_Collections_Generic_List_Transform__o* reservedSink, const MethodInfo* method); */

void Rotatelab_Scripts_ColorBoxPlankLayer__ExtractCenterPlanksTo_fff580
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 unaff_lr;
  
  pcVar10 = (char *)(_UNK_0100f79c + 0x100f5a0);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100f7a0 + 0x100f5bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100f7a4 + 0x100f5c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100f7a8 + 0x100f5d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100f7ac + 0x100f5e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100f7b0 + 0x100f5ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100f7b4 + 0x100f5f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100f7b8 + 0x100f604));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100f7bc + 0x100f610));
    *pcVar10 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0100f7c0 + 0x100f624));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  *(undefined4 *)(iVar1 + 0x10) = param_4;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar9 = uVar2;
  if (1 < (int)uVar2) {
    uVar9 = 2;
  }
  if ((int)uVar2 < 3) {
    return;
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0100f7c4 + 0x100f678));
  uVar2 = 0;
  System_Comparison_object____ctor_1f2562c
            (uVar3,iVar1,**(undefined4 **)(_UNK_0100f7c8 + 0x100f698),0);
  System_Collections_Generic_List_object___Sort_267f704
            (param_1,uVar3,**(undefined4 **)(_UNK_0100f7cc + 0x100f6b0));
  do {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = System_Collections_Generic_List_object___get_Item_267d814
                      (param_1,uVar2,**(undefined4 **)(_UNK_0100f7d0 + 0x100f6d4));
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(param_5 + 8);
    uVar11 = *(uint *)(param_5 + 0xc);
    piVar8 = *(int **)(_UNK_0100f7d4 + 0x100f70c);
    *(int *)(param_5 + 0x10) = *(int *)(param_5 + 0x10) + 1;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar11 < *(uint *)(iVar1 + 0xc)) {
      *(uint *)(param_5 + 0xc) = uVar11 + 1;
      puVar4 = (undefined4 *)(iVar1 + uVar11 * 4 + 0x10);
      *puVar4 = uVar3;
      thunk_FUN_00ec5080(puVar4,uVar3);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (param_5,uVar3,*(undefined4 *)(*(int *)(*(int *)(*piVar8 + 0x10) + 0x60) + 0x38));
    }
    uVar2 = uVar2 + 1;
  } while (uVar9 != uVar2);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (0x7fffffff < uVar9) {
    System_ThrowHelper__ThrowArgumentOutOfRangeException_2b951cc(0x10,4,0);
  }
  if (*(int *)(param_1 + 0xc) < (int)uVar9) {
    System_ThrowHelper__ThrowArgumentException_2b94bf0(0x17,0);
  }
  if ((int)uVar9 < 1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc) - uVar9;
  *(int *)(param_1 + 0xc) = iVar1;
  if (0 < iVar1) {
    System_Array__Copy_2b96ff4
              (*(undefined4 *)(param_1 + 8),uVar9,*(undefined4 *)(param_1 + 8),0,iVar1,0);
    iVar1 = *(int *)(param_1 + 0xc);
  }
  puVar4 = *(undefined4 **)(param_1 + 8);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if (puVar4 == (undefined4 *)0x0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6df8 + 0x2ba6d44),iVar1,uVar9,0,unaff_r4,unaff_r5,
                       unaff_r6,unaff_lr);
    uVar7 = thunk_FUN_00f00cdc();
    uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6dfc + 0x2ba6d58));
    System_ArgumentNullException___ctor_2b08d00(uVar7,uVar3,0);
  }
  else {
    if ((int)uVar9 < 0) {
      thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6e00 + 0x2ba6d78),iVar1,uVar9,0,unaff_r4,unaff_r5,
                         unaff_r6,unaff_lr);
      uVar7 = thunk_FUN_00f00cdc();
      uVar3 = *(undefined4 *)(_UNK_02ba6e04 + 0x2ba6d8c);
    }
    else {
      iVar5 = FUN_00ed20b8(puVar4,0);
      if (iVar1 < iVar5) {
        thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6e0c + 0x2ba6d98));
        uVar7 = thunk_FUN_00f00cdc();
        uVar3 = *(undefined4 *)(_UNK_02ba6e10 + 0x2ba6dac);
      }
      else {
        iVar6 = System_Array__get_Length_2b8bcdc(puVar4);
        if (iVar1 - iVar5 <= (int)(iVar6 - uVar9)) {
          iVar6 = FUN_00f943a0(*puVar4);
          FUN_00f88e5c((int)puVar4 + iVar6 * (iVar1 - iVar5) + 0x10,iVar6 * uVar9);
          return;
        }
        thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6e14 + 0x2ba6db8));
        uVar7 = thunk_FUN_00f00cdc();
        uVar3 = *(undefined4 *)(_UNK_02ba6e18 + 0x2ba6dcc);
      }
    }
    uVar3 = thunk_FUN_00f23fd0(uVar3);
    System_IndexOutOfRangeException___ctor_2b69538(uVar7,uVar3,0);
  }
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6e08 + 0x2ba6de8));
  func_0x00ec3920(uVar7,uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_00ec3760();
}

