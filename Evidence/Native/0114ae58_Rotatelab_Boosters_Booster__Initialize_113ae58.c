/* IL2CPP: Rotatelab.Boosters.Booster$$Initialize
void Rotatelab_Boosters_Booster__Initialize (Rotatelab_Boosters_Booster_o* __this, Rotatelab_Boosters_BoosterBaseData_o* baseData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.Booster$$Initialize
   void Rotatelab_Boosters_Booster__Initialize (Rotatelab_Boosters_Booster_o* __this,
   Rotatelab_Boosters_BoosterBaseData_o* baseData, const MethodInfo* method); */

void Rotatelab_Boosters_Booster__Initialize_113ae58(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  bool bVar13;
  uint in_fpscr;
  undefined4 uVar14;
  
  pcVar6 = (char *)(_UNK_0114b1a0 + 0x114ae74);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b1a4 + 0x114ae88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b1a8 + 0x114ae94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b1ac + 0x114aea0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b1b0 + 0x114aeac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b1b4 + 0x114aeb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b1b8 + 0x114aec4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b1bc + 0x114aed0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b1c0 + 0x114aedc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b1c4 + 0x114aee8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b1c8 + 0x114aef4));
    *pcVar6 = '\x01';
  }
  piVar9 = (int *)(param_1 + 0x10);
  *piVar9 = param_2;
  thunk_FUN_00ec5080(piVar9,param_2);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc
            (*(int *)(param_1 + 0x18),*(undefined4 *)(param_2 + 0x10),0);
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar14 = VectorSignedToFloat(*(undefined4 *)(param_2 + 0x24),(byte)(in_fpscr >> 0x16) & 3);
  TMPro_TMP_Text__SetText_34ffc34
            (*(int *)(param_1 + 0x2c),**(undefined4 **)(_UNK_0114b1cc + 0x114af6c),uVar14,0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0xb4);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEventBase__RemoveAllListeners_361aee0(iVar7,0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0xb4);
  uVar14 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0114b1d0 + 0x114afc0));
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar14,param_1,**(undefined4 **)(_UNK_0114b1d4 + 0x114afe0),0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar7,uVar14,0);
  Rotatelab_Boosters_Booster__OnBoosterStateChanged_113b1f4(param_1);
  iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0114b1d8 + 0x114b018));
  uVar14 = *(undefined4 *)(param_2 + 0xc);
  if (*(int *)(**(int **)(_UNK_0114b1dc + 0x114b02c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar14 = Rotatelab_Extensions__ToParticleImageType_fc1688(uVar14,0);
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_FX_ParticleImageManager__SetTargetForParticleTargetData_1100910(iVar7,uVar14,uVar1,0);
  puVar10 = *(undefined4 **)(_UNK_0114b1e0 + 0x114b08c);
  iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
  if (*piVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = Rotatelab_Currency_CurrencyManager__GetCurrency_10808a4
                    (iVar7,*(undefined4 *)(*piVar9 + 0xc),0);
  puVar11 = *(undefined4 **)(_UNK_0114b1e4 + 0x114b0d4);
  uVar14 = thunk_FUN_00f00cdc(*puVar11);
  puVar12 = *(undefined4 **)(_UNK_0114b1e8 + 0x114b0f0);
  System_Action_long____ctor_1f10724(uVar14,param_1,*puVar12,0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_ObservableValue_long___remove_OnValueChanged_185d57c
            (iVar7,uVar14,**(undefined4 **)(_UNK_0114b1ec + 0x114b110));
  iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
  if (*piVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = Rotatelab_Currency_CurrencyManager__GetCurrency_10808a4
                    (iVar7,*(undefined4 *)(*piVar9 + 0xc),0);
  uVar14 = thunk_FUN_00f00cdc(*puVar11);
  System_Action_long____ctor_1f10724(uVar14,param_1,*puVar12,0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = **(int **)(_UNK_0114b1f0 + 0x114b190);
  iVar2 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar3 = System_Delegate__Combine_2bbca94(iVar2,uVar14,0);
    iVar8 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x18);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = FUN_00efd768(iVar8);
    }
    iVar4 = 0;
    if ((iVar3 != 0) && (iVar4 = thunk_FUN_00f00bc8(iVar3,iVar8), iVar4 == 0)) break;
    iVar3 = FUN_00efd180((int *)(iVar7 + 0x10),iVar4,iVar2);
    bVar13 = iVar3 == iVar2;
    iVar2 = iVar3;
    if (bVar13) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00ec3e28(iVar3,iVar8);
}

