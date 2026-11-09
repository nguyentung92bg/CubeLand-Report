/* IL2CPP: Rotatelab.FX.ParticleController$$UpdateColor
void Rotatelab_FX_ParticleController__UpdateColor (Rotatelab_FX_ParticleController_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.FX.ParticleController$$UpdateColor
   void Rotatelab_FX_ParticleController__UpdateColor (Rotatelab_FX_ParticleController_o* __this,
   UnityEngine_Material_o* material, const MethodInfo* method); */

void Rotatelab_FX_ParticleController__UpdateColor_10fad7c(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x14);
  uVar1 = 0;
  while( true ) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar3 + 0xc) <= (int)uVar1) {
      return;
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar2 = *(int *)(iVar3 + 0x10 + uVar1 * 4);
    if (iVar2 == 0) break;
    UnityEngine_Renderer__set_sharedMaterial_35c59bc(iVar2,param_2,0);
    uVar1 = uVar1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

