/* IL2CPP: Rotatelab.SeasonPass.SeasonPassInfoController$$ShowPopup
void Rotatelab_SeasonPass_SeasonPassInfoController__ShowPopup (Rotatelab_SeasonPass_SeasonPassInfoController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassInfoController$$ShowPopup
   void Rotatelab_SeasonPass_SeasonPassInfoController__ShowPopup
   (Rotatelab_SeasonPass_SeasonPassInfoController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassInfoController__ShowPopup_10a5f64(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 auStack_128 [16];
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
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
  
  pcVar6 = (char *)(_UNK_010b697c + 0x10b5f7c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b6980 + 0x10b5f90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b6984 + 0x10b5f9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b6988 + 0x10b5fa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b698c + 0x10b5fb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b6990 + 0x10b5fc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b6994 + 0x10b5fcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b6998 + 0x10b5fd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b699c + 0x10b5fe4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b69a0 + 0x10b5ff0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b69a4 + 0x10b5ffc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b69a8 + 0x10b6008));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b69ac + 0x10b6014));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b69b0 + 0x10b6020));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b69b4 + 0x10b602c));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b69b8 + 0x10b6048));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar1 + 0xc) = param_1;
  thunk_FUN_00ec5080((int *)(iVar1 + 0xc),param_1);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010b69bc + 0x10b6084));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_SeasonPass_SeasonPassController__get_GetCurrentSeasonName_10a01dc(iVar2);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_String__ToUpper_2a0fee8(iVar2,0);
  *(undefined4 *)(iVar1 + 8) = uVar3;
  thunk_FUN_00ec5080();
  iVar2 = *(int *)(param_1 + 0x30);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b69c0 + 0x10b60dc));
  System_Action_object____ctor_1f11414(uVar3,iVar1,**(undefined4 **)(_UNK_010b69c4 + 0x10b60f8),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___ForEach_267e6f0
            (iVar2,uVar3,**(undefined4 **)(_UNK_010b69c8 + 0x10b6120));
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x1c),0);
  pcVar6 = (char *)(_UNK_010b69cc + 0x10b6154);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b69d0 + 0x10b6168));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(_UNK_010b69d4 + 0x10b6180);
  puVar4 = *(undefined4 **)(*piVar7 + 0x5c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar2,*puVar4,puVar4[1],puVar4[2],0);
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x24),0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b69d8 + 0x10b61ec));
    *pcVar6 = '\x01';
  }
  puVar4 = *(undefined4 **)(*piVar7 + 0x5c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar2,*puVar4,puVar4[1],puVar4[2],0);
  iVar2 = *(int *)(param_1 + 0x18);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b69dc + 0x10b6244));
    *pcVar6 = '\x01';
  }
  puVar4 = *(undefined4 **)(*piVar7 + 0x5c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar2,*puVar4,puVar4[1],puVar4[2],0);
  iVar2 = *(int *)(param_1 + 0x20);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b69e0 + 0x10b629c));
    *pcVar6 = '\x01';
  }
  puVar4 = *(undefined4 **)(*piVar7 + 0x5c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar2,*puVar4,puVar4[1],puVar4[2],0);
  iVar2 = *(int *)(param_1 + 0x28);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b69e4 + 0x10b62f4));
    *pcVar6 = '\x01';
  }
  puVar4 = *(undefined4 **)(*piVar7 + 0x5c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar2,*puVar4,puVar4[1],puVar4[2],0);
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x2c),0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b69e8 + 0x10b6368));
    *pcVar6 = '\x01';
  }
  puVar4 = *(undefined4 **)(*piVar7 + 0x5c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar2,*puVar4,puVar4[1],puVar4[2],0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_CanvasGroup__set_interactable_39a3940(*(int *)(param_1 + 0x10),1,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_CanvasGroup__set_blocksRaycasts_39a3b28(*(int *)(param_1 + 0x10),1,0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = UnityEngine_CanvasGroup__get_alpha_39a366c(*(int *)(param_1 + 0x10),0);
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b69ec + 0x10b6448));
  System_Action_float____ctor_1f12930(uVar5,iVar1,**(undefined4 **)(_UNK_010b69f0 + 0x10b6464),0);
  if (*(int *)(**(int **)(_UNK_010b69f4 + 0x10b6478) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Custom_2ce885c
            (&uStack_58,uVar3,0x3f800000,0x3dcccccd,uVar5,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Group_2cef730
            (&uStack_58,&uStack_38,uStack_58,uStack_54,uStack_50,uStack_4c,0);
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  PrimeTween_Tween__Scale_2ce4684
            (&uStack_68,*(undefined4 *)(param_1 + 0x14),0x3f933333,0x3dcccccd,0,0,0,0,0,1,0,0,0,0,0)
  ;
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_68,&uStack_38,uStack_68,uStack_64,uStack_60,uStack_5c,0);
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  PrimeTween_Tween__Scale_2ce4684
            (&uStack_78,*(undefined4 *)(param_1 + 0x18),0x3f800000,0x3e19999a,0,0,0,0,0,1,0,0,0,0,0)
  ;
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_78,&uStack_38,uStack_78,uStack_74,uStack_70,uStack_6c,0);
  uStack_38 = uStack_78;
  uStack_34 = uStack_74;
  uStack_30 = uStack_70;
  uStack_2c = uStack_6c;
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x1c),0);
  PrimeTween_Tween__Scale_2ce4684(&uStack_88,uVar3,0x3f800000,0x3e19999a,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_88,&uStack_38,uStack_88,uStack_84,uStack_80,uStack_7c,0);
  puVar4 = *(undefined4 **)(_UNK_010b69f8 + 0x10b667c);
  uStack_38 = uStack_88;
  uStack_34 = uStack_84;
  uStack_30 = uStack_80;
  uStack_2c = uStack_7c;
  uVar3 = thunk_FUN_00f00cdc(*puVar4);
  System_Action___ctor_2b10bac(uVar3,iVar1,**(undefined4 **)(_UNK_010b69fc + 0x10b669c),0);
  PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_98,&uStack_38,uVar3,0,0);
  uStack_38 = uStack_98;
  uStack_34 = uStack_94;
  uStack_30 = uStack_90;
  uStack_2c = uStack_8c;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_a8,&uStack_38,0x3dcccccd,0);
  uStack_38 = uStack_a8;
  uStack_34 = uStack_a4;
  uStack_30 = uStack_a0;
  uStack_2c = uStack_9c;
  uVar3 = thunk_FUN_00f00cdc(*puVar4);
  System_Action___ctor_2b10bac(uVar3,iVar1,**(undefined4 **)(_UNK_010b6a00 + 0x10b670c),0);
  PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_b8,&uStack_38,uVar3,0,0);
  uStack_38 = uStack_b8;
  uStack_34 = uStack_b4;
  uStack_30 = uStack_b0;
  uStack_2c = uStack_ac;
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x24),0);
  PrimeTween_Tween__Scale_2ce4684(&uStack_c8,uVar3,0x3f800000,0x3e19999a,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_c8,&uStack_38,uStack_c8,uStack_c4,uStack_c0,uStack_bc,0);
  uStack_38 = uStack_c8;
  uStack_34 = uStack_c4;
  uStack_30 = uStack_c0;
  uStack_2c = uStack_bc;
  uVar3 = thunk_FUN_00f00cdc(*puVar4);
  System_Action___ctor_2b10bac(uVar3,iVar1,**(undefined4 **)(_UNK_010b6a04 + 0x10b67e8),0);
  PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_d8,&uStack_38,uVar3,0,0);
  uStack_38 = uStack_d8;
  uStack_34 = uStack_d4;
  uStack_30 = uStack_d0;
  uStack_2c = uStack_cc;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_e8,&uStack_38,0x3dcccccd,0);
  uStack_38 = uStack_e8;
  uStack_34 = uStack_e4;
  uStack_30 = uStack_e0;
  uStack_2c = uStack_dc;
  uVar3 = thunk_FUN_00f00cdc(*puVar4);
  System_Action___ctor_2b10bac(uVar3,iVar1,**(undefined4 **)(_UNK_010b6a08 + 0x10b6858),0);
  PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_f8,&uStack_38,uVar3,0,0);
  uStack_38 = uStack_f8;
  uStack_34 = uStack_f4;
  uStack_30 = uStack_f0;
  uStack_2c = uStack_ec;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_108,&uStack_38,0x3e800000,0);
  uStack_38 = uStack_108;
  uStack_34 = uStack_104;
  uStack_30 = uStack_100;
  uStack_2c = uStack_fc;
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x2c),0);
  PrimeTween_Tween__Scale_2ce4684(&uStack_118,uVar3,0x3f800000,0x3e19999a,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_118,&uStack_38,uStack_118,uStack_114,uStack_110,uStack_10c,0);
  uStack_38 = uStack_118;
  uStack_34 = uStack_114;
  uStack_30 = uStack_110;
  uStack_2c = uStack_10c;
  uVar3 = thunk_FUN_00f00cdc(*puVar4);
  System_Action___ctor_2b10bac(uVar3,iVar1,**(undefined4 **)(_UNK_010b6a0c + 0x10b6954),0);
  PrimeTween_Sequence__ChainCallback_2cf0180(auStack_128,&uStack_38,uVar3,0,0);
  return;
}

