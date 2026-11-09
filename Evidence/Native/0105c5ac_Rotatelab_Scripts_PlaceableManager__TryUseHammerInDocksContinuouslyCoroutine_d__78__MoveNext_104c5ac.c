/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<TryUseHammerInDocksContinuouslyCoroutine>d__78$$MoveNext
bool Rotatelab_Scripts_PlaceableManager__TryUseHammerInDocksContinuouslyCoroutine_d__78__MoveNext (Rotatelab_Scripts_PlaceableManager__TryUseHammerInDocksContinuouslyCoroutine_d__78_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Scripts.PlaceableManager.<TryUseHammerInDocksContinuouslyCoroutine>d__78$$MoveNext
   bool Rotatelab_Scripts_PlaceableManager__TryUseHammerInDocksContinuouslyCoroutine_d__78__MoveNext
   (Rotatelab_Scripts_PlaceableManager__TryUseHammerInDocksContinuouslyCoroutine_d__78_o* __this,
   const MethodInfo* method); */

undefined4
Rotatelab_Scripts_PlaceableManager__TryUseHammerInDocksContinuouslyCoroutine_d__78__MoveNext_104c5ac
          (int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_2c;
  int *piStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_0105c8d4 + 0x105c5c8);
  iStack_24 = param_1;
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105c8d8 + 0x105c5dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105c8dc + 0x105c5e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105c8e0 + 0x105c5f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105c8e4 + 0x105c600));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105c8e8 + 0x105c60c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105c8ec + 0x105c618));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105c8f0 + 0x105c624));
    *pcVar4 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 8);
  uVar8 = 0;
  iVar9 = *(int *)(param_1 + 0x10);
  piStack_28 = &iStack_24;
  iStack_2c = 0;
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
LAB_0105c7e4:
    Rotatelab_Scripts_PlaceableManager__TryUseHammerInDocksContinuouslyCoroutine_d__78____m__Finally1_104c910
              (param_1);
    *(undefined4 *)(iStack_24 + 0x14) = 0;
    *(undefined4 *)(iStack_24 + 0x18) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)(iStack_24 + 0x1c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)(iStack_24 + 0x20) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
LAB_0105c7fc:
    if (*(int *)(**(int **)(_UNK_0105c8f4 + 0x105c808) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar8 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3e800000,0);
    uVar5 = 1;
    *(undefined4 *)(iStack_24 + 0xc) = uVar8;
    thunk_FUN_00ec5080();
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) goto LAB_0105c844;
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      goto LAB_0105c7fc;
    }
    puVar2 = *(undefined4 **)(_UNK_0105c8f8 + 0x105c678);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar2);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_50,*(int *)(iVar1 + 0x54),**(undefined4 **)(_UNK_0105c8fc + 0x105c6ac));
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    *(undefined4 *)(iStack_24 + 0x14) = uStack_50;
    *(undefined4 *)(iStack_24 + 0x18) = uStack_4c;
    *(undefined4 *)(iStack_24 + 0x1c) = uStack_48;
    *(undefined4 *)(iStack_24 + 0x20) = uStack_44;
    thunk_FUN_00ec5080((undefined4 *)(iStack_24 + 0x14),0);
    *(undefined4 *)(iStack_24 + 8) = 0xfffffffd;
    puVar7 = *(undefined4 **)(_UNK_0105c900 + 0x105c6f4);
    puVar2 = *(undefined4 **)(_UNK_0105c904 + 0x105c6fc);
    piVar6 = *(int **)(_UNK_0105c908 + 0x105c704);
    do {
      do {
        do {
          do {
            iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                              (iStack_24 + 0x14,*puVar7);
            param_1 = iStack_24;
            if (iVar1 == 0) goto LAB_0105c7e4;
            if (*(int *)(iStack_24 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            piVar3 = (int *)Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                                      (*(int *)(iStack_24 + 0x20),*puVar2);
          } while (piVar3 == (int *)0x0);
          iVar1 = *piVar6;
        } while ((uint)*(byte *)(*piVar3 + 0xb8) < (uint)*(byte *)(iVar1 + 0xb8));
        bVar10 = *(int *)(*(int *)(*piVar3 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) == iVar1
        ;
        if (bVar10) {
          iVar1 = piVar3[0x20];
        }
      } while (!bVar10 || iVar1 != 1);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = Rotatelab_Scripts_PlaceableManager__TryUseHammer_10477f8(iVar9,piVar3);
    } while (iVar1 == 0);
    if (*(int *)(**(int **)(_UNK_0105c90c + 0x105c7a8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar8 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3e800000,0);
    uVar5 = 2;
    *(undefined4 *)(iStack_24 + 0xc) = uVar8;
    thunk_FUN_00ec5080();
  }
  uVar8 = 1;
  *(undefined4 *)(iStack_24 + 8) = uVar5;
LAB_0105c844:
  iVar1 = iStack_2c;
  if (iStack_2c != 0) {
    if (*(int *)(*piStack_28 + 8) == 2 || *(int *)(*piStack_28 + 8) == -3) {
      Rotatelab_Scripts_PlaceableManager__TryUseHammerInDocksContinuouslyCoroutine_d__78____m__Finally1_104c910
                ();
    }
    FUN_00ec3a6c(iVar1);
  }
  return uVar8;
}

