/* IL2CPP: Rotatelab.Shop.BaseOfferButton$$ClosePopup
void Rotatelab_Shop_BaseOfferButton__ClosePopup (Rotatelab_Shop_BaseOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.BaseOfferButton$$ClosePopup
   void Rotatelab_Shop_BaseOfferButton__ClosePopup (Rotatelab_Shop_BaseOfferButton_o* __this, const
   MethodInfo* method); */

void Rotatelab_Shop_BaseOfferButton__ClosePopup_10ccc08(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int extraout_r1;
  code *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  pcVar7 = (char *)(_UNK_010dcfa4 + 0x10dcc20);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dcfa8 + 0x10dcc34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dcfac + 0x10dcc40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dcfb0 + 0x10dcc4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dcfb4 + 0x10dcc58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dcfb8 + 0x10dcc64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dcfbc + 0x10dcc70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dcfc0 + 0x10dcc7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dcfc4 + 0x10dcc88));
    *pcVar7 = '\x01';
  }
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_38 = 0;
  if (*(char *)((int)param_1 + 0x1d) != '\0') {
    pcVar6 = *(code **)(*param_1 + 0x150);
    uVar3 = *(undefined4 *)(*param_1 + 0x154);
    *(undefined1 *)((int)param_1 + 0x1d) = 0;
    (*pcVar6)(param_1,uVar3);
    if (param_1[6] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_CanvasGroup__set_blocksRaycasts_39a3b28(param_1[6],0,0);
    PrimeTween_Sequence__Stop_2cf07bc(param_1 + 8,0);
    PrimeTween_Sequence__Create_2cef1e0(&iStack_48,1,0,1,0,0,0);
    iVar9 = param_1[6];
    iStack_38 = iStack_48;
    iStack_34 = iStack_44;
    iStack_30 = iStack_40;
    iStack_2c = iStack_3c;
    if (*(int *)(**(int **)(_UNK_010dcfc8 + 0x10dcd28) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Alpha_2ce7b44(&iStack_58,iVar9,0,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&iStack_58,&iStack_38,iStack_58,uStack_54,uStack_50,uStack_4c,0);
    piVar10 = *(int **)(_UNK_010dcfcc + 0x10dcdbc);
    iVar9 = *piVar10;
    iStack_38 = iStack_58;
    iStack_34 = uStack_54;
    iStack_30 = uStack_50;
    iStack_2c = uStack_4c;
    if (*(int *)(iVar9 + 0x74) == 0) {
      FUN_00ec3934();
      iVar9 = *piVar10;
    }
    puVar4 = *(undefined4 **)(iVar9 + 0x5c);
    iVar8 = puVar4[2];
    if (iVar8 == 0) {
      if (*(int *)(iVar9 + 0x74) == 0) {
        FUN_00ec3934();
        puVar4 = *(undefined4 **)(*piVar10 + 0x5c);
      }
      uVar3 = *puVar4;
      iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010dcfd0 + 0x10dce0c));
      System_Action_object____ctor_1f11414
                (iVar8,uVar3,**(undefined4 **)(_UNK_010dcfd4 + 0x10dce2c),0);
      piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 8);
      *piVar10 = iVar8;
      thunk_FUN_00ec5080(piVar10,iVar8);
    }
    PrimeTween_Sequence__ChainCallback_object__15b4c64
              (&iStack_48,&iStack_38,param_1,iVar8,0,**(undefined4 **)(_UNK_010dcfd8 + 0x10dce64));
    iVar2 = iStack_3c;
    iVar1 = iStack_40;
    iVar8 = iStack_44;
    iVar9 = iStack_48;
    iVar5 = *(int *)(**(int **)(_UNK_010dcfdc + 0x10dce84) + 0x74);
    if (iVar5 == 0) {
      FUN_00ec3934();
      iVar5 = extraout_r1;
    }
    Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
              (&iStack_48,iVar5,iVar9,iVar8,iVar1,iVar2,0);
    param_1[8] = iStack_48;
    param_1[9] = iStack_44;
    param_1[10] = iStack_40;
    param_1[0xb] = iStack_3c;
    thunk_FUN_00ec5080(param_1 + 10,0);
    piVar10 = *(int **)(_UNK_010dcfe0 + 0x10dcedc);
    iVar9 = *piVar10;
    if (*(int *)(iVar9 + 0x74) == 0) {
      FUN_00ec3934();
      iVar9 = *piVar10;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x104);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar4 = *(undefined4 **)(_UNK_010dcfe4 + 0x10dcf18);
    Rotatelab_GameAction_bool___Raise_23a280c(iVar9,0,*puVar4);
    iVar9 = *(int *)(*(int *)(*piVar10 + 0x5c) + 0xfc);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_bool___Raise_23a280c(iVar9,0,*puVar4);
    iVar9 = *(int *)(*(int *)(*piVar10 + 0x5c) + 0x114);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_bool___Raise_23a280c(iVar9,1,*puVar4);
    iVar9 = param_1[0xc];
    if (iVar9 != 0) {
      param_1[0xc] = 0;
      thunk_FUN_00ec5080();
      (**(code **)(iVar9 + 0xc))
                (*(undefined4 *)(iVar9 + 0x20),(char)param_1[0xd],*(undefined4 *)(iVar9 + 0x14));
    }
  }
  return;
}

