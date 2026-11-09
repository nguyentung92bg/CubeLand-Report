/* IL2CPP: Rotatelab.Shop.ShopRestoreButton$$OnDestroy
void Rotatelab_Shop_ShopRestoreButton__OnDestroy (Rotatelab_Shop_ShopRestoreButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.ShopRestoreButton$$OnDestroy
   void Rotatelab_Shop_ShopRestoreButton__OnDestroy (Rotatelab_Shop_ShopRestoreButton_o* __this,
   const MethodInfo* method); */

void Rotatelab_Shop_ShopRestoreButton__OnDestroy_10c3764(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010d38b8 + 0x10d3778);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d38bc + 0x10d378c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d38c0 + 0x10d3798));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d38c4 + 0x10d37a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d38c8 + 0x10d37b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d38cc + 0x10d37bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d38d0 + 0x10d37c8));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010d38d4 + 0x10d37dc);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xe4);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d38d8 + 0x10d3800));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010d38dc + 0x10d3820),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar7,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xe4) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x120);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d38e0 + 0x10d3860));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_010d38e4 + 0x10d3880),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Subtraction_23a44a8
                    (uVar7,uVar4,**(undefined4 **)(_UNK_010d38e8 + 0x10d3898));
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x120);
  *puVar5 = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

