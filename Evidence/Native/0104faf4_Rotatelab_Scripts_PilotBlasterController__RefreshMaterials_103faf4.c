/* IL2CPP: Rotatelab.Scripts.PilotBlasterController$$RefreshMaterials
void Rotatelab_Scripts_PilotBlasterController__RefreshMaterials (Rotatelab_Scripts_PilotBlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PilotBlasterController$$RefreshMaterials
   void Rotatelab_Scripts_PilotBlasterController__RefreshMaterials
   (Rotatelab_Scripts_PilotBlasterController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_PilotBlasterController__RefreshMaterials_103faf4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_0104fcd4 + 0x104fb0c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104fcd8 + 0x104fb20));
    *pcVar4 = '\x01';
  }
  Rotatelab_Scripts_BlasterController__RefreshMaterials_1034b84(param_1,0);
  if (*(char *)(param_1 + 0xc2) == '\0') {
    puVar6 = *(undefined4 **)(_UNK_0104fce0 + 0x104fba4);
    uVar5 = *(undefined4 *)(param_1 + 300);
    iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar6);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = Rotatelab_Scripts_BlasterColorDataSo__GetHatMaterialByType_ff4ce4
                      (iVar1,*(undefined4 *)(param_1 + 0x10c),0);
    Rotatelab_Scripts_PilotBlasterController__SetAccessoryMaterial_103fce4(param_1,uVar5,uVar2);
    uVar5 = *(undefined4 *)(param_1 + 0x130);
    iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar6);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = Rotatelab_Scripts_BlasterColorDataSo__GetPropellerMaterialByType_ff4d04
                      (iVar1,*(undefined4 *)(param_1 + 0x10c),0);
    Rotatelab_Scripts_PilotBlasterController__SetAccessoryMaterial_103fce4(param_1,uVar5,uVar2);
    iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar6);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = Rotatelab_Scripts_BlasterColorDataSo__GetPropellerFadeMaterialByType_ff4d24
                      (iVar1,*(undefined4 *)(param_1 + 0x10c),0,0);
    iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar6);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = Rotatelab_Scripts_BlasterColorDataSo__GetPropellerFadeMaterialByType_ff4d24
                      (iVar1,*(undefined4 *)(param_1 + 0x10c),1,0);
    iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar6);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = Rotatelab_Scripts_BlasterColorDataSo__GetPropellerFadeMaterialByType_ff4d24
                      (iVar1,*(undefined4 *)(param_1 + 0x10c),2,0);
  }
  else {
    iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                      (**(undefined4 **)(_UNK_0104fcdc + 0x104fb4c));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = *(undefined4 *)(iVar1 + 0x18);
    Rotatelab_Scripts_PilotBlasterController__SetAccessoryMaterial_103fce4
              (param_1,*(undefined4 *)(param_1 + 300),uVar5);
    Rotatelab_Scripts_PilotBlasterController__SetAccessoryMaterial_103fce4
              (param_1,*(undefined4 *)(param_1 + 0x130),uVar5);
    uVar2 = uVar5;
    uVar3 = uVar5;
  }
  Rotatelab_Scripts_PilotBlasterController___RefreshMaterials_g__SetFadeBladeMaterials_38_0_103fe50
            (param_1,uVar5,uVar2,uVar3);
  return;
}

