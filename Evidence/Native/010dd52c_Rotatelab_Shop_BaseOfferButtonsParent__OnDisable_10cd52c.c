/* IL2CPP: Rotatelab.Shop.BaseOfferButtonsParent$$OnDisable
void Rotatelab_Shop_BaseOfferButtonsParent__OnDisable (Rotatelab_Shop_BaseOfferButtonsParent_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.BaseOfferButtonsParent$$OnDisable
   void Rotatelab_Shop_BaseOfferButtonsParent__OnDisable (Rotatelab_Shop_BaseOfferButtonsParent_o*
   __this, const MethodInfo* method); */

void Rotatelab_Shop_BaseOfferButtonsParent__OnDisable_10cd52c(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar5 = (char *)(_UNK_010dd7d4 + 0x10dd540);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dd7d8 + 0x10dd554));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dd7dc + 0x10dd560));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dd7e0 + 0x10dd56c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dd7e4 + 0x10dd578));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dd7e8 + 0x10dd584));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dd7ec + 0x10dd590));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dd7f0 + 0x10dd59c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dd7f4 + 0x10dd5a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dd7f8 + 0x10dd5b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dd7fc + 0x10dd5c0));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_010dd800 + 0x10dd5d4);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xd8);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010dd804 + 0x10dd5f8));
  System_Action_object__Int32Enum__int____ctor_1f1ab94
            (uVar4,param_1,**(undefined4 **)(_UNK_010dd808 + 0x10dd618),0);
  uVar4 = Rotatelab_GameAction_object__Int32Enum__int___op_Subtraction_23a6598
                    (uVar6,uVar4,**(undefined4 **)(_UNK_010dd80c + 0x10dd630));
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xd8) = uVar4;
  thunk_FUN_00ec5080();
  puVar8 = *(undefined4 **)(_UNK_010dd810 + 0x10dd660);
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x120);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  if (param_1 != (int *)0x0) {
    System_Action_Int32Enum__bool____ctor_1f185a4(uVar4,param_1,*(undefined4 *)(*param_1 + 0xec),0);
    puVar9 = *(undefined4 **)(_UNK_010dd814 + 0x10dd6a4);
    uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Subtraction_23a44a8(uVar6,uVar4,*puVar9);
    *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x120) = uVar4;
    thunk_FUN_00ec5080();
    uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x118);
    uVar4 = thunk_FUN_00f00cdc(*puVar8);
    System_Action_Int32Enum__bool____ctor_1f185a4(uVar4,param_1,*(undefined4 *)(*param_1 + 0xe4),0);
    uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Subtraction_23a44a8(uVar6,uVar4,*puVar9);
    *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x118) = uVar4;
    thunk_FUN_00ec5080();
    puVar8 = *(undefined4 **)(_UNK_010dd818 + 0x10dd724);
    uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x114);
    uVar4 = thunk_FUN_00f00cdc(*puVar8);
    System_Action_bool____ctor_17aaff0(uVar4,param_1,**(undefined4 **)(_UNK_010dd81c + 0x10dd744),0)
    ;
    puVar9 = *(undefined4 **)(_UNK_010dd820 + 0x10dd760);
    uVar4 = Rotatelab_GameAction_bool___op_Subtraction_23a2944(uVar6,uVar4,*puVar9);
    *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x114) = uVar4;
    thunk_FUN_00ec5080();
    uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x15c);
    uVar4 = thunk_FUN_00f00cdc(*puVar8);
    System_Action_bool____ctor_17aaff0(uVar4,param_1,**(undefined4 **)(_UNK_010dd824 + 0x10dd7a4),0)
    ;
    uVar4 = Rotatelab_GameAction_bool___op_Subtraction_23a2944(uVar6,uVar4,*puVar9);
    puVar8 = (undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x15c);
    *puVar8 = uVar4;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar8 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar8 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

