/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$IsColumnEligibleForRainbowBlaster
bool Rotatelab_Scripts_PlaceableManager__IsColumnEligibleForRainbowBlaster (Rotatelab_Scripts_PlaceableManager_o* __this, int32_t column, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$IsColumnEligibleForRainbowBlaster
   bool Rotatelab_Scripts_PlaceableManager__IsColumnEligibleForRainbowBlaster
   (Rotatelab_Scripts_PlaceableManager_o* __this, int32_t column, const MethodInfo* method); */

bool Rotatelab_Scripts_PlaceableManager__IsColumnEligibleForRainbowBlaster_1043dc8
               (int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int *piStack_1c;
  
  pcVar4 = (char *)(_UNK_01053f9c + 0x1053de4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053fa0 + 0x1053df8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053fa4 + 0x1053e04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053fa8 + 0x1053e10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053fac + 0x1053e1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01053fb0 + 0x1053e28));
    *pcVar4 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_1c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  if (*(int *)(param_1 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_28,*(int *)(param_1 + 0xb4),**(undefined4 **)(_UNK_01053fb4 + 0x1053e5c));
  bVar6 = true;
  puVar5 = *(undefined4 **)(_UNK_01053fb8 + 0x1053e80);
  do {
    do {
      iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                        (&uStack_28,*puVar5);
      piVar1 = piStack_1c;
      if (iVar2 == 0) goto LAB_01053f18;
      if (piStack_1c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = Rotatelab_Scripts_BasePlaceableController__get_Column_1030400(piStack_1c,0);
    } while (iVar2 != param_2);
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(piVar1,0);
    bVar6 = false;
  } while (iVar2 != 0);
  if (piVar1 != (int *)0x0) {
    uVar3 = (uint)*(byte *)(**(int **)(_UNK_01053fbc + 0x1053eec) + 0xb8);
    if (uVar3 <= *(byte *)(*piVar1 + 0xb8)) {
      bVar6 = *(int *)(*(int *)(*piVar1 + 100) + uVar3 * 4 + -4) ==
              **(int **)(_UNK_01053fbc + 0x1053eec);
    }
  }
LAB_01053f18:
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_28,**(undefined4 **)(_UNK_01053fc0 + 0x1053f24));
  return bVar6;
}

