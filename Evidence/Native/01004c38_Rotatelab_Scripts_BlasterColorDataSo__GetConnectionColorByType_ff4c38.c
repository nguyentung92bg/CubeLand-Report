/* IL2CPP: Rotatelab.Scripts.BlasterColorDataSo$$GetConnectionColorByType
UnityEngine_Color_o Rotatelab_Scripts_BlasterColorDataSo__GetConnectionColorByType (Rotatelab_Scripts_BlasterColorDataSo_o* __this, int32_t colorType, bool isHidden, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BlasterColorDataSo$$GetConnectionColorByType
   UnityEngine_Color_o Rotatelab_Scripts_BlasterColorDataSo__GetConnectionColorByType
   (Rotatelab_Scripts_BlasterColorDataSo_o* __this, int32_t colorType, bool isHidden, const
   MethodInfo* method); */

void Rotatelab_Scripts_BlasterColorDataSo__GetConnectionColorByType_ff4c38
               (undefined8 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_4 == 0) {
    iVar2 = Rotatelab_Scripts_BlasterColorDataSo__GetDataByType_ff4740(param_2,param_3);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar1 = (undefined8 *)(iVar2 + 0xc);
  }
  else {
    puVar1 = (undefined8 *)(param_2 + 0x3c);
  }
  uVar3 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = uVar3;
  return;
}

