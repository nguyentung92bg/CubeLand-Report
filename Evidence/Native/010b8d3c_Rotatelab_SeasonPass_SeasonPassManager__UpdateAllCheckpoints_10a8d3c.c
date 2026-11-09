/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$UpdateAllCheckpoints
void Rotatelab_SeasonPass_SeasonPassManager__UpdateAllCheckpoints (Rotatelab_SeasonPass_SeasonPassManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$UpdateAllCheckpoints
   void Rotatelab_SeasonPass_SeasonPassManager__UpdateAllCheckpoints
   (Rotatelab_SeasonPass_SeasonPassManager_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassManager__UpdateAllCheckpoints_10a8d3c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar2 = (char *)(_UNK_010b8edc + 0x10b8d54);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b8ee0 + 0x10b8d68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b8ee4 + 0x10b8d74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b8ee8 + 0x10b8d80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b8eec + 0x10b8d8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b8ef0 + 0x10b8d98));
    *pcVar2 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piStack_34 = (int *)0x0;
  uStack_30 = 0;
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_30,*(int *)(param_1 + 0x3c),**(undefined4 **)(_UNK_010b8ef4 + 0x10b8dd4));
  puVar4 = *(undefined4 **)(_UNK_010b8ef8 + 0x10b8df0);
  puVar3 = *(undefined4 **)(_UNK_010b8efc + 0x10b8df8);
  while( true ) {
    iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720(&uStack_30,*puVar4)
    ;
    if (iVar1 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_30,**(undefined4 **)(_UNK_010b8f00 + 0x10b8e70));
      return;
    }
    if (iStack_24 == 0) break;
    iVar1 = UnityEngine_Component__TryGetComponent_object__14402fc(iStack_24,&piStack_34,*puVar3);
    if (iVar1 != 0) {
      if (piStack_34 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(*piStack_34 + 0xe8))
                (piStack_34,piStack_34[0xd],piStack_34[0xe],*(undefined4 *)(*piStack_34 + 0xec));
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

