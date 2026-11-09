/* IL2CPP: Rotatelab.Currency.UI.HeartPurchasePopup.<>c__DisplayClass27_0$$<OnBuyWithCoinButtonClicked>b__0
void Rotatelab_Currency_UI_HeartPurchasePopup___c__DisplayClass27_0___OnBuyWithCoinButtonClicked_b__0 (Rotatelab_Currency_UI_HeartPurchasePopup___c__DisplayClass27_0_o* __this, const MethodInfo* method);
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
/* IL2CPP:
   Rotatelab.Currency.UI.HeartPurchasePopup.<>c__DisplayClass27_0$$<OnBuyWithCoinButtonClicked>b__0
   void 
   Rotatelab_Currency_UI_HeartPurchasePopup___c__DisplayClass27_0___OnBuyWithCoinButtonClicked_b__0
   (Rotatelab_Currency_UI_HeartPurchasePopup___c__DisplayClass27_0_o* __this, const MethodInfo*
   method); */

void Rotatelab_Currency_UI_HeartPurchasePopup___c__DisplayClass27_0___OnBuyWithCoinButtonClicked_b__0_1088058
               (int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  
  piVar5 = *(int **)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 0xc);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar5[0x18] = iVar6;
  thunk_FUN_00ec5080(piVar5 + 0x18,iVar6);
  pcVar7 = (char *)(_UNK_0113479c + 0x113474c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011347a0 + 0x1134760),0,0);
    *pcVar7 = '\x01';
  }
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_011347a4 + 0x1134774));
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(_UNK_01134908 + 0x11347c4);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113490c + 0x11347d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134910 + 0x11347e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134914 + 0x11347f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134918 + 0x11347fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113491c + 0x1134808));
    *pcVar7 = '\x01';
  }
  uVar8 = *(undefined4 *)(iVar6 + 0x10);
  if (*(int *)(**(int **)(_UNK_01134920 + 0x1134820) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__AddUnique_object__1484964
                    (uVar8,piVar5,**(undefined4 **)(_UNK_0113492c + 0x11348c8));
  if (iVar1 != 0) {
    if (*(int *)(iVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(iVar6 + 0x10) + 0xc) == 1) {
      pcVar7 = (char *)(_UNK_01134fac + 0x1134f14);
      if (*pcVar7 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01134fb0 + 0x1134f28));
        *pcVar7 = '\x01';
      }
      if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar6 = *piVar5;
      uVar3 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01134fb4 + 0x1134f4c)) {
            puVar2 = (undefined4 *)(iVar6 + *piVar4 * 8 + 0xc0);
            goto LAB_01134f94;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piVar5,**(int **)(_UNK_01134fb4 + 0x1134f4c),0);
LAB_01134f94:
                    /* WARNING: Could not recover jumptable at 0x01134fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(piVar5,1,puVar2[1]);
      return;
    }
  }
  return;
}

