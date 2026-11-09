/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<TryUseScissorsInDocksContinuouslyCoroutine>d__76$$MoveNext
bool Rotatelab_Scripts_PlaceableManager__TryUseScissorsInDocksContinuouslyCoroutine_d__76__MoveNext (Rotatelab_Scripts_PlaceableManager__TryUseScissorsInDocksContinuouslyCoroutine_d__76_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Scripts.PlaceableManager.<TryUseScissorsInDocksContinuouslyCoroutine>d__76$$MoveNext
   bool 
   Rotatelab_Scripts_PlaceableManager__TryUseScissorsInDocksContinuouslyCoroutine_d__76__MoveNext
   (Rotatelab_Scripts_PlaceableManager__TryUseScissorsInDocksContinuouslyCoroutine_d__76_o* __this,
   const MethodInfo* method); */

undefined4
Rotatelab_Scripts_PlaceableManager__TryUseScissorsInDocksContinuouslyCoroutine_d__76__MoveNext_104c9d8
          (int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
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
  
  pcVar4 = (char *)(_UNK_0105ccfc + 0x105c9f4);
  iStack_24 = param_1;
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105cd00 + 0x105ca08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105cd04 + 0x105ca14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105cd08 + 0x105ca20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105cd0c + 0x105ca2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105cd10 + 0x105ca38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105cd14 + 0x105ca44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105cd18 + 0x105ca50));
    *pcVar4 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 8);
  uVar9 = 0;
  iVar8 = *(int *)(param_1 + 0x10);
  piStack_28 = &iStack_24;
  iStack_2c = 0;
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
LAB_0105cc0c:
    Rotatelab_Scripts_PlaceableManager__TryUseScissorsInDocksContinuouslyCoroutine_d__76____m__Finally1_104cd38
              (param_1);
    *(undefined4 *)(iStack_24 + 0x14) = 0;
    *(undefined4 *)(iStack_24 + 0x18) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)(iStack_24 + 0x1c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)(iStack_24 + 0x20) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
LAB_0105cc24:
    if (*(int *)(**(int **)(_UNK_0105cd1c + 0x105cc30) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar9 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3e800000,0);
    uVar6 = 1;
    *(undefined4 *)(iStack_24 + 0xc) = uVar9;
    thunk_FUN_00ec5080();
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) goto LAB_0105cc6c;
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      goto LAB_0105cc24;
    }
    puVar2 = *(undefined4 **)(_UNK_0105cd20 + 0x105caa4);
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
              (&uStack_50,*(int *)(iVar1 + 0x54),**(undefined4 **)(_UNK_0105cd24 + 0x105cad8));
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
    puVar2 = *(undefined4 **)(_UNK_0105cd28 + 0x105cb20);
    puVar7 = *(undefined4 **)(_UNK_0105cd2c + 0x105cb28);
    piVar5 = *(int **)(_UNK_0105cd30 + 0x105cb30);
    do {
      do {
        do {
          do {
            iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                              (iStack_24 + 0x14,*puVar2);
            param_1 = iStack_24;
            if (iVar1 == 0) goto LAB_0105cc0c;
            if (*(int *)(iStack_24 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            piVar3 = (int *)Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                                      (*(int *)(iStack_24 + 0x20),*puVar7);
          } while (piVar3 == (int *)0x0);
          iVar1 = *piVar5;
        } while ((uint)*(byte *)(*piVar3 + 0xb8) < (uint)*(byte *)(iVar1 + 0xb8));
        bVar10 = *(int *)(*(int *)(*piVar3 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) == iVar1
        ;
        if (bVar10) {
          iVar1 = piVar3[0x1b];
        }
      } while (!bVar10 || iVar1 != 1);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = Rotatelab_Scripts_PlaceableManager__TryUseScissors_1046fec(iVar1,piVar3);
    } while (iVar1 == 0);
    if (*(int *)(**(int **)(_UNK_0105cd34 + 0x105cbd0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar9 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3e800000,0);
    uVar6 = 2;
    *(undefined4 *)(iStack_24 + 0xc) = uVar9;
    thunk_FUN_00ec5080();
  }
  uVar9 = 1;
  *(undefined4 *)(iStack_24 + 8) = uVar6;
LAB_0105cc6c:
  iVar1 = iStack_2c;
  if (iStack_2c != 0) {
    if (*(int *)(*piStack_28 + 8) == 2 || *(int *)(*piStack_28 + 8) == -3) {
      Rotatelab_Scripts_PlaceableManager__TryUseScissorsInDocksContinuouslyCoroutine_d__76____m__Finally1_104cd38
                ();
    }
    FUN_00ec3a6c(iVar1);
  }
  return uVar9;
}

