/* IL2CPP: Rotatelab.TriggeredOfferPresenter.<>c__DisplayClass7_0$$<ShowNext>b__0
void Rotatelab_TriggeredOfferPresenter___c__DisplayClass7_0___ShowNext_b__0 (Rotatelab_TriggeredOfferPresenter___c__DisplayClass7_0_o* __this, bool isPurchased, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.TriggeredOfferPresenter.<>c__DisplayClass7_0$$<ShowNext>b__0
   void Rotatelab_TriggeredOfferPresenter___c__DisplayClass7_0___ShowNext_b__0
   (Rotatelab_TriggeredOfferPresenter___c__DisplayClass7_0_o* __this, bool isPurchased, const
   MethodInfo* method); */

void Rotatelab_TriggeredOfferPresenter___c__DisplayClass7_0___ShowNext_b__0_107c4d8
               (int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  
  pcVar9 = (char *)(_UNK_0108c594 + 0x108c4f0);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c598 + 0x108c504));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c59c + 0x108c510));
    *pcVar9 = '\x01';
  }
  if (param_2 != 0) {
    piVar7 = *(int **)(_UNK_0108c5a0 + 0x108c52c);
    iVar3 = *piVar7;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar7;
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 4);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Queue_object___Clear_18fc67c
              (iVar3,**(undefined4 **)(_UNK_0108c5a4 + 0x108c560));
  }
  uVar6 = *(undefined4 *)(param_1 + 8);
  if (*(int *)(**(int **)(_UNK_0108c5a8 + 0x108c574) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar9 = (char *)(_UNK_0108c138 + 0x108be9c);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c13c + 0x108beb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c140 + 0x108bebc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c144 + 0x108bec8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c148 + 0x108bed4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c14c + 0x108bee0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c150 + 0x108beec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c154 + 0x108bef8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c158 + 0x108bf04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c15c + 0x108bf10));
    *pcVar9 = '\x01';
  }
  iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108c160 + 0x108bf24));
  System_Object___ctor_2bb93bc(iVar3,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar7 = *(int **)(_UNK_0108c164 + 0x108bf4c);
  *(undefined4 *)(iVar3 + 8) = uVar6;
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x14) < 1) {
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0108c178 + 0x108c060));
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar7;
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_LevelStateManager__TrySetGamePaused_1017b2c
              (iVar3,0,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8),0);
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0108c17c + 0x108c0b8));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined1 *)(iVar3 + 0x1d) = 0;
    Rotatelab_HomePageCoordinator__ScheduleDrain_107a4c4(iVar3);
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 0xc);
    iVar3 = *piVar7;
    *piVar7 = 0;
    thunk_FUN_00ec5080(piVar7,0);
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0108c108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
      return;
    }
    return;
  }
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar7 = (int *)System_Collections_Generic_Queue_object___Dequeue_18fcc0c
                            (iVar1,**(undefined4 **)(_UNK_0108c168 + 0x108bfbc));
  uVar8 = *(undefined4 *)(iVar3 + 8);
  uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108c16c + 0x108bfd8));
  System_Action_bool____ctor_17aaff0(uVar6,iVar3,**(undefined4 **)(_UNK_0108c170 + 0x108bff4),0);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *piVar7;
  uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_0108c174 + 0x108c018)) {
        puVar2 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0xd0);
        goto LAB_0108c118;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(piVar7,**(int **)(_UNK_0108c174 + 0x108c018),2);
LAB_0108c118:
                    /* WARNING: Could not recover jumptable at 0x0108c130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar7,uVar8,uVar6,puVar2[1]);
  return;
}

