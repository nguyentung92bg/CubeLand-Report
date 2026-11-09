/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<OnWinSequenceStartedCoroutine>d__83$$MoveNext
bool Rotatelab_Scripts_PlaceableManager__OnWinSequenceStartedCoroutine_d__83__MoveNext (Rotatelab_Scripts_PlaceableManager__OnWinSequenceStartedCoroutine_d__83_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<OnWinSequenceStartedCoroutine>d__83$$MoveNext
   bool Rotatelab_Scripts_PlaceableManager__OnWinSequenceStartedCoroutine_d__83__MoveNext
   (Rotatelab_Scripts_PlaceableManager__OnWinSequenceStartedCoroutine_d__83_o* __this, const
   MethodInfo* method); */

undefined4
Rotatelab_Scripts_PlaceableManager__OnWinSequenceStartedCoroutine_d__83__MoveNext_104be04
          (int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_0105c324 + 0x105be1c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105c328 + 0x105be30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105c32c + 0x105be3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105c330 + 0x105be48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105c334 + 0x105be54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105c338 + 0x105be60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105c33c + 0x105be6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105c340 + 0x105be78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105c344 + 0x105be84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105c348 + 0x105be90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105c34c + 0x105be9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105c350 + 0x105bea8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105c354 + 0x105beb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105c358 + 0x105bec0));
    *pcVar3 = '\x01';
  }
  puStack_2c = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar4 = *(int *)(param_1 + 0x10);
  uVar7 = 0;
  uStack_30 = 0;
  iStack_34 = 0;
  uStack_38 = 0;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar4 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_48,*(int *)(iVar4 + 0xb4),**(undefined4 **)(&UNK_0105bf44 + _UNK_0105c35c));
    uStack_30 = uStack_48;
    puStack_2c = puStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_48 = 0;
    puVar2 = *(undefined4 **)(&UNK_0105bf70 + _UNK_0105c360);
    puStack_44 = &uStack_30;
    while (iVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                             (&uStack_30,*puVar2), iVar5 != 0) {
      iVar5 = Rotatelab_Scripts_PlaceableManager__TryGetBlasterFromPlaceable_1046d14
                        (uStack_24,&iStack_34);
      if (iVar5 != 0) {
        if (iStack_34 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(char *)(iStack_34 + 0xc4) != '\0') {
          if (iStack_34 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          Rotatelab_Scripts_BlasterController__BreakChains_1033c88(iStack_34,1,0);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (&uStack_30,**(undefined4 **)(&UNK_0105c010 + _UNK_0105c364));
    break;
  case 1:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    break;
  case 2:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    goto code_r0x0105c0fc;
  case 3:
    iVar5 = -1;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    goto code_r0x0105c26c;
  default:
    goto LAB_0105c318;
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar8 = *(int **)(&UNK_0105c030 + _UNK_0105c36c);
  iVar1 = *(int *)(iVar4 + 0xb4);
  iVar5 = *piVar8;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar8;
  }
  puVar2 = *(undefined4 **)(iVar5 + 0x5c);
  iVar6 = puVar2[0x15];
  if (iVar6 == 0) {
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar7 = *puVar2;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(&UNK_0105c07c + _UNK_0105c370));
    System_Predicate_object____ctor_1876380
              (iVar6,uVar7,**(undefined4 **)(&UNK_0105c09c + _UNK_0105c374),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0x54);
    *piVar8 = iVar6;
    thunk_FUN_00ec5080(piVar8,iVar6);
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = System_Collections_Generic_List_object___Exists_267e190
                    (iVar1,iVar6,**(undefined4 **)(&UNK_0105c0d4 + _UNK_0105c378));
  if (iVar5 == 0) {
code_r0x0105c0fc:
    piVar8 = *(int **)(&UNK_0105c108 + _UNK_0105c37c);
    iVar1 = *(int *)(iVar4 + 0xb4);
    iVar5 = *piVar8;
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      iVar5 = *piVar8;
    }
    puVar2 = *(undefined4 **)(iVar5 + 0x5c);
    iVar6 = puVar2[0x16];
    if (iVar6 == 0) {
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        puVar2 = *(undefined4 **)(*piVar8 + 0x5c);
      }
      uVar7 = *puVar2;
      iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(&UNK_0105c154 + _UNK_0105c380));
      System_Predicate_object____ctor_1876380
                (iVar6,uVar7,**(undefined4 **)(&UNK_0105c174 + _UNK_0105c384),0);
      piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0x58);
      *piVar8 = iVar6;
      thunk_FUN_00ec5080(piVar8,iVar6);
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_List_object___Exists_267e190
                      (iVar1,iVar6,**(undefined4 **)(&UNK_0105c1ac + _UNK_0105c388));
    iVar5 = 0;
    if (iVar1 == 0) {
      while( true ) {
        if (*(int *)(iVar4 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(*(int *)(iVar4 + 0xb4) + 0xc) <= iVar5) {
          return 0;
        }
        if (*(int *)(iVar4 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar7 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(iVar4 + 0xb4),iVar5,
                           **(undefined4 **)(&UNK_0105c254 + _UNK_0105c38c));
        iVar1 = Rotatelab_Scripts_PlaceableManager__TryGetBlasterFromPlaceable_1046d14
                          (uVar7,&uStack_38);
        if (iVar1 != 0) break;
code_r0x0105c26c:
        iVar5 = iVar5 + 1;
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
      }
      iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(&UNK_0105c2a8 + _UNK_0105c390));
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Scripts_DockManager__TryPlaceBlaster_1005ad4(iVar4,uStack_38,0);
      if (*(int *)(**(int **)(&UNK_0105c2dc + _UNK_0105c394) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar7 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3e4ccccd,0);
      *(undefined4 *)(param_1 + 0xc) = uVar7;
      thunk_FUN_00ec5080();
      uVar7 = 3;
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 0;
      thunk_FUN_00ec5080();
      uVar7 = 2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
    thunk_FUN_00ec5080();
    uVar7 = 1;
  }
  *(undefined4 *)(param_1 + 8) = uVar7;
  uVar7 = 1;
LAB_0105c318:
  return uVar7;
}

