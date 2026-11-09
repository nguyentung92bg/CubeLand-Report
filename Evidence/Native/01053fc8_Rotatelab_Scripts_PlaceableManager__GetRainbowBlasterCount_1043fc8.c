/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$GetRainbowBlasterCount
int32_t Rotatelab_Scripts_PlaceableManager__GetRainbowBlasterCount (Rotatelab_Scripts_PlaceableManager_o* __this, int32_t column, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$GetRainbowBlasterCount
   int32_t Rotatelab_Scripts_PlaceableManager__GetRainbowBlasterCount
   (Rotatelab_Scripts_PlaceableManager_o* __this, int32_t column, const MethodInfo* method); */

int Rotatelab_Scripts_PlaceableManager__GetRainbowBlasterCount_1043fc8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar5 = (char *)(_UNK_01054174 + 0x1053fe4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01054178 + 0x1053ff8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105417c + 0x1054004));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01054180 + 0x1054010));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01054184 + 0x105401c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01054188 + 0x1054028));
    *pcVar5 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_24 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_30,*(int *)(param_1 + 0xb4),**(undefined4 **)(_UNK_0105418c + 0x105405c));
    iVar6 = 0;
    puVar4 = *(undefined4 **)(_UNK_01054190 + 0x105407c);
    piVar7 = *(int **)(_UNK_01054194 + 0x1054084);
    while( true ) {
      iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                        (&uStack_30,*puVar4);
      piVar1 = piStack_24;
      if (iVar2 == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                  (&uStack_30,**(undefined4 **)(_UNK_01054198 + 0x1054108));
        return iVar6;
      }
      if (piStack_24 == (int *)0x0) break;
      iVar2 = Rotatelab_Scripts_BasePlaceableController__get_Column_1030400(piStack_24,0);
      if ((iVar2 == param_2) && (piVar1 != (int *)0x0)) {
        uVar3 = (uint)*(byte *)(*piVar7 + 0xb8);
        if ((uVar3 <= *(byte *)(*piVar1 + 0xb8)) &&
           ((*(int *)(*(int *)(*piVar1 + 100) + uVar3 * 4 + -4) == *piVar7 && (piVar1[0x43] == 0x16)
            ))) {
          iVar6 = iVar6 + 1;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

