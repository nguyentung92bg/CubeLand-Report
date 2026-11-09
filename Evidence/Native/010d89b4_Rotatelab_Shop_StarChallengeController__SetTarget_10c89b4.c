/* IL2CPP: Rotatelab.Shop.StarChallengeController$$SetTarget
void Rotatelab_Shop_StarChallengeController__SetTarget (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$SetTarget
   void Rotatelab_Shop_StarChallengeController__SetTarget (Rotatelab_Shop_StarChallengeController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeController__SetTarget_10c89b4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar9;
  int *piVar10;
  undefined4 unaff_r7;
  uint uVar11;
  undefined4 unaff_r8;
  int *piVar12;
  
  pcVar7 = (char *)(_UNK_010d8e00 + 0x10d89c8);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8e04 + 0x10d89dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8e08 + 0x10d89e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8e0c + 0x10d89f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8e10 + 0x10d8a00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8e14 + 0x10d8a0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8e18 + 0x10d8a18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8e1c + 0x10d8a24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8e20 + 0x10d8a30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8e24 + 0x10d8a3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8e28 + 0x10d8a48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8e2c + 0x10d8a54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8e30 + 0x10d8a60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8e34 + 0x10d8a6c));
    *pcVar7 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d8e38 + 0x10d8a80));
  System_Object___ctor_2bb93bc(iVar1,0);
  iVar2 = Rotatelab_Shop_StarChallengePopup__get_CurrentStarChallengeIndex_10c5e90();
  iVar3 = Rotatelab_Shop_StarChallengeController__get_JewelSo_10c6e5c(param_1);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 0xc);
  pcVar7 = (char *)(_UNK_010d8e3c + 0x10d8ad0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8e40 + 0x10d8ae8));
    *pcVar7 = '\x01';
  }
  piVar12 = *(int **)(_UNK_010d8e44 + 0x10d8b08);
  *(bool *)*(undefined4 *)(*piVar12 + 0x5c) = iVar3 + -1 < iVar2;
  iVar2 = Rotatelab_Shop_StarChallengeController__get_JewelSo_10c6e5c(param_1);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar9 = *(int *)(iVar2 + 0xc);
  iVar2 = Rotatelab_Shop_StarChallengePopup__get_CurrentStarChallengeIndex_10c5e90();
  iVar3 = Rotatelab_Shop_StarChallengeController__get_JewelSo_10c6e5c(param_1);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 0xc) + -1;
  if (iVar2 < iVar3) {
    iVar3 = iVar2;
  }
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                    (iVar9,iVar3,**(undefined4 **)(_UNK_010d8e48 + 0x10d8b88));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar10 = (int *)(iVar1 + 0x14);
  *piVar10 = iVar2;
  thunk_FUN_00ec5080(piVar10,iVar2);
  pcVar7 = (char *)(_UNK_010d8e4c + 0x10d8bc0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8e50 + 0x10d8bd4));
    *pcVar7 = '\x01';
  }
  if (**(char **)(*piVar12 + 0x5c) == '\0') {
    uVar4 = Rotatelab_Shop_StarChallengeController__get_CollectedStarAmount_10c70a4();
  }
  else {
    if (*piVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = *(undefined4 *)(*piVar10 + 8);
  }
  *(undefined4 *)(iVar1 + 0x10) = uVar4;
  if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(iVar1 + 0x14) + 0xc);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = iVar2;
  if ((*(int *)(iVar2 + 8) != 1) && (iVar3 = *(int *)(iVar2 + 0xc), *(int *)(iVar2 + 0xc) == 0)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar3 + 0x10);
  thunk_FUN_00ec5080();
  if (*(int *)(iVar2 + 8) == 1) {
    puVar5 = *(undefined4 **)(*(int *)(*(int *)(_UNK_010d8e54 + 0x10d8c80) + 0x48) + 0x5c);
  }
  else {
    if (*(int *)(iVar2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar5 = (undefined4 *)(*(int *)(iVar2 + 0xc) + 0x20);
  }
  *(undefined4 *)(iVar1 + 0xc) = *puVar5;
  thunk_FUN_00ec5080();
  iVar2 = *(int *)(param_1 + 0x20);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d8e58 + 0x10d8cbc));
  System_Action_object____ctor_1f11414(uVar4,iVar1,**(undefined4 **)(_UNK_010d8e5c + 0x10d8cd8),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___ForEach_267e6f0
            (iVar2,uVar4,**(undefined4 **)(_UNK_010d8e60 + 0x10d8cfc));
  iVar2 = *(int *)(param_1 + 0x18);
  puVar5 = *(undefined4 **)(_UNK_010d8e64 + 0x10d8d14);
  uVar4 = thunk_FUN_00f00cdc(*puVar5);
  System_Action_object____ctor_1f11414(uVar4,iVar1,**(undefined4 **)(_UNK_010d8e68 + 0x10d8d30),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar8 = *(undefined4 **)(_UNK_010d8e6c + 0x10d8d58);
  System_Collections_Generic_List_object___ForEach_267e6f0(iVar2,uVar4,*puVar8);
  iVar2 = *(int *)(param_1 + 0x14);
  uVar4 = thunk_FUN_00f00cdc(*puVar5);
  System_Action_object____ctor_1f11414(uVar4,iVar1,**(undefined4 **)(_UNK_010d8e70 + 0x10d8d80),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___ForEach_267e6f0(iVar2,uVar4,*puVar8);
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d8e74 + 0x10d8db4));
  System_Action_object____ctor_1f11414(iVar2,iVar1,**(undefined4 **)(_UNK_010d8e78 + 0x10d8dd0),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException_2b8422c
              (0x21,0,**(undefined4 **)(_UNK_010d8e7c + 0x10d8df4));
  }
  if (0 < *(int *)(iVar3 + 0xc)) {
    iVar1 = *(int *)(iVar3 + 0x10);
    uVar11 = 0;
    do {
      iVar9 = *(int *)(iVar3 + 0x10);
      if (iVar1 != iVar9) goto LAB_0268e78c;
      iVar9 = *(int *)(iVar3 + 8);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar9 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(iVar2 + 0xc))
                (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar9 + uVar11 * 4 + 0x10),
                 *(undefined4 *)(iVar2 + 0x14),*(code **)(iVar2 + 0xc),unaff_r4,unaff_r5,unaff_r6,
                 unaff_r7,unaff_r8);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < *(int *)(iVar3 + 0xc));
    iVar9 = *(int *)(iVar3 + 0x10);
LAB_0268e78c:
    if (iVar1 != iVar9) {
      thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba53d4 + 0x2ba5394));
      uVar4 = thunk_FUN_00f00cdc();
      uVar6 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba53d8 + 0x2ba53a8));
      System_InvalidOperationException___ctor_2b6e948(uVar4,uVar6,0);
      uVar6 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba53dc + 0x2ba53c4));
      func_0x00ec3920(uVar4,uVar6);
                    /* WARNING: Subroutine does not return */
      FUN_00ec3760();
    }
  }
  return;
}

