/* IL2CPP: Rotatelab.Scripts.DockManager$$OnBlasterShiftingFrontCompletedHandler
void Rotatelab_Scripts_DockManager__OnBlasterShiftingFrontCompletedHandler (Rotatelab_Scripts_DockManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$OnBlasterShiftingFrontCompletedHandler
   void Rotatelab_Scripts_DockManager__OnBlasterShiftingFrontCompletedHandler
   (Rotatelab_Scripts_DockManager_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_DockManager__OnBlasterShiftingFrontCompletedHandler_1008b0c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  int iStack_1c;
  
  pcVar5 = (char *)(_UNK_01018d20 + 0x1018b24);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01018d24 + 0x1018b38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01018d28 + 0x1018b44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01018d2c + 0x1018b50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01018d30 + 0x1018b5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01018d34 + 0x1018b68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01018d38 + 0x1018b74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01018d3c + 0x1018b80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01018d40 + 0x1018b8c));
    *pcVar5 = '\x01';
  }
  piVar9 = *(int **)(_UNK_01018d44 + 0x1018ba4);
  uVar4 = *(undefined4 *)(param_1 + 0x54);
  iStack_1c = 0;
  iVar1 = *piVar9;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar9;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar2[0xe];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar9 + 0x5c);
    }
    uVar8 = *puVar2;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01018d48 + 0x1018bf4));
    System_Predicate_object____ctor_1876380
              (iVar6,uVar8,**(undefined4 **)(_UNK_01018d4c + 0x1018c14),0);
    piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 0x38);
    *piVar9 = iVar6;
    thunk_FUN_00ec5080(piVar9,iVar6);
  }
  if (*(int *)(**(int **)(_UNK_01018d50 + 0x1018c3c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__TryFind_object__14899b0
                    (uVar4,iVar6,&iStack_1c,**(undefined4 **)(_UNK_01018d54 + 0x1018c60));
  if (iVar1 != 0) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01018d58 + 0x1018c7c));
    if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar9 = (int *)Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                              (iStack_1c,**(undefined4 **)(_UNK_01018d5c + 0x1018ca0));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar7 = (int *)0x0;
    if (piVar9 != (int *)0x0) {
      uVar3 = (uint)*(byte *)(**(int **)(_UNK_01018d60 + 0x1018cd0) + 0xb8);
      if ((*(byte *)(*piVar9 + 0xb8) < uVar3) ||
         (piVar7 = piVar9,
         *(int *)(*(int *)(*piVar9 + 100) + uVar3 * 4 + -4) != **(int **)(_UNK_01018d60 + 0x1018cd0)
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(piVar9);
      }
    }
    Rotatelab_Scripts_PlaceableManager__TryUseKey_1046e4c(iVar1,piVar7,0);
  }
  return;
}

