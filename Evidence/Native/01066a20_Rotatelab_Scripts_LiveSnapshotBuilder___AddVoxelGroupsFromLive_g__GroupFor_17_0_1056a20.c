/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$<AddVoxelGroupsFromLive>g__GroupFor|17_0
Rotatelab_Scripts_GroupWire_o* Rotatelab_Scripts_LiveSnapshotBuilder___AddVoxelGroupsFromLive_g__GroupFor_17_0 (int32_t color, Rotatelab_Scripts_LiveSnapshotBuilder___c__DisplayClass17_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$<AddVoxelGroupsFromLive>g__GroupFor|17_0
   Rotatelab_Scripts_GroupWire_o*
   Rotatelab_Scripts_LiveSnapshotBuilder___AddVoxelGroupsFromLive_g__GroupFor_17_0 (int32_t color,
   Rotatelab_Scripts_LiveSnapshotBuilder___c__DisplayClass17_0_o* , const MethodInfo* method); */

int Rotatelab_Scripts_LiveSnapshotBuilder___AddVoxelGroupsFromLive_g__GroupFor_17_0_1056a20
              (undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01066b14 + 0x1066a3c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01066b18 + 0x1066a50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01066b1c + 0x1066a5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01066b20 + 0x1066a68));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Collections_Generic_Dictionary_int__object___TryGetValue_1fd19dc
                    (*param_2,param_1,&iStack_14,**(undefined4 **)(_UNK_01066b24 + 0x1066a9c));
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01066b28 + 0x1066ab8));
    Rotatelab_Scripts_GroupWire___ctor_105c34c(iVar1,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *param_2;
    *(undefined4 *)(iVar1 + 8) = param_1;
    iStack_14 = iVar1;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Dictionary_int__object___set_Item_1fcfa9c
              (iVar2,param_1,iVar1,**(undefined4 **)(_UNK_01066b2c + 0x1066b00));
  }
  return iStack_14;
}

