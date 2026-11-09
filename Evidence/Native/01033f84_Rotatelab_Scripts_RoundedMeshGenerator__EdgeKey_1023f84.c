/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$EdgeKey
int64_t Rotatelab_Scripts_RoundedMeshGenerator__EdgeKey (int32_t ix, int32_t iy, int32_t iz, int32_t edge, int32_t ny, int32_t nz, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$EdgeKey
   int64_t Rotatelab_Scripts_RoundedMeshGenerator__EdgeKey (int32_t ix, int32_t iy, int32_t iz,
   int32_t edge, int32_t ny, int32_t nz, const MethodInfo* method); */

longlong Rotatelab_Scripts_RoundedMeshGenerator__EdgeKey_1023f84
                   (int param_1,int param_2,uint param_3,undefined4 param_4,int param_5,int param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar4 = 2;
  switch(param_4) {
  case 0:
    goto code_r0x01034004;
  case 1:
    goto code_r0x01033ff4;
  case 2:
    param_3 = param_3 + 1;
    goto code_r0x01034004;
  case 3:
    break;
  case 4:
    goto code_r0x01034000;
  case 5:
    param_2 = param_2 + 1;
code_r0x01033ff4:
    param_1 = param_1 + 1;
    break;
  case 6:
    param_3 = param_3 + 1;
code_r0x01034000:
    param_2 = param_2 + 1;
code_r0x01034004:
    uVar4 = 0;
    break;
  case 7:
    param_2 = param_2 + 1;
    break;
  case 8:
    goto code_r0x01034014;
  case 9:
    goto code_r0x01034010;
  case 10:
    param_3 = param_3 + 1;
code_r0x01034010:
    param_1 = param_1 + 1;
    goto code_r0x01034014;
  case 0xb:
    param_3 = param_3 + 1;
code_r0x01034014:
    uVar4 = 1;
    break;
  default:
    uVar4 = 0;
    param_3 = 0;
    param_2 = 0;
    param_1 = 0;
  }
  uVar1 = (longlong)(param_5 + 1) * (longlong)param_1 + (longlong)param_2;
  uVar3 = param_6 + 1;
  lVar2 = (ulonglong)uVar3 * (uVar1 & 0xffffffff);
  uVar5 = (uint)lVar2;
  return (ulonglong)(uVar5 + param_3) * 3 +
         CONCAT44(((int)(uVar1 >> 0x20) * uVar3 +
                   (int)uVar1 * ((int)uVar3 >> 0x1f) + (int)((ulonglong)lVar2 >> 0x20) +
                   ((int)param_3 >> 0x1f) + (uint)CARRY4(uVar5,param_3)) * 3,uVar4);
}

