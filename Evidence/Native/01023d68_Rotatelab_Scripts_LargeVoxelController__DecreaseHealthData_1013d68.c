/* IL2CPP: Rotatelab.Scripts.LargeVoxelController$$DecreaseHealthData
void Rotatelab_Scripts_LargeVoxelController__DecreaseHealthData (Rotatelab_Scripts_LargeVoxelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.LargeVoxelController$$DecreaseHealthData
   void Rotatelab_Scripts_LargeVoxelController__DecreaseHealthData
   (Rotatelab_Scripts_LargeVoxelController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_LargeVoxelController__DecreaseHealthData_1013d68(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48) + -1;
  *(int *)(param_1 + 0x48) = iVar1;
  if (0 < iVar1) {
    return;
  }
  *(undefined2 *)(param_1 + 0x18) = 1;
  return;
}

