/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryController$$Claim
void Rotatelab_DailyDelivery_DailyDeliveryController__Claim (Rotatelab_DailyDelivery_DailyDeliveryController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryController$$Claim
   void Rotatelab_DailyDelivery_DailyDeliveryController__Claim
   (Rotatelab_DailyDelivery_DailyDeliveryController_o* __this, const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryController__Claim_10d6d40(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int extraout_r1;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_010e6fe0 + 0x10e6d58);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6fe4 + 0x10e6d6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6fe8 + 0x10e6d78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6fec + 0x10e6d84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6ff0 + 0x10e6d90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6ff4 + 0x10e6d9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6ff8 + 0x10e6da8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6ffc + 0x10e6db4));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  Rotatelab_DailyDelivery_DailyDeliveryProgress__Evaluate_10d61b4
            (&uStack_48,*(undefined4 *)(param_1 + 0x18));
  uVar2 = uStack_40;
  uVar5 = uStack_44;
  uVar1 = uStack_48;
  if ((uStack_40 & 1) != 0) {
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Selectable__set_interactable_39c00c0(*(int *)(param_1 + 0x20),0,0);
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = 0xc;
    if ((uVar1 & 1) == 0) {
      iVar3 = 0x10;
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x18) + iVar3);
    uVar9 = uVar5;
    if ((uVar2 & 0xff) == 0) {
      uVar9 = 0xffffffff;
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = System_Collections_Generic_List_object___get_Item_267d814
                      (iVar3,uVar9,**(undefined4 **)(_UNK_010e7000 + 0x10e6e50));
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x1c),uVar9,**(undefined4 **)(_UNK_010e7004 + 0x10e6e7c));
    uVar5 = Rotatelab_DailyDelivery_DailyDeliveryProgress__Commit_10d701c(uVar1,uVar5,uVar2);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_DailyDelivery_DailyDeliveryController__GrantDay_10d712c
              (uVar5,uVar4,*(undefined4 *)(iVar3 + 0x10));
    Rotatelab_DailyDelivery_DailyDeliveryDayBase__PlayClaimAnimation_10d7644
              (&uStack_38,iVar3,*(undefined4 *)(param_1 + 0x24));
    PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_48,&uStack_38,*(undefined4 *)(param_1 + 0x28),0)
    ;
    piVar10 = *(int **)(_UNK_010e7008 + 0x10e6ee4);
    iVar3 = *piVar10;
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar10;
    }
    puVar6 = *(undefined4 **)(iVar3 + 0x5c);
    iVar8 = puVar6[4];
    if (iVar8 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        puVar6 = *(undefined4 **)(*piVar10 + 0x5c);
      }
      uVar5 = *puVar6;
      iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e700c + 0x10e6f34));
      System_Action_object____ctor_1f11414
                (iVar8,uVar5,**(undefined4 **)(_UNK_010e7010 + 0x10e6f54),0);
      piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 0x10);
      *piVar10 = iVar8;
      thunk_FUN_00ec5080(piVar10,iVar8);
    }
    PrimeTween_Sequence__ChainCallback_object__15b4c64
              (&uStack_48,&uStack_38,param_1,iVar8,0,**(undefined4 **)(_UNK_010e7014 + 0x10e6f8c));
    iVar3 = *(int *)(**(int **)(_UNK_010e7018 + 0x10e6fa8) + 0x74);
    if (iVar3 == 0) {
      FUN_00ec3934();
      iVar3 = extraout_r1;
    }
    Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
              (&uStack_48,iVar3,uStack_48,uStack_44,uStack_40,uStack_3c,0);
  }
  return;
}

