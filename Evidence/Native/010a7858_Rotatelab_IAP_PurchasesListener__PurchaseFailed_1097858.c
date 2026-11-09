/* IL2CPP: Rotatelab.IAP.PurchasesListener$$PurchaseFailed
void Rotatelab_IAP_PurchasesListener__PurchaseFailed (Rotatelab_IAP_PurchasesListener_o* __this, UnityEngine_Purchasing_Product_o* product, Rotatelab_IAP_IapObject_o* iapObject, System_String_o* failureSource, System_String_o* errorCode, System_String_o* errorMessage, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$PurchaseFailed
   void Rotatelab_IAP_PurchasesListener__PurchaseFailed (Rotatelab_IAP_PurchasesListener_o* __this,
   UnityEngine_Purchasing_Product_o* product, Rotatelab_IAP_IapObject_o* iapObject, System_String_o*
   failureSource, System_String_o* errorCode, System_String_o* errorMessage, const MethodInfo*
   method); */

void Rotatelab_IAP_PurchasesListener__PurchaseFailed_1097858
               (int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  byte bStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_010a84ec + 0x10a7878);
  iStack_28 = **(int **)(_UNK_010a84f0 + 0x10a7880);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a84f4 + 0x10a78a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a84f8 + 0x10a78b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a84fc + 0x10a78bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8500 + 0x10a78c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8504 + 0x10a78d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8508 + 0x10a78e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a850c + 0x10a78ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8510 + 0x10a78f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8514 + 0x10a7904));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8518 + 0x10a7910));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a851c + 0x10a791c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8520 + 0x10a7928));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8524 + 0x10a7934));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8528 + 0x10a7940));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a852c + 0x10a794c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8530 + 0x10a7958));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8534 + 0x10a7964));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8538 + 0x10a7970));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a853c + 0x10a797c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8540 + 0x10a7988));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  thunk_FUN_00ec5080();
  iVar1 = System_String__IsNullOrWhiteSpace_2a0a85c(param_4,0);
  if (iVar1 == 0) {
    iVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_010a8544 + 0x10a79d0),7);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar1 + 0x10) = param_4;
    thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_4);
    uVar5 = **(undefined4 **)(_UNK_010a8548 + 0x10a7a1c);
    if (*(uint *)(iVar1 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar1 + 0x14) = uVar5;
    thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x14),uVar5);
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = *(undefined4 *)(param_3 + 8);
    if (*(uint *)(iVar1 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar1 + 0x18) = uVar5;
    thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x18),uVar5);
    uVar5 = **(undefined4 **)(_UNK_010a854c + 0x10a7a7c);
    if (*(uint *)(iVar1 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar1 + 0x1c) = uVar5;
    thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x1c),uVar5);
    if (*(uint *)(iVar1 + 0xc) < 5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar1 + 0x20) = param_5;
    thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x20),param_5);
    uVar5 = **(undefined4 **)(_UNK_010a8550 + 0x10a7ad8);
    if (*(uint *)(iVar1 + 0xc) < 6) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar1 + 0x24) = uVar5;
    thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x24),uVar5);
    if (*(uint *)(iVar1 + 0xc) < 7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar1 + 0x28) = param_6;
    thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x28),param_6);
    uVar5 = System_String__Concat_2a0bee8(iVar1,0);
    Rotatelab_IAP_PurchasesListener__RecordInformationAboutPurchase_1098de8(param_1,uVar5);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010a8554 + 0x10a7b4c));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_LevelManager__GetAttemptInfo_106a51c(&iStack_58,iVar1,0);
    piVar2 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_010a8558 + 0x10a7ba8),0xe);
    piVar9 = *(int **)(_UNK_010a855c + 0x10a7bcc);
    iVar1 = *piVar9;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar9;
    }
    puVar7 = *(undefined4 **)(_UNK_010a8560 + 0x10a7bf8);
    uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xb0);
    iVar1 = thunk_FUN_00f00cdc(*puVar7);
    Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar5,8,0,0);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((iVar1 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
      uVar5 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar5,0);
    }
    if (piVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[4] = iVar1;
    thunk_FUN_00ec5080(piVar2 + 4,iVar1);
    uVar6 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0xb4);
    uVar5 = **(undefined4 **)(_UNK_010a8564 + 0x10a7c84);
    iVar1 = thunk_FUN_00f00cdc(*puVar7);
    Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar6,bStack_40 & 1,0,0);
    if ((iVar1 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
      uVar6 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar6,0);
    }
    if ((uint)piVar2[3] < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[5] = iVar1;
    thunk_FUN_00ec5080(piVar2 + 5,iVar1);
    iVar1 = *piVar9;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar9;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x14);
    iVar1 = thunk_FUN_00f00cdc(*puVar7);
    Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar6,uStack_50,uStack_4c,0);
    if ((iVar1 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
      uVar6 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar6,0);
    }
    if ((uint)piVar2[3] < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[6] = iVar1;
    thunk_FUN_00ec5080(piVar2 + 6,iVar1);
    uVar6 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x18);
    iVar1 = thunk_FUN_00f00cdc(*puVar7);
    Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar6,uStack_48,uStack_44,0);
    if ((iVar1 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
      uVar6 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar6,0);
    }
    if ((uint)piVar2[3] < 4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[7] = iVar1;
    thunk_FUN_00ec5080(piVar2 + 7,iVar1);
    uVar6 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x20);
    if (iStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(iStack_58 + 0xc);
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a8568 + 0x10a7e40));
    Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar6,iVar3,iVar3 >> 0x1f,0);
    if ((iVar1 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
      uVar6 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar6,0);
    }
    if ((uint)piVar2[3] < 5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[8] = iVar1;
    thunk_FUN_00ec5080(piVar2 + 8,iVar1);
    puVar7 = *(undefined4 **)(_UNK_010a856c + 0x10a7ec8);
    uVar6 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x24);
    iVar1 = thunk_FUN_00f00cdc(*puVar7);
    Firebase_Analytics_Parameter___ctor_11deb88(iVar1,uVar6,uStack_3c,0);
    if ((iVar1 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
      uVar6 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar6,0);
    }
    if ((uint)piVar2[3] < 6) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[9] = iVar1;
    thunk_FUN_00ec5080(piVar2 + 9,iVar1);
    uVar6 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x1c);
    iVar1 = thunk_FUN_00f00cdc(*puVar7);
    Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar6,iStack_54,iStack_54 >> 0x1f,0);
    if ((iVar1 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
      uVar6 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar6,0);
    }
    if ((uint)piVar2[3] < 7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[10] = iVar1;
    thunk_FUN_00ec5080(piVar2 + 10,iVar1);
    piVar9 = *(int **)(_UNK_010a8570 + 0x10a7fc0);
    iVar1 = *piVar9;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar9;
    }
    uVar6 = *(undefined4 *)(param_3 + 8);
    uVar8 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8);
    iVar1 = thunk_FUN_00f00cdc(*puVar7);
    Firebase_Analytics_Parameter___ctor_11deb88(iVar1,uVar8,uVar6,0);
    if ((iVar1 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
      uVar6 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar6,0);
    }
    if ((uint)piVar2[3] < 8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[0xb] = iVar1;
    thunk_FUN_00ec5080(piVar2 + 0xb,iVar1);
    uVar6 = **(undefined4 **)(*piVar9 + 0x5c);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(param_2 + 0xc);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_38 = *(undefined4 *)(iVar1 + 0x18);
    uStack_34 = *(undefined4 *)(iVar1 + 0x1c);
    uStack_30 = *(undefined4 *)(iVar1 + 0x20);
    uStack_2c = *(undefined4 *)(iVar1 + 0x24);
    if (*(int *)(**(int **)(_UNK_010a8574 + 0x10a8084) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar8 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
    if (*(int *)(**(int **)(_UNK_010a8578 + 0x10a80b4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar8 = System_Decimal__ToString_2bd7c04(&uStack_38,uVar8,0);
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a857c + 0x10a80e4));
    Firebase_Analytics_Parameter___ctor_11deb88(iVar1,uVar6,uVar8,0);
    if ((iVar1 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
      uVar6 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar6,0);
    }
    if ((uint)piVar2[3] < 9) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[0xc] = iVar1;
    thunk_FUN_00ec5080(piVar2 + 0xc,iVar1);
    uVar6 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 4);
    if (*(int *)(param_2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar8 = *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x14);
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a8580 + 0x10a8170));
    Firebase_Analytics_Parameter___ctor_11deb88(iVar1,uVar6,uVar8,0);
    if ((iVar1 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
      uVar6 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar6,0);
    }
    if ((uint)piVar2[3] < 10) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[0xd] = iVar1;
    thunk_FUN_00ec5080(piVar2 + 0xd,iVar1);
    uVar6 = *(undefined4 *)(param_1 + 0x34);
    uVar8 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0xc);
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a8584 + 0x10a81f4));
    Firebase_Analytics_Parameter___ctor_11deb88(iVar1,uVar8,uVar6,0);
    if ((iVar1 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
      uVar6 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar6,0);
    }
    if ((uint)piVar2[3] < 0xb) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[0xe] = iVar1;
    thunk_FUN_00ec5080(piVar2 + 0xe,iVar1);
    puVar7 = *(undefined4 **)(_UNK_010a8588 + 0x10a826c);
    iVar1 = thunk_FUN_00f00cdc(*puVar7);
    Firebase_Analytics_Parameter___ctor_11deb88
              (iVar1,**(undefined4 **)(_UNK_010a858c + 0x10a8288),param_4,0);
    if ((iVar1 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
      uVar6 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar6,0);
    }
    if ((uint)piVar2[3] < 0xc) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[0xf] = iVar1;
    thunk_FUN_00ec5080(piVar2 + 0xf,iVar1);
    iVar1 = thunk_FUN_00f00cdc(*puVar7);
    Firebase_Analytics_Parameter___ctor_11deb88
              (iVar1,**(undefined4 **)(_UNK_010a8590 + 0x10a82fc),param_5,0);
    if ((iVar1 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
      uVar6 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar6,0);
    }
    if ((uint)piVar2[3] < 0xd) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[0x10] = iVar1;
    thunk_FUN_00ec5080(piVar2 + 0x10,iVar1);
    iVar1 = thunk_FUN_00f00cdc(*puVar7);
    Firebase_Analytics_Parameter___ctor_11deb88
              (iVar1,**(undefined4 **)(_UNK_010a8594 + 0x10a8370),param_6,0);
    if ((iVar1 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
      uVar6 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar6,0);
    }
    if ((uint)piVar2[3] < 0xe) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[0x11] = iVar1;
    thunk_FUN_00ec5080(piVar2 + 0x11,iVar1);
    if (*(int *)(**(int **)(_UNK_010a8598 + 0x10a83d0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Scripts_ControllerFirebase__SendEvent_1060a54(uVar5,piVar2,0);
  }
  iVar1 = System_String__op_Equality_2a0975c(param_4,**(undefined4 **)(_UNK_010a859c + 0x10a8400),0)
  ;
  if (iVar1 != 0) {
    piVar2 = *(int **)(_UNK_010a85a0 + 0x10a841c);
    iVar1 = *piVar2;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar2;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xe0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_object___Raise_23a2f44
              (iVar1,param_3,**(undefined4 **)(_UNK_010a85a4 + 0x10a8454));
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x18),0,0);
  piVar2 = *(int **)(_UNK_010a85a8 + 0x10a8488);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar2;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x100);
  if (iVar1 != 0) {
    Rotatelab_GameAction_bool___Raise_23a280c(iVar1,0,**(undefined4 **)(_UNK_010a85ac + 0x10a84c0));
    if (**(int **)(_UNK_010a85b0 + 0x10a84d8) != iStack_28) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

