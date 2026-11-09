/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$OnLastVoxelDestroyedHandler
void Rotatelab_Scripts_PlaceableManager__OnLastVoxelDestroyedHandler (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$OnLastVoxelDestroyedHandler
   void Rotatelab_Scripts_PlaceableManager__OnLastVoxelDestroyedHandler
   (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__OnLastVoxelDestroyedHandler_104ad78(int param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar2 = (char *)(_UNK_0105af48 + 0x105ad90);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105af4c + 0x105ada4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105af50 + 0x105adb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105af54 + 0x105adbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105af58 + 0x105adc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105af5c + 0x105add4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105af60 + 0x105ade0));
    *pcVar2 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  if (*(int *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_28,*(int *)(param_1 + 0x90),**(undefined4 **)(_UNK_0105af64 + 0x105ae14));
  uVar6 = 0;
  puVar5 = *(undefined4 **)(_UNK_0105af68 + 0x105ae34);
  piVar3 = *(int **)(_UNK_0105af6c + 0x105ae3c);
  puVar7 = &uStack_28;
  while( true ) {
    do {
      iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                        (&uStack_28,*puVar5);
      iVar4 = iStack_1c;
      if (iVar1 == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                  (&uStack_28,**(undefined4 **)(_UNK_0105af70 + 0x105aea4));
        iVar4 = *(int *)(param_1 + 0x90);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = *(int *)(iVar4 + 0xc);
        *(undefined4 *)(iVar4 + 0xc) = 0;
        *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
        if (0 < iVar1) {
          System_Array__Clear_2b96cdc(*(undefined4 *)(iVar4 + 8),0,iVar1,0,uVar6,puVar7);
        }
        return;
      }
      if (*(int *)(*piVar3 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar1 = UnityEngine_Object__op_Equality_36033f4(iVar4,0,0);
    } while (iVar1 != 0);
    if (iVar4 == 0) break;
    Rotatelab_Scripts_BlasterController__Destroy_103784c(iVar4,0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

