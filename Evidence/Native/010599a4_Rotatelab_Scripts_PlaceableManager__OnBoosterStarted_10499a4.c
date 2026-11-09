/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$OnBoosterStarted
void Rotatelab_Scripts_PlaceableManager__OnBoosterStarted (Rotatelab_Scripts_PlaceableManager_o* __this, int32_t boosterType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$OnBoosterStarted
   void Rotatelab_Scripts_PlaceableManager__OnBoosterStarted (Rotatelab_Scripts_PlaceableManager_o*
   __this, int32_t boosterType, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__OnBoosterStarted_10499a4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar4 = (char *)(_UNK_01059d54 + 0x10599c0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01059d58 + 0x10599d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01059d5c + 0x10599e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01059d60 + 0x10599ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01059d64 + 0x10599f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01059d68 + 0x1059a04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01059d6c + 0x1059a10));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_24 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  if (param_2 - 1U < 2) {
    uVar7 = *(undefined4 *)(param_1 + 0x14);
    if (*(int *)(**(int **)(_UNK_01059d70 + 0x1059a3c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__LocalPosition_2ce550c
              (&uStack_40,uVar7,0,0x3f933333,0x3de147ae,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
    if (*(int *)(param_1 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_40,*(int *)(param_1 + 0xb4),**(undefined4 **)(_UNK_01059d74 + 0x1059ad0));
    uStack_30 = uStack_40;
    uStack_2c = puStack_3c;
    uStack_28 = uStack_38;
    piStack_24 = piStack_34;
    uStack_40 = 0;
    puVar5 = *(undefined4 **)(_UNK_01059d78 + 0x1059af4);
    piVar6 = *(int **)(_UNK_01059d7c + 0x1059afc);
    puStack_3c = &uStack_30;
    while (iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                             (&uStack_30,*puVar5), piVar1 = piStack_24, iVar2 != 0) {
      if (piStack_24 != (int *)0x0) {
        uVar3 = (uint)*(byte *)(*piVar6 + 0xb8);
        if (((uVar3 <= *(byte *)(*piStack_24 + 0xb8)) &&
            (*(int *)(*(int *)(*piStack_24 + 100) + uVar3 * 4 + -4) == *piVar6)) &&
           (iVar2 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(piStack_24,0),
           iVar2 < 5)) {
          if (param_2 == 2) {
            (**(code **)(*piVar1 + 0x150))(piVar1,4,*(undefined4 *)(*piVar1 + 0x154));
            Rotatelab_Scripts_BlasterController__SetEndlessShakeAnimationEnabled_1034fbc(piVar1,1,0)
            ;
            iVar2 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(piVar1,0);
            if (0 < iVar2) {
              Rotatelab_Scripts_BlasterController__SetSkinnedMeshDetails_1034b3c(piVar1,0,0);
            }
          }
          else if (param_2 == 1) {
            uVar3 = Rotatelab_Scripts_BlasterController__get_IsIced_1030e20(piVar1,0);
            bVar8 = uVar3 == 0;
            if (bVar8) {
              uVar3 = (uint)*(byte *)(piVar1 + 0x31);
            }
            if (bVar8 && uVar3 == 0) {
              (**(code **)(*piVar1 + 0x150))(piVar1,4,*(undefined4 *)(*piVar1 + 0x154));
              Rotatelab_Scripts_BlasterController__SetEndlessScaleAnimationEnabled_1034e24
                        (piVar1,1,0);
              iVar2 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(piVar1,0);
              if (0 < iVar2) {
                Rotatelab_Scripts_BlasterController__SetSkinnedMeshDetails_1034b3c(piVar1,0,0);
              }
            }
            else {
              (**(code **)(*piVar1 + 0x150))(piVar1,2,*(undefined4 *)(*piVar1 + 0x154));
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (&uStack_30,**(undefined4 **)(_UNK_01059d80 + 0x1059c4c));
  }
  else if (param_2 == 4) {
    uVar7 = *(undefined4 *)(param_1 + 0x14);
    if (*(int *)(**(int **)(_UNK_01059d88 + 0x1059cd4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__LocalPosition_2ce550c
              (&uStack_40,uVar7,0,0xc1f00000,0,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
  }
  return;
}

