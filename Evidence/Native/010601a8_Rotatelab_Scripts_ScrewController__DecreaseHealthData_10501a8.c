/* IL2CPP: Rotatelab.Scripts.ScrewController$$DecreaseHealthData
void Rotatelab_Scripts_ScrewController__DecreaseHealthData (Rotatelab_Scripts_ScrewController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.ScrewController$$DecreaseHealthData
   void Rotatelab_Scripts_ScrewController__DecreaseHealthData (Rotatelab_Scripts_ScrewController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_ScrewController__DecreaseHealthData_10501a8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54) + -1;
  *(int *)(param_1 + 0x54) = iVar1;
  if (0 < iVar1) {
    return;
  }
  *(undefined2 *)(param_1 + 0x18) = 1;
  return;
}

