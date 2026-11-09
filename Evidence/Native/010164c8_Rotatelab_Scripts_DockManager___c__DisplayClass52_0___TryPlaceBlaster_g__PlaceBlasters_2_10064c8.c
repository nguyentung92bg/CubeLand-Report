/* IL2CPP: Rotatelab.Scripts.DockManager.<>c__DisplayClass52_0$$<TryPlaceBlaster>g__PlaceBlasters|2
void Rotatelab_Scripts_DockManager___c__DisplayClass52_0___TryPlaceBlaster_g__PlaceBlasters_2 (Rotatelab_Scripts_DockManager___c__DisplayClass52_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager.<>c__DisplayClass52_0$$<TryPlaceBlaster>g__PlaceBlasters|2
   void Rotatelab_Scripts_DockManager___c__DisplayClass52_0___TryPlaceBlaster_g__PlaceBlasters_2
   (Rotatelab_Scripts_DockManager___c__DisplayClass52_0_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_DockManager___c__DisplayClass52_0___TryPlaceBlaster_g__PlaceBlasters_2_10064c8
               (int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  
  pcVar5 = (char *)(_UNK_010167b4 + 0x10164e0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010167b8 + 0x10164f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010167bc + 0x1016500));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010167c0 + 0x101650c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010167c4 + 0x1016518));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010167c8 + 0x1016524));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010167cc + 0x1016530));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010167d0 + 0x101653c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010167d4 + 0x1016548));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010167d8 + 0x1016554));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010167dc + 0x1016560));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_Scripts_DockManager__GetTargetDocksForBlaster_1005aa0
                    (*(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 0x120);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_48,iVar6,**(undefined4 **)(_UNK_010167e0 + 0x10165c8));
  uStack_38 = uStack_48;
  uStack_34 = puStack_44;
  uStack_30 = uStack_40;
  piStack_2c = piStack_3c;
  uStack_48 = 0;
  puVar11 = *(undefined4 **)(_UNK_010167e4 + 0x10165f4);
  piVar8 = *(int **)(_UNK_010167e8 + 0x10165fc);
  puVar10 = *(undefined4 **)(_UNK_010167ec + 0x1016604);
  puVar12 = *(undefined4 **)(_UNK_010167f0 + 0x101660c);
  puStack_44 = &uStack_38;
  while( true ) {
    iVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                      (&uStack_38,*puVar11);
    piVar1 = piStack_2c;
    if (iVar6 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_38,**(undefined4 **)(_UNK_01016800 + 0x1016738));
      return;
    }
    iVar6 = *piVar8;
    if (*(int *)(iVar6 + 0x74) == 0) {
      FUN_00ec3934();
      iVar6 = *piVar8;
    }
    puVar4 = *(undefined4 **)(iVar6 + 0x5c);
    iVar9 = puVar4[8];
    if (iVar9 == 0) {
      if (*(int *)(iVar6 + 0x74) == 0) {
        FUN_00ec3934();
        puVar4 = *(undefined4 **)(*piVar8 + 0x5c);
      }
      uVar7 = *puVar4;
      iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010167f4 + 0x1016670));
      System_Predicate_object____ctor_1876380
                (iVar9,uVar7,**(undefined4 **)(_UNK_010167f8 + 0x1016684),0);
      piVar3 = (int *)(*(int *)(*piVar8 + 0x5c) + 0x20);
      *piVar3 = iVar9;
      thunk_FUN_00ec5080(piVar3,iVar9);
    }
    if (*(int *)(**(int **)(_UNK_010167fc + 0x10166b8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar7 = Rotatelab_Extensions__Find_object__1486ad0(uVar2,iVar9,*puVar10);
    if (piVar1 == (int *)0x0) break;
    (**(code **)(*piVar1 + 0x130))(piVar1,uVar7,*(undefined4 *)(*piVar1 + 0x134));
    iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar12);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_PlaceableManager__RemovePlaceableFromQueue_10478e4(iVar6,piVar1,0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

