/* IL2CPP: Rotatelab.Shop.BaseOfferButtonsParent$$OnEnable
void Rotatelab_Shop_BaseOfferButtonsParent__OnEnable (Rotatelab_Shop_BaseOfferButtonsParent_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.BaseOfferButtonsParent$$OnEnable
   void Rotatelab_Shop_BaseOfferButtonsParent__OnEnable (Rotatelab_Shop_BaseOfferButtonsParent_o*
   __this, const MethodInfo* method); */

void Rotatelab_Shop_BaseOfferButtonsParent__OnEnable_10cd1bc(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  pcVar5 = (char *)(_UNK_010dd4d4 + 0x10dd1d0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dd4d8 + 0x10dd1e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dd4dc + 0x10dd1f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dd4e0 + 0x10dd1fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dd4e4 + 0x10dd208));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dd4e8 + 0x10dd214));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dd4ec + 0x10dd220));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dd4f0 + 0x10dd22c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dd4f4 + 0x10dd238));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dd4f8 + 0x10dd244));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dd4fc + 0x10dd250));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dd500 + 0x10dd25c));
    *pcVar5 = '\x01';
  }
  iVar6 = param_1[0xc];
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar6 + 0xc);
  *(undefined4 *)(iVar6 + 0xc) = 0;
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  if (0 < iVar4) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar6 + 8),0,iVar4,0);
  }
  iVar6 = param_1[0xd];
  if (iVar6 != 0) {
    iVar4 = *(int *)(iVar6 + 0xc);
    *(undefined4 *)(iVar6 + 0xc) = 0;
    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    if (0 < iVar4) {
      System_Array__Clear_2b96cdc(*(undefined4 *)(iVar6 + 8),0,iVar4,0);
    }
    piVar8 = *(int **)(_UNK_010dd504 + 0x10dd2e0);
    iVar6 = *piVar8;
    if (*(int *)(iVar6 + 0x74) == 0) {
      FUN_00ec3934();
      iVar6 = *piVar8;
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xd8);
    uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010dd508 + 0x10dd304));
    System_Action_object__Int32Enum__int____ctor_1f1ab94
              (uVar3,param_1,**(undefined4 **)(_UNK_010dd50c + 0x10dd324),0);
    uVar3 = Rotatelab_GameAction_object__Int32Enum__int___op_Addition_23a647c
                      (uVar7,uVar3,**(undefined4 **)(_UNK_010dd510 + 0x10dd33c));
    *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xd8) = uVar3;
    thunk_FUN_00ec5080();
    puVar9 = *(undefined4 **)(_UNK_010dd514 + 0x10dd36c);
    uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x120);
    uVar3 = thunk_FUN_00f00cdc(*puVar9);
    System_Action_Int32Enum__bool____ctor_1f185a4(uVar3,param_1,*(undefined4 *)(*param_1 + 0xec),0);
    puVar10 = *(undefined4 **)(_UNK_010dd518 + 0x10dd3a4);
    uVar3 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c(uVar7,uVar3,*puVar10);
    *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x120) = uVar3;
    thunk_FUN_00ec5080();
    uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x118);
    uVar3 = thunk_FUN_00f00cdc(*puVar9);
    System_Action_Int32Enum__bool____ctor_1f185a4(uVar3,param_1,*(undefined4 *)(*param_1 + 0xe4),0);
    uVar3 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c(uVar7,uVar3,*puVar10);
    *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x118) = uVar3;
    thunk_FUN_00ec5080();
    puVar9 = *(undefined4 **)(_UNK_010dd51c + 0x10dd424);
    uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x114);
    uVar3 = thunk_FUN_00f00cdc(*puVar9);
    System_Action_bool____ctor_17aaff0(uVar3,param_1,**(undefined4 **)(_UNK_010dd520 + 0x10dd444),0)
    ;
    puVar10 = *(undefined4 **)(_UNK_010dd524 + 0x10dd460);
    uVar3 = Rotatelab_GameAction_bool___op_Addition_23a2828(uVar7,uVar3,*puVar10);
    *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x114) = uVar3;
    thunk_FUN_00ec5080();
    uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x15c);
    uVar3 = thunk_FUN_00f00cdc(*puVar9);
    System_Action_bool____ctor_17aaff0(uVar3,param_1,**(undefined4 **)(_UNK_010dd528 + 0x10dd4a4),0)
    ;
    uVar3 = Rotatelab_GameAction_bool___op_Addition_23a2828(uVar7,uVar3,*puVar10);
    puVar9 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x15c);
    *puVar9 = uVar3;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar9 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar9 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

