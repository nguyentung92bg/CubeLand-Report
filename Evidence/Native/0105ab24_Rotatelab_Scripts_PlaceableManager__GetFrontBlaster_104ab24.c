/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$GetFrontBlaster
Rotatelab_Scripts_BlasterController_o* Rotatelab_Scripts_PlaceableManager__GetFrontBlaster (Rotatelab_Scripts_PlaceableManager_o* __this, int32_t column, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0105acec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$GetFrontBlaster
   Rotatelab_Scripts_BlasterController_o* Rotatelab_Scripts_PlaceableManager__GetFrontBlaster
   (Rotatelab_Scripts_PlaceableManager_o* __this, int32_t column, const MethodInfo* method); */

int * Rotatelab_Scripts_PlaceableManager__GetFrontBlaster_104ab24(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  
  pcVar6 = (char *)(_UNK_0105ad48 + 0x105ab40);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105ad4c + 0x105ab54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105ad50 + 0x105ab60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105ad54 + 0x105ab6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105ad58 + 0x105ab78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105ad5c + 0x105ab84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105ad60 + 0x105ab90));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_48,*(int *)(param_1 + 0xb4),**(undefined4 **)(_UNK_0105ad64 + 0x105abc8));
    uStack_38 = uStack_48;
    uStack_34 = puStack_44;
    uStack_30 = uStack_40;
    piStack_2c = piStack_3c;
    uStack_48 = 0;
    puVar7 = *(undefined4 **)(_UNK_0105ad68 + 0x105abf0);
    piVar9 = *(int **)(_UNK_0105ad6c + 0x105abf8);
    piVar10 = *(int **)(_UNK_0105ad70 + 0x105ac00);
    piVar2 = (int *)0x0;
    puStack_44 = &uStack_38;
    while( true ) {
      piVar8 = piVar2;
      iVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                        (&uStack_38,*puVar7);
      piVar1 = piStack_2c;
      if (iVar3 == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                  (puStack_44,**(undefined4 **)(_UNK_0105ad74 + 0x105acdc));
        return piVar8;
      }
      if (piStack_2c == (int *)0x0) break;
      iVar3 = Rotatelab_Scripts_BasePlaceableController__get_Column_1030400(piStack_2c,0);
      piVar2 = piVar8;
      if ((iVar3 == param_2) && (piVar1 != (int *)0x0)) {
        uVar5 = (uint)*(byte *)(*piVar9 + 0xb8);
        if ((uVar5 <= *(byte *)(*piVar1 + 0xb8)) &&
           (*(int *)(*(int *)(*piVar1 + 100) + uVar5 * 4 + -4) == *piVar9)) {
          if (*(int *)(*piVar10 + 0x74) == 0) {
            FUN_00ec3934();
          }
          iVar3 = UnityEngine_Object__op_Equality_36033f4(piVar8,0,0);
          piVar2 = piVar1;
          if (iVar3 == 0) {
            iVar3 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(piVar1,0);
            if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar4 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(piVar8,0);
            piVar2 = piVar8;
            if (iVar3 < iVar4) {
              piVar2 = piVar1;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

