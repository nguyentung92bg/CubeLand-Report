/* IL2CPP: Rotatelab.Scripts.BlasterColorDataSo$$GetPropellerFadeMaterialByType
UnityEngine_Material_o* Rotatelab_Scripts_BlasterColorDataSo__GetPropellerFadeMaterialByType (Rotatelab_Scripts_BlasterColorDataSo_o* __this, int32_t colorType, int32_t alpha, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BlasterColorDataSo$$GetPropellerFadeMaterialByType
   UnityEngine_Material_o* Rotatelab_Scripts_BlasterColorDataSo__GetPropellerFadeMaterialByType
   (Rotatelab_Scripts_BlasterColorDataSo_o* __this, int32_t colorType, int32_t alpha, const
   MethodInfo* method); */

undefined4
Rotatelab_Scripts_BlasterColorDataSo__GetPropellerFadeMaterialByType_ff4d24
          (undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = Rotatelab_Scripts_BlasterColorDataSo__GetDataByType_ff4740();
  if (param_3 == 1) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar2 = (undefined4 *)(iVar1 + 0x50);
  }
  else if (param_3 == 0) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar2 = (undefined4 *)(iVar1 + 0x4c);
  }
  else {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar2 = (undefined4 *)(iVar1 + 0x54);
  }
  return *puVar2;
}

