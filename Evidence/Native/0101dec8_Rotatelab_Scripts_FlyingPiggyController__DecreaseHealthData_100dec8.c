/* IL2CPP: Rotatelab.Scripts.FlyingPiggyController$$DecreaseHealthData
void Rotatelab_Scripts_FlyingPiggyController__DecreaseHealthData (Rotatelab_Scripts_FlyingPiggyController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.FlyingPiggyController$$DecreaseHealthData
   void Rotatelab_Scripts_FlyingPiggyController__DecreaseHealthData
   (Rotatelab_Scripts_FlyingPiggyController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_FlyingPiggyController__DecreaseHealthData_100dec8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x70) + -1;
  *(int *)(param_1 + 0x70) = iVar1;
  if (0 < iVar1) {
    return;
  }
  *(undefined2 *)(param_1 + 0x18) = 1;
  return;
}

