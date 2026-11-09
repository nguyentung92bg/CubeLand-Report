/* IL2CPP: Rotatelab.UI.FailPanelController$$RebuildCarouselItems
void Rotatelab_UI_FailPanelController__RebuildCarouselItems (Rotatelab_UI_FailPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController$$RebuildCarouselItems
   void Rotatelab_UI_FailPanelController__RebuildCarouselItems (Rotatelab_UI_FailPanelController_o*
   __this, const MethodInfo* method); */

void Rotatelab_UI_FailPanelController__RebuildCarouselItems_111a7e0(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar3 = (char *)(_UNK_0112aa2c + 0x112a7f8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112aa30 + 0x112a80c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112aa34 + 0x112a818));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112aa38 + 0x112a824));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112aa3c + 0x112a830));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112aa40 + 0x112a83c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112aa44 + 0x112a848));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0xb8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar4 + 0xc);
  *(undefined4 *)(iVar4 + 0xc) = 0;
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  if (0 < iVar2) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar4 + 8),0,iVar2,0);
  }
  if (*(int *)(param_1 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_48,*(int *)(param_1 + 0xb4),**(undefined4 **)(_UNK_0112aa48 + 0x112a8b8));
  uStack_38 = uStack_48;
  uStack_34 = puStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  uStack_48 = 0;
  puVar7 = *(undefined4 **)(_UNK_0112aa4c + 0x112a8e0);
  puStack_44 = &uStack_38;
  while( true ) {
    do {
      iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                        (&uStack_38,*puVar7);
      iVar4 = iStack_2c;
      if (iVar2 == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                  (&uStack_38,**(undefined4 **)(_UNK_0112aa54 + 0x112a9bc));
        return;
      }
      if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = UnityEngine_Component__get_gameObject_35fe360(iStack_2c,0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = UnityEngine_GameObject__get_activeSelf_360212c(iVar2,0);
    } while (iVar2 == 0);
    iVar2 = *(int *)(param_1 + 0xb8);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(iVar2 + 8);
    uVar5 = *(uint *)(iVar2 + 0xc);
    piVar1 = *(int **)(_UNK_0112aa50 + 0x112a960);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (iVar6 == 0) break;
    if (uVar5 < *(uint *)(iVar6 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar5 + 1;
      piVar1 = (int *)(iVar6 + uVar5 * 4 + 0x10);
      *piVar1 = iVar4;
      thunk_FUN_00ec5080(piVar1,iVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar2,iVar4,*(undefined4 *)(*(int *)(*(int *)(*piVar1 + 0x10) + 0x60) + 0x38));
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

