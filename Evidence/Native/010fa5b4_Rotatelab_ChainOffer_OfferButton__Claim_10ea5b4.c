/* IL2CPP: Rotatelab.ChainOffer.OfferButton$$Claim
PrimeTween_Sequence_o Rotatelab_ChainOffer_OfferButton__Claim (Rotatelab_ChainOffer_OfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.OfferButton$$Claim
   PrimeTween_Sequence_o Rotatelab_ChainOffer_OfferButton__Claim
   (Rotatelab_ChainOffer_OfferButton_o* __this, const MethodInfo* method); */

void Rotatelab_ChainOffer_OfferButton__Claim_10ea5b4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_010faa20 + 0x10fa5d0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010faa24 + 0x10fa5e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010faa28 + 0x10fa5f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010faa2c + 0x10fa5fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010faa30 + 0x10fa608));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010faa34 + 0x10fa614));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010faa38 + 0x10fa620));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010faa3c + 0x10fa62c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010faa40 + 0x10fa638));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_2 + 0x10),0);
  if (*(int *)(**(int **)(_UNK_010faa44 + 0x10fa6ac) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684(&uStack_58,uVar1,0,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_58,&uStack_38,uStack_58,uStack_54,uStack_50,uStack_4c,0);
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  if (*(int *)(param_2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_2 + 0x14),0);
  PrimeTween_Tween__Scale_2ce4684(&uStack_68,uVar1,0x3f800000,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_68,&uStack_38,uStack_68,uStack_64,uStack_60,uStack_5c,0);
  piVar8 = *(int **)(_UNK_010faa48 + 0x10fa7c4);
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  iVar2 = *piVar8;
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar8;
  }
  puVar4 = *(undefined4 **)(iVar2 + 0x5c);
  iVar6 = puVar4[1];
  if (iVar6 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar4 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar7 = *puVar4;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010faa4c + 0x10fa818));
    System_Action_object____ctor_1f11414(iVar6,uVar7,**(undefined4 **)(_UNK_010faa50 + 0x10fa838),0)
    ;
    piVar3 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
    *piVar3 = iVar6;
    thunk_FUN_00ec5080(piVar3,iVar6);
  }
  PrimeTween_Sequence__InsertCallback_object__15b4ee8
            (&uStack_48,&uStack_38,0x3e99999a,uVar1,iVar6,0,
             **(undefined4 **)(_UNK_010faa54 + 0x10fa874));
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_58,&uStack_38,0x3ecccccd,0);
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  if (*(int *)(**(int **)(_UNK_010faa58 + 0x10fa8c8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684(&uStack_68,uVar1,0,0x3e99999a,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_68,&uStack_38,uStack_68,uStack_64,uStack_60,uStack_5c,0);
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  uVar1 = UnityEngine_Component__get_gameObject_35fe360(param_2,0);
  iVar2 = *piVar8;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar8;
  }
  puVar4 = *(undefined4 **)(iVar2 + 0x5c);
  iVar6 = puVar4[2];
  if (iVar6 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar4 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar7 = *puVar4;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010faa5c + 0x10fa9a8));
    System_Action_object____ctor_1f11414(iVar6,uVar7,**(undefined4 **)(_UNK_010faa60 + 0x10fa9c8),0)
    ;
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 8);
    *piVar8 = iVar6;
    thunk_FUN_00ec5080(piVar8,iVar6);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_48,&uStack_38,uVar1,iVar6,0,**(undefined4 **)(_UNK_010faa64 + 0x10fa9f8));
  *param_1 = uStack_48;
  param_1[1] = uStack_44;
  param_1[2] = uStack_40;
  param_1[3] = uStack_3c;
  return;
}

