/* IL2CPP: Rotatelab.Scripts.BlasterColorDataSo$$GetShadowColorByType
UnityEngine_Color_o Rotatelab_Scripts_BlasterColorDataSo__GetShadowColorByType (Rotatelab_Scripts_BlasterColorDataSo_o* __this, int32_t colorType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BlasterColorDataSo$$GetShadowColorByType
   UnityEngine_Color_o Rotatelab_Scripts_BlasterColorDataSo__GetShadowColorByType
   (Rotatelab_Scripts_BlasterColorDataSo_o* __this, int32_t colorType, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterColorDataSo__GetShadowColorByType_ff4c7c
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = Rotatelab_Scripts_BlasterColorDataSo__GetDataByType_ff4740(param_2,param_3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = *(undefined8 *)(iVar1 + 0x24);
  *param_1 = *(undefined8 *)(iVar1 + 0x1c);
  param_1[1] = uVar2;
  return;
}

