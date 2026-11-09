/* IL2CPP: Rotatelab.FX.IDimEffectTarget$$DimWithFilter
void Rotatelab_FX_IDimEffectTarget__DimWithFilter (System_Predicate_Component__o* filter, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.IDimEffectTarget$$DimWithFilter
   void Rotatelab_FX_IDimEffectTarget__DimWithFilter (System_Predicate_Component__o* filter, const
   MethodInfo* method); */

void Rotatelab_FX_IDimEffectTarget__DimWithFilter_10fc814(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [2];
  
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
  uStack_2c = param_1;
  thunk_FUN_00ec5080((uint)&uStack_30 | 4,param_1);
  if (*(int *)(**(int **)(_UNK_0110cb98 + 0x110c8ec) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Pool_HashSetPool_object___Get_240ea4c
            (&uStack_40,&uStack_30,**(undefined4 **)(_UNK_0110cb9c + 0x110c910));
  uStack_34 = puStack_3c;
  puStack_3c = &uStack_38;
  uStack_38 = uStack_40;
  uStack_40 = 0;
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0110cba0 + 0x110c92c));
  System_Collections_Generic_HashSet_object____ctor_241f6dc
            (uVar1,0x100,**(undefined4 **)(_UNK_0110cba4 + 0x110c954));
  auStack_28[0] = uVar1;
  thunk_FUN_00ec5080(auStack_28,uVar1);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0110cba8 + 0x110c97c));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar2 + 0x1c);
  uVar7 = 0;
  piVar6 = (int *)(iVar2 + 0x10);
  piVar8 = *(int **)(_UNK_0110cbac + 0x110c9ac);
  do {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar2 + 0xc) <= (int)uVar7) {
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0110cbb0 + 0x110ca60));
      uVar1 = auStack_28[0];
      if (*(int *)(**(int **)(_UNK_0110cbb4 + 0x110ca74) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar1 = Rotatelab_Extensions__ToArray_object__14896b8
                        (uVar1,**(undefined4 **)(_UNK_0110cbb8 + 0x110ca94));
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_FX_RenderersOverlayEffect__Activate_10fcdac(iVar2,uVar1,0,0,0,0x3f6ccccd,0x3e19999a)
      ;
      Rotatelab_Pool_PooledObject_object___Dispose_186ffc8
                (&uStack_38,**(undefined4 **)(_UNK_0110cbbc + 0x110cae8));
      return;
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    Rotatelab_FX_IDimEffectTarget___DimWithFilter_g__AddRenderersOf_5_0_10fcbc4
              (piVar6[1],&uStack_30);
    if (*(uint *)(iVar2 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar3 = (int *)*piVar6;
    if (piVar3 == (int *)0x0) {
LAB_0110ca2c:
      if (*(uint *)(iVar2 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      Rotatelab_FX_IDimEffectTarget___DimWithFilter_g__AddRenderersOf_5_0_10fcbc4(piVar3,&uStack_30)
      ;
    }
    else {
      uVar4 = (uint)*(byte *)(*piVar8 + 0xb8);
      if (((*(byte *)(*piVar3 + 0xb8) < uVar4) ||
          (*(int *)(*(int *)(*piVar3 + 100) + uVar4 * 4 + -4) != *piVar8)) || (piVar3[5] == 0x15))
      goto LAB_0110ca2c;
    }
    piVar6 = piVar6 + 3;
    uVar7 = uVar7 + 1;
  } while( true );
}

