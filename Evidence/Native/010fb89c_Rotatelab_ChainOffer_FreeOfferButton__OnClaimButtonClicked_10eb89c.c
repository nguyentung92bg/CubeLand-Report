/* IL2CPP: Rotatelab.ChainOffer.FreeOfferButton$$OnClaimButtonClicked
void Rotatelab_ChainOffer_FreeOfferButton__OnClaimButtonClicked (Rotatelab_ChainOffer_FreeOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.FreeOfferButton$$OnClaimButtonClicked
   void Rotatelab_ChainOffer_FreeOfferButton__OnClaimButtonClicked
   (Rotatelab_ChainOffer_FreeOfferButton_o* __this, const MethodInfo* method); */

void Rotatelab_ChainOffer_FreeOfferButton__OnClaimButtonClicked_10eb89c(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 extraout_r1;
  int extraout_r1_00;
  int *piVar12;
  char *pcVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar13 = (char *)(_UNK_010fb9a4 + 0x10fb8b4);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fb9a8 + 0x10fb8c8));
    *pcVar13 = '\x01';
  }
  if (param_1[9] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar17 = *(int *)(param_1[9] + 0xc);
  uVar14 = 0;
  while( true ) {
    if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar17 + 0xc) <= (int)uVar14) break;
    if (*(uint *)(iVar17 + 0xc) <= uVar14) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar16 = *(int *)(iVar17 + 0x10 + uVar14 * 4);
    iVar10 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                       (**(undefined4 **)(_UNK_010fb9ac + 0x10fb924));
    if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_38 = 0;
    uStack_34 = 0;
    Rotatelab_Currency_CurrencyManager__IncreaseCurrency_10839a0
              (iVar10,*(undefined4 *)(iVar16 + 8),*(undefined4 *)(iVar16 + 0x10),
               *(undefined4 *)(iVar16 + 0x14));
    uVar14 = uVar14 + 1;
  }
  piVar15 = (int *)param_1[8];
  if (piVar15 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar13 = (char *)(_UNK_010fa0fc + 0x10f98ec);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fa100 + 0x10f9900));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fa104 + 0x10f990c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fa108 + 0x10f9918));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fa10c + 0x10f9924));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fa110 + 0x10f9930));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fa114 + 0x10f993c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fa118 + 0x10f9948));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fa11c + 0x10f9954));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fa120 + 0x10f9960));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fa124 + 0x10f996c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fa128 + 0x10f9978));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fa12c + 0x10f9984));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fa130 + 0x10f9990));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fa134 + 0x10f999c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fa138 + 0x10f99a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fa13c + 0x10f99b4));
    *pcVar13 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  if (piVar15[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = System_Collections_Generic_List_object___get_Item_267d814
                    (piVar15[0xc],0,**(undefined4 **)(_UNK_010fa140 + 0x10f99e8));
  if (*(int *)(**(int **)(_UNK_010fa144 + 0x10f9a00) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar17 = UnityEngine_Object__op_Inequality_36018e4(uVar7,param_1,0);
  if (iVar17 == 0) {
    Rotatelab_ChainOffer_BaseChainOfferController__PlayRewardParticles_10ea1b4(piVar15,param_1);
    iVar17 = piVar15[0xc];
    if (*(int *)(**(int **)(_UNK_010fa168 + 0x10f9b08) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar17 = Rotatelab_Extensions__RemoveAtAndReturn_object__1488144
                       (iVar17,0,**(undefined4 **)(_UNK_010fa16c + 0x10f9b2c));
    if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_ChainOffer_OfferButton__Claim_10ea5b4(&uStack_58,iVar17);
    uVar14 = 0;
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    while( true ) {
      if (piVar15[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(piVar15[0xc] + 0xc) <= (int)uVar14) break;
      if (piVar15[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar7 = System_Collections_Generic_List_object___get_Item_267d814
                        (piVar15[0xc],uVar14,**(undefined4 **)(_UNK_010fa170 + 0x10f9ba0));
      if (*(int *)(**(int **)(_UNK_010fa174 + 0x10f9bb8) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar7 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar7,0);
      iVar17 = piVar15[9];
      if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar17 + 0xc) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar17 = *(int *)(iVar17 + uVar14 * 4 + 0x10);
      if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_RectTransform__get_anchoredPosition_3613500(&uStack_58,iVar17,0);
      uVar2 = uStack_54;
      uVar9 = uStack_58;
      PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_58,9,0);
      uVar6 = uStack_48;
      uVar5 = uStack_4c;
      uVar4 = uStack_50;
      uVar3 = uStack_54;
      uVar1 = uStack_58;
      uVar8 = PrimeTween_Sequence__get_duration_2ceee58(&uStack_40,0);
      if (*(int *)(**(int **)(_UNK_010fa178 + 0x10f9c70) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__UIAnchoredPosition_2ce6e40
                (&uStack_58,uVar7,uVar9,uVar2,0x3ecccccd,uVar1,uVar3,uVar4,uVar5,uVar6,1,0,uVar8,0,0
                 ,0);
      PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_58,&uStack_40,0x3dcccccd,0);
      if (uVar14 == 0) {
        if (piVar15[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar7 = System_Collections_Generic_List_object___get_Item_267d814
                          (piVar15[0xc],0,**(undefined4 **)(_UNK_010fa17c + 0x10f9d18));
        piVar12 = *(int **)(_UNK_010fa180 + 0x10f9d30);
        iVar17 = *piVar12;
        if (*(int *)(iVar17 + 0x74) == 0) {
          FUN_00ec3934();
          iVar17 = *piVar12;
        }
        puVar11 = *(undefined4 **)(iVar17 + 0x5c);
        iVar10 = puVar11[2];
        if (iVar10 == 0) {
          if (*(int *)(iVar17 + 0x74) == 0) {
            FUN_00ec3934();
            puVar11 = *(undefined4 **)(**(int **)(_UNK_010fa184 + 0x10f9d70) + 0x5c);
          }
          uVar9 = *puVar11;
          iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010fa188 + 0x10f9d80));
          System_Action_object____ctor_1f11414
                    (iVar10,uVar9,**(undefined4 **)(_UNK_010fa18c + 0x10f9da0),0);
          piVar12 = (int *)(*(int *)(**(int **)(_UNK_010fa190 + 0x10f9db8) + 0x5c) + 8);
          *piVar12 = iVar10;
          thunk_FUN_00ec5080(piVar12,iVar10);
        }
        PrimeTween_Sequence__ChainCallback_object__15b4c64
                  (&uStack_58,&uStack_40,uVar7,iVar10,0,**(undefined4 **)(_UNK_010fa194 + 0x10f9dd8)
                  );
      }
      uVar14 = uVar14 + 1;
    }
    iVar17 = piVar15[9];
    if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar10 = piVar15[0xc];
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar10 = System_Collections_Generic_List_object___get_Item_267d814
                       (iVar10,*(int *)(iVar10 + 0xc) + -1,
                        **(undefined4 **)(_UNK_010fa198 + 0x10f9e20));
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar10 = Rotatelab_ChainOffer_OfferButton__get_OfferIndex_10eaa68(iVar10);
    if (piVar15[7] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar16 = *(int *)(piVar15[7] + 0xc);
    if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    FUN_00f88884(iVar10 + 1,*(undefined4 *)(iVar16 + 0xc));
    iVar17 = (**(code **)(*piVar15 + 0x108))
                       (piVar15,*(int *)(iVar17 + 0xc) + -1,extraout_r1,
                        *(undefined4 *)(*piVar15 + 0x10c));
    if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar10 = UnityEngine_Component__get_transform_35fe190(iVar17,0);
    pcVar13 = (char *)(_UNK_010fa19c + 0x10f9ec4);
    if (*pcVar13 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010fa1a0 + 0x10f9ed8));
      *pcVar13 = '\x01';
    }
    puVar11 = *(undefined4 **)(**(int **)(_UNK_010fa1a4 + 0x10f9ef0) + 0x5c);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc(iVar10,*puVar11,puVar11[1],puVar11[2],0);
    if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = UnityEngine_Component__get_transform_35fe190(iVar17,0);
    if (*(int *)(**(int **)(_UNK_010fa1a8 + 0x10f9f4c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Scale_2ce4684(&uStack_58,uVar7,0x3f800000,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_58,&uStack_40,uStack_58,uStack_54,uStack_50,uStack_4c,0);
    iVar17 = *(int *)(**(int **)(_UNK_010fa1ac + 0x10f9fd0) + 0x74);
    if (iVar17 == 0) {
      FUN_00ec3934();
      iVar17 = extraout_r1_00;
    }
    Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
              (&uStack_58,iVar17,uStack_58,uStack_54,uStack_50,uStack_4c,0);
    iVar17 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    iVar10 = piVar15[0x12];
    piVar15[0x12] = iVar10 + 1;
    if (iVar17 != 0) {
      puVar11 = *(undefined4 **)(_UNK_010fa1b0 + 0x10fa040);
      *(int *)(iVar17 + 0x94) = iVar10 + 1;
      iVar17 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar11);
      if (iVar17 != 0) {
        Rotatelab_IAP_PurchasesListener__FetchProducts_109a758(iVar17,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (param_1 != (int *)0x0) {
    uVar14 = (uint)*(byte *)(**(int **)(_UNK_010fa148 + 0x10f9a3c) + 0xb8);
    if ((uVar14 <= *(byte *)(*param_1 + 0xb8)) &&
       (*(int *)(*(int *)(*param_1 + 100) + uVar14 * 4 + -4) ==
        **(int **)(_UNK_010fa148 + 0x10f9a3c))) {
      if (param_1[9] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar17 = *(int *)(param_1[9] + 8);
      if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar7 = *(undefined4 *)(iVar17 + 0xc);
      if (piVar15[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uStack_58 = System_Collections_Generic_List_object___IndexOf_267e86c
                            (piVar15[0xc],param_1,**(undefined4 **)(_UNK_010fa14c + 0x10fa0b8));
      uVar9 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_010fa150 + 0x10fa0cc) + 0x24),&uStack_58);
      uVar7 = System_String__Format_2a0c264
                        (**(undefined4 **)(_UNK_010fa154 + 0x10fa0f4),uVar7,uVar9,0);
      goto LAB_010f9ac0;
    }
  }
  if (piVar15[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_58 = System_Collections_Generic_List_object___IndexOf_267e86c
                        (piVar15[0xc],param_1,**(undefined4 **)(_UNK_010fa15c + 0x10f9a84));
  uVar7 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_010fa160 + 0x10f9a98) + 0x24),&uStack_58);
  uVar7 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_010fa164 + 0x10f9abc),uVar7,0);
LAB_010f9ac0:
  if (*(int *)(**(int **)(_UNK_010fa158 + 0x10f9ad0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Debug__LogWarning_35b0090(uVar7,0);
  return;
}

