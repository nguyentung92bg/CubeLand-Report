/* IL2CPP: Rotatelab.IAP.PurchasesListener.<PurchaseComplete>d__51$$MoveNext
void Rotatelab_IAP_PurchasesListener__PurchaseComplete_d__51__MoveNext (Rotatelab_IAP_PurchasesListener__PurchaseComplete_d__51_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener.<PurchaseComplete>d__51$$MoveNext
   void Rotatelab_IAP_PurchasesListener__PurchaseComplete_d__51__MoveNext
   (Rotatelab_IAP_PurchasesListener__PurchaseComplete_d__51_o __this, const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__PurchaseComplete_d__51__MoveNext_109cf14(int *param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 extraout_r1;
  int extraout_r1_00;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  undefined8 uVar18;
  int *piStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  byte bStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  int *piStack_40;
  uint uStack_3c;
  double dStack_38;
  
  pcVar9 = (char *)(_UNK_010acf40 + 0x10acf34);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf44 + 0x10acffc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf48 + 0x10ad008));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf4c + 0x10ad014));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf50 + 0x10ad020));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf54 + 0x10ad02c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf58 + 0x10ad038));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf5c + 0x10ad044));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf60 + 0x10ad050));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf64 + 0x10ad05c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf68 + 0x10ad068));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf6c + 0x10ad074));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf70 + 0x10ad080));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf74 + 0x10ad08c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf78 + 0x10ad098));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf7c + 0x10ad0a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf80 + 0x10ad0b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf84 + 0x10ad0bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf88 + 0x10ad0c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf8c + 0x10ad0d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf90 + 0x10ad0e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf94 + 0x10ad0ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf98 + 0x10ad0f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acf9c + 0x10ad104));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acfa0 + 0x10ad110));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acfa4 + 0x10ad11c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acfa8 + 0x10ad128));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acfac + 0x10ad134));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acfb0 + 0x10ad140));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acfb4 + 0x10ad14c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acfb8 + 0x10ad158));
    *pcVar9 = '\x01';
  }
  iVar16 = param_1[5];
  dStack_38 = 0.0;
  uStack_3c = 0;
  piStack_40 = (int *)0x0;
  uStack_44 = 0;
  if (*param_1 == 0) {
    piVar11 = (int *)param_1[8];
    uStack_3c = param_1[9];
    *param_1 = -1;
    uVar7 = uStack_3c >> 0x10;
    param_1[8] = 0;
    param_1[9] = 0;
    piStack_40 = piVar11;
  }
  else {
    if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar16 + 0x2c) = 0;
    thunk_FUN_00ec5080();
    if (param_1[6] == 0) goto LAB_010ae584;
    if (*(int *)(**(int **)(_UNK_010acfbc + 0x10ad1bc) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = UnityEngine_Application__get_isEditor_35a9d10(0);
    if (iVar2 != 0) goto LAB_010ae584;
    if (param_1[6] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(param_1[6] + 0xc);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = *(undefined4 *)(iVar2 + 0x20);
    uVar12 = *(undefined4 *)(iVar2 + 0x24);
    uVar13 = *(undefined4 *)(iVar2 + 0x18);
    uVar14 = *(undefined4 *)(iVar2 + 0x1c);
    if (*(int *)(**(int **)(_UNK_010acfc0 + 0x10ad210) + 0x74) == 0) {
      FUN_00ec3934();
    }
    dStack_38 = (double)System_Decimal__op_Explicit_2bda9c4(uVar13,uVar14,uVar10,uVar12,0);
    if (param_1[6] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(param_1[6] + 0xc);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = *(undefined4 *)(iVar2 + 0x14);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010acfc4 + 0x10ad280));
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010acfc8 + 0x10ad294));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_LevelManager__GetAttemptInfo_106a51c(&piStack_68,iVar3,0);
    uVar7 = uStack_64;
    piVar11 = piStack_68;
    piVar4 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_010acfcc + 0x10ad2f4),0xc);
    iVar3 = **(int **)(_UNK_010acfd0 + 0x10ad31c);
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = **(int **)(_UNK_010acfd4 + 0x10ad33c);
    }
    uVar12 = **(undefined4 **)(iVar3 + 0x5c);
    if (*(int *)(**(int **)(_UNK_010acfd8 + 0x10ad348) + 0x74) == 0) {
      FUN_00ec3934(**(int **)(_UNK_010acfd8 + 0x10ad348));
    }
    uVar13 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
    uVar13 = System_Double__ToString_2b51d18(&dStack_38,uVar13,0);
    iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010acfdc + 0x10ad394));
    Firebase_Analytics_Parameter___ctor_11deb88(iVar3,uVar12,uVar13,0);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((iVar3 != 0) &&
       (iVar5 = thunk_FUN_00f00bc8(iVar3,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
      uVar12 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar12,0);
    }
    if (piVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4[4] = iVar3;
    thunk_FUN_00ec5080(piVar4 + 4,iVar3);
    uVar12 = *(undefined4 *)(*(int *)(**(int **)(_UNK_010acfe0 + 0x10ad410) + 0x5c) + 4);
    iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010acfe4 + 0x10ad424));
    Firebase_Analytics_Parameter___ctor_11deb88(iVar3,uVar12,uVar10,0);
    if ((iVar3 != 0) &&
       (iVar5 = thunk_FUN_00f00bc8(iVar3,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
      uVar12 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar12,0);
    }
    if ((uint)piVar4[3] < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4[5] = iVar3;
    thunk_FUN_00ec5080(piVar4 + 5,iVar3);
    uVar12 = *(undefined4 *)(iVar16 + 0x34);
    uVar13 = *(undefined4 *)(*(int *)(**(int **)(_UNK_010acfe8 + 0x10ad494) + 0x5c) + 0xc);
    iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010acfec + 0x10ad4ac));
    Firebase_Analytics_Parameter___ctor_11deb88(iVar3,uVar13,uVar12,0);
    if ((iVar3 != 0) &&
       (iVar5 = thunk_FUN_00f00bc8(iVar3,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
      uVar12 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar12,0);
    }
    if ((uint)piVar4[3] < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4[6] = iVar3;
    thunk_FUN_00ec5080(piVar4 + 6,iVar3);
    uVar12 = *(undefined4 *)(*(int *)(**(int **)(_UNK_010ae4a8 + 0x10ad51c) + 0x5c) + 8);
    if (param_1[7] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar13 = *(undefined4 *)(param_1[7] + 8);
    iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ae4ac + 0x10ad548));
    Firebase_Analytics_Parameter___ctor_11deb88(iVar3,uVar12,uVar13,0);
    if ((iVar3 != 0) &&
       (iVar5 = thunk_FUN_00f00bc8(iVar3,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
      uVar12 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar12,0);
    }
    if ((uint)piVar4[3] < 4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4[7] = iVar3;
    thunk_FUN_00ec5080(piVar4 + 7,iVar3);
    uVar12 = *(undefined4 *)(*(int *)(**(int **)(_UNK_010ae558 + 0x10ad5b8) + 0x5c) + 0x10);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar13 = Rotatelab_Currency_CurrencyManager__get_Coins_1083318(iVar2,0);
    uVar18 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar13,0);
    iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ae55c + 0x10ad5f8));
    Firebase_Analytics_Parameter___ctor_11debc4
              (iVar3,uVar12,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0);
    if ((iVar3 != 0) &&
       (iVar5 = thunk_FUN_00f00bc8(iVar3,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
      uVar12 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar12,0);
    }
    if ((uint)piVar4[3] < 5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4[8] = iVar3;
    thunk_FUN_00ec5080(piVar4 + 8,iVar3);
    uVar12 = *(undefined4 *)(*(int *)(**(int **)(_UNK_010ae560 + 0x10ad674) + 0x5c) + 0x1c);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar13 = Rotatelab_Currency_CurrencyManager__get_Magnet_108333c(iVar2,0);
    uVar18 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar13,0);
    iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ae69c + 0x10ad6b4));
    Firebase_Analytics_Parameter___ctor_11debc4
              (iVar3,uVar12,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0);
    if ((iVar3 != 0) &&
       (iVar5 = thunk_FUN_00f00bc8(iVar3,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
      uVar12 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar12,0);
    }
    if ((uint)piVar4[3] < 6) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4[9] = iVar3;
    thunk_FUN_00ec5080(piVar4 + 9,iVar3);
    uVar12 = *(undefined4 *)(*(int *)(**(int **)(_UNK_010ae728 + 0x10ad730) + 0x5c) + 0x20);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar13 = Rotatelab_Currency_CurrencyManager__get_MagicWand_1083360(iVar2,0);
    uVar18 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar13,0);
    iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ae764 + 0x10ad770));
    Firebase_Analytics_Parameter___ctor_11debc4
              (iVar3,uVar12,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0);
    if ((iVar3 != 0) &&
       (iVar5 = thunk_FUN_00f00bc8(iVar3,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
      uVar12 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar12,0);
    }
    if ((uint)piVar4[3] < 7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4[10] = iVar3;
    thunk_FUN_00ec5080(piVar4 + 10,iVar3);
    uVar12 = *(undefined4 *)(*(int *)(**(int **)(_UNK_010ae7e4 + 0x10ad7ec) + 0x5c) + 0x24);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar13 = Rotatelab_Currency_CurrencyManager__get_Bounce_1083384(iVar2,0);
    uVar18 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar13,0);
    iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ae820 + 0x10ad82c));
    Firebase_Analytics_Parameter___ctor_11debc4
              (iVar3,uVar12,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0);
    if ((iVar3 != 0) &&
       (iVar5 = thunk_FUN_00f00bc8(iVar3,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
      uVar12 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar12,0);
    }
    if ((uint)piVar4[3] < 8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4[0xb] = iVar3;
    thunk_FUN_00ec5080(piVar4 + 0xb,iVar3);
    uVar12 = *(undefined4 *)(*(int *)(**(int **)(_UNK_010ae888 + 0x10ad8a8) + 0x5c) + 0x28);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar13 = Rotatelab_Currency_CurrencyManager__get_Vacuum_10833a8(iVar2,0);
    uVar18 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar13,0);
    iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ae88c + 0x10ad8e8));
    Firebase_Analytics_Parameter___ctor_11debc4
              (iVar3,uVar12,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0);
    if ((iVar3 != 0) &&
       (iVar5 = thunk_FUN_00f00bc8(iVar3,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
      uVar12 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar12,0);
    }
    if ((uint)piVar4[3] < 9) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4[0xc] = iVar3;
    thunk_FUN_00ec5080(piVar4 + 0xc,iVar3);
    uVar12 = *(undefined4 *)(*(int *)(**(int **)(_UNK_010ae928 + 0x10ad964) + 0x5c) + 0x2c);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar13 = Rotatelab_Currency_CurrencyManager__get_ExtraSlot_10833cc(iVar2,0);
    uVar18 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar13,0);
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ae92c + 0x10ad9a4));
    Firebase_Analytics_Parameter___ctor_11debc4
              (iVar2,uVar12,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0);
    if ((iVar2 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar3 == 0)) {
      uVar12 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar12,0);
    }
    if ((uint)piVar4[3] < 10) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4[0xd] = iVar2;
    thunk_FUN_00ec5080(piVar4 + 0xd,iVar2);
    piVar17 = *(int **)(_UNK_010ae930 + 0x10ada20);
    iVar2 = *piVar17;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar17;
    }
    uVar12 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ae934 + 0x10ada48));
    Firebase_Analytics_Parameter___ctor_11debc4(iVar2,uVar12,uStack_60,uStack_5c,0);
    if ((iVar2 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar3 == 0)) {
      uVar12 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar12,0);
    }
    if ((uint)piVar4[3] < 0xb) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4[0xe] = iVar2;
    thunk_FUN_00ec5080(piVar4 + 0xe,iVar2);
    uVar12 = *(undefined4 *)(*(int *)(*piVar17 + 0x5c) + 0x18);
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ae938 + 0x10adad0));
    Firebase_Analytics_Parameter___ctor_11debc4(iVar2,uVar12,uStack_58,uStack_54,0);
    if ((iVar2 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar3 == 0)) {
      uVar12 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar12,0);
    }
    if ((uint)piVar4[3] < 0xc) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4[0xf] = iVar2;
    thunk_FUN_00ec5080(piVar4 + 0xf,iVar2);
    piVar15 = *(int **)(_UNK_010ae93c + 0x10adb4c);
    if (*(int *)(*piVar15 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Scripts_ControllerFirebase__SendEvent_1060a54
              (**(undefined4 **)(_UNK_010ae940 + 0x10adb68),piVar4,0);
    piVar4 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_010ae944 + 0x10adb80),10);
    uVar12 = *(undefined4 *)(*(int *)(*piVar17 + 0x5c) + 0xb0);
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ae948 + 0x10adba4));
    Firebase_Analytics_Parameter___ctor_11debc4(iVar2,uVar12,8,0,0);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((iVar2 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar3 == 0)) {
      uVar12 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar12,0);
    }
    if (piVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4[4] = iVar2;
    thunk_FUN_00ec5080(piVar4 + 4,iVar2);
    uVar12 = *(undefined4 *)(*(int *)(*piVar17 + 0x5c) + 0xb4);
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ae94c + 0x10adc38));
    Firebase_Analytics_Parameter___ctor_11debc4(iVar2,uVar12,bStack_50 & 1,0,0);
    if ((iVar2 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar3 == 0)) {
      uVar12 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar12,0);
    }
    if ((uint)piVar4[3] < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4[5] = iVar2;
    thunk_FUN_00ec5080(piVar4 + 5,iVar2);
    iVar2 = *piVar17;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar17;
    }
    uVar12 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ae950 + 0x10adcd8));
    Firebase_Analytics_Parameter___ctor_11debc4(iVar2,uVar12,uStack_60,uStack_5c,0);
    if ((iVar2 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar3 == 0)) {
      uVar12 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar12,0);
    }
    if ((uint)piVar4[3] < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4[6] = iVar2;
    thunk_FUN_00ec5080(piVar4 + 6,iVar2);
    uVar12 = *(undefined4 *)(*(int *)(*piVar17 + 0x5c) + 0x18);
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ae954 + 0x10add60));
    Firebase_Analytics_Parameter___ctor_11debc4(iVar2,uVar12,uStack_58,uStack_54,0);
    if ((iVar2 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar3 == 0)) {
      uVar12 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar12,0);
    }
    if ((uint)piVar4[3] < 4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4[7] = iVar2;
    thunk_FUN_00ec5080(piVar4 + 7,iVar2);
    uVar12 = *(undefined4 *)(*(int *)(*piVar17 + 0x5c) + 0x20);
    if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = piVar11[3];
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ae958 + 0x10addfc));
    Firebase_Analytics_Parameter___ctor_11debc4(iVar2,uVar12,iVar3,iVar3 >> 0x1f,0);
    if ((iVar2 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar3 == 0)) {
      uVar12 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar12,0);
    }
    if ((uint)piVar4[3] < 5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4[8] = iVar2;
    thunk_FUN_00ec5080(piVar4 + 8,iVar2);
    uVar12 = *(undefined4 *)(*(int *)(*piVar17 + 0x5c) + 0x24);
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ae95c + 0x10ade84));
    Firebase_Analytics_Parameter___ctor_11deb88(iVar2,uVar12,uStack_4c,0);
    if ((iVar2 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar3 == 0)) {
      uVar12 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar12,0);
    }
    if ((uint)piVar4[3] < 6) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4[9] = iVar2;
    thunk_FUN_00ec5080(piVar4 + 9,iVar2);
    uVar12 = *(undefined4 *)(*(int *)(*piVar17 + 0x5c) + 0x1c);
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ae960 + 0x10adf00));
    Firebase_Analytics_Parameter___ctor_11debc4(iVar2,uVar12,uVar7,(int)uVar7 >> 0x1f,0);
    if ((iVar2 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar3 == 0)) {
      uVar12 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar12,0);
    }
    if ((uint)piVar4[3] < 7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4[10] = iVar2;
    thunk_FUN_00ec5080(piVar4 + 10,iVar2);
    iVar2 = **(int **)(_UNK_010ae964 + 0x10adf7c);
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = **(int **)(_UNK_010ae968 + 0x10adf9c);
    }
    uVar12 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
    if (param_1[7] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar13 = *(undefined4 *)(param_1[7] + 8);
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ae96c + 0x10adfc4));
    Firebase_Analytics_Parameter___ctor_11deb88(iVar2,uVar12,uVar13,0);
    if ((iVar2 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar3 == 0)) {
      uVar12 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar12,0);
    }
    if ((uint)piVar4[3] < 8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4[0xb] = iVar2;
    thunk_FUN_00ec5080(piVar4 + 0xb,iVar2);
    uVar12 = **(undefined4 **)(**(int **)(_UNK_010ae970 + 0x10ae034) + 0x5c);
    if (*(int *)(**(int **)(_UNK_010ae974 + 0x10ae040) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar13 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
    uVar13 = System_Double__ToString_2b51d18(&dStack_38,uVar13,0);
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ae978 + 0x10ae080));
    Firebase_Analytics_Parameter___ctor_11deb88(iVar2,uVar12,uVar13,0);
    if ((iVar2 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar3 == 0)) {
      uVar12 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar12,0);
    }
    if ((uint)piVar4[3] < 9) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4[0xc] = iVar2;
    thunk_FUN_00ec5080(piVar4 + 0xc,iVar2);
    uVar12 = *(undefined4 *)(*(int *)(**(int **)(_UNK_010ae97c + 0x10ae0f0) + 0x5c) + 4);
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ae980 + 0x10ae104));
    Firebase_Analytics_Parameter___ctor_11deb88(iVar2,uVar12,uVar10,0);
    if ((iVar2 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar3 == 0)) {
      uVar12 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar12,0);
    }
    if ((uint)piVar4[3] < 10) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4[0xd] = iVar2;
    thunk_FUN_00ec5080(piVar4 + 0xd,iVar2);
    if (*(int *)(*piVar15 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Scripts_ControllerFirebase__SendEvent_1060a54
              (**(undefined4 **)(_UNK_010ae984 + 0x10ae188),piVar4,0);
    piVar11 = *(int **)(_UNK_010ae988 + 0x10ae1a0);
    iVar2 = *piVar11;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar11;
    }
    **(undefined4 **)(iVar2 + 0x5c) = uVar10;
    thunk_FUN_00ec5080(*(undefined4 *)(*piVar11 + 0x5c));
    iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar11 = *(int **)(_UNK_010ae98c + 0x10ae1fc);
    iVar3 = *(int *)(*piVar11 + 0x74);
    *(double *)(iVar2 + 200) = *(double *)(iVar2 + 200) + dStack_38;
    if (iVar3 == 0) {
      FUN_00ec3934();
    }
    iVar2 = Facebook_Unity_FB__get_IsInitialized_118c748(0);
    dVar1 = dStack_38;
    if (iVar2 != 0) {
      iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ae990 + 0x10ae230));
      System_Collections_Generic_Dictionary_object__object____ctor_20688f4
                (iVar2,**(undefined4 **)(_UNK_010ae994 + 0x10ae244));
      if (param_1[7] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_Dictionary_object__object___Add_206933c
                (iVar2,**(undefined4 **)(_UNK_010ae99c + 0x10ae284),*(undefined4 *)(param_1[7] + 8),
                 **(undefined4 **)(_UNK_010ae998 + 0x10ae278));
      if (*(int *)(*piVar11 + 0x74) == 0) {
        FUN_00ec3934();
      }
      Facebook_Unity_FB__LogPurchase_118e9ac((float)dVar1,uVar10,iVar2,0);
    }
    piVar11 = *(int **)(_UNK_010ae9a0 + 0x10ae2c8);
    iVar2 = *piVar11;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar11;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x50);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_double__object___Raise_23a3e88
              (iVar2,**(undefined4 **)(_UNK_010ae9a4 + 0x10ae304),SUB84(dStack_38,0),
               (int)((ulonglong)dStack_38 >> 0x20),uVar10,
               **(undefined4 **)(_UNK_010ae9a4 + 0x10ae304));
    if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_IAP_PurchasesListener__TrySendPurchaseToSatoriAsync_109b090
              (&piStack_68,extraout_r1,SUB84(dStack_38,0),(int)((ulonglong)dStack_38 >> 0x20),uVar10
              );
    uVar7 = uStack_64;
    piVar11 = piStack_68;
    iVar2 = *(int *)(**(int **)(_UNK_010ae9a8 + 0x10ae344) + 0x74);
    if (iVar2 == 0) {
      FUN_00ec3934();
      iVar2 = extraout_r1_00;
    }
    System_TimeSpan__FromSeconds_2b8a42c(&piStack_68,iVar2,0,0x40080000,0);
    Cysharp_Threading_Tasks_UniTaskExtensions__TimeoutWithoutException_bool__1651074
              (&piStack_68,piVar11,uVar7,8,piStack_68,uStack_64,0,8,0,
               **(undefined4 **)(_UNK_010ae9ac + 0x10ae388));
    uVar7 = uStack_64;
    piVar11 = piStack_68;
    uStack_64 = 0;
    piStack_68 = (int *)0x0;
    if ((*(byte *)(*(int *)(**(int **)(_UNK_010ae9b0 + 0x10ae3c4) + 0x10) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    piStack_68 = piVar11;
    uStack_64 = uVar7;
    thunk_FUN_00ec5080(&piStack_68,0);
    uStack_3c = uStack_64;
    piStack_40 = piStack_68;
    iVar2 = *(int *)(**(int **)(_UNK_010ae9b4 + 0x10ae400) + 0x10);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    if (piStack_68 == (int *)0x0) goto LAB_010ae584;
    iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0x60) + 0xc) + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 4);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768(iVar2);
    }
    iVar3 = *piStack_68;
    uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar11[-1] == iVar2) {
          puVar6 = (undefined4 *)(iVar3 + *piVar11 * 8 + 200);
          goto LAB_010ae6ac;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined4 *)FUN_00efdb38(piStack_68,iVar2,1);
LAB_010ae6ac:
    uVar7 = (int)uStack_64 >> 0x10;
    iVar2 = (*(code *)*puVar6)(piStack_68,uVar7,puVar6[1]);
    piVar11 = piStack_68;
    if (iVar2 == 0) {
      param_1[9] = uStack_64;
      *param_1 = 0;
      param_1[8] = (int)piStack_68;
      thunk_FUN_00ec5080(param_1 + 8,0);
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__AwaitUnsafeOnCompleted_UniTask_Awaiter_ValueTuple_bool__bool____PurchasesListener__PurchaseComplete_d__51__13ec1e4
                (param_1 + 1,&piStack_40,param_1,**(undefined4 **)(_UNK_010ae9b8 + 0x10ae6f4));
      return;
    }
  }
  if (piVar11 != (int *)0x0) {
    iVar2 = *(int *)(**(int **)(_UNK_010ae9bc + 0x10ae4e4) + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x14);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768(iVar2);
    }
    iVar3 = *piVar11;
    uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar8 != 0) {
      piVar4 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar4[-1] == iVar2) {
          puVar6 = (undefined4 *)(iVar3 + *piVar4 * 8 + 0xc0);
          goto LAB_010ae570;
        }
        uVar8 = uVar8 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined4 *)FUN_00efdb38(piVar11,iVar2,0);
LAB_010ae570:
    (*(code *)*puVar6)(piVar11,(int)(short)uVar7,puVar6[1]);
  }
LAB_010ae584:
  piVar11 = *(int **)(_UNK_010ae9c0 + 0x10ae590);
  iVar2 = *piVar11;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar11;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0xe0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_object___Raise_23a2f44
            (iVar2,param_1[7],**(undefined4 **)(_UNK_010ae9c4 + 0x10ae5c8));
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010ae9c8 + 0x10ae5e0));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x48) != 0) {
    Rotatelab_Ads_InterstitialAdFormat__RestartCooldownTimer_10f041c(*(int *)(iVar2 + 0x48),0);
  }
  if (iVar16 != 0) {
    if (*(int *)(iVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(iVar16 + 0x18),0,0);
    iVar16 = *piVar11;
    if (*(int *)(iVar16 + 0x74) == 0) {
      FUN_00ec3934();
      iVar16 = *piVar11;
    }
    iVar16 = *(int *)(*(int *)(iVar16 + 0x5c) + 0x100);
    if (iVar16 != 0) {
      Rotatelab_GameAction_bool___Raise_23a280c
                (iVar16,1,**(undefined4 **)(_UNK_010ae9cc + 0x10ae66c));
      *param_1 = -2;
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult_2a93c64(param_1 + 1,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

