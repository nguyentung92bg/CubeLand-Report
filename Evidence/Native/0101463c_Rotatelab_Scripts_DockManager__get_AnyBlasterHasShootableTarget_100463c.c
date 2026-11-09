/* IL2CPP: Rotatelab.Scripts.DockManager$$get_AnyBlasterHasShootableTarget
bool Rotatelab_Scripts_DockManager__get_AnyBlasterHasShootableTarget (Rotatelab_Scripts_DockManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$get_AnyBlasterHasShootableTarget
   bool Rotatelab_Scripts_DockManager__get_AnyBlasterHasShootableTarget
   (Rotatelab_Scripts_DockManager_o* __this, const MethodInfo* method); */

bool Rotatelab_Scripts_DockManager__get_AnyBlasterHasShootableTarget_100463c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  
  pcVar4 = (char *)(_UNK_01014778 + 0x1014650);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101477c + 0x1014664));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014780 + 0x1014670));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014784 + 0x101467c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01014788 + 0x1014688));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101478c + 0x1014694));
    *pcVar4 = '\x01';
  }
  piVar7 = *(int **)(_UNK_01014790 + 0x10146a8);
  uVar3 = *(undefined4 *)(param_1 + 0x50);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar5 = puVar2[2];
  if (iVar5 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar6 = *puVar2;
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01014794 + 0x10146f4));
    System_Predicate_object____ctor_1876380
              (iVar5,uVar6,**(undefined4 **)(_UNK_01014798 + 0x1014714),0);
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 8);
    *piVar7 = iVar5;
    thunk_FUN_00ec5080(piVar7,iVar5);
  }
  if (*(int *)(**(int **)(_UNK_0101479c + 0x101473c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__Count_object__1486434
                    (uVar3,iVar5,**(undefined4 **)(_UNK_010147a0 + 0x101475c));
  return 0 < iVar1;
}

