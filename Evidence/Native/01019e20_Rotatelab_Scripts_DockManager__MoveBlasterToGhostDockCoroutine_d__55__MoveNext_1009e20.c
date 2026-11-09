/* IL2CPP: Rotatelab.Scripts.DockManager.<MoveBlasterToGhostDockCoroutine>d__55$$MoveNext
bool Rotatelab_Scripts_DockManager__MoveBlasterToGhostDockCoroutine_d__55__MoveNext (Rotatelab_Scripts_DockManager__MoveBlasterToGhostDockCoroutine_d__55_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager.<MoveBlasterToGhostDockCoroutine>d__55$$MoveNext
   bool Rotatelab_Scripts_DockManager__MoveBlasterToGhostDockCoroutine_d__55__MoveNext
   (Rotatelab_Scripts_DockManager__MoveBlasterToGhostDockCoroutine_d__55_o* __this, const
   MethodInfo* method); */

undefined4
Rotatelab_Scripts_DockManager__MoveBlasterToGhostDockCoroutine_d__55__MoveNext_1009e20(int param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  int iStack_28;
  int iStack_24;
  
  pcVar2 = (char *)(_UNK_0101a1b8 + 0x1019e3c);
  iStack_24 = param_1;
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101a1bc + 0x1019e50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101a1c0 + 0x1019e5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101a1c4 + 0x1019e68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101a1c8 + 0x1019e74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101a1cc + 0x1019e80));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x14);
  piStack_2c = &iStack_24;
  iStack_28 = 0;
  uStack_30 = 0;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    piVar4 = *(int **)(&UNK_01019ed8 + _UNK_0101a1d0);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar3 = *piVar4;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar4;
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x34);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction__Raise_fc08b8(iVar3,0);
    if (*(int *)(**(int **)(&UNK_01019f1c + _UNK_0101a1d4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar5 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3e99999a,0);
    *(undefined4 *)(iStack_24 + 0xc) = uVar5;
    thunk_FUN_00ec5080();
    uVar5 = 1;
    *(undefined4 *)(iStack_24 + 8) = 1;
    break;
  case 1:
    piVar4 = *(int **)(&UNK_0101a014 + _UNK_0101a1d8);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (*(int *)(*piVar4 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Pool_ListPool_object___Get_257b7b0
              (&uStack_38,&iStack_28,**(undefined4 **)(&UNK_0101a034 + _UNK_0101a1dc));
    *(undefined4 *)(iStack_24 + 0x18) = uStack_38;
    *(undefined4 *)(iStack_24 + 0x1c) = uStack_34;
    thunk_FUN_00ec5080((undefined4 *)(iStack_24 + 0x18),0);
    uVar5 = *(undefined4 *)(iStack_24 + 0x10);
    *(undefined4 *)(iStack_24 + 8) = 0xfffffffd;
    if (iStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(iStack_28 + 8);
    uVar6 = *(uint *)(iStack_28 + 0xc);
    piVar4 = *(int **)(&UNK_0101a098 + _UNK_0101a1e0);
    *(int *)(iStack_28 + 0x10) = *(int *)(iStack_28 + 0x10) + 1;
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar6 < *(uint *)(iVar7 + 0xc)) {
      *(uint *)(iStack_28 + 0xc) = uVar6 + 1;
      puVar1 = (undefined4 *)(iVar7 + uVar6 * 4 + 0x10);
      *puVar1 = uVar5;
      thunk_FUN_00ec5080(puVar1,uVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iStack_28,uVar5,*(undefined4 *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38));
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = Rotatelab_Scripts_DockManager__MoveBlastersToGhostDocksCoroutine_1006c3c
                      (iVar3,iStack_28);
    *(undefined4 *)(iStack_24 + 0xc) = uVar5;
    thunk_FUN_00ec5080();
    uVar5 = 2;
    goto code_r0x0101a118;
  case 2:
    piVar4 = *(int **)(&UNK_01019f6c + _UNK_0101a1e4);
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    if (*(int *)(*piVar4 + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar5 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3dcccccd,0);
    *(undefined4 *)(iStack_24 + 0xc) = uVar5;
    thunk_FUN_00ec5080();
    uVar5 = 3;
code_r0x0101a118:
    *(undefined4 *)(iStack_24 + 8) = uVar5;
    uVar5 = 1;
    break;
  case 3:
    piVar4 = *(int **)(&UNK_01019fbc + _UNK_0101a1e8);
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    iVar3 = *piVar4;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar4;
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x38);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = 0;
    Rotatelab_GameAction__Raise_fc08b8(iVar3,0);
    Rotatelab_Scripts_DockManager__MoveBlasterToGhostDockCoroutine_d__55____m__Finally1_100a1ec
              (iStack_24);
    break;
  default:
    uVar5 = 0;
  }
  return uVar5;
}

