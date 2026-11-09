/* IL2CPP: Rotatelab.Scripts.BlasterController$$RefreshAllChainedBlasters
void Rotatelab_Scripts_BlasterController__RefreshAllChainedBlasters (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$RefreshAllChainedBlasters
   void Rotatelab_Scripts_BlasterController__RefreshAllChainedBlasters
   (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__RefreshAllChainedBlasters_1032790(int param_1)

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
  
  pcVar2 = (char *)(_UNK_01042808 + 0x10427a4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104280c + 0x10427b8));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x124);
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
  pcVar2 = (char *)(_UNK_010429c0 + 0x104282c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010429c4 + 0x1042840));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010429c8 + 0x104284c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010429cc + 0x1042858));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010429d0 + 0x1042864));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010429d4 + 0x1042870));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010429d8 + 0x104287c));
    *pcVar2 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x124);
  uStack_28 = 0;
  if (*(int *)(**(int **)(_UNK_010429dc + 0x1042898) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = Rotatelab_Extensions__AddUnique_object__1484964
                    (uVar5,param_1,**(undefined4 **)(_UNK_010429e0 + 0x10428c0));
  if (iVar3 != 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_1 + 0x11c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_28,*(int *)(param_1 + 0x11c),**(undefined4 **)(_UNK_010429e4 + 0x10428fc));
    puVar4 = *(undefined4 **)(_UNK_010429e8 + 0x104291c);
    while (iVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                             (&uStack_28,*puVar4), iVar3 != 0) {
      if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Scripts_BlasterController___RefreshAllChainedBlasters_g__GetChainConnectionsRecursive_118_0_1032810
                (param_1,*(undefined4 *)(iStack_1c + 0x38));
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (&uStack_28,**(undefined4 **)(_UNK_010429ec + 0x1042958));
  }
  return;
}

