/* IL2CPP: Rotatelab.Scripts.JewelHeistColorDataSo$$GetRandomMaterial
UnityEngine_Material_o* Rotatelab_Scripts_JewelHeistColorDataSo__GetRandomMaterial (Rotatelab_Scripts_JewelHeistColorDataSo_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.JewelHeistColorDataSo$$GetRandomMaterial
   UnityEngine_Material_o* Rotatelab_Scripts_JewelHeistColorDataSo__GetRandomMaterial
   (Rotatelab_Scripts_JewelHeistColorDataSo_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_JewelHeistColorDataSo__GetRandomMaterial_ff5234(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Random__Range_35f8b14(0,*(undefined4 *)(iVar2 + 0xc),0);
  if (*(uint *)(iVar2 + 0xc) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  return *(undefined4 *)(iVar2 + uVar1 * 4 + 0x10);
}

