/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$ShufflePlaceables
void Rotatelab_Scripts_PlaceableManager__ShufflePlaceables (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$ShufflePlaceables
   void Rotatelab_Scripts_PlaceableManager__ShufflePlaceables (Rotatelab_Scripts_PlaceableManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__ShufflePlaceables_104a328(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined4 *puStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int *piStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int *piStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int *piStack_6c;
  
  pcVar9 = (char *)(_UNK_0105aa78 + 0x105a348);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105aa7c + 0x105a35c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105aa80 + 0x105a368));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105aa84 + 0x105a374));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105aa88 + 0x105a380));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105aa8c + 0x105a38c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105aa90 + 0x105a398));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105aa94 + 0x105a3a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105aa98 + 0x105a3b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105aa9c + 0x105a3bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105aaa0 + 0x105a3c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105aaa4 + 0x105a3d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105aaa8 + 0x105a3e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105aaac + 0x105a3ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105aab0 + 0x105a3f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105aab4 + 0x105a404));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105aab8 + 0x105a410));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105aabc + 0x105a41c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105aac0 + 0x105a428));
    *pcVar9 = '\x01';
  }
  uStack_84 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_80 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_7c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_78 = 0;
  uStack_88 = 0;
  uStack_74 = uStack_84;
  uStack_70 = uStack_80;
  piStack_6c = piStack_7c;
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0105aac4 + 0x105a444));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar3,0x11,0);
  piVar10 = *(int **)(_UNK_0105aac8 + 0x105a480);
  iVar13 = *(int *)(param_1 + 0xb4);
  iVar3 = *piVar10;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar10;
  }
  puVar6 = *(undefined4 **)(iVar3 + 0x5c);
  iVar11 = puVar6[0x19];
  if (iVar11 == 0) {
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      puVar6 = *(undefined4 **)(**(int **)(_UNK_0105aacc + 0x105a4c4) + 0x5c);
    }
    uVar14 = *puVar6;
    iVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105aad0 + 0x105a4d4));
    System_Predicate_object____ctor_1876380
              (iVar11,uVar14,**(undefined4 **)(_UNK_0105aad4 + 0x105a4f4),0);
    piVar10 = (int *)(*(int *)(**(int **)(_UNK_0105aad8 + 0x105a50c) + 0x5c) + 100);
    *piVar10 = iVar11;
    thunk_FUN_00ec5080(piVar10,iVar11);
  }
  if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar14 = System_Collections_Generic_List_object___FindAll_267e288
                     (iVar13,iVar11,**(undefined4 **)(_UNK_0105aadc + 0x105a534));
  if (*(int *)(**(int **)(_UNK_0105aae0 + 0x105a54c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = Rotatelab_Extensions__Shuffle_object__1488a20
                    (uVar14,**(undefined4 **)(_UNK_0105aae4 + 0x105a568));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0xc) != 0) {
    puVar6 = *(undefined4 **)(_UNK_0105aae8 + 0x105a5a0);
    iVar13 = System_Collections_Generic_List_object___get_Item_267d814(iVar3,0,*puVar6);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar14 = *(undefined4 *)(iVar13 + 0x1c);
    uVar15 = *(undefined4 *)(iVar13 + 0x20);
    iVar13 = *(int *)(iVar3 + 0xc) + -1;
    if (0 < iVar13) {
      iVar11 = 0;
      do {
        iVar13 = System_Collections_Generic_List_object___get_Item_267d814(iVar3,iVar11,*puVar6);
        iVar11 = iVar11 + 1;
        iVar4 = System_Collections_Generic_List_object___get_Item_267d814(iVar3,iVar11,*puVar6);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar12 = *(undefined4 *)(iVar4 + 0x20);
        if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        *(undefined4 *)(iVar13 + 0x1c) = *(undefined4 *)(iVar4 + 0x1c);
        *(undefined4 *)(iVar13 + 0x20) = uVar12;
        iVar13 = *(int *)(iVar3 + 0xc) + -1;
      } while (iVar11 < iVar13);
    }
    iVar13 = System_Collections_Generic_List_object___get_Item_267d814(iVar3,iVar13,*puVar6);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar13 + 0x1c) = uVar14;
    *(undefined4 *)(iVar13 + 0x20) = uVar15;
    PrimeTween_Sequence__Create_2cef1e0(&uStack_98,1,0,1,0,0,0);
    uStack_78 = uStack_98;
    uStack_74 = uStack_94;
    uStack_70 = uStack_90;
    piStack_6c = piStack_8c;
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_a8,iVar3,**(undefined4 **)(_UNK_0105aaec + 0x105a6a0));
    fVar1 = _UNK_0105aa74;
    uStack_88 = uStack_a8;
    uStack_84 = puStack_a4;
    uStack_80 = uStack_a0;
    piStack_7c = (int *)iStack_9c;
    uStack_a8 = 0;
    puStack_a4 = &uStack_88;
    while (iVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                              (&uStack_88,**(undefined4 **)(_UNK_0105aaf4 + 0x105a6dc)),
          piVar10 = piStack_7c, iVar13 != 0) {
      if (piStack_7c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar14 = UnityEngine_Component__get_transform_35fe190(piStack_7c,0);
      if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar15 = *(undefined4 *)((int)piVar10 + 0x1c);
      uVar12 = *(undefined4 *)((int)piVar10 + 0x20);
      fVar19 = *(float *)(param_1 + 0x48);
      fVar21 = *(float *)(param_1 + 0x4c);
      fVar18 = *(float *)(param_1 + 0x54);
      fVar22 = *(float *)(param_1 + 0x58);
      fVar20 = *(float *)(param_1 + 0x5c);
      if (*(int *)(**(int **)(_UNK_0105aaf0 + 0x105a740) + 0x74) == 0) {
        FUN_00ec3934();
      }
      fVar17 = (float)VectorSignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
      fVar16 = (float)VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x16) & 3);
      PrimeTween_Tween__LocalPosition_2ce550c
                (&uStack_98,uVar14,fVar18 + fVar19 * fVar17,fVar22 + fVar1,fVar20 + fVar21 * fVar16,
                 0x3f000000,0,0,0,0,0,1,0,0,0,0,0);
      PrimeTween_Sequence__Group_2cef730
                (&uStack_98,&uStack_78,uStack_98,uStack_94,uStack_90,piStack_8c,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (&uStack_88,**(undefined4 **)(_UNK_0105aaf8 + 0x105a7d8));
    piVar10 = *(int **)(_UNK_0105ab00 + 0x105a7f0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_98,iVar3,**(undefined4 **)(_UNK_0105ab04 + 0x105a804));
    puStack_a4 = &uStack_88;
    uStack_88 = uStack_98;
    uStack_84 = uStack_94;
    uStack_80 = uStack_90;
    piStack_7c = piStack_8c;
    uStack_a8 = 0;
    puVar6 = *(undefined4 **)(_UNK_0105ab08 + 0x105a838);
    iStack_ac = 0;
    while (iVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                             (&uStack_88,**(undefined4 **)(_UNK_0105ab18 + 0x105a844)),
          piVar2 = piStack_7c, iVar3 != 0) {
      iVar3 = *piVar10;
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        iVar3 = *piVar10;
      }
      puVar7 = *(undefined4 **)(iVar3 + 0x5c);
      iVar13 = puVar7[0x1a];
      if (iVar13 == 0) {
        if (*(int *)(iVar3 + 0x74) == 0) {
          FUN_00ec3934();
          puVar7 = *(undefined4 **)(*piVar10 + 0x5c);
        }
        uVar14 = *puVar7;
        iVar13 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105ab0c + 0x105a8a8));
        System_Action_object____ctor_1f11414
                  (iVar13,uVar14,**(undefined4 **)(_UNK_0105ab10 + 0x105a8bc),0);
        piVar5 = (int *)(*(int *)(*piVar10 + 0x5c) + 0x68);
        *piVar5 = iVar13;
        thunk_FUN_00ec5080(piVar5,iVar13);
      }
      PrimeTween_Sequence__ChainCallback_object__15b4c64
                (&uStack_98,&uStack_78,piVar2,iVar13,0,*puVar6);
      if (piVar2 != (int *)0x0) {
        uVar8 = (uint)*(byte *)(**(int **)(_UNK_0105ab14 + 0x105a914) + 0xb8);
        if (((uVar8 <= *(byte *)(*piVar2 + 0xb8)) &&
            (*(int *)(*(int *)(*piVar2 + 100) + uVar8 * 4 + -4) ==
             **(int **)(_UNK_0105ab14 + 0x105a914))) &&
           (iVar3 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(piVar2,0), iVar3 == 0
           )) {
          iStack_ac = iStack_ac + (uint)*(byte *)((int)piVar2 + 0xc2);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (&uStack_88,**(undefined4 **)(_UNK_0105ab1c + 0x105a970));
    if (0 < iStack_ac) {
      PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_98,&uStack_78,0x3f000000,0);
    }
  }
  return;
}

