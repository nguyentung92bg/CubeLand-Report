/* IL2CPP: Rotatelab.Scripts.BlasterController$$RefreshAllConnectedBlasters
void Rotatelab_Scripts_BlasterController__RefreshAllConnectedBlasters (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$RefreshAllConnectedBlasters
   void Rotatelab_Scripts_BlasterController__RefreshAllConnectedBlasters
   (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__RefreshAllConnectedBlasters_103252c(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar2 = (char *)(_UNK_010425a4 + 0x1042540);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010425a8 + 0x1042554));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x120);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar3 + 0xc);
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (0 < iVar1) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar3 + 8),0,iVar1,0);
  }
  pcVar2 = (char *)(_UNK_0104275c + 0x10425c8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042760 + 0x10425dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042764 + 0x10425e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042768 + 0x10425f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104276c + 0x1042600));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042770 + 0x104260c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01042774 + 0x1042618));
    *pcVar2 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x120);
  uStack_28 = 0;
  if (*(int *)(**(int **)(_UNK_01042778 + 0x1042634) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = Rotatelab_Extensions__AddUnique_object__1484964
                    (uVar5,param_1,**(undefined4 **)(_UNK_0104277c + 0x104265c));
  if (iVar3 != 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_1 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_28,*(int *)(param_1 + 0x118),**(undefined4 **)(_UNK_01042780 + 0x1042698));
    puVar4 = *(undefined4 **)(_UNK_01042784 + 0x10426b8);
    while (iVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                             (&uStack_28,*puVar4), iVar3 != 0) {
      if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Scripts_BlasterController___RefreshAllConnectedBlasters_g__GetConnectionsRecursive_117_0_10325ac
                (param_1,*(undefined4 *)(iStack_1c + 0x24));
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (&uStack_28,**(undefined4 **)(_UNK_01042788 + 0x10426f4));
  }
  return;
}

