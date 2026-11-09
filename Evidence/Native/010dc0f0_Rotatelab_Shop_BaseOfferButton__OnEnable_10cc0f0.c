/* IL2CPP: Rotatelab.Shop.BaseOfferButton$$OnEnable
void Rotatelab_Shop_BaseOfferButton__OnEnable (Rotatelab_Shop_BaseOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.BaseOfferButton$$OnEnable
   void Rotatelab_Shop_BaseOfferButton__OnEnable (Rotatelab_Shop_BaseOfferButton_o* __this, const
   MethodInfo* method); */

void Rotatelab_Shop_BaseOfferButton__OnEnable_10cc0f0(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  pcVar5 = (char *)(_UNK_010dc2ec + 0x10dc104);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dc2f0 + 0x10dc118));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dc2f4 + 0x10dc124));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dc2f8 + 0x10dc130));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dc2fc + 0x10dc13c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dc300 + 0x10dc148));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dc304 + 0x10dc154));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dc308 + 0x10dc160));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dc30c + 0x10dc16c));
    *pcVar5 = '\x01';
  }
  piVar9 = *(int **)(_UNK_010dc310 + 0x10dc180);
  iVar3 = *piVar9;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar9;
  }
  puVar11 = *(undefined4 **)(_UNK_010dc314 + 0x10dc1a4);
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xe0);
  uVar4 = thunk_FUN_00f00cdc(*puVar11);
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_010dc318 + 0x10dc1c4),0)
  ;
  puVar10 = *(undefined4 **)(_UNK_010dc31c + 0x10dc1e0);
  uVar4 = Rotatelab_GameAction_object___op_Addition_23a2f60(uVar6,uVar4,*puVar10);
  *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0xe0) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0xe0);
  uVar4 = thunk_FUN_00f00cdc(*puVar11);
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Action_object____ctor_1f11414(uVar4,param_1,*(undefined4 *)(*param_1 + 0x134),0);
  uVar4 = Rotatelab_GameAction_object___op_Addition_23a2f60(uVar6,uVar4,*puVar10);
  *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0xe0) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0xfc);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010dc320 + 0x10dc26c));
  System_Action_bool____ctor_17aaff0(uVar4,param_1,**(undefined4 **)(_UNK_010dc324 + 0x10dc28c),0);
  uVar4 = Rotatelab_GameAction_bool___op_Addition_23a2828
                    (uVar6,uVar4,**(undefined4 **)(_UNK_010dc328 + 0x10dc2a4));
  *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0xfc) = uVar4;
  thunk_FUN_00ec5080();
  if (*(int *)(**(int **)(_UNK_010dc32c + 0x10dc2cc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_0108b6a0 + 0x108b5d4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b6a4 + 0x108b5e8),0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b6a8 + 0x108b5f4));
    *pcVar5 = '\x01';
  }
  piVar9 = *(int **)(_UNK_0108b6ac + 0x108b608);
  iVar3 = *piVar9;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar9;
  }
  iVar3 = **(int **)(iVar3 + 0x5c);
  if (iVar3 != 0) {
    iVar7 = *(int *)(iVar3 + 8);
    uVar8 = *(uint *)(iVar3 + 0xc);
    piVar9 = *(int **)(_UNK_0108b6b0 + 0x108b650);
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar8 < *(uint *)(iVar7 + 0xc)) {
      *(uint *)(iVar3 + 0xc) = uVar8 + 1;
      piVar9 = (int *)(iVar7 + uVar8 * 4 + 0x10);
      *piVar9 = (int)param_1;
    }
    else {
      uVar8 = *(uint *)(iVar3 + 0xc);
      System_Collections_Generic_List_object___EnsureCapacity_267e0f0
                (iVar3,uVar8 + 1,
                 *(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*piVar9 + 0x10) + 0x60) + 0x38) +
                                    0x10) + 0x60) + 0x3c));
      iVar7 = *(int *)(iVar3 + 8);
      *(uint *)(iVar3 + 0xc) = uVar8 + 1;
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar7 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar9 = (int *)(iVar7 + uVar8 * 4 + 0x10);
      *piVar9 = (int)param_1;
    }
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar9 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)piVar9 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

