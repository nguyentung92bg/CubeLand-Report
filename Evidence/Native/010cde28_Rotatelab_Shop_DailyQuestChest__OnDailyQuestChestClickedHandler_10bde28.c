/* IL2CPP: Rotatelab.Shop.DailyQuestChest$$OnDailyQuestChestClickedHandler
void Rotatelab_Shop_DailyQuestChest__OnDailyQuestChestClickedHandler (Rotatelab_Shop_DailyQuestChest_o* __this, Rotatelab_Shop_DailyQuestChest_o* chest, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestChest$$OnDailyQuestChestClickedHandler
   void Rotatelab_Shop_DailyQuestChest__OnDailyQuestChestClickedHandler
   (Rotatelab_Shop_DailyQuestChest_o* __this, Rotatelab_Shop_DailyQuestChest_o* chest, const
   MethodInfo* method); */

void Rotatelab_Shop_DailyQuestChest__OnDailyQuestChestClickedHandler_10bde28
               (int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_010cdef8 + 0x10cde40);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cdefc + 0x10cde54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cdf00 + 0x10cde60));
    *pcVar6 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010cdf04 + 0x10cde74) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = UnityEngine_Object__op_Inequality_36018e4(param_2,param_1,0);
  if (iVar3 == 0) {
    return;
  }
  piVar5 = (int *)(param_1 + 0x28);
  if (*piVar5 != 0) {
    DG_Tweening_TweenExtensions__Kill_1168b64(*piVar5,0,0);
  }
  uVar4 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                    (*(undefined4 *)(param_1 + 0x14),0,0x3e19999a,0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                    (uVar4,0x1a,**(undefined4 **)(_UNK_010cdf08 + 0x10cdedc));
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

