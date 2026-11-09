/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController$$ShowUnClaimedPanel
void Rotatelab_SeasonPass_SeasonPassResultController__ShowUnClaimedPanel (Rotatelab_SeasonPass_SeasonPassResultController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController$$ShowUnClaimedPanel
   void Rotatelab_SeasonPass_SeasonPassResultController__ShowUnClaimedPanel
   (Rotatelab_SeasonPass_SeasonPassResultController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassResultController__ShowUnClaimedPanel_10aa278(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined1 auStack_78 [16];
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
  
  pcVar3 = (char *)(_UNK_010ba738 + 0x10ba290);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba73c + 0x10ba2a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba740 + 0x10ba2b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba744 + 0x10ba2bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba748 + 0x10ba2c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba74c + 0x10ba2d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba750 + 0x10ba2e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba754 + 0x10ba2ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba758 + 0x10ba2f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba75c + 0x10ba304));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba760 + 0x10ba310));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba764 + 0x10ba31c));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x38),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
  uVar4 = *(undefined4 *)(param_1 + 0x38);
  if (*(int *)(**(int **)(_UNK_010ba768 + 0x10ba378) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__SetVisibility_fc2a78(uVar4,1,0,0);
  piVar5 = *(int **)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_SeasonPass_SeasonPassController__get_GetCurrentSeasonName_10a01dc
                    (*(int *)(param_1 + 0x44));
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar5 + 0x2b0))(piVar5,uVar4,*(undefined4 *)(*piVar5 + 0x2b4));
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Selectable__set_interactable_39c00c0(*(int *)(param_1 + 0x20),0,0);
  iVar1 = *(int *)(param_1 + 0x24);
  pcVar3 = (char *)(_UNK_010ba76c + 0x10ba414);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba770 + 0x10ba428));
    *pcVar3 = '\x01';
  }
  piVar5 = *(int **)(_UNK_010ba774 + 0x10ba440);
  puVar2 = *(undefined4 **)(*piVar5 + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar1,*puVar2,puVar2[1],puVar2[2],0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_58,&uStack_38,0x3f800000,0);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  pcVar3 = (char *)(_UNK_010ba778 + 0x10ba4c8);
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba77c + 0x10ba4e4));
    *pcVar3 = '\x01';
  }
  iVar1 = *(int *)(*piVar5 + 0x5c);
  uVar11 = *(undefined4 *)(iVar1 + 0xc);
  uVar6 = *(undefined4 *)(iVar1 + 0x10);
  uVar8 = *(undefined4 *)(iVar1 + 0x14);
  if (*(int *)(**(int **)(_UNK_010ba780 + 0x10ba4f8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce6560
            (&uStack_68,uVar4,uVar11,uVar6,uVar8,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_68,&uStack_38,uStack_68,uStack_64,uStack_60,uStack_5c,0);
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ba784 + 0x10ba59c));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010ba788 + 0x10ba5bc),0);
  PrimeTween_Sequence__OnComplete_2cf16e0(auStack_78,&uStack_38,uVar4,0,0);
  piVar5 = *(int **)(_UNK_010ba78c + 0x10ba5e8);
  iVar7 = *(int *)(param_1 + 0x40);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar9 = puVar2[1];
  if (iVar9 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar5 + 0x5c);
    }
    uVar4 = *puVar2;
    iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ba790 + 0x10ba634));
    System_Action_object____ctor_1f11414(iVar9,uVar4,**(undefined4 **)(_UNK_010ba794 + 0x10ba654),0)
    ;
    piVar5 = (int *)(*(int *)(*piVar5 + 0x5c) + 4);
    *piVar5 = iVar9;
    thunk_FUN_00ec5080(piVar5,iVar9);
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___ForEach_267e6f0
            (iVar7,iVar9,**(undefined4 **)(_UNK_010ba798 + 0x10ba68c));
  iVar1 = 0;
  puVar2 = *(undefined4 **)(_UNK_010ba79c + 0x10ba6a4);
  puVar10 = *(undefined4 **)(_UNK_010ba7a0 + 0x10ba6ac);
  while( true ) {
    if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x48) + 0xc) <= iVar1) {
      return;
    }
    if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x48),iVar1,*puVar2);
    if (*(int *)(param_1 + 0x40) == 0) break;
    iVar7 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x40),iVar1,*puVar10);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_SeasonPassUnClaimedReward__Init_fc43c0(iVar7,uVar4,0);
    iVar1 = iVar1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

