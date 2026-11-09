/* IL2CPP: Rotatelab.ChainOffer.BaseChainOfferController$$PlayRewardParticles
void Rotatelab_ChainOffer_BaseChainOfferController__PlayRewardParticles (Rotatelab_ChainOffer_BaseChainOfferController_o* __this, Rotatelab_ChainOffer_OfferButton_o* offerButton, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.BaseChainOfferController$$PlayRewardParticles
   void Rotatelab_ChainOffer_BaseChainOfferController__PlayRewardParticles
   (Rotatelab_ChainOffer_BaseChainOfferController_o* __this, Rotatelab_ChainOffer_OfferButton_o*
   offerButton, const MethodInfo* method); */

void Rotatelab_ChainOffer_BaseChainOfferController__PlayRewardParticles_10ea1b4
               (int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_010fa580 + 0x10fa1d0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fa584 + 0x10fa1e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fa588 + 0x10fa1f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fa58c + 0x10fa1fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fa590 + 0x10fa208));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fa594 + 0x10fa214));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fa598 + 0x10fa220));
    *pcVar6 = '\x01';
  }
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar1 = (int *)(**(code **)(*param_2 + 0xe8))(param_2,*(undefined4 *)(*param_2 + 0xec));
  uVar11 = 0;
  do {
    iVar2 = (**(code **)(*param_2 + 0xe0))(param_2,*(undefined4 *)(*param_2 + 0xe4));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0xc) <= (int)uVar11) {
      return;
    }
    if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x40) + 0xc) <= (int)uVar11) {
      uVar7 = *(undefined4 *)(param_1 + 0x38);
      uVar9 = *(undefined4 *)(param_1 + 0x3c);
      iVar2 = *(int *)(param_1 + 0x40);
      if (*(int *)(**(int **)(_UNK_010fa59c + 0x10fa2b0) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar7 = UnityEngine_Object__Instantiate_object__14d4e4c
                        (uVar9,uVar7,0,**(undefined4 **)(_UNK_010fa5a0 + 0x10fa2e0));
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = *(int *)(iVar2 + 8);
      uVar8 = *(uint *)(iVar2 + 0xc);
      piVar5 = *(int **)(_UNK_010fa5a4 + 0x10fa318);
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar8 < *(uint *)(iVar10 + 0xc)) {
        *(uint *)(iVar2 + 0xc) = uVar8 + 1;
        puVar3 = (undefined4 *)(iVar10 + uVar8 * 4 + 0x10);
        *puVar3 = uVar7;
        thunk_FUN_00ec5080(puVar3,uVar7);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (iVar2,uVar7,*(undefined4 *)(*(int *)(*(int *)(*piVar5 + 0x10) + 0x60) + 0x38));
      }
    }
    if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x40),uVar11,**(undefined4 **)(_UNK_010fa5a8 + 0x10fa388))
    ;
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar10 = *piVar1;
    uVar8 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar8 != 0) {
      piVar5 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_010fa5ac + 0x10fa3b0)) {
          puVar3 = (undefined4 *)(iVar10 + *piVar5 * 8 + 0xc0);
          goto LAB_010fa3f8;
        }
        uVar8 = uVar8 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar1,**(int **)(_UNK_010fa5ac + 0x10fa3b0),0);
LAB_010fa3f8:
    iVar10 = (*(code *)*puVar3)(piVar1,uVar11,puVar3[1]);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar10 + 0x10) + 0x80);
    iVar10 = (**(code **)(*param_2 + 0xe0))(param_2,*(undefined4 *)(*param_2 + 0xe4));
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar10 + 0xc) <= uVar11) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar10 = *(int *)(iVar10 + uVar11 * 4 + 0x10);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *piVar1;
    uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
    uVar9 = *(undefined4 *)(iVar10 + 0x18);
    if (uVar8 != 0) {
      piVar5 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_010fa5b0 + 0x10fa48c)) {
          puVar3 = (undefined4 *)(iVar4 + *piVar5 * 8 + 0xc0);
          goto LAB_010fa4d8;
        }
        uVar8 = uVar8 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar1,**(int **)(_UNK_010fa5b0 + 0x10fa48c),0);
LAB_010fa4d8:
    iVar10 = (*(code *)*puVar3)(piVar1,uVar11,puVar3[1]);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar10 = UnityEngine_Component__get_transform_35fe190(*(int *)(iVar10 + 0x10),0);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_position_36149b0(&uStack_30,iVar10,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_ChainOffer_RewardParticle__Play_10eab18
              (iVar2,uVar7,uVar9,uStack_30,uStack_2c,uStack_28);
    uVar11 = uVar11 + 1;
  } while( true );
}

