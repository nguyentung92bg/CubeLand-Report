/* IL2CPP: Rotatelab.Scripts.HiddenChestController$$DecreaseHealthData
void Rotatelab_Scripts_HiddenChestController__DecreaseHealthData (Rotatelab_Scripts_HiddenChestController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.HiddenChestController$$DecreaseHealthData
   void Rotatelab_Scripts_HiddenChestController__DecreaseHealthData
   (Rotatelab_Scripts_HiddenChestController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_HiddenChestController__DecreaseHealthData_10101e4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50) + -1;
  *(int *)(param_1 + 0x50) = iVar1;
  if (0 < iVar1) {
    return;
  }
  *(undefined2 *)(param_1 + 0x18) = 1;
  return;
}

