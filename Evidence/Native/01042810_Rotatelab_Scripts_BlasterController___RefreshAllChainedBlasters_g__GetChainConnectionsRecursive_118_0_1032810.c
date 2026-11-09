/* IL2CPP: Rotatelab.Scripts.BlasterController$$<RefreshAllChainedBlasters>g__GetChainConnectionsRecursive|118_0
void Rotatelab_Scripts_BlasterController___RefreshAllChainedBlasters_g__GetChainConnectionsRecursive_118_0 (Rotatelab_Scripts_BlasterController_o* __this, Rotatelab_Scripts_BlasterController_o* current, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Scripts.BlasterController$$<RefreshAllChainedBlasters>g__GetChainConnectionsRecursive|118_0
   void 
   Rotatelab_Scripts_BlasterController___RefreshAllChainedBlasters_g__GetChainConnectionsRecursive_118_0
   (Rotatelab_Scripts_BlasterController_o* __this, Rotatelab_Scripts_BlasterController_o* current,
   const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController___RefreshAllChainedBlasters_g__GetChainConnectionsRecursive_118_0_1032810
               (int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
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
  uVar4 = *(undefined4 *)(param_1 + 0x124);
  uStack_28 = 0;
  if (*(int *)(**(int **)(_UNK_010429dc + 0x1042898) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__AddUnique_object__1484964
                    (uVar4,param_2,**(undefined4 **)(_UNK_010429e0 + 0x10428c0));
  if (iVar1 != 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_2 + 0x11c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_28,*(int *)(param_2 + 0x11c),**(undefined4 **)(_UNK_010429e4 + 0x10428fc));
    puVar3 = *(undefined4 **)(_UNK_010429e8 + 0x104291c);
    while (iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                             (&uStack_28,*puVar3), iVar1 != 0) {
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

