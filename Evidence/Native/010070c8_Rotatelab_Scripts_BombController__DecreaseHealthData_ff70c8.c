/* IL2CPP: Rotatelab.Scripts.BombController$$DecreaseHealthData
void Rotatelab_Scripts_BombController__DecreaseHealthData (Rotatelab_Scripts_BombController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BombController$$DecreaseHealthData
   void Rotatelab_Scripts_BombController__DecreaseHealthData (Rotatelab_Scripts_BombController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_BombController__DecreaseHealthData_ff70c8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40) + -1;
  *(int *)(param_1 + 0x40) = iVar1;
  if (iVar1 < 1) {
    *(undefined2 *)(param_1 + 0x18) = 1;
  }
  return;
}

