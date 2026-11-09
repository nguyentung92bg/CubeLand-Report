/* IL2CPP: Rotatelab.Shop.StarChallengeChestViewer$$BuildCells
void Rotatelab_Shop_StarChallengeChestViewer__BuildCells (Rotatelab_Shop_StarChallengeChestViewer_o* __this, Rotatelab_Shop_StarChallengeSO_RewardSlot_o* slot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeChestViewer$$BuildCells
   void Rotatelab_Shop_StarChallengeChestViewer__BuildCells
   (Rotatelab_Shop_StarChallengeChestViewer_o* __this, Rotatelab_Shop_StarChallengeSO_RewardSlot_o*
   slot, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeChestViewer__BuildCells_10c6834(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  undefined4 uStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar5 = (char *)(_UNK_010d6c10 + 0x10d6850);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6c14 + 0x10d6864));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6c18 + 0x10d6870));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6c1c + 0x10d687c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6c20 + 0x10d6888));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6c24 + 0x10d6894));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6c28 + 0x10d68a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6c2c + 0x10d68ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6c30 + 0x10d68b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6c34 + 0x10d68c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6c38 + 0x10d68d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6c3c + 0x10d68dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d6c40 + 0x10d68e8));
    *pcVar5 = '\x01';
  }
  puStack_44 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_3c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_34 = puStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_58,*(int *)(param_1 + 0x24),**(undefined4 **)(_UNK_010d6c44 + 0x10d6928));
  uStack_38 = uStack_58;
  uStack_34 = puStack_54;
  uStack_30 = uStack_50;
  iStack_2c = iStack_4c;
  uStack_58 = 0;
  puVar7 = *(undefined4 **)(_UNK_010d6c48 + 0x10d6950);
  puStack_54 = &uStack_38;
  while (iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                           (&uStack_38,*puVar7), iVar1 != 0) {
    if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_Component__get_gameObject_35fe360(iStack_2c,0);
    if (*(int *)(**(int **)(_UNK_010d6c4c + 0x10d698c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Object__Destroy_3609820(uVar2,0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_38,**(undefined4 **)(_UNK_010d6c50 + 0x10d69b8));
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar4) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_58,*(int *)(param_2 + 0x18),**(undefined4 **)(_UNK_010d6c58 + 0x10d6a24));
  uStack_48 = uStack_58;
  puStack_44 = puStack_54;
  uStack_40 = uStack_50;
  iStack_3c = iStack_4c;
  uStack_58 = 0;
  puVar7 = *(undefined4 **)(_UNK_010d6c5c + 0x10d6a50);
  piVar10 = *(int **)(_UNK_010d6c60 + 0x10d6a58);
  puStack_54 = &uStack_48;
  while( true ) {
    iVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720(&uStack_48,*puVar7)
    ;
    iVar1 = iStack_3c;
    if (iVar4 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_48,**(undefined4 **)(_UNK_010d6c6c + 0x10d6b4c));
      return;
    }
    uVar8 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    if (*(int *)(**(int **)(_UNK_010d6c64 + 0x10d6a74) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar4 = UnityEngine_Object__Instantiate_object__14d4dd0
                      (uVar2,uVar8,**(undefined4 **)(_UNK_010d6c68 + 0x10d6a9c));
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Shop_StarChallengeSingleReward__InitializeReward_10cc058(iVar4,iVar1,0);
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar11 = *(uint *)(iVar1 + 0xc);
    iVar9 = *piVar10;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar6 == 0) break;
    if (uVar11 < *(uint *)(iVar6 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar11 + 1;
      piVar3 = (int *)(iVar6 + uVar11 * 4 + 0x10);
      *piVar3 = iVar4;
      thunk_FUN_00ec5080(piVar3,iVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar1,iVar4,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

