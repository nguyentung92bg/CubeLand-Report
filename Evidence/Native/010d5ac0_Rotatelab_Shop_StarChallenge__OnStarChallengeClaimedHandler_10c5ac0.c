/* IL2CPP: Rotatelab.Shop.StarChallenge$$OnStarChallengeClaimedHandler
void Rotatelab_Shop_StarChallenge__OnStarChallengeClaimedHandler (Rotatelab_Shop_StarChallenge_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010d5e04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallenge$$OnStarChallengeClaimedHandler
   void Rotatelab_Shop_StarChallenge__OnStarChallengeClaimedHandler (Rotatelab_Shop_StarChallenge_o*
   __this, const MethodInfo* method); */

void Rotatelab_Shop_StarChallenge__OnStarChallengeClaimedHandler_10c5ac0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int **ppiStack_2c;
  int *piStack_28;
  
  pcVar9 = (char *)(_UNK_010d5e5c + 0x10d5ad8);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d5e60 + 0x10d5aec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d5e64 + 0x10d5af8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d5e68 + 0x10d5b04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d5e6c + 0x10d5b10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d5e70 + 0x10d5b1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d5e74 + 0x10d5b28));
    *pcVar9 = '\x01';
  }
  piStack_28 = (int *)0x0;
  iVar1 = Rotatelab_Shop_StarChallengePopup__get_CurrentStarChallengeIndex_10c5e90();
  if (iVar1 != *(int *)(param_1 + 0x38)) {
    return;
  }
  if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0xc);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar2 = (int *)Rotatelab_Shop_StarChallengeSO_RewardSlot__get_GrantedRewards_10c4780(iVar1);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar2;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_010d5e78 + 0x10d5b90)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_010d5bd8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(piVar2,**(int **)(_UNK_010d5e78 + 0x10d5b90),0);
LAB_010d5bd8:
  piStack_28 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
  ppiStack_2c = &piStack_28;
  uStack_30 = 0;
  piVar2 = *(int **)(_UNK_010d5e7c + 0x10d5c18);
  do {
    piVar6 = piStack_28;
    if (piStack_28 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piStack_28;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar2) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_010d5c70;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piStack_28,*piVar2,0);
LAB_010d5c70:
    iVar1 = (*(code *)*puVar3)(piVar6,puVar3[1]);
    piVar6 = piStack_28;
    if (iVar1 == 0) {
      if (piStack_28 == (int *)0x0) {
        return;
      }
      iVar1 = *piStack_28;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 == 0) goto LAB_010d5dd0;
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      break;
    }
    if (piStack_28 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piStack_28;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_010d5e80 + 0x10d5ca8)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_010d5cf0;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piStack_28,**(int **)(_UNK_010d5e80 + 0x10d5ca8),0);
LAB_010d5cf0:
    iVar1 = (*(code *)*puVar3)(piVar6,puVar3[1]);
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010d5e84 + 0x10d5d10));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    uVar8 = *(undefined4 *)(iVar1 + 0x18);
    uVar10 = *(undefined4 *)(iVar1 + 0x1c);
    uStack_34 = 0;
    uStack_38 = 0;
    System_Nullable_float____ctor_17dea40
              (&uStack_38,0x3fa00000,**(undefined4 **)(_UNK_010d5e88 + 0x10d5d38));
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Currency_CurrencyManager__IncreaseCurrency_10839a0
              (iVar4,uVar11,uVar8,uVar10,uStack_38,uStack_34,0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar2 = piVar2 + 2;
    if (uVar5 == 0) break;
    if (piVar2[-1] == **(int **)(_UNK_010d5e8c + 0x10d5da4)) {
      puVar3 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
      goto LAB_010d5dec;
    }
  }
LAB_010d5dd0:
  puVar3 = (undefined4 *)FUN_00efdb38(piStack_28,**(int **)(_UNK_010d5e8c + 0x10d5da4),0);
LAB_010d5dec:
  (*(code *)*puVar3)(piVar6,puVar3[1]);
  return;
}

