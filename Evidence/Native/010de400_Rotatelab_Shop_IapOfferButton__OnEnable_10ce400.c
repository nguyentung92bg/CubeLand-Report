/* IL2CPP: Rotatelab.Shop.IapOfferButton$$OnEnable
void Rotatelab_Shop_IapOfferButton__OnEnable (Rotatelab_Shop_IapOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.IapOfferButton$$OnEnable
   void Rotatelab_Shop_IapOfferButton__OnEnable (Rotatelab_Shop_IapOfferButton_o* __this, const
   MethodInfo* method); */

void Rotatelab_Shop_IapOfferButton__OnEnable_10ce400(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010de558 + 0x10de414);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010de55c + 0x10de428));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010de560 + 0x10de434));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010de564 + 0x10de440));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010de568 + 0x10de44c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010de56c + 0x10de458));
    *pcVar6 = '\x01';
  }
  Rotatelab_Shop_BaseOfferButton__OnEnable_10cc0f0(param_1);
  piVar8 = *(int **)(_UNK_010de570 + 0x10de474);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xf0);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010de574 + 0x10de498));
  System_Action_Int32Enum__float____ctor_1f18888
            (uVar4,param_1,**(undefined4 **)(_UNK_010de578 + 0x10de4b8),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__float___op_Addition_23a4ad8
                    (uVar7,uVar4,**(undefined4 **)(_UNK_010de57c + 0x10de4d0));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xf0) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xec);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010de580 + 0x10de500));
  if (param_1 != (int *)0x0) {
    System_Action___ctor_2b10bac(uVar4,param_1,*(undefined4 *)(*param_1 + 0x16c),0);
    uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
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

