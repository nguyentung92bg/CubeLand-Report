/* IL2CPP: Rotatelab.Scripts.BlasterColorDataSo$$GetSpecularColorByType
UnityEngine_Color_o Rotatelab_Scripts_BlasterColorDataSo__GetSpecularColorByType (Rotatelab_Scripts_BlasterColorDataSo_o* __this, int32_t colorType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BlasterColorDataSo$$GetSpecularColorByType
   UnityEngine_Color_o Rotatelab_Scripts_BlasterColorDataSo__GetSpecularColorByType
   (Rotatelab_Scripts_BlasterColorDataSo_o* __this, int32_t colorType, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterColorDataSo__GetSpecularColorByType_ff4cb0
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = Rotatelab_Scripts_BlasterColorDataSo__GetDataByType_ff4740(param_2,param_3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = *(undefined8 *)(iVar1 + 0x34);
  *param_1 = *(undefined8 *)(iVar1 + 0x2c);
  param_1[1] = uVar2;
  return;
}

