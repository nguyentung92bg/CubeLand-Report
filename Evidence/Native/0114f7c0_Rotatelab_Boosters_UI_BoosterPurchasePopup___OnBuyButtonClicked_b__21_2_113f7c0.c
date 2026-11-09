/* IL2CPP: Rotatelab.Boosters.UI.BoosterPurchasePopup$$<OnBuyButtonClicked>b__21_2
void Rotatelab_Boosters_UI_BoosterPurchasePopup___OnBuyButtonClicked_b__21_2 (Rotatelab_Boosters_UI_BoosterPurchasePopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0113482c) */
/* WARNING: Removing unreachable block (ram,0x01134834) */
/* WARNING: Removing unreachable block (ram,0x01134838) */
/* WARNING: Removing unreachable block (ram,0x01134858) */
/* WARNING: Removing unreachable block (ram,0x01134864) */
/* WARNING: Removing unreachable block (ram,0x01134868) */
/* WARNING: Removing unreachable block (ram,0x01134874) */
/* WARNING: Removing unreachable block (ram,0x01134880) */
/* WARNING: Removing unreachable block (ram,0x01134884) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.UI.BoosterPurchasePopup$$<OnBuyButtonClicked>b__21_2
   void Rotatelab_Boosters_UI_BoosterPurchasePopup___OnBuyButtonClicked_b__21_2
   (Rotatelab_Boosters_UI_BoosterPurchasePopup_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_UI_BoosterPurchasePopup___OnBuyButtonClicked_b__21_2_113f7c0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  
  pcVar6 = (char *)(_UNK_0113479c + 0x113474c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011347a0 + 0x1134760));
    *pcVar6 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_011347a4 + 0x1134774));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_01134908 + 0x11347c4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113490c + 0x11347d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134910 + 0x11347e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134914 + 0x11347f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134918 + 0x11347fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113491c + 0x1134808));
    *pcVar6 = '\x01';
  }
  uVar7 = *(undefined4 *)(iVar1 + 0x10);
  if (*(int *)(**(int **)(_UNK_01134920 + 0x1134820) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = Rotatelab_Extensions__AddUnique_object__1484964
                    (uVar7,param_1,**(undefined4 **)(_UNK_0113492c + 0x11348c8));
  if (iVar2 != 0) {
    if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(iVar1 + 0x10) + 0xc) == 1) {
      pcVar6 = (char *)(_UNK_01134fac + 0x1134f14);
      if (*pcVar6 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01134fb0 + 0x1134f28));
        *pcVar6 = '\x01';
      }
      if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *param_1;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01134fb4 + 0x1134f4c)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01134f94;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(param_1,**(int **)(_UNK_01134fb4 + 0x1134f4c),0);
LAB_01134f94:
                    /* WARNING: Could not recover jumptable at 0x01134fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(param_1,1,puVar3[1]);
      return;
    }
  }
  return;
}

