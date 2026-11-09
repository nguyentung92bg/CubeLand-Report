/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$BuildLevel
Rotatelab_Scripts_LevelDataWire_o* Rotatelab_Scripts_LiveSnapshotBuilder__BuildLevel (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$BuildLevel
   Rotatelab_Scripts_LevelDataWire_o* Rotatelab_Scripts_LiveSnapshotBuilder__BuildLevel (const
   MethodInfo* method); */

int Rotatelab_Scripts_LiveSnapshotBuilder__BuildLevel_1053d28(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01063e34 + 0x1063d38);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063e38 + 0x1063d4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063e3c + 0x1063d58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063e40 + 0x1063d64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063e44 + 0x1063d70));
    *pcVar3 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01063e48 + 0x1063d84));
  Rotatelab_Scripts_LevelDataWire___ctor_105c0fc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 8) = **(undefined4 **)(_UNK_01063e4c + 0x1063dac);
  thunk_FUN_00ec5080();
  if (*(int *)(**(int **)(_UNK_01063e50 + 0x1063dc4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Scripts_LiveSnapshotBuilder__AddVoxelGroupsFromLive_1053e58(iVar1);
  Rotatelab_Scripts_LiveSnapshotBuilder__AddSpecialObjectsFromLive_1054490(iVar1);
  Rotatelab_Scripts_LiveSnapshotBuilder__AddQueueFromLive_1055a54(iVar1);
  Rotatelab_Scripts_LiveSnapshotBuilder__AddDockedFromLive_1056858(iVar1);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01063e54 + 0x1063e00));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(*(int *)(iVar2 + 0x44) + 0xc);
  return iVar1;
}

