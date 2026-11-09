/* IL2CPP: Rotatelab.Shop.DailyQuestChest$$OnClick
void Rotatelab_Shop_DailyQuestChest__OnClick (Rotatelab_Shop_DailyQuestChest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestChest$$OnClick
   void Rotatelab_Shop_DailyQuestChest__OnClick (Rotatelab_Shop_DailyQuestChest_o* __this, const
   MethodInfo* method); */

void Rotatelab_Shop_DailyQuestChest__OnClick_10be144(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_010ce2e8 + 0x10ce15c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce2ec + 0x10ce170));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce2f0 + 0x10ce17c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce2f4 + 0x10ce188));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce2f8 + 0x10ce194));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce2fc + 0x10ce1a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce300 + 0x10ce1ac));
    *pcVar4 = '\x01';
  }
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  DG_Tweening_ShortcutExtensions__DOShakePosition_116bbe8
            (uVar1,0x3e800000,0x41200000,10,0x42b40000,0,1,0,0);
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 != 0) {
    DG_Tweening_TweenExtensions__Kill_1168b64(iVar2,0,0);
  }
  uVar1 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                    (*(undefined4 *)(param_1 + 0x14),0x3f800000,0x3e800000,0);
  uVar1 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                    (uVar1,0x1b,**(undefined4 **)(_UNK_010ce304 + 0x10ce230));
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ce308 + 0x10ce248));
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar3,param_1,**(undefined4 **)(_UNK_010ce30c + 0x10ce264),0);
  uVar1 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__15d9e0c
                    (uVar1,uVar3,**(undefined4 **)(_UNK_010ce310 + 0x10ce27c));
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  thunk_FUN_00ec5080((int *)(param_1 + 0x28),uVar1);
  piVar5 = *(int **)(_UNK_010ce314 + 0x10ce2a0);
  iVar2 = *piVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar5;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x164);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b2f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),param_1,*(undefined4 *)(iVar2 + 0x14));
  return;
}

