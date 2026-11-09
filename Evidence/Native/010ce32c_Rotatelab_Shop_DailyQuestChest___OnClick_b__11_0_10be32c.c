/* IL2CPP: Rotatelab.Shop.DailyQuestChest$$<OnClick>b__11_0
void Rotatelab_Shop_DailyQuestChest___OnClick_b__11_0 (Rotatelab_Shop_DailyQuestChest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestChest$$<OnClick>b__11_0
   void Rotatelab_Shop_DailyQuestChest___OnClick_b__11_0 (Rotatelab_Shop_DailyQuestChest_o* __this,
   const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestChest___OnClick_b__11_0_10be32c(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_010ce3bc + 0x10ce340);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce3c0 + 0x10ce354));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce3c4 + 0x10ce360));
    *pcVar5 = '\x01';
  }
  uVar3 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                    (*(undefined4 *)(param_1 + 0x14),0,0x3e19999a,0);
  uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                    (uVar3,0x1a,**(undefined4 **)(_UNK_010ce3c8 + 0x10ce38c));
  uVar3 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__15d9f0c
                    (uVar3,0x3fc00000,**(undefined4 **)(_UNK_010ce3cc + 0x10ce3a0));
  puVar4 = (undefined4 *)(param_1 + 0x28);
  *puVar4 = uVar3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

