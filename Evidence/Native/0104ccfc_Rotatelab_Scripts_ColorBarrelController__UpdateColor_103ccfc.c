/* IL2CPP: Rotatelab.Scripts.ColorBarrelController$$UpdateColor
void Rotatelab_Scripts_ColorBarrelController__UpdateColor (Rotatelab_Scripts_ColorBarrelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBarrelController$$UpdateColor
   void Rotatelab_Scripts_ColorBarrelController__UpdateColor
   (Rotatelab_Scripts_ColorBarrelController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ColorBarrelController__UpdateColor_103ccfc(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar6 = (char *)(_UNK_0104cf6c + 0x104cd14);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104cf70 + 0x104cd28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104cf74 + 0x104cd34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104cf78 + 0x104cd40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104cf7c + 0x104cd4c));
    *pcVar6 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar1 = (int *)UnityEngine_Renderer__get_sharedMaterials_35c59c0(*(int *)(param_1 + 0x10),0);
  puVar7 = *(undefined4 **)(_UNK_0104cf80 + 0x104cd80);
  iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar7);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Scripts_BlasterColorDataSo__GetColorBarrelBaseMaterialByType_ff4e04
                    (iVar2,*(undefined4 *)(param_1 + 0x28),0);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
    uVar4 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar4,0);
  }
  if (piVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[4] = iVar2;
  thunk_FUN_00ec5080(piVar1 + 4,iVar2);
  iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar7);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Scripts_BlasterColorDataSo__GetColorBarrelTopMaterialByType_ff4e24
                    (iVar2,*(undefined4 *)(param_1 + 0x28),0);
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
    uVar4 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar4,0);
  }
  if ((uint)piVar1[3] < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[6] = iVar2;
  thunk_FUN_00ec5080(piVar1 + 6,iVar2);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = 0;
  UnityEngine_Renderer__set_sharedMaterials_35c59c4(*(int *)(param_1 + 0x10),piVar1,0);
  puVar8 = *(undefined4 **)(_UNK_0104cf84 + 0x104ceb0);
  puVar9 = *(undefined4 **)(_UNK_0104cf88 + 0x104ceb8);
  while( true ) {
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x20) + 0xc) <= iVar2) {
      return;
    }
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x20),iVar2,*puVar8);
    if (iVar3 == 0) break;
    iVar3 = UnityEngine_Component__GetComponent_object__143f3b0(iVar3,*puVar9);
    iVar5 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar7);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = Rotatelab_Scripts_BlasterColorDataSo__GetColorBarrelExplosionParticleMaterialByType_ff4e44
                      (iVar5,*(undefined4 *)(param_1 + 0x28),0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Renderer__set_material_35c59b4(iVar3,uVar4,0);
    iVar2 = iVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

