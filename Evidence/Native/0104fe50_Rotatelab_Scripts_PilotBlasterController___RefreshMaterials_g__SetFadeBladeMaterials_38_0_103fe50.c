/* IL2CPP: Rotatelab.Scripts.PilotBlasterController$$<RefreshMaterials>g__SetFadeBladeMaterials|38_0
void Rotatelab_Scripts_PilotBlasterController___RefreshMaterials_g__SetFadeBladeMaterials_38_0 (Rotatelab_Scripts_PilotBlasterController_o* __this, UnityEngine_Material_o* low, UnityEngine_Material_o* medium, UnityEngine_Material_o* high, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.PilotBlasterController$$<RefreshMaterials>g__SetFadeBladeMaterials|38_0
   void Rotatelab_Scripts_PilotBlasterController___RefreshMaterials_g__SetFadeBladeMaterials_38_0
   (Rotatelab_Scripts_PilotBlasterController_o* __this, UnityEngine_Material_o* low,
   UnityEngine_Material_o* medium, UnityEngine_Material_o* high, const MethodInfo* method); */

void Rotatelab_Scripts_PilotBlasterController___RefreshMaterials_g__SetFadeBladeMaterials_38_0_103fe50
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x138);
  uVar2 = 0;
  while( true ) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar2) break;
    if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    Rotatelab_Scripts_PilotBlasterController__SetAccessoryMaterial_103fce4
              (param_1,*(undefined4 *)(iVar1 + 0x10 + uVar2 * 4),param_2);
    uVar2 = uVar2 + 1;
  }
  iVar1 = *(int *)(param_1 + 0x13c);
  uVar2 = 0;
  while( true ) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar2) break;
    if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    Rotatelab_Scripts_PilotBlasterController__SetAccessoryMaterial_103fce4
              (param_1,*(undefined4 *)(iVar1 + 0x10 + uVar2 * 4),param_3);
    uVar2 = uVar2 + 1;
  }
  iVar1 = *(int *)(param_1 + 0x140);
  uVar2 = 0;
  while( true ) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar2) break;
    if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    Rotatelab_Scripts_PilotBlasterController__SetAccessoryMaterial_103fce4
              (param_1,*(undefined4 *)(iVar1 + 0x10 + uVar2 * 4),param_4);
    uVar2 = uVar2 + 1;
  }
  return;
}

