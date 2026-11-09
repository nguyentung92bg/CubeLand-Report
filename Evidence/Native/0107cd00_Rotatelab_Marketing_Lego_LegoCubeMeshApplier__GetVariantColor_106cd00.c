/* IL2CPP: Rotatelab.Marketing.Lego.LegoCubeMeshApplier$$GetVariantColor
UnityEngine_Color_o Rotatelab_Marketing_Lego_LegoCubeMeshApplier__GetVariantColor (Rotatelab_Marketing_Lego_LegoCubeMeshApplier_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Marketing.Lego.LegoCubeMeshApplier$$GetVariantColor
   UnityEngine_Color_o Rotatelab_Marketing_Lego_LegoCubeMeshApplier__GetVariantColor
   (Rotatelab_Marketing_Lego_LegoCubeMeshApplier_o* __this, int32_t index, const MethodInfo*
   method); */

void Rotatelab_Marketing_Lego_LegoCubeMeshApplier__GetVariantColor_106cd00
               (undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  switch(param_3) {
  case 0:
    puVar4 = (undefined4 *)(param_2 + 0x34);
    break;
  case 1:
    puVar4 = (undefined4 *)(param_2 + 0x44);
    break;
  case 2:
    puVar4 = (undefined4 *)(param_2 + 0x54);
    break;
  case 3:
    puVar4 = (undefined4 *)(param_2 + 100);
    break;
  default:
    puVar4 = (undefined4 *)(param_2 + 0x74);
  }
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *param_1 = *puVar4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

