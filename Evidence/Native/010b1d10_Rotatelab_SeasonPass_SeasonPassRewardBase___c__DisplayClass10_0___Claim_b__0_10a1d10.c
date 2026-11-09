/* IL2CPP: Rotatelab.SeasonPass.SeasonPassRewardBase.<>c__DisplayClass10_0$$<Claim>b__0
void Rotatelab_SeasonPass_SeasonPassRewardBase___c__DisplayClass10_0___Claim_b__0 (Rotatelab_SeasonPass_SeasonPassRewardBase___c__DisplayClass10_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassRewardBase.<>c__DisplayClass10_0$$<Claim>b__0
   void Rotatelab_SeasonPass_SeasonPassRewardBase___c__DisplayClass10_0___Claim_b__0
   (Rotatelab_SeasonPass_SeasonPassRewardBase___c__DisplayClass10_0_o* __this, const MethodInfo*
   method); */

void Rotatelab_SeasonPass_SeasonPassRewardBase___c__DisplayClass10_0___Claim_b__0_10a1d10
               (int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  pcVar5 = (char *)(_UNK_010b1fc4 + 0x10b1d30);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b1fc8 + 0x10b1d44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b1fcc + 0x10b1d50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b1fd0 + 0x10b1d5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b1fd4 + 0x10b1d68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b1fd8 + 0x10b1d74));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010b1fdc + 0x10b1d88));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar1,9,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010b1fe0 + 0x10b1db8));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 0x28);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                    (iVar1,0,**(undefined4 **)(_UNK_010b1fe4 + 0x10b1dec));
  pfVar3 = (float *)&UNK_010b1fb8;
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    pfVar3 = (float *)&UNK_010b1fbc;
  }
  fVar8 = *pfVar3;
  if (*(uint *)(param_1 + 8) == 0) {
    fVar8 = _UNK_010b1fc0;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 0x10);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = UnityEngine_Component__get_transform_35fe190(iVar6,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_54,iVar6,0);
  pcVar5 = (char *)(_UNK_010b1fe8 + 0x10b1e74);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b1fec + 0x10b1e90));
    *pcVar5 = '\x01';
  }
  iVar6 = *(int *)(**(int **)(_UNK_010b1ff0 + 0x10b1ea8) + 0x5c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_SeasonPassRewardParticle__Init_fc3f04
            (iVar2,*(undefined4 *)(param_1 + 0xc),fStack_54 + fVar8 * *(float *)(iVar6 + 0x3c),
             fStack_50 + fVar8 * *(float *)(iVar6 + 0x40),
             fStack_4c + fVar8 * *(float *)(iVar6 + 0x44),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___Remove_267f138
            (iVar1,iVar2,**(undefined4 **)(_UNK_010b1ff4 + 0x10b1f10));
  iVar6 = *(int *)(iVar1 + 8);
  uVar7 = *(uint *)(iVar1 + 0xc);
  piVar4 = *(int **)(_UNK_010b1ffc + 0x10b1f5c);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar7 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar7 + 1;
    piVar4 = (int *)(iVar6 + uVar7 * 4 + 0x10);
    *piVar4 = iVar2;
    thunk_FUN_00ec5080(piVar4,iVar2);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar1,iVar2,*(undefined4 *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38));
  }
  return;
}

