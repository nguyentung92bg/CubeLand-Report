/* IL2CPP: Rotatelab.MetaProgressionSingleReward$$CollectReward
void Rotatelab_MetaProgressionSingleReward__CollectReward (Rotatelab_MetaProgressionSingleReward_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionSingleReward$$CollectReward
   void Rotatelab_MetaProgressionSingleReward__CollectReward
   (Rotatelab_MetaProgressionSingleReward_o* __this, const MethodInfo* method); */

void Rotatelab_MetaProgressionSingleReward__CollectReward_fbfa2c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  pcVar5 = (char *)(_UNK_00fcfda4 + 0xfcfa44);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcfda8 + 0xfcfa58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcfdac + 0xfcfa64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcfdb0 + 0xfcfa70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcfdb4 + 0xfcfa7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcfdb8 + 0xfcfa88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcfdbc + 0xfcfa94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcfdc0 + 0xfcfaa0));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fcfdc4 + 0xfcfab4));
  iVar6 = *(int *)(param_1 + 0x18);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Currency_CurrencyManager__IncreaseCurrency_10839a0
            (iVar1,*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0x10),
             *(undefined4 *)(iVar6 + 0x14),0,0,0);
  uVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  pcVar5 = (char *)(_UNK_00fcfdc8 + 0xfcfb30);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcfdcc + 0xfcfb44));
    *pcVar5 = '\x01';
  }
  iVar1 = *(int *)(**(int **)(_UNK_00fcfdd0 + 0xfcfb5c) + 0x5c);
  fVar9 = *(float *)(iVar1 + 0x10);
  fVar10 = *(float *)(iVar1 + 0x14);
  fVar8 = *(float *)(iVar1 + 0xc);
  if (*(int *)(**(int **)(_UNK_00fcfdd4 + 0xfcfb84) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__PunchScale_2ceb894
            (&uStack_38,uVar2,fVar8 * 0.25,fVar9 * 0.25,fVar10 * 0.25,0x3e19999a,0x41200000,1,0,0,1,
             0,0,0,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fcfdd8 + 0xfcfc04));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar1,9,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fcfddc + 0xfcfc34));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 0x38);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = System_Collections_Generic_List_object___get_Item_267d814
                    (iVar1,0,**(undefined4 **)(_UNK_00fcfde0 + 0xfcfc68));
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_38,iVar3,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_MetaProgressionRewardParticle__Init_fbe92c
            (iVar6,*(undefined4 *)(param_1 + 0x18),uStack_38,uStack_34,uStack_30,0);
  if (iVar1 != 0) {
    System_Collections_Generic_List_object___Remove_267f138
              (iVar1,iVar6,**(undefined4 **)(_UNK_00fcfde4 + 0xfcfd00));
    iVar3 = *(int *)(iVar1 + 8);
    uVar7 = *(uint *)(iVar1 + 0xc);
    piVar4 = *(int **)(_UNK_00fcfdec + 0xfcfd4c);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar7 < *(uint *)(iVar3 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar7 + 1;
      piVar4 = (int *)(iVar3 + uVar7 * 4 + 0x10);
      *piVar4 = iVar6;
      thunk_FUN_00ec5080(piVar4,iVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar1,iVar6,*(undefined4 *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

