/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$OnWinSequenceStarted
void Rotatelab_Scripts_PlaceableManager__OnWinSequenceStarted (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$OnWinSequenceStarted
   void Rotatelab_Scripts_PlaceableManager__OnWinSequenceStarted
   (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__OnWinSequenceStarted_1048d78(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  int aiStack_2c [3];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01058f74 + 0x1058d90);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058f78 + 0x1058da4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058f7c + 0x1058db0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058f80 + 0x1058dbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058f84 + 0x1058dc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058f88 + 0x1058dd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058f8c + 0x1058de0));
    *pcVar3 = '\x01';
  }
  aiStack_2c[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  aiStack_2c[0] = 0;
  aiStack_2c[1] = 0;
  if (*(int *)(param_1 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (aiStack_2c + 1,*(int *)(param_1 + 0xb4),**(undefined4 **)(_UNK_01058f90 + 0x1058e1c));
  puVar4 = *(undefined4 **)(_UNK_01058f94 + 0x1058e38);
  while( true ) {
    do {
      iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                        (aiStack_2c + 1,*puVar4);
      if (iVar1 == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                  (aiStack_2c + 1,**(undefined4 **)(_UNK_01058f98 + 0x1058eac));
        piVar5 = *(int **)(_UNK_01058fa0 + 0x1058ec0);
        iVar1 = *piVar5;
        if (*(int *)(iVar1 + 0x74) == 0) {
          FUN_00ec3934();
          iVar1 = *piVar5;
        }
        iVar1 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                          (**(undefined4 **)(iVar1 + 0x5c),
                           **(undefined4 **)(_UNK_01058fa4 + 0x1058ee4));
        if (iVar1 != 0) {
          uVar2 = Rotatelab_Scripts_PlaceableManager__OnWinSequenceStartedCoroutine_1048fa8(param_1)
          ;
          UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar2,0);
        }
        return;
      }
      iVar1 = Rotatelab_Scripts_PlaceableManager__TryGetBlasterFromPlaceable_1046d14
                        (uStack_1c,aiStack_2c);
    } while (iVar1 == 0);
    if (aiStack_2c[0] == 0) break;
    iVar1 = Rotatelab_Scripts_BlasterController__get_IsTrapOpen_1030e88(aiStack_2c[0],0);
    if (iVar1 == 0) {
      if (aiStack_2c[0] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Scripts_BlasterController__OpenTrapPermanently_1034264(aiStack_2c[0],0);
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

