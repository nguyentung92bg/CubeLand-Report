/* IL2CPP: Rotatelab.Marketing.Lego.LegoCubeMeshApplier$$InitializeVariantColors
void Rotatelab_Marketing_Lego_LegoCubeMeshApplier__InitializeVariantColors (Rotatelab_Marketing_Lego_LegoCubeMeshApplier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Marketing.Lego.LegoCubeMeshApplier$$InitializeVariantColors
   void Rotatelab_Marketing_Lego_LegoCubeMeshApplier__InitializeVariantColors
   (Rotatelab_Marketing_Lego_LegoCubeMeshApplier_o* __this, const MethodInfo* method); */

void Rotatelab_Marketing_Lego_LegoCubeMeshApplier__InitializeVariantColors_106c278(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  if ((*(char *)(param_1 + 0x88) == '\0') &&
     (iVar4 = Rotatelab_Marketing_Lego_LegoCubeMeshApplier__TryGetBaseColor_106c9bc(param_1),
     iVar4 != 0)) {
    *(undefined1 *)(param_1 + 0x88) = 1;
    *(undefined4 *)(param_1 + 0x78) = uVar1;
    *(undefined4 *)(param_1 + 0x7c) = uVar2;
    *(undefined4 *)(param_1 + 0x80) = uVar3;
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(undefined4 *)(param_1 + 0x70) = uVar3;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
    *(undefined4 *)(param_1 + 0x40) = uVar3;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}

