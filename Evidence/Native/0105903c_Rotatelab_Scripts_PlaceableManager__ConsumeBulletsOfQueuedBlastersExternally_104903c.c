/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$ConsumeBulletsOfQueuedBlastersExternally
void Rotatelab_Scripts_PlaceableManager__ConsumeBulletsOfQueuedBlastersExternally (Rotatelab_Scripts_PlaceableManager_o* __this, int32_t colorType, int32_t bulletCount, bool startFromRearRows, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01059398) */
/* WARNING: Removing unreachable block (ram,0x01059388) */
/* WARNING: Removing unreachable block (ram,0x01059534) */
/* WARNING: Removing unreachable block (ram,0x01059540) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$ConsumeBulletsOfQueuedBlastersExternally
   void Rotatelab_Scripts_PlaceableManager__ConsumeBulletsOfQueuedBlastersExternally
   (Rotatelab_Scripts_PlaceableManager_o* __this, int32_t colorType, int32_t bulletCount, bool
   startFromRearRows, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__ConsumeBulletsOfQueuedBlastersExternally_104903c
               (int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 *puStack_6c;
  undefined4 uStack_68;
  int *piStack_64;
  int iStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar7 = (char *)(_UNK_010597e4 + 0x1059060);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010597e8 + 0x1059074));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010597ec + 0x1059080));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010597f0 + 0x105908c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010597f4 + 0x1059098));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010597f8 + 0x10590a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010597fc + 0x10590b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01059800 + 0x10590bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01059804 + 0x10590c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01059808 + 0x10590d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105980c + 0x10590e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01059810 + 0x10590ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01059814 + 0x10590f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01059818 + 0x1059104));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105981c + 0x1059110));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01059820 + 0x105911c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01059824 + 0x1059128));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01059828 + 0x1059134));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105982c + 0x1059140));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01059830 + 0x105914c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01059834 + 0x1059158));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01059838 + 0x1059164));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105983c + 0x1059170));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01059840 + 0x105917c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01059844 + 0x1059188));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01059848 + 0x1059194));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105984c + 0x10591a0));
    *pcVar7 = '\x01';
  }
  puStack_54 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_4c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_58 = 0;
  iStack_2c = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_44 = puStack_54;
  uStack_40 = uStack_50;
  piStack_3c = piStack_4c;
  uStack_30 = param_2;
  if (*(int *)(**(int **)(_UNK_01059850 + 0x10591c4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Pool_ListPool_object___Get_257b7b0
            (&uStack_70,(uint)&uStack_30 | 4,**(undefined4 **)(_UNK_01059854 + 0x1059208));
  uStack_38 = uStack_70;
  puStack_5c = &uStack_38;
  uStack_34 = puStack_6c;
  iStack_60 = 0;
  if (*(int *)(param_1 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_70,*(int *)(param_1 + 0xb4),**(undefined4 **)(_UNK_01059858 + 0x1059248));
  uStack_48 = uStack_70;
  uStack_44 = puStack_6c;
  uStack_40 = uStack_68;
  piStack_3c = piStack_64;
  uStack_70 = 0;
  puVar11 = *(undefined4 **)(_UNK_0105985c + 0x105927c);
  piVar12 = *(int **)(_UNK_01059860 + 0x1059284);
  puVar10 = *(undefined4 **)(_UNK_01059864 + 0x105928c);
  puStack_6c = &uStack_48;
  while (iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                           (&uStack_48,*puVar11), piVar1 = piStack_3c, iVar2 != 0) {
    if (piStack_3c != (int *)0x0) {
      iVar2 = *piStack_3c;
      uVar6 = (uint)*(byte *)(*piVar12 + 0xb8);
      if ((*(byte *)(iVar2 + 0xb8) < uVar6) ||
         (*(int *)(*(int *)(iVar2 + 100) + uVar6 * 4 + -4) != *piVar12)) {
        uVar6 = (uint)*(byte *)(**(int **)(_UNK_01059868 + 0x10592e0) + 0xb8);
        if ((uVar6 <= *(byte *)(iVar2 + 0xb8)) &&
           (*(int *)(*(int *)(iVar2 + 100) + uVar6 * 4 + -4) ==
            **(int **)(_UNK_01059868 + 0x10592e0))) {
          if (piStack_3c[0x17] == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar2 = *(int *)(piStack_3c[0x17] + 0xc);
          while (iVar2 = iVar2 + -1, -1 < iVar2) {
            if (piVar1[0x17] == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            uVar3 = System_Collections_Generic_List_object___get_Item_267d814
                              (piVar1[0x17],iVar2,*puVar10);
            Rotatelab_Scripts_PlaceableManager___ConsumeBulletsOfQueuedBlastersExternally_g__TryAddBlasterToQueue_84_1_10498b0
                      (uVar3,&uStack_30);
          }
        }
      }
      else {
        Rotatelab_Scripts_PlaceableManager___ConsumeBulletsOfQueuedBlastersExternally_g__TryAddBlasterToQueue_84_1_10498b0
                  (piStack_3c,&uStack_30);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_48,**(undefined4 **)(_UNK_0105986c + 0x1059374));
  iVar2 = iStack_2c;
  piVar12 = *(int **)(_UNK_01059870 + 0x10593ac);
  iVar4 = *piVar12;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar12;
  }
  puVar11 = *(undefined4 **)(iVar4 + 0x5c);
  iVar8 = puVar11[0x17];
  if (iVar8 == 0) {
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      puVar11 = *(undefined4 **)(*piVar12 + 0x5c);
    }
    uVar3 = *puVar11;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01059874 + 0x10593fc));
    System_Comparison_object____ctor_1f2562c
              (iVar8,uVar3,**(undefined4 **)(_UNK_01059878 + 0x1059410),0);
    piVar12 = (int *)(*(int *)(*piVar12 + 0x5c) + 0x5c);
    *piVar12 = iVar8;
    thunk_FUN_00ec5080(piVar12,iVar8);
  }
  if (iVar2 != 0) {
    System_Collections_Generic_List_object___Sort_267f704
              (iVar2,iVar8,**(undefined4 **)(_UNK_0105987c + 0x105944c));
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01059880 + 0x1059464));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_70,*(int *)(iVar2 + 0x50),**(undefined4 **)(_UNK_01059884 + 0x1059494));
    uStack_58 = uStack_70;
    puStack_54 = puStack_6c;
    uStack_50 = uStack_68;
    piStack_4c = piStack_64;
    uStack_70 = 0;
    puVar9 = *(undefined4 **)(_UNK_01059888 + 0x10594c8);
    puVar11 = *(undefined4 **)(_UNK_0105988c + 0x10594d0);
    puStack_6c = &uStack_58;
    while (iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                             (&uStack_58,*puVar9), iVar2 != 0) {
      if (piStack_4c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                        (piStack_4c,*puVar11);
      if (iVar2 != 0) {
        Rotatelab_Scripts_PlaceableManager___ConsumeBulletsOfQueuedBlastersExternally_g__TryAddBlasterToQueue_84_1_10498b0
                  (iVar2,&uStack_30);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (&uStack_58,**(undefined4 **)(_UNK_01059890 + 0x1059524));
    if (param_4 == 0) {
      if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_object___Reverse_267f560
                (iStack_2c,**(undefined4 **)(_UNK_01059894 + 0x1059570));
    }
    iVar2 = 0;
    while( true ) {
      if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((param_3 < 1) || (*(int *)(iStack_2c + 0xc) <= iVar2)) {
        if (0 < param_3) {
          uStack_70 = uStack_30;
          uVar3 = FUN_00ec393c(**(undefined4 **)(_UNK_01059898 + 0x105960c),&uStack_70);
          iStack_74 = param_3;
          uVar5 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_0105989c + 0x1059628) + 0x24),
                               &iStack_74);
          uVar3 = System_String__Format_2a0c2b4
                            (**(undefined4 **)(_UNK_010598a4 + 0x1059650),
                             **(undefined4 **)(_UNK_010598a0 + 0x1059644),uVar3,uVar5,0);
          if (*(int *)(**(int **)(_UNK_010598a8 + 0x1059670) + 0x74) == 0) {
            FUN_00ec3934();
          }
          UnityEngine_Debug__LogWarning_35b0090(uVar3,0);
        }
        Rotatelab_Pool_PooledObject_object___Dispose_186ffc8
                  (puStack_5c,**(undefined4 **)(_UNK_010598ac + 0x1059698));
        if (iStack_60 != 0) {
          FUN_00ec3a6c();
        }
        return;
      }
      if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = System_Collections_Generic_List_object___get_Item_267d814(iStack_2c,iVar2,*puVar10);
      if (iVar4 == 0) break;
      iVar4 = Rotatelab_Scripts_BlasterController__ConsumeBulletsExternally_10372fc
                        (iVar4,uStack_30,param_3,0);
      param_3 = param_3 - iVar4;
      iVar2 = iVar2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

