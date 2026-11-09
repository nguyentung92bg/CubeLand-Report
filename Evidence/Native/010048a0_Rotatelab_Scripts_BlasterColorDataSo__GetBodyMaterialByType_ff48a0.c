/* IL2CPP: Rotatelab.Scripts.BlasterColorDataSo$$GetBodyMaterialByType
UnityEngine_Material_o* Rotatelab_Scripts_BlasterColorDataSo__GetBodyMaterialByType (Rotatelab_Scripts_BlasterColorDataSo_o* __this, int32_t colorType, bool isSkinned, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterColorDataSo$$GetBodyMaterialByType
   UnityEngine_Material_o* Rotatelab_Scripts_BlasterColorDataSo__GetBodyMaterialByType
   (Rotatelab_Scripts_BlasterColorDataSo_o* __this, int32_t colorType, bool isSkinned, const
   MethodInfo* method); */

undefined4
Rotatelab_Scripts_BlasterColorDataSo__GetBodyMaterialByType_ff48a0
          (int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iStack_1c;
  
  pcVar5 = (char *)(_UNK_01004a2c + 0x10048c0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01004a30 + 0x10048d4));
    *pcVar5 = '\x01';
  }
  iStack_1c = 0;
  iStack_1c = Rotatelab_Scripts_BlasterColorDataSo__GetDataByType_ff4740(param_1,param_2);
  thunk_FUN_00ec5080(&iStack_1c,iStack_1c);
  if (param_3 == 0) {
    if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = *(undefined4 *)(iStack_1c + 0x3c);
    if (*(int *)(**(int **)(_UNK_01004a38 + 0x10049b0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = UnityEngine_Object__op_Equality_36033f4(uVar3,0,0);
    iVar1 = iStack_1c;
    if (iVar2 != 0) {
      uVar3 = Rotatelab_Scripts_BlasterColorDataSo___GetBodyMaterialByType_g__InstantiateBaseMaterial_35_0_ff4a3c
                        (*(undefined4 *)(param_1 + 0x10),&iStack_1c);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar4 = (undefined4 *)(iVar1 + 0x3c);
      *puVar4 = uVar3;
      thunk_FUN_00ec5080(puVar4,uVar3);
    }
    if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar4 = (undefined4 *)(iStack_1c + 0x3c);
  }
  else {
    if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = *(undefined4 *)(iStack_1c + 0x40);
    if (*(int *)(**(int **)(_UNK_01004a34 + 0x1004924) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = UnityEngine_Object__op_Equality_36033f4(uVar3,0,0);
    iVar1 = iStack_1c;
    if (iVar2 != 0) {
      uVar3 = Rotatelab_Scripts_BlasterColorDataSo___GetBodyMaterialByType_g__InstantiateBaseMaterial_35_0_ff4a3c
                        (*(undefined4 *)(param_1 + 0x14),&iStack_1c);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar4 = (undefined4 *)(iVar1 + 0x40);
      *puVar4 = uVar3;
      thunk_FUN_00ec5080(puVar4,uVar3);
    }
    if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar4 = (undefined4 *)(iStack_1c + 0x40);
  }
  return *puVar4;
}

