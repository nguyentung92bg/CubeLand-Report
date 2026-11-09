/* IL2CPP: Rotatelab.Shop.StarChallengeController$$PlayRewardParticles
void Rotatelab_Shop_StarChallengeController__PlayRewardParticles (Rotatelab_Shop_StarChallengeController_o* __this, Rotatelab_Shop_StarChallengeSO_RewardSlot_o* slot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010d9c64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$PlayRewardParticles
   void Rotatelab_Shop_StarChallengeController__PlayRewardParticles
   (Rotatelab_Shop_StarChallengeController_o* __this, Rotatelab_Shop_StarChallengeSO_RewardSlot_o*
   slot, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeController__PlayRewardParticles_10c9960(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  undefined1 auStack_3c [12];
  undefined4 uStack_30;
  int **ppiStack_2c;
  int *piStack_28;
  
  pcVar10 = (char *)(_UNK_010d9cc4 + 0x10d997c);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d9cc8 + 0x10d9990));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d9ccc + 0x10d999c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d9cd0 + 0x10d99a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d9cd4 + 0x10d99b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d9cd8 + 0x10d99c0));
    *pcVar10 = '\x01';
  }
  piStack_28 = (int *)0x0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar2 = (int *)Rotatelab_Shop_StarChallengeSO_RewardSlot__get_GrantedRewards_10c4780(param_2);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *piVar2;
  uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_010d9cdc + 0x10d9a04)) {
        puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
        goto LAB_010d9a4c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(piVar2,**(int **)(_UNK_010d9cdc + 0x10d9a04),0);
LAB_010d9a4c:
  piStack_28 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
  ppiStack_2c = &piStack_28;
  uStack_30 = 0;
  piVar2 = *(int **)(_UNK_010d9ce0 + 0x10d9a80);
  piVar8 = *(int **)(_UNK_010d9ce4 + 0x10d9a88);
  puVar4 = *(undefined4 **)(_UNK_010d9ce8 + 0x10d9a90);
  do {
    piVar1 = piStack_28;
    if (piStack_28 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *piStack_28;
    uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar2) {
          puVar5 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
          goto LAB_010d9aec;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined4 *)FUN_00efdb38(piStack_28,*piVar2,0);
LAB_010d9aec:
    iVar3 = (*(code *)*puVar5)(piVar1,puVar5[1]);
    piVar1 = piStack_28;
    if (iVar3 == 0) {
      if (piStack_28 == (int *)0x0) {
        return;
      }
      iVar3 = *piStack_28;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 == 0) goto LAB_010d9c30;
      piVar2 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      break;
    }
    if (piStack_28 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *piStack_28;
    uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar8) {
          puVar5 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
          goto LAB_010d9b64;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined4 *)FUN_00efdb38(piStack_28,*piVar8,0);
LAB_010d9b64:
    uVar6 = (*(code *)*puVar5)(piVar1,puVar5[1]);
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x20),0,*puVar4);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(iVar3,0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_position_36149b0(auStack_3c,iVar3,0);
    Rotatelab_Shop_StarChallengeController__PlayRewardParticle_10c9cf0(param_1,uVar6);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar2 = piVar2 + 2;
    if (uVar7 == 0) break;
    if (piVar2[-1] == **(int **)(_UNK_010d9cec + 0x10d9c04)) {
      puVar4 = (undefined4 *)(iVar3 + *piVar2 * 8 + 0xc0);
      goto LAB_010d9c4c;
    }
  }
LAB_010d9c30:
  puVar4 = (undefined4 *)FUN_00efdb38(piStack_28,**(int **)(_UNK_010d9cec + 0x10d9c04),0);
LAB_010d9c4c:
  (*(code *)*puVar4)(piVar1,puVar4[1]);
  return;
}

