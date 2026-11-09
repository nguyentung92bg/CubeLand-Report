/* IL2CPP: Rotatelab.Scripts.LargeVoxelController$$get_IsTargetable
bool Rotatelab_Scripts_LargeVoxelController__get_IsTargetable (Rotatelab_Scripts_LargeVoxelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.LargeVoxelController$$get_IsTargetable
   bool Rotatelab_Scripts_LargeVoxelController__get_IsTargetable
   (Rotatelab_Scripts_LargeVoxelController_o* __this, const MethodInfo* method); */

bool Rotatelab_Scripts_LargeVoxelController__get_IsTargetable_10136bc(int param_1)

{
  if (*(int *)(param_1 + 0x48) < 1) {
    return false;
  }
  if (*(char *)(param_1 + 0x19) != '\0') {
    return *(char *)(param_1 + 0x20) != '\0';
  }
  return false;
}

