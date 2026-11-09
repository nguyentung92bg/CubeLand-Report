/* IL2CPP: Rotatelab.Scripts.BlasterColorDataSo$$<GetBodyMaterialByType>g__InstantiateBaseMaterial|35_0
UnityEngine_Material_o* Rotatelab_Scripts_BlasterColorDataSo___GetBodyMaterialByType_g__InstantiateBaseMaterial_35_0 (UnityEngine_Material_o* baseMaterial, Rotatelab_Scripts_BlasterColorDataSo___c__DisplayClass35_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Scripts.BlasterColorDataSo$$<GetBodyMaterialByType>g__InstantiateBaseMaterial|35_0
   UnityEngine_Material_o*
   Rotatelab_Scripts_BlasterColorDataSo___GetBodyMaterialByType_g__InstantiateBaseMaterial_35_0
   (UnityEngine_Material_o* baseMaterial,
   Rotatelab_Scripts_BlasterColorDataSo___c__DisplayClass35_0_o* , const MethodInfo* method); */

int Rotatelab_Scripts_BlasterColorDataSo___GetBodyMaterialByType_g__InstantiateBaseMaterial_35_0_ff4a3c
              (undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  
  pcVar3 = (char *)(_UNK_01004bf0 + 0x1004a58);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01004bf4 + 0x1004a6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01004bf8 + 0x1004a78));
    *pcVar3 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01004bfc + 0x1004a8c));
  UnityEngine_Material___ctor_35c7654(iVar1,param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Object__set_hideFlags_3609e5c(iVar1,0x3d,0);
  piVar5 = *(int **)(_UNK_01004c00 + 0x1004ac8);
  iVar2 = *piVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar5;
  }
  iVar4 = *param_2;
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__SetColor_35c7d2c
            (iVar1,**(undefined4 **)(iVar2 + 0x5c),*(undefined4 *)(iVar4 + 0xc),
             *(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14),
             *(undefined4 *)(iVar4 + 0x18),0);
  iVar2 = *param_2;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__SetColor_35c7d2c
            (iVar1,*(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x14),*(undefined4 *)(iVar2 + 0x1c),
             *(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),
             *(undefined4 *)(iVar2 + 0x28),0);
  iVar2 = *param_2;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__SetColor_35c7d2c
            (iVar1,*(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x18),*(undefined4 *)(iVar2 + 0x2c),
             *(undefined4 *)(iVar2 + 0x30),*(undefined4 *)(iVar2 + 0x34),
             *(undefined4 *)(iVar2 + 0x38),0);
  return iVar1;
}

