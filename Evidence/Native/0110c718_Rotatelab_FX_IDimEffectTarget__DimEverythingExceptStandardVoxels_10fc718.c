/* IL2CPP: Rotatelab.FX.IDimEffectTarget$$DimEverythingExceptStandardVoxels
void Rotatelab_FX_IDimEffectTarget__DimEverythingExceptStandardVoxels (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.IDimEffectTarget$$DimEverythingExceptStandardVoxels
   void Rotatelab_FX_IDimEffectTarget__DimEverythingExceptStandardVoxels (const MethodInfo* method);
    */

void Rotatelab_FX_IDimEffectTarget__DimEverythingExceptStandardVoxels_10fc718(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 auStack_28 [5];
  
  pcVar5 = (char *)(_UNK_0110c7f8 + 0x110c728);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110c7fc + 0x110c73c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110c800 + 0x110c748));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110c804 + 0x110c754));
    *pcVar5 = '\x01';
  }
  piVar8 = *(int **)(_UNK_0110c808 + 0x110c768);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar3[1];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar7 = *puVar3;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0110c80c + 0x110c7b0));
    System_Predicate_object____ctor_1876380
              (iVar6,uVar7,**(undefined4 **)(_UNK_0110c810 + 0x110c7d0),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
    *piVar8 = iVar6;
    thunk_FUN_00ec5080(piVar8,iVar6);
  }
  pcVar5 = (char *)(_UNK_0110cb6c + 0x110c82c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110cb70 + 0x110c840));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110cb74 + 0x110c84c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110cb78 + 0x110c858));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110cb7c + 0x110c864));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110cb80 + 0x110c870));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110cb84 + 0x110c87c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110cb88 + 0x110c888));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110cb8c + 0x110c894));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110cb90 + 0x110c8a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110cb94 + 0x110c8ac));
    *pcVar5 = '\x01';
  }
  auStack_28[0] = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  iStack_2c = iVar6;
  thunk_FUN_00ec5080((uint)&uStack_30 | 4,iVar6);
  if (*(int *)(**(int **)(_UNK_0110cb98 + 0x110c8ec) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Pool_HashSetPool_object___Get_240ea4c
            (&uStack_40,&uStack_30,**(undefined4 **)(_UNK_0110cb9c + 0x110c910));
  uStack_34 = puStack_3c;
  puStack_3c = &uStack_38;
  uStack_38 = uStack_40;
  uStack_40 = 0;
  uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0110cba0 + 0x110c92c));
  System_Collections_Generic_HashSet_object____ctor_241f6dc
            (uVar7,0x100,**(undefined4 **)(_UNK_0110cba4 + 0x110c954));
  auStack_28[0] = uVar7;
  thunk_FUN_00ec5080(auStack_28,uVar7);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0110cba8 + 0x110c97c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 0x1c);
  uVar9 = 0;
  piVar8 = (int *)(iVar1 + 0x10);
  piVar10 = *(int **)(_UNK_0110cbac + 0x110c9ac);
  do {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar9) {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0110cbb0 + 0x110ca60));
      uVar7 = auStack_28[0];
      if (*(int *)(**(int **)(_UNK_0110cbb4 + 0x110ca74) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar7 = Rotatelab_Extensions__ToArray_object__14896b8
                        (uVar7,**(undefined4 **)(_UNK_0110cbb8 + 0x110ca94));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_FX_RenderersOverlayEffect__Activate_10fcdac(iVar1,uVar7,0,0,0,0x3f6ccccd,0x3e19999a)
      ;
      Rotatelab_Pool_PooledObject_object___Dispose_186ffc8
                (&uStack_38,**(undefined4 **)(_UNK_0110cbbc + 0x110cae8));
      return;
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    Rotatelab_FX_IDimEffectTarget___DimWithFilter_g__AddRenderersOf_5_0_10fcbc4
              (piVar8[1],&uStack_30);
    if (*(uint *)(iVar1 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2 = (int *)*piVar8;
    if (piVar2 == (int *)0x0) {
LAB_0110ca2c:
      if (*(uint *)(iVar1 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      Rotatelab_FX_IDimEffectTarget___DimWithFilter_g__AddRenderersOf_5_0_10fcbc4(piVar2,&uStack_30)
      ;
    }
    else {
      uVar4 = (uint)*(byte *)(*piVar10 + 0xb8);
      if (((*(byte *)(*piVar2 + 0xb8) < uVar4) ||
          (*(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) != *piVar10)) || (piVar2[5] == 0x15))
      goto LAB_0110ca2c;
    }
    piVar8 = piVar8 + 3;
    uVar9 = uVar9 + 1;
  } while( true );
}

