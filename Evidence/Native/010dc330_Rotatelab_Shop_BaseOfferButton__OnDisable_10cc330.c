/* IL2CPP: Rotatelab.Shop.BaseOfferButton$$OnDisable
void Rotatelab_Shop_BaseOfferButton__OnDisable (Rotatelab_Shop_BaseOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.BaseOfferButton$$OnDisable
   void Rotatelab_Shop_BaseOfferButton__OnDisable (Rotatelab_Shop_BaseOfferButton_o* __this, const
   MethodInfo* method); */

uint Rotatelab_Shop_BaseOfferButton__OnDisable_10cc330(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_010dc52c + 0x10dc344);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dc530 + 0x10dc358));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dc534 + 0x10dc364));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dc538 + 0x10dc370));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dc53c + 0x10dc37c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dc540 + 0x10dc388));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dc544 + 0x10dc394));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dc548 + 0x10dc3a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dc54c + 0x10dc3ac));
    *pcVar4 = '\x01';
  }
  piVar6 = *(int **)(_UNK_010dc550 + 0x10dc3c0);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  puVar8 = *(undefined4 **)(_UNK_010dc554 + 0x10dc3e4);
  uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xe0);
  uVar2 = thunk_FUN_00f00cdc(*puVar8);
  System_Action_object____ctor_1f11414(uVar2,param_1,**(undefined4 **)(_UNK_010dc558 + 0x10dc404),0)
  ;
  puVar7 = *(undefined4 **)(_UNK_010dc55c + 0x10dc420);
  uVar2 = Rotatelab_GameAction_object___op_Subtraction_23a307c(uVar5,uVar2,*puVar7);
  *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0xe0) = uVar2;
  thunk_FUN_00ec5080();
  uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0xe0);
  uVar2 = thunk_FUN_00f00cdc(*puVar8);
  if (param_1 != (int *)0x0) {
    System_Action_object____ctor_1f11414(uVar2,param_1,*(undefined4 *)(*param_1 + 0x134),0);
    uVar2 = Rotatelab_GameAction_object___op_Subtraction_23a307c(uVar5,uVar2,*puVar7);
    *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0xe0) = uVar2;
    thunk_FUN_00ec5080();
    uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0xfc);
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010dc560 + 0x10dc4ac));
    System_Action_bool____ctor_17aaff0(uVar2,param_1,**(undefined4 **)(_UNK_010dc564 + 0x10dc4cc),0)
    ;
    uVar2 = Rotatelab_GameAction_bool___op_Subtraction_23a2944
                      (uVar5,uVar2,**(undefined4 **)(_UNK_010dc568 + 0x10dc4e4));
    *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0xfc) = uVar2;
    thunk_FUN_00ec5080();
    if (*(int *)(**(int **)(_UNK_010dc56c + 0x10dc50c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar4 = (char *)(_UNK_0108b740 + 0x108b6c8);
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0108b744 + 0x108b6dc),0);
      FUN_00ec37c0(*(undefined4 *)(_UNK_0108b748 + 0x108b6e8));
      *pcVar4 = '\x01';
    }
    piVar6 = *(int **)(_UNK_0108b74c + 0x108b6fc);
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar6;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 != 0) {
      uVar3 = System_Array__IndexOf_object__16445f0
                        (*(undefined4 *)(iVar1 + 8),param_1,0,*(undefined4 *)(iVar1 + 0xc),
                         *(undefined4 *)
                          (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(**(int **)(_UNK_0108b750 +
                                                                                  0x108b734) + 0x10)
                                                              + 0x60) + 100) + 0x10) + 0x60) + 0xa4)
                        );
      if (-1 < (int)uVar3) {
        System_Collections_Generic_List_object___RemoveAt_267f3f8(iVar1,uVar3);
      }
      return ~uVar3 >> 0x1f;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

