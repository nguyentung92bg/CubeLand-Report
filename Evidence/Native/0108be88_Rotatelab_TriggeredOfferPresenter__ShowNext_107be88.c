/* IL2CPP: Rotatelab.TriggeredOfferPresenter$$ShowNext
void Rotatelab_TriggeredOfferPresenter__ShowNext (int32_t trigger, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.TriggeredOfferPresenter$$ShowNext
   void Rotatelab_TriggeredOfferPresenter__ShowNext (int32_t trigger, const MethodInfo* method); */

void Rotatelab_TriggeredOfferPresenter__ShowNext_107be88(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  
  pcVar7 = (char *)(_UNK_0108c138 + 0x108be9c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c13c + 0x108beb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c140 + 0x108bebc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c144 + 0x108bec8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c148 + 0x108bed4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c14c + 0x108bee0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c150 + 0x108beec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c154 + 0x108bef8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c158 + 0x108bf04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c15c + 0x108bf10));
    *pcVar7 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108c160 + 0x108bf24));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar8 = *(int **)(_UNK_0108c164 + 0x108bf4c);
  *(undefined4 *)(iVar1 + 8) = param_1;
  iVar2 = *piVar8;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar8;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 4);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x14) < 1) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0108c178 + 0x108c060));
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar8;
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_LevelStateManager__TrySetGamePaused_1017b2c
              (iVar1,0,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8),0);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0108c17c + 0x108c0b8));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined1 *)(iVar1 + 0x1d) = 0;
    Rotatelab_HomePageCoordinator__ScheduleDrain_107a4c4(iVar1);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0xc);
    iVar1 = *piVar8;
    *piVar8 = 0;
    thunk_FUN_00ec5080(piVar8,0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0108c108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    return;
  }
  iVar2 = *piVar8;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar8;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 4);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar8 = (int *)System_Collections_Generic_Queue_object___Dequeue_18fcc0c
                            (iVar2,**(undefined4 **)(_UNK_0108c168 + 0x108bfbc));
  uVar9 = *(undefined4 *)(iVar1 + 8);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108c16c + 0x108bfd8));
  System_Action_bool____ctor_17aaff0(uVar3,iVar1,**(undefined4 **)(_UNK_0108c170 + 0x108bff4),0);
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar8;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_0108c174 + 0x108c018)) {
        puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xd0);
        goto LAB_0108c118;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(piVar8,**(int **)(_UNK_0108c174 + 0x108c018),2);
LAB_0108c118:
                    /* WARNING: Could not recover jumptable at 0x0108c130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(piVar8,uVar9,uVar3,puVar4[1]);
  return;
}

