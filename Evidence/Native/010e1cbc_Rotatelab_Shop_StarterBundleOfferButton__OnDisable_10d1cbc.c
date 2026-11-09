/* IL2CPP: Rotatelab.Shop.StarterBundleOfferButton$$OnDisable
void Rotatelab_Shop_StarterBundleOfferButton__OnDisable (Rotatelab_Shop_StarterBundleOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarterBundleOfferButton$$OnDisable
   void Rotatelab_Shop_StarterBundleOfferButton__OnDisable
   (Rotatelab_Shop_StarterBundleOfferButton_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_StarterBundleOfferButton__OnDisable_10d1cbc(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010e1da0 + 0x10e1cd0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e1da4 + 0x10e1ce4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e1da8 + 0x10e1cf0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e1dac + 0x10e1cfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e1db0 + 0x10e1d08));
    *pcVar6 = '\x01';
  }
  Rotatelab_Shop_IapOfferButton__OnDisable_10ce584(param_1);
  piVar8 = *(int **)(_UNK_010e1db4 + 0x10e1d24);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x120);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e1db8 + 0x10e1d48));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_010e1dbc + 0x10e1d68),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Subtraction_23a44a8
                    (uVar7,uVar4,**(undefined4 **)(_UNK_010e1dc0 + 0x10e1d80));
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

