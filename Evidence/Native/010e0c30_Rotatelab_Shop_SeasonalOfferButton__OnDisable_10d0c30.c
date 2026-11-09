/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$OnDisable
void Rotatelab_Shop_SeasonalOfferButton__OnDisable (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$OnDisable
   void Rotatelab_Shop_SeasonalOfferButton__OnDisable (Rotatelab_Shop_SeasonalOfferButton_o* __this,
   const MethodInfo* method); */

void Rotatelab_Shop_SeasonalOfferButton__OnDisable_10d0c30(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  
  pcVar6 = (char *)(_UNK_010e0d98 + 0x10e0c44);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e0d9c + 0x10e0c58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e0da0 + 0x10e0c64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e0da4 + 0x10e0c70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e0da8 + 0x10e0c7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e0dac + 0x10e0c88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e0db0 + 0x10e0c94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e0db4 + 0x10e0ca0));
    *pcVar6 = '\x01';
  }
  Rotatelab_Shop_IapOfferButton__OnDisable_10ce584(param_1);
  piVar9 = *(int **)(_UNK_010e0db8 + 0x10e0cbc);
  iVar4 = *piVar9;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar9;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x120);
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e0dbc + 0x10e0ce0));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar5,param_1,**(undefined4 **)(_UNK_010e0dc0 + 0x10e0d00),0);
  uVar5 = Rotatelab_GameAction_Int32Enum__bool___op_Subtraction_23a44a8
                    (uVar7,uVar5,**(undefined4 **)(_UNK_010e0dc4 + 0x10e0d18));
  *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x120) = uVar5;
  thunk_FUN_00ec5080();
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010e0dc8 + 0x10e0d40));
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e0dcc + 0x10e0d54));
  System_Action___ctor_2b10bac(uVar5,param_1,**(undefined4 **)(_UNK_010e0dd0 + 0x10e0d70),0);
  if (iVar4 != 0) {
    pcVar6 = (char *)(_UNK_01083c84 + 0x1083c08);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01083c88 + 0x1083c1c),uVar5,0);
      *pcVar6 = '\x01';
    }
    piVar9 = *(int **)(_UNK_01083c8c + 0x1083c34);
    iVar1 = *(int *)(iVar4 + 0x98);
    while( true ) {
      piVar2 = (int *)System_Delegate__Remove_2bbcc8c(iVar1,uVar5,0);
      piVar8 = (int *)0x0;
      if ((piVar2 != (int *)0x0) && (piVar8 = piVar2, *piVar2 != *piVar9)) break;
      iVar3 = FUN_00efd180((int *)(iVar4 + 0x98),piVar8,iVar1);
      bVar10 = iVar3 == iVar1;
      iVar1 = iVar3;
      if (bVar10) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00ec3e28();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

