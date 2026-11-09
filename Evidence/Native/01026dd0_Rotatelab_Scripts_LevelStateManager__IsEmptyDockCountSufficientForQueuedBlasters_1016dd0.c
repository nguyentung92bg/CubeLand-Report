/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$IsEmptyDockCountSufficientForQueuedBlasters
bool Rotatelab_Scripts_LevelStateManager__IsEmptyDockCountSufficientForQueuedBlasters (Rotatelab_Scripts_LevelStateManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01027170) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$IsEmptyDockCountSufficientForQueuedBlasters
   bool Rotatelab_Scripts_LevelStateManager__IsEmptyDockCountSufficientForQueuedBlasters
   (Rotatelab_Scripts_LevelStateManager_o* __this, const MethodInfo* method); */

uint Rotatelab_Scripts_LevelStateManager__IsEmptyDockCountSufficientForQueuedBlasters_1016dd0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uStack_68;
  undefined4 *puStack_64;
  undefined4 uStack_60;
  int *piStack_5c;
  int iStack_54;
  undefined4 *puStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_01027274 + 0x1026de4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027278 + 0x1026df8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102727c + 0x1026e04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027280 + 0x1026e10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027284 + 0x1026e1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027288 + 0x1026e28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102728c + 0x1026e34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027290 + 0x1026e40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027294 + 0x1026e4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027298 + 0x1026e58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102729c + 0x1026e64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010272a0 + 0x1026e70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010272a4 + 0x1026e7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010272a8 + 0x1026e88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010272ac + 0x1026e94));
    *pcVar6 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_3c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_2c = 0;
  uStack_30 = 0;
  iStack_34 = 0;
  uStack_48 = 0;
  iStack_4c = 0;
  if (*(int *)(**(int **)(_UNK_010272b0 + 0x1026eb4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Pool_CollectionPool_object__KeyValuePair_object__int____Get_1e8ab20
            (&uStack_68,&iStack_34,**(undefined4 **)(_UNK_010272b4 + 0x1026ee8));
  uStack_2c = puStack_64;
  puStack_50 = &uStack_30;
  uStack_30 = uStack_68;
  iStack_54 = 0;
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010272b8 + 0x1026f00));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_68,*(int *)(iVar2 + 0xb4),**(undefined4 **)(_UNK_010272bc + 0x1026f44));
  uStack_48 = uStack_68;
  uStack_44 = puStack_64;
  uStack_40 = uStack_60;
  piStack_3c = piStack_5c;
  uStack_68 = 0;
  piVar8 = *(int **)(_UNK_010272c0 + 0x1026f74);
  iVar2 = *(int *)(_UNK_010272c4 + 0x1026f7c);
  puStack_64 = &uStack_48;
  while (uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                           (&uStack_48,**(undefined4 **)(_UNK_010272dc + 0x1026f84)),
        piVar1 = piStack_3c, uVar3 != 0) {
    uVar7 = 0;
    iVar9 = 1;
    if (piStack_3c != (int *)0x0) {
      iVar4 = *piStack_3c;
      uVar5 = (uint)*(byte *)(*piVar8 + 0xb8);
      if ((*(byte *)(iVar4 + 0xb8) < uVar5) ||
         (*(int *)(*(int *)(iVar4 + 100) + uVar5 * 4 + -4) != *piVar8)) {
        uVar5 = (uint)*(byte *)(**(int **)(_UNK_010272c8 + 0x1026fec) + 0xb8);
        if ((uVar5 <= *(byte *)(iVar4 + 0xb8)) &&
           (*(int *)(*(int *)(iVar4 + 100) + uVar5 * 4 + -4) ==
            **(int **)(_UNK_010272c8 + 0x1026fec))) {
          uVar7 = **(undefined4 **)(_UNK_010272cc + 0x102701c);
          if (*(int *)(*(int *)(iVar2 + 0x70) + 0x74) == 0) {
            FUN_00ec3934();
          }
          uVar7 = System_Type__GetTypeFromHandle_2b80928(uVar7,0);
          iVar9 = Rotatelab_Scripts_BlasterGeneratorController__get_RemainingBlasterCount_103adac
                            (piVar1,0);
        }
      }
      else {
        uVar7 = System_Object__GetType_2bb9c9c(piStack_3c,0);
      }
    }
    if (*(int *)(*(int *)(iVar2 + 0x70) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar4 = System_Type__op_Equality_2b8b164(uVar7,0,0);
    if (iVar4 == 0) {
      iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_010272d0 + 0x1027098));
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar7 = Rotatelab_Scripts_DockManager__GetTargetDocksForBlaster_1006ce4(iVar4,uVar7);
      if (iStack_34 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = System_Collections_Generic_Dictionary_object__int___TryGetValue_205c8d8
                        (iStack_34,uVar7,&iStack_4c,**(undefined4 **)(_UNK_010272d4 + 0x10270d8));
      if (iVar4 == 0) {
        iStack_4c = Rotatelab_GameExtensions__EmptyDockCount_fb4c5c(uVar7,0);
      }
      iStack_4c = iStack_4c - iVar9;
      if (iStack_4c < 0) break;
      if (iStack_34 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_Dictionary_object__int___set_Item_205a918
                (iStack_34,uVar7,iStack_4c,**(undefined4 **)(_UNK_010272d8 + 0x1027134));
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_48,**(undefined4 **)(_UNK_010272e0 + 0x1027160));
  iVar2 = iStack_54;
  UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_1870034
            (puStack_50,**(undefined4 **)(_UNK_010272e4 + 0x102718c));
  if (iVar2 != 0) {
    FUN_00ec3a6c(iVar2);
  }
  return uVar3 ^ 1;
}

