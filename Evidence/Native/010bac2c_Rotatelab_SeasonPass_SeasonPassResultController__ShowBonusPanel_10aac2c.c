/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController$$ShowBonusPanel
void Rotatelab_SeasonPass_SeasonPassResultController__ShowBonusPanel (Rotatelab_SeasonPass_SeasonPassResultController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController$$ShowBonusPanel
   void Rotatelab_SeasonPass_SeasonPassResultController__ShowBonusPanel
   (Rotatelab_SeasonPass_SeasonPassResultController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassResultController__ShowBonusPanel_10aac2c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
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
  
  pcVar4 = (char *)(_UNK_010baf5c + 0x10bac44);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010baf60 + 0x10bac58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010baf64 + 0x10bac64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010baf68 + 0x10bac70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010baf6c + 0x10bac7c));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar8 = *(int **)(param_1 + 0x1c);
  uStack_38 = 0;
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar5 = *(int **)(*(int *)(param_1 + 0x44) + 0x40);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = (**(code **)(*piVar5 + 0xd8))(piVar5,*(undefined4 *)(*piVar5 + 0xdc));
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar8 + 0x2b0))(piVar8,uVar1,*(undefined4 *)(*piVar8 + 0x2b4));
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x3c),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar2,1,0);
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  if (*(int *)(**(int **)(_UNK_010baf70 + 0x10bad38) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__SetVisibility_fc2a78(uVar1,1,0,0);
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Selectable__set_interactable_39c00c0(*(int *)(param_1 + 0x28),0,0);
  iVar2 = *(int *)(param_1 + 0x2c);
  pcVar4 = (char *)(_UNK_010baf74 + 0x10bad90);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010baf78 + 0x10bada4));
    *pcVar4 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010baf7c + 0x10badbc);
  puVar3 = *(undefined4 **)(*piVar8 + 0x5c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar2,*puVar3,puVar3[1],puVar3[2],0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_58,&uStack_38,0x3f800000,0);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  pcVar4 = (char *)(_UNK_010baf80 + 0x10bae40);
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010baf84 + 0x10bae5c));
    *pcVar4 = '\x01';
  }
  iVar2 = *(int *)(*piVar8 + 0x5c);
  uVar9 = *(undefined4 *)(iVar2 + 0xc);
  uVar7 = *(undefined4 *)(iVar2 + 0x10);
  uVar6 = *(undefined4 *)(iVar2 + 0x14);
  if (*(int *)(**(int **)(_UNK_010baf88 + 0x10bae70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce6560
            (&uStack_68,uVar1,uVar9,uVar7,uVar6,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_68,&uStack_38,uStack_68,uStack_64,uStack_60,uStack_5c,0);
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010baf8c + 0x10baf14));
  System_Action___ctor_2b10bac(uVar1,param_1,**(undefined4 **)(_UNK_010baf90 + 0x10baf34),0);
  PrimeTween_Sequence__OnComplete_2cf16e0(auStack_78,&uStack_38,uVar1,0,0);
  return;
}

