/* IL2CPP: Rotatelab.Shop.StarChallengeChestViewer$$OnEnable
void Rotatelab_Shop_StarChallengeChestViewer__OnEnable (Rotatelab_Shop_StarChallengeChestViewer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeChestViewer$$OnEnable
   void Rotatelab_Shop_StarChallengeChestViewer__OnEnable
   (Rotatelab_Shop_StarChallengeChestViewer_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeChestViewer__OnEnable_10c6058(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  
  pcVar5 = (char *)(_UNK_010d61a4 + 0x10d606c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d61a8 + 0x10d6080));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d61ac + 0x10d608c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d61b0 + 0x10d6098));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d61b4 + 0x10d60a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d61b8 + 0x10d60b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d61bc + 0x10d60bc));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_010d61c0 + 0x10d60d0);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  uVar6 = **(undefined4 **)(iVar1 + 0x5c);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d61c4 + 0x10d60f4));
  System_Action_object__object____ctor_1f18fcc
            (uVar2,param_1,**(undefined4 **)(_UNK_010d61c8 + 0x10d6114),0);
  uVar2 = Rotatelab_GameAction_object__object___op_Addition_23a4fa8
                    (uVar6,uVar2,**(undefined4 **)(_UNK_010d61cc + 0x10d612c));
  **(undefined4 **)(*piVar7 + 0x5c) = uVar2;
  thunk_FUN_00ec5080(*(undefined4 *)(*piVar7 + 0x5c));
  iVar1 = *(int *)(param_1 + 0x14);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d61d0 + 0x10d6160));
  Rotatelab_UI_PointerDragEventListener_PointerEvent___ctor_11107f8
            (uVar2,param_1,**(undefined4 **)(_UNK_010d61d4 + 0x10d617c),0);
  if (iVar1 != 0) {
    pcVar5 = (char *)(_UNK_01120470 + 0x11203f4);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01120474 + 0x1120408),uVar2,0);
      *pcVar5 = '\x01';
    }
    piVar7 = (int *)(iVar1 + 0x10);
    piVar9 = *(int **)(_UNK_01120478 + 0x1120420);
    iVar1 = *piVar7;
    while( true ) {
      piVar3 = (int *)System_Delegate__Combine_2bbca94(iVar1,uVar2,0);
      piVar8 = (int *)0x0;
      if ((piVar3 != (int *)0x0) && (piVar8 = piVar3, *piVar3 != *piVar9)) break;
      iVar4 = FUN_00efd180(piVar7,piVar8,iVar1);
      bVar10 = iVar4 == iVar1;
      iVar1 = iVar4;
      if (bVar10) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00ec3e28();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

