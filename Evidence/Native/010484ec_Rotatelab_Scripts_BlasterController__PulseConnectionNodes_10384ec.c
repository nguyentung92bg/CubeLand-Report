/* IL2CPP: Rotatelab.Scripts.BlasterController$$PulseConnectionNodes
void Rotatelab_Scripts_BlasterController__PulseConnectionNodes (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$PulseConnectionNodes
   void Rotatelab_Scripts_BlasterController__PulseConnectionNodes
   (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__PulseConnectionNodes_10384ec(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  pcVar2 = (char *)(_UNK_0104863c + 0x1048504);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01048640 + 0x1048518));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01048644 + 0x1048524));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01048648 + 0x1048530));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104864c + 0x104853c));
    *pcVar2 = '\x01';
  }
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_14 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  iVar1 = Rotatelab_Scripts_BlasterController__get_IsConnected_1030fd0(param_1);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_20,*(int *)(param_1 + 0x118),**(undefined4 **)(_UNK_01048650 + 0x1048580));
    puVar3 = *(undefined4 **)(_UNK_01048654 + 0x10485a0);
    while (iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                             (&uStack_20,*puVar3), iVar1 != 0) {
      if (iStack_14 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Scripts_ConnectionController__PulseNode_103868c(iStack_14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (&uStack_20,**(undefined4 **)(_UNK_01048658 + 0x10485d8));
  }
  return;
}

