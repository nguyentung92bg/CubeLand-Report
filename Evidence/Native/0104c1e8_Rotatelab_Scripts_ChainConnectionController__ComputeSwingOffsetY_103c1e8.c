/* IL2CPP: Rotatelab.Scripts.ChainConnectionController$$ComputeSwingOffsetY
float Rotatelab_Scripts_ChainConnectionController__ComputeSwingOffsetY (Rotatelab_Scripts_ChainConnectionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ChainConnectionController$$ComputeSwingOffsetY
   float Rotatelab_Scripts_ChainConnectionController__ComputeSwingOffsetY
   (Rotatelab_Scripts_ChainConnectionController_o* __this, const MethodInfo* method); */

float Rotatelab_Scripts_ChainConnectionController__ComputeSwingOffsetY_103c1e8(int param_1)

{
  float fVar1;
  uint in_fpscr;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = _UNK_0104c284;
  uVar2 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x48) < 0.0) << 0x1f;
  if (!SUB41(uVar2 >> 0x1f,0)) {
    fVar1 = (float)UnityEngine_Time__get_time_3610900(0);
    fVar3 = *(float *)(param_1 + 0x28);
    fVar1 = fVar1 - *(float *)(param_1 + 0x48);
    uVar2 = uVar2 & 0xfffffff | (uint)(fVar1 < fVar3) << 0x1f;
    if (SUB41(uVar2 >> 0x1f,0) == (NAN(fVar1) || NAN(fVar3))) {
      *(undefined4 *)(param_1 + 0x48) = 0xbf800000;
    }
    else {
      fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x30),(byte)(uVar2 >> 0x16) & 3);
      fVar5 = *(float *)(param_1 + 0x2c);
      fVar4 = (fVar1 / fVar3) * fVar4 * _UNK_0104c288;
      fVar4 = (float)FUN_01f4f240(fVar4 + fVar4);
      fVar4 = (1.0 - fVar1 / fVar3) * fVar5 * fVar4;
    }
  }
  return fVar4;
}

