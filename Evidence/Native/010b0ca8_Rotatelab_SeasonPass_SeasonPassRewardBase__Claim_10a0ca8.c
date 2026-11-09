/* IL2CPP: Rotatelab.SeasonPass.SeasonPassRewardBase$$Claim
void Rotatelab_SeasonPass_SeasonPassRewardBase__Claim (Rotatelab_SeasonPass_SeasonPassRewardBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassRewardBase$$Claim
   void Rotatelab_SeasonPass_SeasonPassRewardBase__Claim
   (Rotatelab_SeasonPass_SeasonPassRewardBase_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassRewardBase__Claim_10a0ca8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  
  pcVar3 = (char *)(_UNK_010b0eb8 + 0x10b0cc8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b0ebc + 0x10b0cdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b0ec0 + 0x10b0ce8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b0ec4 + 0x10b0cf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b0ec8 + 0x10b0d00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b0ecc + 0x10b0d0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b0ed0 + 0x10b0d18));
    *pcVar3 = '\x01';
  }
  iVar8 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x28) + 0xc);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar4 + 0xc) <= iVar8) {
      return;
    }
    iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b0ed4 + 0x10b0d60));
    System_Object___ctor_2bb93bc(iVar4,0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(int *)(iVar4 + 0x10) = param_1;
    thunk_FUN_00ec5080((int *)(iVar4 + 0x10),param_1);
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0xc);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = System_Collections_Generic_List_object___get_Item_267d814
                      (iVar5,iVar8,**(undefined4 **)(_UNK_010b0ed8 + 0x10b0dbc));
    piVar6 = (int *)(iVar4 + 0xc);
    *piVar6 = iVar5;
    thunk_FUN_00ec5080(piVar6,iVar5);
    iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010b0edc + 0x10b0de4));
    iVar7 = *piVar6;
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar5 == 0) break;
    Rotatelab_Currency_CurrencyManager__IncreaseCurrency_10839a0
              (iVar5,*(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(iVar7 + 0x18),
               *(undefined4 *)(iVar7 + 0x1c),0,0,0);
    puVar1 = *(undefined4 **)(_UNK_010b0ee0 + 0x10b0e54);
    *(int *)(iVar4 + 8) = iVar8;
    uVar2 = thunk_FUN_00f00cdc(*puVar1);
    DG_Tweening_TweenCallback___ctor_11657e8
              (uVar2,iVar4,**(undefined4 **)(_UNK_010b0ee4 + 0x10b0e74),0);
    fVar9 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
    DG_Tweening_DOVirtual__DelayedCall_11685c0(fVar9 * 0.25,uVar2,1,0);
    iVar8 = iVar8 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

