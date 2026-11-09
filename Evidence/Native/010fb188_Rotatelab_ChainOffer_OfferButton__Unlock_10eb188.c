/* IL2CPP: Rotatelab.ChainOffer.OfferButton$$Unlock
PrimeTween_Tween_o Rotatelab_ChainOffer_OfferButton__Unlock (Rotatelab_ChainOffer_OfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.OfferButton$$Unlock
   PrimeTween_Tween_o Rotatelab_ChainOffer_OfferButton__Unlock (Rotatelab_ChainOffer_OfferButton_o*
   __this, const MethodInfo* method); */

void Rotatelab_ChainOffer_OfferButton__Unlock_10eb188(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  pcVar3 = (char *)(_UNK_010fb348 + 0x10fb1a4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fb34c + 0x10fb1b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fb350 + 0x10fb1c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fb354 + 0x10fb1d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fb358 + 0x10fb1dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fb35c + 0x10fb1e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fb360 + 0x10fb1f4));
    *pcVar3 = '\x01';
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetAsLastSibling_3616da0(iVar1,0);
  if (*(int *)(param_2 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Animator__Play_35915ac
            (*(int *)(param_2 + 0x1c),**(undefined4 **)(_UNK_010fb364 + 0x10fb24c),0,0,0);
  piVar4 = *(int **)(_UNK_010fb368 + 0x10fb264);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar5 = puVar2[3];
  if (iVar5 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar4 + 0x5c);
    }
    uVar6 = *puVar2;
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010fb36c + 0x10fb2ac));
    System_Action_object____ctor_1f11414(iVar5,uVar6,**(undefined4 **)(_UNK_010fb370 + 0x10fb2cc),0)
    ;
    piVar4 = (int *)(*(int *)(*piVar4 + 0x5c) + 0xc);
    *piVar4 = iVar5;
    thunk_FUN_00ec5080(piVar4,iVar5);
  }
  if (*(int *)(**(int **)(_UNK_010fb374 + 0x10fb2f4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Delay_object__15d6154
            (&uStack_28,param_2,0x3f800000,iVar5,0,0,**(undefined4 **)(_UNK_010fb378 + 0x10fb320));
  *param_1 = uStack_28;
  param_1[1] = uStack_20;
  return;
}

