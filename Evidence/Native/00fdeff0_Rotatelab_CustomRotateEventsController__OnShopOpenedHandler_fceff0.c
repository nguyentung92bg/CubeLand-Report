/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnShopOpenedHandler
void Rotatelab_CustomRotateEventsController__OnShopOpenedHandler (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x00fd84a8) */
/* WARNING: Removing unreachable block (ram,0x00fd84c0) */
/* WARNING: Removing unreachable block (ram,0x00fd84c8) */
/* WARNING: Removing unreachable block (ram,0x00fd84d8) */
/* WARNING: Removing unreachable block (ram,0x00fd84e4) */
/* WARNING: Removing unreachable block (ram,0x00fd84f0) */
/* WARNING: Removing unreachable block (ram,0x00fd853c) */
/* WARNING: Removing unreachable block (ram,0x00fd8548) */
/* WARNING: Removing unreachable block (ram,0x00fd8550) */
/* WARNING: Removing unreachable block (ram,0x00fd8560) */
/* WARNING: Removing unreachable block (ram,0x00fd856c) */
/* WARNING: Removing unreachable block (ram,0x00fd8578) */
/* WARNING: Removing unreachable block (ram,0x00fd85c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnShopOpenedHandler
   void Rotatelab_CustomRotateEventsController__OnShopOpenedHandler
   (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnShopOpenedHandler_fceff0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  undefined8 uVar10;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_00fdf700 + 0xfdf008);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdf704 + 0xfdf01c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdf708 + 0xfdf028));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdf70c + 0xfdf034));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdf710 + 0xfdf040));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdf714 + 0xfdf04c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdf718 + 0xfdf058));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdf71c + 0xfdf064));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdf720 + 0xfdf070));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdf724 + 0xfdf07c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdf728 + 0xfdf088));
    *pcVar8 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_00fdf72c + 0xfdf09c);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *puVar1;
  *(undefined1 *)(param_1 + 0x18) = 0;
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(uVar2);
  piVar4 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fdf730 + 0xfdf0c4),8);
  piVar9 = *(int **)(_UNK_00fdf734 + 0xfdf0d8);
  iVar5 = *piVar9;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar9;
  }
  uVar2 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x14);
  iStack_28 = param_1;
  if (*(int *)(**(int **)(_UNK_00fdf738 + 0xfdf0fc) + 0x74) == 0) {
    FUN_00ec3934(**(int **)(_UNK_00fdf738 + 0xfdf0fc));
  }
  uVar6 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  uVar10 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar6,0);
  iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdf73c + 0xfdf140));
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar5,uVar2,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar5 != 0) &&
     (iVar7 = thunk_FUN_00f00bc8(iVar5,*(undefined4 *)(*piVar4 + 0x20)), iVar7 == 0)) {
    uVar2 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar2,0);
  }
  if (piVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar4[4] = iVar5;
  thunk_FUN_00ec5080(piVar4 + 4,iVar5);
  uVar6 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x18);
  uVar2 = Rotatelab_Scripts_LevelManager__get_RoundNumber_1067e18(0);
  uVar10 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar2,0);
  iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdf740 + 0xfdf1e8));
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar5,uVar6,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0);
  if ((iVar5 != 0) &&
     (iVar7 = thunk_FUN_00f00bc8(iVar5,*(undefined4 *)(*piVar4 + 0x20)), iVar7 == 0)) {
    uVar2 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar2,0);
  }
  if ((uint)piVar4[3] < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar4[5] = iVar5;
  thunk_FUN_00ec5080(piVar4 + 5,iVar5);
  piVar9 = *(int **)(_UNK_00fdf744 + 0xfdf25c);
  iVar5 = *piVar9;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar9;
  }
  uVar2 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x10);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = Rotatelab_Currency_CurrencyManager__get_Coins_1083318(iVar3,0);
  uVar10 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar6,0);
  iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdf748 + 0xfdf2b0));
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar5,uVar2,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0);
  if ((iVar5 != 0) &&
     (iVar7 = thunk_FUN_00f00bc8(iVar5,*(undefined4 *)(*piVar4 + 0x20)), iVar7 == 0)) {
    uVar2 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar2,0);
  }
  if ((uint)piVar4[3] < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar4[6] = iVar5;
  thunk_FUN_00ec5080(piVar4 + 6,iVar5);
  uVar2 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x1c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = Rotatelab_Currency_CurrencyManager__get_Magnet_108333c(iVar3,0);
  uVar10 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar6,0);
  iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdf74c + 0xfdf35c));
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar5,uVar2,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0);
  if ((iVar5 != 0) &&
     (iVar7 = thunk_FUN_00f00bc8(iVar5,*(undefined4 *)(*piVar4 + 0x20)), iVar7 == 0)) {
    uVar2 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar2,0);
  }
  if ((uint)piVar4[3] < 4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar4[7] = iVar5;
  thunk_FUN_00ec5080(piVar4 + 7,iVar5);
  uVar2 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x20);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = Rotatelab_Currency_CurrencyManager__get_MagicWand_1083360(iVar3,0);
  uVar10 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar6,0);
  iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdf750 + 0xfdf408));
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar5,uVar2,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0);
  if ((iVar5 != 0) &&
     (iVar7 = thunk_FUN_00f00bc8(iVar5,*(undefined4 *)(*piVar4 + 0x20)), iVar7 == 0)) {
    uVar2 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar2,0);
  }
  if ((uint)piVar4[3] < 5) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar4[8] = iVar5;
  thunk_FUN_00ec5080(piVar4 + 8,iVar5);
  uVar2 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x24);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = Rotatelab_Currency_CurrencyManager__get_Bounce_1083384(iVar3,0);
  uVar10 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar6,0);
  iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdf754 + 0xfdf4b4));
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar5,uVar2,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0);
  if ((iVar5 != 0) &&
     (iVar7 = thunk_FUN_00f00bc8(iVar5,*(undefined4 *)(*piVar4 + 0x20)), iVar7 == 0)) {
    uVar2 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar2,0);
  }
  if ((uint)piVar4[3] < 6) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar4[9] = iVar5;
  thunk_FUN_00ec5080(piVar4 + 9,iVar5);
  uVar2 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x28);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = Rotatelab_Currency_CurrencyManager__get_Vacuum_10833a8(iVar3,0);
  uVar10 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar6,0);
  iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdf758 + 0xfdf560));
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar5,uVar2,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0);
  if ((iVar5 != 0) &&
     (iVar7 = thunk_FUN_00f00bc8(iVar5,*(undefined4 *)(*piVar4 + 0x20)), iVar7 == 0)) {
    uVar2 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar2,0);
  }
  if ((uint)piVar4[3] < 7) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar4[10] = iVar5;
  thunk_FUN_00ec5080(piVar4 + 10,iVar5);
  uVar2 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x2c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = Rotatelab_Currency_CurrencyManager__get_ExtraSlot_10833cc(iVar3,0);
  uVar10 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar6,0);
  iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdf75c + 0xfdf60c));
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar3,uVar2,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0);
  if ((iVar3 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar3,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
    uVar2 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar2,0);
  }
  iVar5 = iStack_28;
  if ((uint)piVar4[3] < 8) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar4[0xb] = iVar3;
  thunk_FUN_00ec5080(piVar4 + 0xb,iVar3);
  piVar9 = *(int **)(_UNK_00fdf760 + 0xfdf684);
  iVar3 = *piVar9;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar9;
  }
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x48);
  if (*(int *)(**(int **)(_UNK_00fdf764 + 0xfdf6a4) + 0x74) == 0) {
    FUN_00ec3934(**(int **)(_UNK_00fdf764 + 0xfdf6a4));
  }
  Rotatelab_Scripts_ControllerFirebase__SendEvent_1060a54(uVar2,piVar4,0);
  Rotatelab_CustomRotateEventsController__LogMessage_fc833c
            (*(undefined4 **)(_UNK_00fdf768 + 0xfdf6dc),**(undefined4 **)(_UNK_00fdf768 + 0xfdf6dc))
  ;
  uVar2 = **(undefined4 **)(_UNK_00fdf76c + 0xfdf6f0);
  pcVar8 = (char *)(_UNK_00fd86d8 + 0xfd840c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd86dc + 0xfd8420));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd86e0 + 0xfd842c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd86e4 + 0xfd8438));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd86e8 + 0xfd8444));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd86ec + 0xfd8450));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd86f0 + 0xfd845c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd86f4 + 0xfd8468));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd86f8 + 0xfd8474));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd86fc + 0xfd8480));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd8700 + 0xfd848c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd8704 + 0xfd8498));
    *pcVar8 = '\x01';
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fd8720 + 0xfd85f4));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(iVar3 + 0x10) != '\0') {
    iVar3 = *(int *)(iVar5 + 0x20);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 0x14) == 0) {
      if (*(int *)(**(int **)(_UNK_00fd8724 + 0xfd8690) + 0x74) == 0) {
        FUN_00ec3934();
      }
      MaxSdkAndroid__TrackEvent_29b1698(uVar2,0,0);
      goto LAB_00fd86b0;
    }
  }
  iVar3 = *(int *)(iVar5 + 0x20);
  iStack_28 = 0;
  System_ValueTuple_object__object____ctor_1d537e8
            (&iStack_28,uVar2,0,**(undefined4 **)(_UNK_00fd8728 + 0xfd8644));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_Queue_ValueTuple_object__object____Enqueue_18f961c
            (iVar3,iStack_28,0,**(undefined4 **)(_UNK_00fd872c + 0xfd8678));
LAB_00fd86b0:
  uVar2 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_00fd8730 + 0xfd86c4),uVar2,0);
  Rotatelab_CustomRotateEventsController__LogMessage_fc833c(uVar2,uVar2);
  return;
}

