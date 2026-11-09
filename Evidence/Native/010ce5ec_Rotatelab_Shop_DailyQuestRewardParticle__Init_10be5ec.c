/* IL2CPP: Rotatelab.Shop.DailyQuestRewardParticle$$Init
void Rotatelab_Shop_DailyQuestRewardParticle__Init (Rotatelab_Shop_DailyQuestRewardParticle_o* __this, Rotatelab_Shop_DailyQuestSo_DailyQuestSingleRewardData_o* rewardData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestRewardParticle$$Init
   void Rotatelab_Shop_DailyQuestRewardParticle__Init (Rotatelab_Shop_DailyQuestRewardParticle_o*
   __this, Rotatelab_Shop_DailyQuestSo_DailyQuestSingleRewardData_o* rewardData, const MethodInfo*
   method); */

void Rotatelab_Shop_DailyQuestRewardParticle__Init_10be5ec(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uStack_24;
  
  pcVar3 = (char *)(_UNK_010ce92c + 0x10ce608);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce930 + 0x10ce61c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce934 + 0x10ce628));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce938 + 0x10ce634));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce93c + 0x10ce640));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce940 + 0x10ce64c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce944 + 0x10ce658));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce948 + 0x10ce664));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce94c + 0x10ce670));
    *pcVar3 = '\x01';
  }
  uStack_24 = 0;
  iVar1 = Rotatelab_Shop_DailyQuestCanvasController__get_DailyQuestSo_10b9214();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = *(undefined4 *)(iVar1 + 0x20);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar8 = *(int **)(_UNK_010ce950 + 0x10ce6b0);
  uVar6 = *(undefined4 *)(param_2 + 8);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar5 = puVar2[1];
  if (iVar5 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar4 = *puVar2;
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ce954 + 0x10ce6fc));
    System_Func_object__Int32Enum__bool____ctor_239e560
              (iVar5,uVar4,**(undefined4 **)(_UNK_010ce958 + 0x10ce71c),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
    *piVar8 = iVar5;
    thunk_FUN_00ec5080(piVar8,iVar5);
  }
  if (*(int *)(**(int **)(_UNK_010ce95c + 0x10ce744) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__Find_object__Int32Enum__1486c7c
                    (uVar7,uVar6,iVar5,**(undefined4 **)(_UNK_010ce960 + 0x10ce768));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(*(int *)(param_1 + 0x10),*(undefined4 *)(iVar1 + 0x14),0)
  ;
  piVar8 = *(int **)(param_1 + 0x14);
  uStack_24 = FUN_00f88368(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
  uStack_24 = uStack_24 & 0x7fffffff;
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  uVar7 = System_Single__ToString_2b8501c(&uStack_24,0);
  uVar7 = System_String__Concat_2a0b574(uVar6,uVar7,*(undefined4 *)(iVar1 + 0x10),0);
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar8 + 0x2b0))(piVar8,uVar7,*(undefined4 *)(*piVar8 + 0x2b4));
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  pcVar3 = (char *)(_UNK_010ce964 + 0x10ce830);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce968 + 0x10ce844));
    *pcVar3 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_010ce96c + 0x10ce85c) + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar1,*puVar2,puVar2[1],puVar2[2],0);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_CanvasGroup__set_alpha_39a3758(*(int *)(param_1 + 0x18),0x3f800000,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  uVar7 = DG_Tweening_ShortcutExtensions__DOScale_116ba14(uVar7,0x3f800000,0x3e800000,0);
  uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ce970 + 0x10ce8e8));
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar6,param_1,**(undefined4 **)(_UNK_010ce974 + 0x10ce904),0);
  DG_Tweening_TweenSettingsExtensions__OnComplete_object__15d9e0c
            (uVar7,uVar6,**(undefined4 **)(_UNK_010ce978 + 0x10ce91c));
  return;
}

