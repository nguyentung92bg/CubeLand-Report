/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$AddDockedFromLive
void Rotatelab_Scripts_LiveSnapshotBuilder__AddDockedFromLive (Rotatelab_Scripts_LevelDataWire_o* level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$AddDockedFromLive
   void Rotatelab_Scripts_LiveSnapshotBuilder__AddDockedFromLive (Rotatelab_Scripts_LevelDataWire_o*
   level, const MethodInfo* method); */

void Rotatelab_Scripts_LiveSnapshotBuilder__AddDockedFromLive_1056858(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  pcVar3 = (char *)(_UNK_01066a04 + 0x1066870);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01066a08 + 0x1066884));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01066a0c + 0x1066890));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01066a10 + 0x106689c));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01066a14 + 0x10668b0));
  uVar4 = 0;
  puVar7 = *(undefined4 **)(_UNK_01066a18 + 0x10668c8);
  piVar6 = *(int **)(_UNK_01066a1c + 0x10668d0);
  while( true ) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(iVar1 + 0x44) + 0xc) <= (int)uVar4) break;
    iVar5 = *(int *)(iVar1 + 0x44);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar5 = *(int *)(iVar5 + uVar4 * 4 + 0x10);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0(iVar5,*puVar7)
    ;
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Scripts_LiveSnapshotBuilder__AddDockedWire_1057240(param_1,uVar2,uVar4,0);
    uVar4 = uVar4 + 1;
  }
  uVar4 = 0;
  while( true ) {
    if (*(int *)(iVar1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(iVar1 + 0x4c) + 0xc) <= (int)uVar4) {
      return;
    }
    iVar5 = *(int *)(iVar1 + 0x4c);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar4) break;
    iVar5 = *(int *)(iVar5 + uVar4 * 4 + 0x10);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = Rotatelab_Scripts_PilotBlasterDockController__get_DockedPlaceable_1008e44(iVar5,0);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Scripts_LiveSnapshotBuilder__AddDockedWire_1057240(param_1,uVar2,uVar4,1);
    uVar4 = uVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

