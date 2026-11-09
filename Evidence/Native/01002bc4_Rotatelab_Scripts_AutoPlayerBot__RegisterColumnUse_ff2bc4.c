/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$RegisterColumnUse
void Rotatelab_Scripts_AutoPlayerBot__RegisterColumnUse (Rotatelab_Scripts_AutoPlayerBot_o* __this, int32_t column, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$RegisterColumnUse
   void Rotatelab_Scripts_AutoPlayerBot__RegisterColumnUse (Rotatelab_Scripts_AutoPlayerBot_o*
   __this, int32_t column, const MethodInfo* method); */

void Rotatelab_Scripts_AutoPlayerBot__RegisterColumnUse_ff2bc4(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x4c) == param_2) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    return;
  }
  *(int *)(param_1 + 0x4c) = param_2;
  *(undefined4 *)(param_1 + 0x50) = 1;
  return;
}

