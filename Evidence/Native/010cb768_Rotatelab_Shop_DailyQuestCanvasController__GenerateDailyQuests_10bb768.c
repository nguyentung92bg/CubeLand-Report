/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$GenerateDailyQuests
void Rotatelab_Shop_DailyQuestCanvasController__GenerateDailyQuests (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$GenerateDailyQuests
   void Rotatelab_Shop_DailyQuestCanvasController__GenerateDailyQuests
   (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestCanvasController__GenerateDailyQuests_10bb768(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar3 = (char *)(_UNK_010cbbac + 0x10cb780);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbbb0 + 0x10cb794));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbbb4 + 0x10cb7a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbbb8 + 0x10cb7ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbbbc + 0x10cb7b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbbc0 + 0x10cb7c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbbc4 + 0x10cb7d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbbc8 + 0x10cb7dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbbcc + 0x10cb7e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbbd0 + 0x10cb7f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbbd4 + 0x10cb800));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbbd8 + 0x10cb80c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbbdc + 0x10cb818));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbbe0 + 0x10cb824));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cbbe4 + 0x10cb830));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar5 = *(int **)(_UNK_010cbbe8 + 0x10cb84c);
  iVar8 = *(int *)(param_1 + 0x58);
  uStack_38 = 0;
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar9 = puVar2[3];
  if (iVar9 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar5 + 0x5c);
    }
    uVar4 = *puVar2;
    iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010cbbec + 0x10cb89c));
    System_Action_object____ctor_1f11414(iVar9,uVar4,**(undefined4 **)(_UNK_010cbbf0 + 0x10cb8bc),0)
    ;
    piVar5 = (int *)(*(int *)(*piVar5 + 0x5c) + 0xc);
    *piVar5 = iVar9;
    thunk_FUN_00ec5080(piVar5,iVar9);
  }
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___ForEach_267e6f0
            (iVar8,iVar9,**(undefined4 **)(_UNK_010cbbf4 + 0x10cb8f4));
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar8) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar1 + 8),0,iVar8,0);
  }
  if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_48,*(int *)(param_1 + 0x70),**(undefined4 **)(_UNK_010cbbf8 + 0x10cb958));
  uStack_38 = uStack_48;
  uStack_34 = puStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  uStack_48 = 0;
  puStack_44 = &uStack_38;
  while( true ) {
    iVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                      (&uStack_38,**(undefined4 **)(_UNK_010cbc10 + 0x10cb984));
    iVar1 = iStack_2c;
    if (iVar8 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_38,**(undefined4 **)(_UNK_010cbc14 + 0x10cbb20));
      return;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x50);
    uVar6 = *(undefined4 *)(param_1 + 0x54);
    if (*(int *)(**(int **)(_UNK_010cbbfc + 0x10cb9a0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar8 = UnityEngine_Object__Instantiate_object__14d4dd0
                      (uVar6,uVar4,**(undefined4 **)(_UNK_010cbc00 + 0x10cb9c4));
    if (*(int *)(param_1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *(int *)(*(int *)(param_1 + 0x5c) + 0xc);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = System_Collections_Generic_List_object___get_Item_267d814
                      (iVar9,*(undefined4 *)(iVar1 + 8),**(undefined4 **)(_UNK_010cbc04 + 0x10cba10)
                      );
    if (*(int *)(param_1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *(int *)(*(int *)(param_1 + 0x5c) + 0x10);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = System_Collections_Generic_List_object___get_Item_267d814
                      (iVar9,*(undefined4 *)(iVar1 + 0xc),
                       **(undefined4 **)(_UNK_010cbc08 + 0x10cba50));
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Shop_DailyQuestMemberController__Init_10bc510
              (iVar8,uVar4,uVar6,*(undefined4 *)(iVar1 + 0x10),*(char *)(iVar1 + 0x14) != '\0');
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) break;
    iVar9 = *(int *)(iVar1 + 8);
    uVar7 = *(uint *)(iVar1 + 0xc);
    piVar5 = *(int **)(_UNK_010cbc0c + 0x10cbac4);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar7 < *(uint *)(iVar9 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar7 + 1;
      piVar5 = (int *)(iVar9 + uVar7 * 4 + 0x10);
      *piVar5 = iVar8;
      thunk_FUN_00ec5080(piVar5,iVar8);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar1,iVar8,*(undefined4 *)(*(int *)(*(int *)(*piVar5 + 0x10) + 0x60) + 0x38));
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

