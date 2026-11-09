/* IL2CPP: Rotatelab.Scripts.MeteorShowerManager$$DestroyClusterRoutine
System_Collections_IEnumerator_o* Rotatelab_Scripts_MeteorShowerManager__DestroyClusterRoutine (Rotatelab_Scripts_MeteorShowerManager_o* __this, System_Collections_Generic_List_VoxelController__o* clusterVoxels, float window, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MeteorShowerManager$$DestroyClusterRoutine
   System_Collections_IEnumerator_o* Rotatelab_Scripts_MeteorShowerManager__DestroyClusterRoutine
   (Rotatelab_Scripts_MeteorShowerManager_o* __this,
   System_Collections_Generic_List_VoxelController__o* clusterVoxels, float window, const
   MethodInfo* method); */

int Rotatelab_Scripts_MeteorShowerManager__DestroyClusterRoutine_10272b4
              (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01037344 + 0x10372d4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01037348 + 0x10372e8));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0103734c + 0x10372fc));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x14),param_2);
  *(undefined4 *)(iVar1 + 0x18) = param_3;
  return iVar1;
}

