/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$FindPlaceableByData
Rotatelab_Scripts_BasePlaceableController_o* Rotatelab_Scripts_PlaceableManager__FindPlaceableByData (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_BlasterData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$FindPlaceableByData
   Rotatelab_Scripts_BasePlaceableController_o*
   Rotatelab_Scripts_PlaceableManager__FindPlaceableByData (Rotatelab_Scripts_PlaceableManager_o*
   __this, Rotatelab_BlasterData_o* data, const MethodInfo* method); */

int Rotatelab_Scripts_PlaceableManager__FindPlaceableByData_104306c(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar2 = (char *)(_UNK_010531c0 + 0x1053088);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010531c4 + 0x105309c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010531c8 + 0x10530a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010531cc + 0x10530b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010531d0 + 0x10530c0));
    *pcVar2 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  if (*(int *)(param_1 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_28,*(int *)(param_1 + 0xb4),**(undefined4 **)(_UNK_010531d4 + 0x10530f4));
  puVar3 = *(undefined4 **)(_UNK_010531d8 + 0x1053114);
  do {
    iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720(&uStack_28,*puVar3)
    ;
    if (iVar1 == 0) {
      iVar1 = 0;
      break;
    }
    if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = iStack_1c;
  } while (*(int *)(iStack_1c + 0x18) != param_2);
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_28,**(undefined4 **)(_UNK_010531dc + 0x1053154));
  return iVar1;
}

