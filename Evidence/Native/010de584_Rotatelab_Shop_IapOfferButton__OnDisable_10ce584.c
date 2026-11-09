/* IL2CPP: Rotatelab.Shop.IapOfferButton$$OnDisable
void Rotatelab_Shop_IapOfferButton__OnDisable (Rotatelab_Shop_IapOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.IapOfferButton$$OnDisable
   void Rotatelab_Shop_IapOfferButton__OnDisable (Rotatelab_Shop_IapOfferButton_o* __this, const
   MethodInfo* method); */

void Rotatelab_Shop_IapOfferButton__OnDisable_10ce584(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010de6dc + 0x10de598);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010de6e0 + 0x10de5ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010de6e4 + 0x10de5b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010de6e8 + 0x10de5c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010de6ec + 0x10de5d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010de6f0 + 0x10de5dc));
    *pcVar6 = '\x01';
  }
  Rotatelab_Shop_BaseOfferButton__OnDisable_10cc330(param_1);
  piVar8 = *(int **)(_UNK_010de6f4 + 0x10de5f8);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xf0);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010de6f8 + 0x10de61c));
  System_Action_Int32Enum__float____ctor_1f18888
            (uVar4,param_1,**(undefined4 **)(_UNK_010de6fc + 0x10de63c),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__float___op_Subtraction_23a4bf4
                    (uVar7,uVar4,**(undefined4 **)(_UNK_010de700 + 0x10de654));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xf0) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xec);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010de704 + 0x10de684));
  if (param_1 != (int *)0x0) {
    System_Action___ctor_2b10bac(uVar4,param_1,*(undefined4 *)(*param_1 + 0x16c),0);
    uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar7,uVar4,0);
    puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xec);
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
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

