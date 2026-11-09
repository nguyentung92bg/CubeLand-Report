/* IL2CPP: Rotatelab.Scripts.ComboConfigSO$$GetThreshold
float Rotatelab_Scripts_ComboConfigSO__GetThreshold (Rotatelab_Scripts_ComboConfigSO_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.ComboConfigSO$$GetThreshold
   float Rotatelab_Scripts_ComboConfigSO__GetThreshold (Rotatelab_Scripts_ComboConfigSO_o* __this,
   int32_t level, const MethodInfo* method); */

float Rotatelab_Scripts_ComboConfigSO__GetThreshold_100194c(int param_1,undefined4 param_2)

{
  uint in_fpscr;
  float fVar1;
  
  fVar1 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  return *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x24) *
         (*(float *)(param_1 + 0x28) * fVar1 + 1.0);
}

