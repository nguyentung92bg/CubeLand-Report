/* IL2CPP: Rotatelab.Scripts.JewelController.<>c__DisplayClass10_0$$<Collect>b__0
void Rotatelab_Scripts_JewelController___c__DisplayClass10_0___Collect_b__0 (Rotatelab_Scripts_JewelController___c__DisplayClass10_0_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.JewelController.<>c__DisplayClass10_0$$<Collect>b__0
   void Rotatelab_Scripts_JewelController___c__DisplayClass10_0___Collect_b__0
   (Rotatelab_Scripts_JewelController___c__DisplayClass10_0_o* __this, float t, const MethodInfo*
   method); */

void Rotatelab_Scripts_JewelController___c__DisplayClass10_0___Collect_b__0_1013260
               (int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar4 = param_2 * param_2;
  fVar2 = 1.0 - param_2;
  fVar3 = fVar2 * fVar2;
  param_2 = (fVar2 + fVar2) * param_2;
  UnityEngine_Transform__set_position_3614acc
            (iVar1,param_2 * *(float *)(param_1 + 0x18) + fVar3 * *(float *)(param_1 + 0xc) +
                   fVar4 * *(float *)(param_1 + 0x24),
             param_2 * *(float *)(param_1 + 0x1c) + fVar3 * *(float *)(param_1 + 0x10) +
             fVar4 * *(float *)(param_1 + 0x28),
             param_2 * *(float *)(param_1 + 0x20) + fVar3 * *(float *)(param_1 + 0x14) +
             fVar4 * *(float *)(param_1 + 0x2c),0);
  return;
}

