/* IL2CPP: Rotatelab.Scripts.ScrewController$$SetupHp
void Rotatelab_Scripts_ScrewController__SetupHp (Rotatelab_Scripts_ScrewController_o* __this, int32_t hp, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.ScrewController$$SetupHp
   void Rotatelab_Scripts_ScrewController__SetupHp (Rotatelab_Scripts_ScrewController_o* __this,
   int32_t hp, const MethodInfo* method); */

void Rotatelab_Scripts_ScrewController__SetupHp_104fa68(int param_1,undefined4 param_2)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  undefined1 auStack_24 [4];
  float fStack_20;
  
  *(undefined4 *)(param_1 + 0x54) = param_2;
  *(undefined4 *)(param_1 + 0x58) = param_2;
  fVar3 = *(float *)(param_1 + 0x44);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localPosition_3613b6c(auStack_24,iVar1,0);
  fVar2 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x54),(byte)(in_fpscr >> 0x16) & 3);
  *(float *)(param_1 + 0x5c) = (fVar3 - fStack_20) / fVar2;
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localPosition_3613b6c(auStack_24,iVar1,0);
  *(float *)(param_1 + 0x60) = fStack_20;
  return;
}

